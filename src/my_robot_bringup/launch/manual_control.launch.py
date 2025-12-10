#!/usr/bin/env python3

import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def find_urdf_or_xacro():
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
    lidar_port_arg = DeclareLaunchArgument(
        'lidar_port',
        default_value='/dev/ttyUSB0',
        description='Serial port for RPLIDAR'
    )
    lidar_port = LaunchConfiguration('lidar_port')

    # URDF
    urdf_path = find_urdf_or_xacro()
    if urdf_path.endswith('.xacro'):
        robot_description = ParameterValue(
            Command(['xacro ', urdf_path]),
            value_type=str
        )
    else:
        with open(urdf_path, 'r') as f:
            robot_description = f.read()

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}]
    )

    # RPLIDAR
    rplidar_node = Node(
        package='rplidar_ros',
        executable='rplidar_composition',  # change if your exec name differs
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

    # Static TF: base_link -> laser
    base_link_to_laser_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_link_to_laser',
        arguments=['0', '0', '0.18', '0', '0', '0', 'base_link', 'laser'],
        output='screen',
    )

    # Serial bridge: /cmd_vel -> Arduino
    serial_bridge = Node(
        package='my_robot_control',
        executable='diff_drive_serial_bridge',
        name='diff_drive_serial_bridge',
        output='screen',
        parameters=[{'port': '/dev/arduino'}],
    )

    ld = LaunchDescription()
    ld.add_action(lidar_port_arg)
    ld.add_action(robot_state_publisher)
    ld.add_action(rplidar_node)
    ld.add_action(base_link_to_laser_tf)
    ld.add_action(serial_bridge)

    return ld

