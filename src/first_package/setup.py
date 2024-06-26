from setuptools import find_packages, setup
import os
import glob
package_name = 'first_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
        ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch',
        glob.glob(os.path.join('launch', '*.launch.py'))),
        ('share/' + package_name + '/param',
        glob.glob(os.path.join('param', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rds',
    maintainer_email='wogur21c@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'first_node = first_package.first_node:main',
            'subscriber = first_package.subscriber:main',
            'publisher = first_package.publisher:main',
            'service_server = first_package.service_server:main',
            'sub_image = first_package.sub_image:main',
            'pub_image = first_package.pub_image:main',
            'sub_comp_image = first_package.sub_compress_img:main',
            'pub_comp_image = first_package.pub_compress_img:main',
            'multi_thread = first_package.multi_thread:main',
            'dist_turtle_server = first_package.dist_turtle_action_server:main',
            'turtle_cmd_and_pose = first_package.turtle_cmd_and_pose:main'
        ],
    },
)
