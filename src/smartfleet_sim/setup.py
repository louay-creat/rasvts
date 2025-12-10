from setuptools import setup

package_name = 'smartfleet_sim'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='louay',
    maintainer_email='louay@example.com',
    description='Simulation utilities for smart fleet',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_task_publisher = smartfleet_sim.simple_task_publisher:main',
        ],
    },
)
