from setuptools import setup

package_name = 'my_robot_control'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/straight_line.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='you',
    maintainer_email='you@example.com',
    description='Control nodes for my robot (straight line, Arduino bridge, fake odom)',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_motion_commands = my_robot_control.simple_motion_commands:main',
            'keyboard_teleop_arrows = my_robot_control.keyboard_teleop_arrows:main',
            'straight_line_node = my_robot_control.straight_line_node:main',
            'diff_drive_serial_bridge = my_robot_control.diff_drive_serial_bridge:main',
            'fake_odom_node = my_robot_control.fake_odom_node:main',
            'keyboard_teleop = my_robot_control.keyboard_teleop:main',
        ],
    },
)
