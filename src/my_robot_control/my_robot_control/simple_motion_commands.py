#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist


class SimpleMotionCommander(Node):
    """
    Node that listens for simple string commands on /motion_command and
    publishes /cmd_vel commands for a fixed time.

    Commands (String.data):

      "forward"
      "forward <speed>"
      "forward <speed> <duration>"

      "backward"
      "backward <speed>"
      "backward <speed> <duration>"

      "left"
      "left <angular_speed>"
      "left <angular_speed> <duration>"

      "right"
      "right <angular_speed>"
      "right <angular_speed> <duration>"

      "stop"
    """

    def __init__(self):
        super().__init__('simple_motion_commander')

        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.motion_sub = self.create_subscription(
            String,
            '/motion_command',
            self.motion_command_callback,
            10
        )

        self.timer_period = 0.05  # 20 Hz
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.active = False
        self.end_time = None
        self.current_twist = Twist()

        # Default parameters
        self.declare_parameter('linear_speed', 0.15)   # m/s
        self.declare_parameter('angular_speed', 0.6)   # rad/s
        self.declare_parameter('move_duration', 1.5)   # s
        self.declare_parameter('turn_duration', 1.0)   # s

        self.get_logger().info(
            'SimpleMotionCommander ready. '
            'Use: "forward [speed] [duration]", "backward ...", '
            '"left [ang_speed] [duration]", "right ...", "stop".'
        )

    def motion_command_callback(self, msg: String):
        text = msg.data.strip().lower()
        if not text:
            return

        parts = text.split()
        cmd = parts[0]

        default_lin = float(self.get_parameter('linear_speed').value)
        default_ang = float(self.get_parameter('angular_speed').value)
        default_move_t = float(self.get_parameter('move_duration').value)
        default_turn_t = float(self.get_parameter('turn_duration').value)

        speed = None
        duration = None

        if len(parts) >= 2:
            try:
                speed = float(parts[1])
            except ValueError:
                self.get_logger().warn(f'Invalid speed value: "{parts[1]}"')

        if len(parts) >= 3:
            try:
                duration = float(parts[2])
            except ValueError:
                self.get_logger().warn(f'Invalid duration value: "{parts[2]}"')

        twist = Twist()
        total_time = 0.0

        if cmd == 'forward':
            v = speed if speed is not None else default_lin
            t = duration if duration is not None else default_move_t
            twist.linear.x = v
            total_time = t

        elif cmd == 'backward':
            v = speed if speed is not None else default_lin
            t = duration if duration is not None else default_move_t
            twist.linear.x = -v
            total_time = t

        elif cmd == 'left':
            w = speed if speed is not None else default_ang
            t = duration if duration is not None else default_turn_t
            twist.angular.z = w
            total_time = t

        elif cmd == 'right':
            w = speed if speed is not None else default_ang
            t = duration if duration is not None else default_turn_t
            twist.angular.z = -w
            total_time = t

        elif cmd == 'stop':
            self.stop_motion()
            return

        else:
            self.get_logger().warn(f'Unknown motion command: "{cmd}"')
            return

        self.current_twist = twist
        now = self.get_clock().now().nanoseconds / 1e9
        self.end_time = now + total_time
        self.active = True

        self.get_logger().info(
            f'Command "{text}" -> '
            f'lin={twist.linear.x:.2f} m/s, '
            f'ang={twist.angular.z:.2f} rad/s, '
            f'duration={total_time:.2f}s'
        )

    def timer_callback(self):
        if not self.active:
            return

        now = self.get_clock().now().nanoseconds / 1e9
        if self.end_time is not None and now >= self.end_time:
            self.stop_motion()
            return

        self.cmd_vel_pub.publish(self.current_twist)

    def stop_motion(self):
        self.active = False
        self.end_time = None
        self.current_twist = Twist()
        self.cmd_vel_pub.publish(self.current_twist)
        self.get_logger().info('Stopping motion.')


def main(args=None):
    rclpy.init(args=args)
    node = SimpleMotionCommander()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.stop_motion()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

