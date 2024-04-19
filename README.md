- camera_app_pkg
- 사용법
    ros2 launch camera_app_pkg camera_app.launch.py로 노드들 활성화
  service
      ros2 service call /capture first_package_msgs/srv/Capture "{}" : 지정된 경로에 사진 저장
      ros2 service call /recode first_package_msgs/srv/Recode "{status: True}" : 지정된 경로에 영상 녹화 시작
      ros2 service call /recode first_package_msgs/srv/Recode "{status: False}" : 지정된 경로에 영상 녹화 종료
  param
      msg_type 받아오는 토픽명
          /web_cam : 기본 카메라 토픽
          /edge : 엣지필터를 씌운 이미지 토픽
      path
          캡처, 녹화파일을 저장하는 경로값
