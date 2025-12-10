import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial


class DiffDriveSerialBridge(Node):
    def __init__(self):
        super().__init__('diff_drive_serial_bridge')

        # Parameters
        self.declare_parameter('port', '/dev/ttyACM0')
        self.declare_parameter('baud', 115200)
        self.declare_parameter('wheel_separation', 0.16)   # meters
        self.declare_parameter('max_wheel_speed', 0.5)     # m/s corresponding to |PWM| = max_pwm
        self.declare_parameter('max_pwm', 255)

        port = self.get_parameter('port').get_parameter_value().string_value
        baud = self.get_parameter('baud').get_parameter_value().integer_value
        self.wheel_separation = self.get_parameter('wheel_separation').get_parameter_value().double_value
        self.max_wheel_speed = self.get_parameter('max_wheel_speed').get_parameter_value().double_value
        self.max_pwm = self.get_parameter('max_pwm').get_parameter_value().integer_value

        self.get_logger().info(f'Opening serial port {port} at {baud} baud')

        try:
            self.ser = serial.Serial(port, baudrate=baud, timeout=0.1)
        except serial.SerialException as e:
            self.get_logger().error(f'Failed to open serial port {port}: {e}')
            raise SystemExit

        # Subscribe to /cmd_vel coming from straight_line_node / teleop / Nav2
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.cmd_vel_callback,
            10
        )

        self.get_logger().info('DiffDriveSerialBridge initialized, listening to /cmd_vel')

    def cmd_vel_callback(self, msg: Twist):
        v = msg.linear.x
        w = msg.angular.z

        # Differential drive kinematics
        v_left = v - w * (self.wheel_separation / 2.0)
        v_right = v + w * (self.wheel_separation / 2.0)

        # Normalize to [-1, 1] using max_wheel_speed
        left_norm = max(-1.0, min(1.0, v_left / self.max_wheel_speed))
        right_norm = max(-1.0, min(1.0, v_right / self.max_wheel_speed))

        left_pwm = int(left_norm * self.max_pwm)
        right_pwm = int(right_norm * self.max_pwm)

        # 🔴 NEW PROTOCOL: "CMD L<left> R<right>\n"
        cmd = f"CMD L{left_pwm} R{right_pwm}\n"

        try:
            self.ser.write(cmd.encode('ascii'))
        except serial.SerialException as e:
            self.get_logger().error(f'Error writing to serial: {e}')

        # Debug (change to info if you want to see always)
        self.get_logger().debug(
            f"/cmd_vel v={v:.2f}, w={w:.2f} -> L={left_pwm}, R={right_pwm}, sent: {cmd.strip()}"
        )

    def destroy_node(self):
        try:
            if hasattr(self, 'ser') and self.ser.is_open:
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
        node.get_logger().info('Shutting down diff_drive_serial_bridge')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

