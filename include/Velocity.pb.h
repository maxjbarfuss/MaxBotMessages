// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Velocity.proto

#ifndef PROTOBUF_Velocity_2eproto__INCLUDED
#define PROTOBUF_Velocity_2eproto__INCLUDED

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
void protobuf_AddDesc_Velocity_2eproto();
void protobuf_AssignDesc_Velocity_2eproto();
void protobuf_ShutdownFile_Velocity_2eproto();

class Velocity2;
class Velocity2Stamped;
class Velocity3;
class Velocity3Stamped;

// ===================================================================

class Velocity3 : public ::google::protobuf::Message {
 public:
  Velocity3();
  virtual ~Velocity3();

  Velocity3(const Velocity3& from);

  inline Velocity3& operator=(const Velocity3& from) {
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
  static const Velocity3& default_instance();

  void Swap(Velocity3* other);

  // implements Message ----------------------------------------------

  inline Velocity3* New() const { return New(NULL); }

  Velocity3* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Velocity3& from);
  void MergeFrom(const Velocity3& from);
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
  void InternalSwap(Velocity3* other);
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

  // required .MaxBotMessages.Vector3 linear = 1;
  bool has_linear() const;
  void clear_linear();
  static const int kLinearFieldNumber = 1;
  const ::MaxBotMessages::Vector3& linear() const;
  ::MaxBotMessages::Vector3* mutable_linear();
  ::MaxBotMessages::Vector3* release_linear();
  void set_allocated_linear(::MaxBotMessages::Vector3* linear);

  // required .MaxBotMessages.Vector3 angular = 2;
  bool has_angular() const;
  void clear_angular();
  static const int kAngularFieldNumber = 2;
  const ::MaxBotMessages::Vector3& angular() const;
  ::MaxBotMessages::Vector3* mutable_angular();
  ::MaxBotMessages::Vector3* release_angular();
  void set_allocated_angular(::MaxBotMessages::Vector3* angular);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Velocity3)
 private:
  inline void set_has_linear();
  inline void clear_has_linear();
  inline void set_has_angular();
  inline void clear_has_angular();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::MaxBotMessages::Vector3* linear_;
  ::MaxBotMessages::Vector3* angular_;
  friend void  protobuf_AddDesc_Velocity_2eproto();
  friend void protobuf_AssignDesc_Velocity_2eproto();
  friend void protobuf_ShutdownFile_Velocity_2eproto();

  void InitAsDefaultInstance();
  static Velocity3* default_instance_;
};
// -------------------------------------------------------------------

class Velocity3Stamped : public ::google::protobuf::Message {
 public:
  Velocity3Stamped();
  virtual ~Velocity3Stamped();

  Velocity3Stamped(const Velocity3Stamped& from);

  inline Velocity3Stamped& operator=(const Velocity3Stamped& from) {
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
  static const Velocity3Stamped& default_instance();

  void Swap(Velocity3Stamped* other);

  // implements Message ----------------------------------------------

  inline Velocity3Stamped* New() const { return New(NULL); }

  Velocity3Stamped* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Velocity3Stamped& from);
  void MergeFrom(const Velocity3Stamped& from);
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
  void InternalSwap(Velocity3Stamped* other);
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

  // required .MaxBotMessages.Velocity3 velocity = 2;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 2;
  const ::MaxBotMessages::Velocity3& velocity() const;
  ::MaxBotMessages::Velocity3* mutable_velocity();
  ::MaxBotMessages::Velocity3* release_velocity();
  void set_allocated_velocity(::MaxBotMessages::Velocity3* velocity);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Velocity3Stamped)
 private:
  inline void set_has_stamp();
  inline void clear_has_stamp();
  inline void set_has_velocity();
  inline void clear_has_velocity();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::MaxBotMessages::Stamp* stamp_;
  ::MaxBotMessages::Velocity3* velocity_;
  friend void  protobuf_AddDesc_Velocity_2eproto();
  friend void protobuf_AssignDesc_Velocity_2eproto();
  friend void protobuf_ShutdownFile_Velocity_2eproto();

  void InitAsDefaultInstance();
  static Velocity3Stamped* default_instance_;
};
// -------------------------------------------------------------------

class Velocity2 : public ::google::protobuf::Message {
 public:
  Velocity2();
  virtual ~Velocity2();

  Velocity2(const Velocity2& from);

  inline Velocity2& operator=(const Velocity2& from) {
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
  static const Velocity2& default_instance();

  void Swap(Velocity2* other);

  // implements Message ----------------------------------------------

  inline Velocity2* New() const { return New(NULL); }

  Velocity2* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Velocity2& from);
  void MergeFrom(const Velocity2& from);
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
  void InternalSwap(Velocity2* other);
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

  // required double linear = 1;
  bool has_linear() const;
  void clear_linear();
  static const int kLinearFieldNumber = 1;
  double linear() const;
  void set_linear(double value);

  // required double angular = 2;
  bool has_angular() const;
  void clear_angular();
  static const int kAngularFieldNumber = 2;
  double angular() const;
  void set_angular(double value);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Velocity2)
 private:
  inline void set_has_linear();
  inline void clear_has_linear();
  inline void set_has_angular();
  inline void clear_has_angular();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double linear_;
  double angular_;
  friend void  protobuf_AddDesc_Velocity_2eproto();
  friend void protobuf_AssignDesc_Velocity_2eproto();
  friend void protobuf_ShutdownFile_Velocity_2eproto();

  void InitAsDefaultInstance();
  static Velocity2* default_instance_;
};
// -------------------------------------------------------------------

class Velocity2Stamped : public ::google::protobuf::Message {
 public:
  Velocity2Stamped();
  virtual ~Velocity2Stamped();

  Velocity2Stamped(const Velocity2Stamped& from);

  inline Velocity2Stamped& operator=(const Velocity2Stamped& from) {
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
  static const Velocity2Stamped& default_instance();

  void Swap(Velocity2Stamped* other);

  // implements Message ----------------------------------------------

  inline Velocity2Stamped* New() const { return New(NULL); }

  Velocity2Stamped* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Velocity2Stamped& from);
  void MergeFrom(const Velocity2Stamped& from);
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
  void InternalSwap(Velocity2Stamped* other);
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

  // required .MaxBotMessages.Velocity2 velocity = 2;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 2;
  const ::MaxBotMessages::Velocity2& velocity() const;
  ::MaxBotMessages::Velocity2* mutable_velocity();
  ::MaxBotMessages::Velocity2* release_velocity();
  void set_allocated_velocity(::MaxBotMessages::Velocity2* velocity);

  // @@protoc_insertion_point(class_scope:MaxBotMessages.Velocity2Stamped)
 private:
  inline void set_has_stamp();
  inline void clear_has_stamp();
  inline void set_has_velocity();
  inline void clear_has_velocity();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::MaxBotMessages::Stamp* stamp_;
  ::MaxBotMessages::Velocity2* velocity_;
  friend void  protobuf_AddDesc_Velocity_2eproto();
  friend void protobuf_AssignDesc_Velocity_2eproto();
  friend void protobuf_ShutdownFile_Velocity_2eproto();

  void InitAsDefaultInstance();
  static Velocity2Stamped* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Velocity3

// required .MaxBotMessages.Vector3 linear = 1;
inline bool Velocity3::has_linear() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Velocity3::set_has_linear() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Velocity3::clear_has_linear() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Velocity3::clear_linear() {
  if (linear_ != NULL) linear_->::MaxBotMessages::Vector3::Clear();
  clear_has_linear();
}
inline const ::MaxBotMessages::Vector3& Velocity3::linear() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity3.linear)
  return linear_ != NULL ? *linear_ : *default_instance_->linear_;
}
inline ::MaxBotMessages::Vector3* Velocity3::mutable_linear() {
  set_has_linear();
  if (linear_ == NULL) {
    linear_ = new ::MaxBotMessages::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Velocity3.linear)
  return linear_;
}
inline ::MaxBotMessages::Vector3* Velocity3::release_linear() {
  clear_has_linear();
  ::MaxBotMessages::Vector3* temp = linear_;
  linear_ = NULL;
  return temp;
}
inline void Velocity3::set_allocated_linear(::MaxBotMessages::Vector3* linear) {
  delete linear_;
  linear_ = linear;
  if (linear) {
    set_has_linear();
  } else {
    clear_has_linear();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Velocity3.linear)
}

// required .MaxBotMessages.Vector3 angular = 2;
inline bool Velocity3::has_angular() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Velocity3::set_has_angular() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Velocity3::clear_has_angular() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Velocity3::clear_angular() {
  if (angular_ != NULL) angular_->::MaxBotMessages::Vector3::Clear();
  clear_has_angular();
}
inline const ::MaxBotMessages::Vector3& Velocity3::angular() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity3.angular)
  return angular_ != NULL ? *angular_ : *default_instance_->angular_;
}
inline ::MaxBotMessages::Vector3* Velocity3::mutable_angular() {
  set_has_angular();
  if (angular_ == NULL) {
    angular_ = new ::MaxBotMessages::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Velocity3.angular)
  return angular_;
}
inline ::MaxBotMessages::Vector3* Velocity3::release_angular() {
  clear_has_angular();
  ::MaxBotMessages::Vector3* temp = angular_;
  angular_ = NULL;
  return temp;
}
inline void Velocity3::set_allocated_angular(::MaxBotMessages::Vector3* angular) {
  delete angular_;
  angular_ = angular;
  if (angular) {
    set_has_angular();
  } else {
    clear_has_angular();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Velocity3.angular)
}

// -------------------------------------------------------------------

// Velocity3Stamped

// required .MaxBotMessages.Stamp stamp = 1;
inline bool Velocity3Stamped::has_stamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Velocity3Stamped::set_has_stamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Velocity3Stamped::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Velocity3Stamped::clear_stamp() {
  if (stamp_ != NULL) stamp_->::MaxBotMessages::Stamp::Clear();
  clear_has_stamp();
}
inline const ::MaxBotMessages::Stamp& Velocity3Stamped::stamp() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity3Stamped.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
inline ::MaxBotMessages::Stamp* Velocity3Stamped::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::MaxBotMessages::Stamp;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Velocity3Stamped.stamp)
  return stamp_;
}
inline ::MaxBotMessages::Stamp* Velocity3Stamped::release_stamp() {
  clear_has_stamp();
  ::MaxBotMessages::Stamp* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline void Velocity3Stamped::set_allocated_stamp(::MaxBotMessages::Stamp* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Velocity3Stamped.stamp)
}

// required .MaxBotMessages.Velocity3 velocity = 2;
inline bool Velocity3Stamped::has_velocity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Velocity3Stamped::set_has_velocity() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Velocity3Stamped::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Velocity3Stamped::clear_velocity() {
  if (velocity_ != NULL) velocity_->::MaxBotMessages::Velocity3::Clear();
  clear_has_velocity();
}
inline const ::MaxBotMessages::Velocity3& Velocity3Stamped::velocity() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity3Stamped.velocity)
  return velocity_ != NULL ? *velocity_ : *default_instance_->velocity_;
}
inline ::MaxBotMessages::Velocity3* Velocity3Stamped::mutable_velocity() {
  set_has_velocity();
  if (velocity_ == NULL) {
    velocity_ = new ::MaxBotMessages::Velocity3;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Velocity3Stamped.velocity)
  return velocity_;
}
inline ::MaxBotMessages::Velocity3* Velocity3Stamped::release_velocity() {
  clear_has_velocity();
  ::MaxBotMessages::Velocity3* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline void Velocity3Stamped::set_allocated_velocity(::MaxBotMessages::Velocity3* velocity) {
  delete velocity_;
  velocity_ = velocity;
  if (velocity) {
    set_has_velocity();
  } else {
    clear_has_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Velocity3Stamped.velocity)
}

// -------------------------------------------------------------------

// Velocity2

// required double linear = 1;
inline bool Velocity2::has_linear() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Velocity2::set_has_linear() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Velocity2::clear_has_linear() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Velocity2::clear_linear() {
  linear_ = 0;
  clear_has_linear();
}
inline double Velocity2::linear() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity2.linear)
  return linear_;
}
inline void Velocity2::set_linear(double value) {
  set_has_linear();
  linear_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Velocity2.linear)
}

// required double angular = 2;
inline bool Velocity2::has_angular() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Velocity2::set_has_angular() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Velocity2::clear_has_angular() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Velocity2::clear_angular() {
  angular_ = 0;
  clear_has_angular();
}
inline double Velocity2::angular() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity2.angular)
  return angular_;
}
inline void Velocity2::set_angular(double value) {
  set_has_angular();
  angular_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Velocity2.angular)
}

// -------------------------------------------------------------------

// Velocity2Stamped

// required .MaxBotMessages.Stamp stamp = 1;
inline bool Velocity2Stamped::has_stamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Velocity2Stamped::set_has_stamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Velocity2Stamped::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Velocity2Stamped::clear_stamp() {
  if (stamp_ != NULL) stamp_->::MaxBotMessages::Stamp::Clear();
  clear_has_stamp();
}
inline const ::MaxBotMessages::Stamp& Velocity2Stamped::stamp() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity2Stamped.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
inline ::MaxBotMessages::Stamp* Velocity2Stamped::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::MaxBotMessages::Stamp;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Velocity2Stamped.stamp)
  return stamp_;
}
inline ::MaxBotMessages::Stamp* Velocity2Stamped::release_stamp() {
  clear_has_stamp();
  ::MaxBotMessages::Stamp* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline void Velocity2Stamped::set_allocated_stamp(::MaxBotMessages::Stamp* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Velocity2Stamped.stamp)
}

// required .MaxBotMessages.Velocity2 velocity = 2;
inline bool Velocity2Stamped::has_velocity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Velocity2Stamped::set_has_velocity() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Velocity2Stamped::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Velocity2Stamped::clear_velocity() {
  if (velocity_ != NULL) velocity_->::MaxBotMessages::Velocity2::Clear();
  clear_has_velocity();
}
inline const ::MaxBotMessages::Velocity2& Velocity2Stamped::velocity() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Velocity2Stamped.velocity)
  return velocity_ != NULL ? *velocity_ : *default_instance_->velocity_;
}
inline ::MaxBotMessages::Velocity2* Velocity2Stamped::mutable_velocity() {
  set_has_velocity();
  if (velocity_ == NULL) {
    velocity_ = new ::MaxBotMessages::Velocity2;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Velocity2Stamped.velocity)
  return velocity_;
}
inline ::MaxBotMessages::Velocity2* Velocity2Stamped::release_velocity() {
  clear_has_velocity();
  ::MaxBotMessages::Velocity2* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline void Velocity2Stamped::set_allocated_velocity(::MaxBotMessages::Velocity2* velocity) {
  delete velocity_;
  velocity_ = velocity;
  if (velocity) {
    set_has_velocity();
  } else {
    clear_has_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Velocity2Stamped.velocity)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace MaxBotMessages

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Velocity_2eproto__INCLUDED
