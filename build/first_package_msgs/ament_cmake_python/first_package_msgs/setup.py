from setuptools import find_packages
from setuptools import setup

setup(
    name='first_package_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('first_package_msgs', 'first_package_msgs.*')),
)
