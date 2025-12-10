import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class StraightLineNode(Node):
    def __init__(self):
        super().__init__('straight_line_node')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10 Hz
        self.linear_speed = 0.08  # m/s
        self.get_logger().info('StraightLineNode started, publishing /cmd_vel')

    def timer_callback(self):
        msg = Twist()
        msg.linear.x = self.linear_speed
        msg.angular.z = 0.0
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = StraightLineNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Shutting down straight_line_node')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
