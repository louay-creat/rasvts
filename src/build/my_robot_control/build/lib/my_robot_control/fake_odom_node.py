import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
import tf2_ros
import math


class FakeOdomNode(Node):
    def __init__(self):
        super().__init__('fake_odom_node')

        self.declare_parameter('publish_rate', 30.0)

        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

        self.v = 0.0
        self.w = 0.0

        self.create_subscription(Twist, '/cmd_vel', self.cmd_vel_callback, 10)

        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        rate = self.get_parameter('publish_rate').get_parameter_value().double_value
        self.dt = 1.0 / rate
        self.timer = self.create_timer(self.dt, self.update_odom)

        self.get_logger().info("FakeOdomNode started (no encoders, integrating /cmd_vel)")

    def cmd_vel_callback(self, msg: Twist):
        self.v = msg.linear.x
        self.w = msg.angular.z

    def update_odom(self):
        self.x += self.v * math.cos(self.theta) * self.dt
        self.y += self.v * math.sin(self.theta) * self.dt
        self.theta += self.w * self.dt

        odom = Odometry()
        odom.header.stamp = self.get_clock().now().to_msg()
        odom.header.frame_id = "odom"
        odom.child_frame_id = "base_link"

        odom.pose.pose.position.x = self.x
        odom.pose.pose.position.y = self.y
        odom.pose.pose.orientation.z = math.sin(self.theta / 2.0)
        odom.pose.pose.orientation.w = math.cos(self.theta / 2.0)

        odom.twist.twist.linear.x = self.v
        odom.twist.twist.angular.z = self.w

        self.odom_pub.publish(odom)

        t = TransformStamped()
        t.header.stamp = odom.header.stamp
        t.header.frame_id = "odom"
        t.child_frame_id = "base_link"
        t.transform.translation.x = self.x
        t.transform.translation.y = self.y
        t.transform.rotation = odom.pose.pose.orientation

        self.tf_broadcaster.sendTransform(t)


def main(args=None):
    rclpy.init(args=args)
    node = FakeOdomNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Shutting down fake_odom_node')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
