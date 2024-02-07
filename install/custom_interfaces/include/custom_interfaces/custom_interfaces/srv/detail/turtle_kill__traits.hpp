// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/TurtleKill.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TURTLE_KILL__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TURTLE_KILL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/turtle_kill__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleKill_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleKill_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleKill_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::TurtleKill_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::TurtleKill_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::TurtleKill_Request>()
{
  return "custom_interfaces::srv::TurtleKill_Request";
}

template<>
inline const char * name<custom_interfaces::srv::TurtleKill_Request>()
{
  return "custom_interfaces/srv/TurtleKill_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TurtleKill_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::TurtleKill_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::TurtleKill_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleKill_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleKill_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleKill_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::TurtleKill_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::TurtleKill_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::TurtleKill_Response>()
{
  return "custom_interfaces::srv::TurtleKill_Response";
}

template<>
inline const char * name<custom_interfaces::srv::TurtleKill_Response>()
{
  return "custom_interfaces/srv/TurtleKill_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TurtleKill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::TurtleKill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::TurtleKill_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::TurtleKill>()
{
  return "custom_interfaces::srv::TurtleKill";
}

template<>
inline const char * name<custom_interfaces::srv::TurtleKill>()
{
  return "custom_interfaces/srv/TurtleKill";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TurtleKill>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::TurtleKill_Request>::value &&
    has_fixed_size<custom_interfaces::srv::TurtleKill_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::TurtleKill>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::TurtleKill_Request>::value &&
    has_bounded_size<custom_interfaces::srv::TurtleKill_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::TurtleKill>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::TurtleKill_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::TurtleKill_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TURTLE_KILL__TRAITS_HPP_
