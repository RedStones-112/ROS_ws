cmake_minimum_required(VERSION 3.8)
project(first_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)
find_package(first_package_msgs REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  
  add_executable(turtle_talker src/publisher.cpp)
  ament_target_dependencies(turtle_talker rclcpp geometry_msgs)

  add_executable(turtle_listener src/subscriber.cpp)
  ament_target_dependencies(turtle_listener rclcpp turtlesim)

  add_executable(turtle_cmd_and_pose src/turtle_cmd_and_pose.cpp)
  ament_target_dependencies(turtle_cmd_and_pose rclcpp turtlesim first_package_msgs geometry_msgs)

  add_executable(service_server src/service_server.cpp)
  ament_target_dependencies(service_server rclcpp turtlesim first_package_msgs geometry_msgs)

  add_executable(dist_action_server src/dist_action_server.cpp)
  ament_target_dependencies(dist_action_server rclcpp turtlesim first_package_msgs geometry_msgs rcl_interfaces rclcpp_action)

  add_executable(multi_thread src/multi_thread.cpp)
  ament_target_dependencies(multi_thread rclcpp turtlesim first_package_msgs geometry_msgs rcl_interfaces rclcpp_action)

  add_executable(sub_image src/sub_image.cpp)
  ament_target_dependencies(sub_image rclcpp turtlesim sensor_msgs rclcpp_action OpenCV cv_bridge)

  add_executable(pub_image src/pub_image.cpp)
  ament_target_dependencies(pub_image rclcpp sensor_msgs OpenCV)

  add_executable(camera_app src/camera_app.cpp)
  ament_target_dependencies(camera_app rclcpp first_package_msgs sensor_msgs OpenCV cv_bridge)



  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
install(TARGETS
  turtle_talker
  turtle_listener
  turtle_cmd_and_pose
  service_server
  dist_action_server
  multi_thread
  sub_image
  pub_image
  camera_app
  DESTINATION lib/${PROJECT_NAME})
ament_package()
