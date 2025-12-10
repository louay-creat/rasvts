from setuptools import find_packages
from setuptools import setup

setup(
    name='smartfleet_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('smartfleet_msgs', 'smartfleet_msgs.*')),
)
