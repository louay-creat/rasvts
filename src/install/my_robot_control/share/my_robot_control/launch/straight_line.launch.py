from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_robot_control',
            executable='straight_line_node',
            name='straight_line_node',
            output='screen'
        )
    ])
