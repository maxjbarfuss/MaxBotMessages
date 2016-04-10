// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Pose.proto

#ifndef PROTOBUF_Pose_2eproto__INCLUDED
#define PROTOBUF_Pose_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Stamp.pb.h"
#include "Vector.pb.h"
// @@protoc_insertion_point(includes)

namespace MaxBotMessages {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Pose_2eproto();
void protobuf_AssignDesc_Pose_2eproto();
void protobuf_ShutdownFile_Pose_2eproto();

class Pose2;
class Pose2Stamped;
class Pose3;
class Pose3Stamped;

// ===================================================================

class Pose2 : public ::google::protobuf::Message {
 public:
  Pose2();
  virtual ~Pose2();

  Pose2(const Pose2& from);

  inline Pose2& operator=(const Pose2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose2& default_instance();

  void Swap(Pose2* other);

  // implements Message ----------------------------------------------

  inline Pose2* New() const { return New(NULL); }

  Pose2* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose2& from);
  void MergeFrom(const Pose2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Pose2* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // required double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // required double heading = 3;
  bool has_heading() const;
  void clear_heading();
  static const int kHeadingFieldNumber = 3;
  double heading() const;
  void set_heading(double value);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Pose2)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_heading();
  inline void clear_has_heading();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double x_;
  double y_;
  double heading_;
  friend void  protobuf_AddDesc_Pose_2eproto();
  friend void protobuf_AssignDesc_Pose_2eproto();
  friend void protobuf_ShutdownFile_Pose_2eproto();

  void InitAsDefaultInstance();
  static Pose2* default_instance_;
};
// -------------------------------------------------------------------

class Pose2Stamped : public ::google::protobuf::Message {
 public:
  Pose2Stamped();
  virtual ~Pose2Stamped();

  Pose2Stamped(const Pose2Stamped& from);

  inline Pose2Stamped& operator=(const Pose2Stamped& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose2Stamped& default_instance();

  void Swap(Pose2Stamped* other);

  // implements Message ----------------------------------------------

  inline Pose2Stamped* New() const { return New(NULL); }

  Pose2Stamped* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose2Stamped& from);
  void MergeFrom(const Pose2Stamped& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Pose2Stamped* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MaxBotMessages.Stamp stamp = 1;
  bool has_stamp() const;
  void clear_stamp();
  static const int kStampFieldNumber = 1;
  const ::MaxBotMessages::Stamp& stamp() const;
  ::MaxBotMessages::Stamp* mutable_stamp();
  ::MaxBotMessages::Stamp* release_stamp();
  void set_allocated_stamp(::MaxBotMessages::Stamp* stamp);

  // required .MaxBotMessages.Pose2 pose = 2;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 2;
  const ::MaxBotMessages::Pose2& pose() const;
  ::MaxBotMessages::Pose2* mutable_pose();
  ::MaxBotMessages::Pose2* release_pose();
  void set_allocated_pose(::MaxBotMessages::Pose2* pose);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Pose2Stamped)
 private:
  inline void set_has_stamp();
  inline void clear_has_stamp();
  inline void set_has_pose();
  inline void clear_has_pose();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::MaxBotMessages::Stamp* stamp_;
  ::MaxBotMessages::Pose2* pose_;
  friend void  protobuf_AddDesc_Pose_2eproto();
  friend void protobuf_AssignDesc_Pose_2eproto();
  friend void protobuf_ShutdownFile_Pose_2eproto();

  void InitAsDefaultInstance();
  static Pose2Stamped* default_instance_;
};
// -------------------------------------------------------------------

class Pose3 : public ::google::protobuf::Message {
 public:
  Pose3();
  virtual ~Pose3();

  Pose3(const Pose3& from);

  inline Pose3& operator=(const Pose3& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose3& default_instance();

  void Swap(Pose3* other);

  // implements Message ----------------------------------------------

  inline Pose3* New() const { return New(NULL); }

  Pose3* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose3& from);
  void MergeFrom(const Pose3& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Pose3* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MaxBotMessages.Vector3 position = 1;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  const ::MaxBotMessages::Vector3& position() const;
  ::MaxBotMessages::Vector3* mutable_position();
  ::MaxBotMessages::Vector3* release_position();
  void set_allocated_position(::MaxBotMessages::Vector3* position);

  // required .MaxBotMessages.Quaternion orientation = 2;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 2;
  const ::MaxBotMessages::Quaternion& orientation() const;
  ::MaxBotMessages::Quaternion* mutable_orientation();
  ::MaxBotMessages::Quaternion* release_orientation();
  void set_allocated_orientation(::MaxBotMessages::Quaternion* orientation);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Pose3)
 private:
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_orientation();
  inline void clear_has_orientation();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::MaxBotMessages::Vector3* position_;
  ::MaxBotMessages::Quaternion* orientation_;
  friend void  protobuf_AddDesc_Pose_2eproto();
  friend void protobuf_AssignDesc_Pose_2eproto();
  friend void protobuf_ShutdownFile_Pose_2eproto();

  void InitAsDefaultInstance();
  static Pose3* default_instance_;
};
// -------------------------------------------------------------------

class Pose3Stamped : public ::google::protobuf::Message {
 public:
  Pose3Stamped();
  virtual ~Pose3Stamped();

  Pose3Stamped(const Pose3Stamped& from);

  inline Pose3Stamped& operator=(const Pose3Stamped& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose3Stamped& default_instance();

  void Swap(Pose3Stamped* other);

  // implements Message ----------------------------------------------

  inline Pose3Stamped* New() const { return New(NULL); }

  Pose3Stamped* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose3Stamped& from);
  void MergeFrom(const Pose3Stamped& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Pose3Stamped* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MaxBotMessages.Stamp stamp = 1;
  bool has_stamp() const;
  void clear_stamp();
  static const int kStampFieldNumber = 1;
  const ::MaxBotMessages::Stamp& stamp() const;
  ::MaxBotMessages::Stamp* mutable_stamp();
  ::MaxBotMessages::Stamp* release_stamp();
  void set_allocated_stamp(::MaxBotMessages::Stamp* stamp);

  // required .MaxBotMessages.Pose3 pose = 2;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 2;
  const ::MaxBotMessages::Pose3& pose() const;
  ::MaxBotMessages::Pose3* mutable_pose();
  ::MaxBotMessages::Pose3* release_pose();
  void set_allocated_pose(::MaxBotMessages::Pose3* pose);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Pose3Stamped)
 private:
  inline void set_has_stamp();
  inline void clear_has_stamp();
  inline void set_has_pose();
  inline void clear_has_pose();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::MaxBotMessages::Stamp* stamp_;
  ::MaxBotMessages::Pose3* pose_;
  friend void  protobuf_AddDesc_Pose_2eproto();
  friend void protobuf_AssignDesc_Pose_2eproto();
  friend void protobuf_ShutdownFile_Pose_2eproto();

  void InitAsDefaultInstance();
  static Pose3Stamped* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Pose2

// required double x = 1;
inline bool Pose2::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pose2::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pose2::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pose2::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double Pose2::x() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose2.x)
  return x_;
}
inline void Pose2::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Pose2.x)
}

// required double y = 2;
inline bool Pose2::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pose2::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pose2::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pose2::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double Pose2::y() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose2.y)
  return y_;
}
inline void Pose2::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Pose2.y)
}

// required double heading = 3;
inline bool Pose2::has_heading() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Pose2::set_has_heading() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Pose2::clear_has_heading() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Pose2::clear_heading() {
  heading_ = 0;
  clear_has_heading();
}
inline double Pose2::heading() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose2.heading)
  return heading_;
}
inline void Pose2::set_heading(double value) {
  set_has_heading();
  heading_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Pose2.heading)
}

// -------------------------------------------------------------------

// Pose2Stamped

// required .MaxBotMessages.Stamp stamp = 1;
inline bool Pose2Stamped::has_stamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pose2Stamped::set_has_stamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pose2Stamped::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pose2Stamped::clear_stamp() {
  if (stamp_ != NULL) stamp_->::MaxBotMessages::Stamp::Clear();
  clear_has_stamp();
}
inline const ::MaxBotMessages::Stamp& Pose2Stamped::stamp() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose2Stamped.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
inline ::MaxBotMessages::Stamp* Pose2Stamped::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::MaxBotMessages::Stamp;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Pose2Stamped.stamp)
  return stamp_;
}
inline ::MaxBotMessages::Stamp* Pose2Stamped::release_stamp() {
  clear_has_stamp();
  ::MaxBotMessages::Stamp* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline void Pose2Stamped::set_allocated_stamp(::MaxBotMessages::Stamp* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Pose2Stamped.stamp)
}

// required .MaxBotMessages.Pose2 pose = 2;
inline bool Pose2Stamped::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pose2Stamped::set_has_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pose2Stamped::clear_has_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pose2Stamped::clear_pose() {
  if (pose_ != NULL) pose_->::MaxBotMessages::Pose2::Clear();
  clear_has_pose();
}
inline const ::MaxBotMessages::Pose2& Pose2Stamped::pose() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose2Stamped.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::MaxBotMessages::Pose2* Pose2Stamped::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::MaxBotMessages::Pose2;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Pose2Stamped.pose)
  return pose_;
}
inline ::MaxBotMessages::Pose2* Pose2Stamped::release_pose() {
  clear_has_pose();
  ::MaxBotMessages::Pose2* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Pose2Stamped::set_allocated_pose(::MaxBotMessages::Pose2* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Pose2Stamped.pose)
}

// -------------------------------------------------------------------

// Pose3

// required .MaxBotMessages.Vector3 position = 1;
inline bool Pose3::has_position() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pose3::set_has_position() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pose3::clear_has_position() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pose3::clear_position() {
  if (position_ != NULL) position_->::MaxBotMessages::Vector3::Clear();
  clear_has_position();
}
inline const ::MaxBotMessages::Vector3& Pose3::position() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose3.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::MaxBotMessages::Vector3* Pose3::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::MaxBotMessages::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Pose3.position)
  return position_;
}
inline ::MaxBotMessages::Vector3* Pose3::release_position() {
  clear_has_position();
  ::MaxBotMessages::Vector3* temp = position_;
  position_ = NULL;
  return temp;
}
inline void Pose3::set_allocated_position(::MaxBotMessages::Vector3* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Pose3.position)
}

// required .MaxBotMessages.Quaternion orientation = 2;
inline bool Pose3::has_orientation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pose3::set_has_orientation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pose3::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pose3::clear_orientation() {
  if (orientation_ != NULL) orientation_->::MaxBotMessages::Quaternion::Clear();
  clear_has_orientation();
}
inline const ::MaxBotMessages::Quaternion& Pose3::orientation() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose3.orientation)
  return orientation_ != NULL ? *orientation_ : *default_instance_->orientation_;
}
inline ::MaxBotMessages::Quaternion* Pose3::mutable_orientation() {
  set_has_orientation();
  if (orientation_ == NULL) {
    orientation_ = new ::MaxBotMessages::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Pose3.orientation)
  return orientation_;
}
inline ::MaxBotMessages::Quaternion* Pose3::release_orientation() {
  clear_has_orientation();
  ::MaxBotMessages::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline void Pose3::set_allocated_orientation(::MaxBotMessages::Quaternion* orientation) {
  delete orientation_;
  orientation_ = orientation;
  if (orientation) {
    set_has_orientation();
  } else {
    clear_has_orientation();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Pose3.orientation)
}

// -------------------------------------------------------------------

// Pose3Stamped

// required .MaxBotMessages.Stamp stamp = 1;
inline bool Pose3Stamped::has_stamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pose3Stamped::set_has_stamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pose3Stamped::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pose3Stamped::clear_stamp() {
  if (stamp_ != NULL) stamp_->::MaxBotMessages::Stamp::Clear();
  clear_has_stamp();
}
inline const ::MaxBotMessages::Stamp& Pose3Stamped::stamp() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose3Stamped.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
inline ::MaxBotMessages::Stamp* Pose3Stamped::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::MaxBotMessages::Stamp;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Pose3Stamped.stamp)
  return stamp_;
}
inline ::MaxBotMessages::Stamp* Pose3Stamped::release_stamp() {
  clear_has_stamp();
  ::MaxBotMessages::Stamp* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline void Pose3Stamped::set_allocated_stamp(::MaxBotMessages::Stamp* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Pose3Stamped.stamp)
}

// required .MaxBotMessages.Pose3 pose = 2;
inline bool Pose3Stamped::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pose3Stamped::set_has_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pose3Stamped::clear_has_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pose3Stamped::clear_pose() {
  if (pose_ != NULL) pose_->::MaxBotMessages::Pose3::Clear();
  clear_has_pose();
}
inline const ::MaxBotMessages::Pose3& Pose3Stamped::pose() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Pose3Stamped.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::MaxBotMessages::Pose3* Pose3Stamped::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::MaxBotMessages::Pose3;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Pose3Stamped.pose)
  return pose_;
}
inline ::MaxBotMessages::Pose3* Pose3Stamped::release_pose() {
  clear_has_pose();
  ::MaxBotMessages::Pose3* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Pose3Stamped::set_allocated_pose(::MaxBotMessages::Pose3* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Pose3Stamped.pose)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace MaxBotMessages

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Pose_2eproto__INCLUDED
