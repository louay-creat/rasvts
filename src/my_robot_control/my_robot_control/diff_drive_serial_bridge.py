#!/usr/bin/env python3

import serial
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class DiffDriveSerialBridge(Node):
    def __init__(self):
        super().__init__('diff_drive_serial_bridge')

        # Parameters
        self.declare_parameter('port', '/dev/arduino')
        self.declare_parameter('baud', 115200)

        # Approximate robot geometry, for turning
        self.declare_parameter('wheel_separation', 0.30)  # m

        # IMPORTANT: max_linear_speed is used for scaling to PWM.
        # If your teleop linear_speed is 0.25, set this to 0.25 so you can reach full PWM.
        self.declare_parameter('max_linear_speed', 0.25)  # m/s
        self.declare_parameter('max_pwm', 255)

        port = self.get_parameter('port').get_parameter_value().string_value
        baud = self.get_parameter('baud').get_parameter_value().integer_value

        # Non-blocking serial, no big timeout
        self.ser = serial.Serial(port, baudrate=baud, timeout=0.0)
        self.get_logger().info(f'Opened serial port {port} at {baud} baud')

        self.cmd_vel_sub = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10
        )

    def cmd_vel_callback(self, msg: Twist):
        v = msg.linear.x
        w = msg.angular.z

        wheel_sep = float(self.get_parameter('wheel_separation').value)
        max_linear = float(self.get_parameter('max_linear_speed').value)
        max_pwm = int(self.get_parameter('max_pwm').value)

        # basic diff-drive kinematics
        v_left = v - (w * wheel_sep / 2.0)
        v_right = v + (w * wheel_sep / 2.0)

        # clamp velocities
        if max_linear <= 0.0:
            max_linear = 0.01
        v_left = max(min(v_left, max_linear), -max_linear)
        v_right = max(min(v_right, max_linear), -max_linear)

        # map m/s -> PWM
        def vel_to_pwm(vel):
            return int(max(min(vel / max_linear * max_pwm, max_pwm), -max_pwm))

        pwm_left = vel_to_pwm(v_left)
        pwm_right = vel_to_pwm(v_right)

        cmd_str = f"CMD L{pwm_left} R{pwm_right}\n"
        try:
            self.ser.write(cmd_str.encode('ascii'))
            # no flush -> lower latency
        except Exception as e:
            self.get_logger().error(f'Error writing to serial: {e}')
            return

        # Debug only if needed
        # self.get_logger().info(
        #     f'/cmd_vel v={v:.2f} w={w:.2f} -> L={pwm_left} R={pwm_right}'
        # )

    def destroy_node(self):
        try:
            if self.ser and self.ser.is_open:
                self.ser.close()
        except Exception:
            pass
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = DiffDriveSerialBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

