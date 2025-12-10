import random

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from smartfleet_msgs.msg import DeliveryTask
import rclpy.time


class SimpleTaskPublisher(Node):
    def __init__(self):
        super().__init__('simple_task_publisher')
        self.pub = self.create_publisher(DeliveryTask, '/tasks/new', 10)
        self.task_id = 0
        self.timer = self.create_timer(5.0, self.publish_task)

    def publish_task(self):
        now = self.get_clock().now()
        msg = DeliveryTask()

        msg.id = self.task_id
        msg.pickup = self.random_pose()
        msg.dropoff = self.random_pose()
        msg.release_time = now.to_msg()
        msg.deadline = (now + rclpy.time.Duration(seconds=60.0)).to_msg()
        msg.size = 1.0
        msg.weight = 1.0

        self.get_logger().info(f"Publishing task {msg.id}")
        self.pub.publish(msg)
        self.task_id += 1

    def random_pose(self):
        pose = Pose()
        pose.position.x = random.uniform(-5, 5)
        pose.position.y = random.uniform(-5, 5)
        return pose


def main(args=None):
    rclpy.init(args=args)
    node = SimpleTaskPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
