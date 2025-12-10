#!/usr/bin/env python3

import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def find_urdf_or_xacro():
    """Auto-detect a URDF/XACRO file in my_robot_description/urdf."""
    urdf_dir = os.path.join(
        os.path.expanduser('~'),
        'ros2_ws',
        'src',
        'my_robot_description',
        'urdf'
    )

    if not os.path.isdir(urdf_dir):
        raise RuntimeError(f"URDF directory not found: {urdf_dir}")

    for fname in os.listdir(urdf_dir):
        if fname.endswith('.urdf') or fname.endswith('.urdf.xacro') or fname.endswith('.xacro'):
            return os.path.join(urdf_dir, fname)

    raise RuntimeError(f"No .urdf or .xacro file found in {urdf_dir}")


def generate_launch_description():
    # === Launch argument: LiDAR serial port ===
    lidar_port_arg = DeclareLaunchArgument(
        'lidar_port',
        default_value='/dev/ttyUSB0',
        description='Serial port for RPLIDAR'
    )
    lidar_port = LaunchConfiguration('lidar_port')

    # === Auto-detect URDF/XACRO ===
    urdf_path = find_urdf_or_xacro()

    # Use xacro if needed, or plain URDF otherwise
    if urdf_path.endswith('.xacro'):
        robot_description = ParameterValue(
            Command(['xacro ', urdf_path]),
            value_type=str
        )
    else:
        with open(urdf_path, 'r') as f:
            robot_description = f.read()

    # === robot_state_publisher ===
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}]
    )

    # === RPLIDAR node (from rplidar_ros) ===
    rplidar_node = Node(
        package='rplidar_ros',
        executable='rplidar_composition',  # tweak if your exec name is different
        name='rplidar_composition',
        output='screen',
        parameters=[
            {'serial_port': lidar_port},
            {'serial_baudrate': 115200},
            {'frame_id': 'laser'},
            {'inverted': False},
            {'angle_compensate': True},
        ],
    )

    # === Static TF: base_link -> laser ===
    base_link_to_laser_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_link_to_laser',
        # x y z roll pitch yaw parent child
        arguments=['0', '0', '0.18', '0', '0', '0', 'base_link', 'laser'],
        output='screen',
    )

    # === Fake odometry node (cmd_vel -> odom) ===
    fake_odom = Node(
        package='my_robot_control',
        executable='fake_odom_node',
        name='fake_odom_node',
        output='screen',
    )

    # === Serial bridge to Arduino (cmd_vel -> PWM) ===
    serial_bridge = Node(
        package='my_robot_control',
        executable='diff_drive_serial_bridge',
        name='diff_drive_serial_bridge',
        output='screen',
        parameters=[{'port': '/dev/arduino'}],
    )

    # === SLAM Toolbox (async node for live mapping) ===
    slam_toolbox = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[{
            'map_frame': 'map',
            'odom_frame': 'odom',
            'base_frame': 'base_link',
            'scan_topic': 'scan',
        }],
    )

    # === Simple motion command node (your forward/back/left/right/stop) ===
    motion_commands = Node(
        package='my_robot_control',
        executable='simple_motion_commands',
        name='simple_motion_commands',
        output='screen',
    )

    # === Build launch description ===
    ld = LaunchDescription()

    ld.add_action(lidar_port_arg)
    ld.add_action(robot_state_publisher)
    ld.add_action(rplidar_node)
    ld.add_action(base_link_to_laser_tf)
    ld.add_action(fake_odom)
    ld.add_action(serial_bridge)
    ld.add_action(slam_toolbox)
    ld.add_action(motion_commands)

    return ld

