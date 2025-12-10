#!/usr/bin/env python3

import math
from typing import Optional

import rclpy
from rclpy.node import Node
from rclpy.time import Time

from geometry_msgs.msg import Twist, TransformStamped
from nav_msgs.msg import Odometry
from tf2_ros import TransformBroadcaster


class FakeOdomNode(Node):
    def __init__(self):
        super().__init__('fake_odom_node')

        self.declare_parameter('odom_frame', 'odom')
        self.declare_parameter('base_frame', 'base_link')

        self.odom_frame = self.get_parameter('odom_frame').value
        self.base_frame = self.get_parameter('base_frame').value

        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.tf_broadcaster = TransformBroadcaster(self)

        self.cmd_sub = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10
        )

        self.x = 0.0
        self.y = 0.0
        self.yaw = 0.0

        self.last_time: Optional[Time] = None
        self.last_cmd = Twist()

        self.timer = self.create_timer(0.02, self.update)

        self.get_logger().info(
            f'FakeOdomNode publishing {self.odom_frame} -> {self.base_frame}'
        )

    def cmd_vel_callback(self, msg: Twist):
        self.last_cmd = msg

    def update(self):
        now = self.get_clock().now()
        if self.last_time is None:
            self.last_time = now
            return

        dt = (now - self.last_time).nanoseconds / 1e9
        self.last_time = now

        v = self.last_cmd.linear.x
        w = self.last_cmd.angular.z

        # simple unicycle model
        if abs(w) < 1e-6:
            dx = v * dt * math.cos(self.yaw)
            dy = v * dt * math.sin(self.yaw)
            dtheta = 0.0
        else:
            dtheta = w * dt
            dx = v * dt * math.cos(self.yaw + dtheta / 2.0)
            dy = v * dt * math.sin(self.yaw + dtheta / 2.0)

        self.x += dx
        self.y += dy
        self.yaw += dtheta

        quat = self.yaw_to_quaternion(self.yaw)

        # Publish odom
        odom = Odometry()
        odom.header.stamp = now.to_msg()
        odom.header.frame_id = self.odom_frame
        odom.child_frame_id = self.base_frame
        odom.pose.pose.position.x = self.x
        odom.pose.pose.position.y = self.y
        odom.pose.pose.position.z = 0.0
        odom.pose.pose.orientation = quat
        odom.twist.twist = self.last_cmd
        self.odom_pub.publish(odom)

        # Publish TF
        t = TransformStamped()
        t.header.stamp = now.to_msg()
        t.header.frame_id = self.odom_frame
        t.child_frame_id = self.base_frame
        t.transform.translation.x = self.x
        t.transform.translation.y = self.y
        t.transform.translation.z = 0.0
        t.transform.rotation = quat
        self.tf_broadcaster.sendTransform(t)

    @staticmethod
    def yaw_to_quaternion(yaw: float):
        from geometry_msgs.msg import Quaternion
        q = Quaternion()
        q.z = math.sin(yaw / 2.0)
        q.w = math.cos(yaw / 2.0)
        return q


def main(args=None):
    rclpy.init(args=args)
    node = FakeOdomNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

