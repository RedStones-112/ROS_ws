from setuptools import find_packages, setup
import os
import glob
package_name = 'opencv_tutorials'

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
            'sub_image = opencv_tutorials.sub_image:main',
            'pub_image = opencv_tutorials.pub_image:main',
            'sub_comp_image = opencv_tutorials.sub_compress_img:main',
            'pub_comp_image = opencv_tutorials.pub_compress_img:main'
            
        ],
    },
)
