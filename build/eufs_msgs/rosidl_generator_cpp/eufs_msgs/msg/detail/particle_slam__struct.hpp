// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/ParticleSLAM.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'particles'
#include "eufs_msgs/msg/detail/particle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__ParticleSLAM __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__ParticleSLAM __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParticleSLAM_
{
  using Type = ParticleSLAM_<ContainerAllocator>;

  explicit ParticleSLAM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_particle_idx = 0ull;
    }
  }

  explicit ParticleSLAM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_particle_idx = 0ull;
    }
  }

  // field types and members
  using _best_particle_idx_type =
    uint64_t;
  _best_particle_idx_type best_particle_idx;
  using _particles_type =
    std::vector<eufs_msgs::msg::Particle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eufs_msgs::msg::Particle_<ContainerAllocator>>>;
  _particles_type particles;

  // setters for named parameter idiom
  Type & set__best_particle_idx(
    const uint64_t & _arg)
  {
    this->best_particle_idx = _arg;
    return *this;
  }
  Type & set__particles(
    const std::vector<eufs_msgs::msg::Particle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eufs_msgs::msg::Particle_<ContainerAllocator>>> & _arg)
  {
    this->particles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__ParticleSLAM
    std::shared_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__ParticleSLAM
    std::shared_ptr<eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParticleSLAM_ & other) const
  {
    if (this->best_particle_idx != other.best_particle_idx) {
      return false;
    }
    if (this->particles != other.particles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParticleSLAM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParticleSLAM_

// alias to use template instance with default allocator
using ParticleSLAM =
  eufs_msgs::msg::ParticleSLAM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__STRUCT_HPP_
