from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # Arguments
    lidar_port_arg = DeclareLaunchArgument(
        'lidar_port',
        default_value='/dev/rplidar',   # <- fixed udev name
        description='Serial port for RPLIDAR'
    )

    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation clock'
    )

    # Robot description (URDF / xacro)
    description_pkg = get_package_share_directory('my_robot_description')
    urdf_file = os.path.join(description_pkg, 'urdf', 'my_robot.urdf.xacro')

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'robot_description': open(urdf_file).read()
        }]
    )

    # RPLIDAR node
    rplidar_node = Node(
        package='rplidar_ros',
        executable='rplidar_composition',
        name='rplidar_node',
        output='screen',
        parameters=[{
            'serial_port': LaunchConfiguration('lidar_port'),
            'serial_baudrate': 115200,   # change to 256000 if your model needs it
            'frame_id': 'lidar_link',
            'inverted': False,
            'angle_compensate': True,
            'scan_mode': 'Standard'
        }]
    )

    # SLAM toolbox (online async)
    slam_toolbox_node = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'odom_frame': 'odom',
            'map_frame': 'map',
            'base_frame': 'base_footprint',
            'scan_topic': 'scan'
        }]
    )

    # Straight line command node
    straight_node = Node(
        package='my_robot_control',
        executable='straight_line_node',
        name='straight_line_node',
        output='screen'
    )

    return LaunchDescription([
        lidar_port_arg,
        use_sim_time_arg,
        robot_state_publisher_node,
        rplidar_node,
        slam_toolbox_node,
        straight_node,
    ])

