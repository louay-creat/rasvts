#!/usr/bin/env python3

import sys
import select
import termios
import tty

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class KeyboardTeleop(Node):
    """
    WASD teleop:
      w : forward
      s : backward
      a : turn left
      d : turn right
      space : stop
      q : quit

    - Publishes /cmd_vel at 50 Hz with the last command.
    - Reacts quickly (low latency) and stays running until 'q'.
    """

    def __init__(self):
        super().__init__('keyboard_teleop_wasd')

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # Parameters
        self.declare_parameter('linear_speed', 0.25)   # m/s
        self.declare_parameter('angular_speed', 1.0)   # rad/s

        self.linear_speed = float(self.get_parameter('linear_speed').value)
        self.angular_speed = float(self.get_parameter('angular_speed').value)

        self.current_twist = Twist()
        self.running = True

        # Publish at 50 Hz
        self.timer = self.create_timer(0.02, self.timer_callback)  # 20 ms

        self.get_logger().info(
            "KeyboardTeleop (WASD) started.\n"
            "Controls:\n"
            "  w : forward\n"
            "  s : backward\n"
            "  a : turn left\n"
            "  d : turn right\n"
            "  space : stop\n"
            "  q : quit\n"
            "Make sure this terminal window is focused while driving.\n"
        )

    def timer_callback(self):
        # Continuous publish of current command
        self.cmd_pub.publish(self.current_twist)

    def process_key(self, key: str):
        key = key.lower()

        if key == 'w':
            self.current_twist.linear.x = self.linear_speed
            self.current_twist.angular.z = 0.0
            self.get_logger().info('Forward')

        elif key == 's':
            self.current_twist.linear.x = -self.linear_speed
            self.current_twist.angular.z = 0.0
            self.get_logger().info('Backward')

        elif key == 'a':
            self.current_twist.linear.x = 0.0
            self.current_twist.angular.z = self.angular_speed
            self.get_logger().info('Turn left')

        elif key == 'd':
            self.current_twist.linear.x = 0.0
            self.current_twist.angular.z = -self.angular_speed
            self.get_logger().info('Turn right')

        elif key == ' ':
            self.current_twist = Twist()
            self.get_logger().info('Stop')

        elif key == 'q':
            self.get_logger().info('Quitting keyboard teleop')
            self.running = False

        # 🔥 Immediately publish once on key press (reduces perceived latency)
        self.cmd_pub.publish(self.current_twist)

    def spin_keyboard(self):
        # Put terminal in raw mode so we get key presses immediately
        old_attrs = termios.tcgetattr(sys.stdin)
        tty.setraw(sys.stdin.fileno())

        try:
            while rclpy.ok() and self.running:
                # Non-blocking read with short timeout (20 ms)
                dr, _, _ = select.select([sys.stdin], [], [], 0.02)
                if dr:
                    c = sys.stdin.read(1)
                    self.process_key(c)

                rclpy.spin_once(self, timeout_sec=0.0)
        finally:
            # Restore terminal settings
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, old_attrs)


def main(args=None):
    rclpy.init(args=args)
    node = KeyboardTeleop()
    try:
        node.spin_keyboard()
    except KeyboardInterrupt:
        pass
    finally:
        node.current_twist = Twist()
        node.cmd_pub.publish(node.current_twist)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

