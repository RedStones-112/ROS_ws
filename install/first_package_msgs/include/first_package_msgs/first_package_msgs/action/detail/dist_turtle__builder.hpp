// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_package_msgs:action/DistTurtle.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__ACTION__DETAIL__DIST_TURTLE__BUILDER_HPP_
#define FIRST_PACKAGE_MSGS__ACTION__DETAIL__DIST_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_package_msgs/action/detail/dist_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_Goal_dist
{
public:
  explicit Init_DistTurtle_Goal_dist(::first_package_msgs::action::DistTurtle_Goal & msg)
  : msg_(msg)
  {}
  ::first_package_msgs::action::DistTurtle_Goal dist(::first_package_msgs::action::DistTurtle_Goal::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Goal msg_;
};

class Init_DistTurtle_Goal_angular_z
{
public:
  explicit Init_DistTurtle_Goal_angular_z(::first_package_msgs::action::DistTurtle_Goal & msg)
  : msg_(msg)
  {}
  Init_DistTurtle_Goal_dist angular_z(::first_package_msgs::action::DistTurtle_Goal::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_DistTurtle_Goal_dist(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Goal msg_;
};

class Init_DistTurtle_Goal_linear_x
{
public:
  Init_DistTurtle_Goal_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistTurtle_Goal_angular_z linear_x(::first_package_msgs::action::DistTurtle_Goal::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_DistTurtle_Goal_angular_z(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_Goal>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_Goal_linear_x();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_Result_result_dist
{
public:
  explicit Init_DistTurtle_Result_result_dist(::first_package_msgs::action::DistTurtle_Result & msg)
  : msg_(msg)
  {}
  ::first_package_msgs::action::DistTurtle_Result result_dist(::first_package_msgs::action::DistTurtle_Result::_result_dist_type arg)
  {
    msg_.result_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Result msg_;
};

class Init_DistTurtle_Result_pos_theta
{
public:
  explicit Init_DistTurtle_Result_pos_theta(::first_package_msgs::action::DistTurtle_Result & msg)
  : msg_(msg)
  {}
  Init_DistTurtle_Result_result_dist pos_theta(::first_package_msgs::action::DistTurtle_Result::_pos_theta_type arg)
  {
    msg_.pos_theta = std::move(arg);
    return Init_DistTurtle_Result_result_dist(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Result msg_;
};

class Init_DistTurtle_Result_pos_y
{
public:
  explicit Init_DistTurtle_Result_pos_y(::first_package_msgs::action::DistTurtle_Result & msg)
  : msg_(msg)
  {}
  Init_DistTurtle_Result_pos_theta pos_y(::first_package_msgs::action::DistTurtle_Result::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_DistTurtle_Result_pos_theta(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Result msg_;
};

class Init_DistTurtle_Result_pos_x
{
public:
  Init_DistTurtle_Result_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistTurtle_Result_pos_y pos_x(::first_package_msgs::action::DistTurtle_Result::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_DistTurtle_Result_pos_y(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_Result>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_Result_pos_x();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_Feedback_remained_dist
{
public:
  Init_DistTurtle_Feedback_remained_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_package_msgs::action::DistTurtle_Feedback remained_dist(::first_package_msgs::action::DistTurtle_Feedback::_remained_dist_type arg)
  {
    msg_.remained_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_Feedback>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_Feedback_remained_dist();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_SendGoal_Request_goal
{
public:
  explicit Init_DistTurtle_SendGoal_Request_goal(::first_package_msgs::action::DistTurtle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::first_package_msgs::action::DistTurtle_SendGoal_Request goal(::first_package_msgs::action::DistTurtle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_SendGoal_Request msg_;
};

class Init_DistTurtle_SendGoal_Request_goal_id
{
public:
  Init_DistTurtle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistTurtle_SendGoal_Request_goal goal_id(::first_package_msgs::action::DistTurtle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DistTurtle_SendGoal_Request_goal(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_SendGoal_Request>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_SendGoal_Request_goal_id();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_SendGoal_Response_stamp
{
public:
  explicit Init_DistTurtle_SendGoal_Response_stamp(::first_package_msgs::action::DistTurtle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::first_package_msgs::action::DistTurtle_SendGoal_Response stamp(::first_package_msgs::action::DistTurtle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_SendGoal_Response msg_;
};

class Init_DistTurtle_SendGoal_Response_accepted
{
public:
  Init_DistTurtle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistTurtle_SendGoal_Response_stamp accepted(::first_package_msgs::action::DistTurtle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DistTurtle_SendGoal_Response_stamp(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_SendGoal_Response>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_SendGoal_Response_accepted();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_GetResult_Request_goal_id
{
public:
  Init_DistTurtle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_package_msgs::action::DistTurtle_GetResult_Request goal_id(::first_package_msgs::action::DistTurtle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_GetResult_Request>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_GetResult_Request_goal_id();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_GetResult_Response_result
{
public:
  explicit Init_DistTurtle_GetResult_Response_result(::first_package_msgs::action::DistTurtle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::first_package_msgs::action::DistTurtle_GetResult_Response result(::first_package_msgs::action::DistTurtle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_GetResult_Response msg_;
};

class Init_DistTurtle_GetResult_Response_status
{
public:
  Init_DistTurtle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistTurtle_GetResult_Response_result status(::first_package_msgs::action::DistTurtle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DistTurtle_GetResult_Response_result(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_GetResult_Response>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_GetResult_Response_status();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace action
{

namespace builder
{

class Init_DistTurtle_FeedbackMessage_feedback
{
public:
  explicit Init_DistTurtle_FeedbackMessage_feedback(::first_package_msgs::action::DistTurtle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::first_package_msgs::action::DistTurtle_FeedbackMessage feedback(::first_package_msgs::action::DistTurtle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_FeedbackMessage msg_;
};

class Init_DistTurtle_FeedbackMessage_goal_id
{
public:
  Init_DistTurtle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistTurtle_FeedbackMessage_feedback goal_id(::first_package_msgs::action::DistTurtle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DistTurtle_FeedbackMessage_feedback(msg_);
  }

private:
  ::first_package_msgs::action::DistTurtle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::action::DistTurtle_FeedbackMessage>()
{
  return first_package_msgs::action::builder::Init_DistTurtle_FeedbackMessage_goal_id();
}

}  // namespace first_package_msgs

#endif  // FIRST_PACKAGE_MSGS__ACTION__DETAIL__DIST_TURTLE__BUILDER_HPP_
