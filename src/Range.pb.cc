// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Range.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Range.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace MaxBotMessages {

namespace {

const ::google::protobuf::Descriptor* RangeStamped_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RangeStamped_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Range_2eproto() {
  protobuf_AddDesc_Range_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Range.proto");
  GOOGLE_CHECK(file != NULL);
  RangeStamped_descriptor_ = file->message_type(0);
  static const int RangeStamped_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeStamped, stamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeStamped, range_),
  };
  RangeStamped_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RangeStamped_descriptor_,
      RangeStamped::default_instance_,
      RangeStamped_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeStamped, _has_bits_[0]),
      -1,
      -1,
      sizeof(RangeStamped),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeStamped, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Range_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RangeStamped_descriptor_, &RangeStamped::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Range_2eproto() {
  delete RangeStamped::default_instance_;
  delete RangeStamped_reflection_;
}

void protobuf_AddDesc_Range_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::MaxBotMessages::protobuf_AddDesc_Stamp_2eproto();
  ::MaxBotMessages::protobuf_AddDesc_StandardTypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Range.proto\022\016MaxBotMessages\032\013Stamp.pro"
    "to\032\023StandardTypes.proto\"[\n\014RangeStamped\022"
    "$\n\005stamp\030\001 \002(\0132\025.MaxBotMessages.Stamp\022%\n"
    "\005range\030\002 \002(\0132\026.MaxBotMessages.Double", 156);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Range.proto", &protobuf_RegisterTypes);
  RangeStamped::default_instance_ = new RangeStamped();
  RangeStamped::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Range_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Range_2eproto {
  StaticDescriptorInitializer_Range_2eproto() {
    protobuf_AddDesc_Range_2eproto();
  }
} static_descriptor_initializer_Range_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RangeStamped::kStampFieldNumber;
const int RangeStamped::kRangeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RangeStamped::RangeStamped()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MaxBotMessages.RangeStamped)
}

void RangeStamped::InitAsDefaultInstance() {
  stamp_ = const_cast< ::MaxBotMessages::Stamp*>(&::MaxBotMessages::Stamp::default_instance());
  range_ = const_cast< ::MaxBotMessages::Double*>(&::MaxBotMessages::Double::default_instance());
}

RangeStamped::RangeStamped(const RangeStamped& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MaxBotMessages.RangeStamped)
}

void RangeStamped::SharedCtor() {
  _cached_size_ = 0;
  stamp_ = NULL;
  range_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RangeStamped::~RangeStamped() {
  // @@protoc_insertion_point(destructor:MaxBotMessages.RangeStamped)
  SharedDtor();
}

void RangeStamped::SharedDtor() {
  if (this != default_instance_) {
    delete stamp_;
    delete range_;
  }
}

void RangeStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RangeStamped::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RangeStamped_descriptor_;
}

const RangeStamped& RangeStamped::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Range_2eproto();
  return *default_instance_;
}

RangeStamped* RangeStamped::default_instance_ = NULL;

RangeStamped* RangeStamped::New(::google::protobuf::Arena* arena) const {
  RangeStamped* n = new RangeStamped;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RangeStamped::Clear() {
  if (_has_bits_[0 / 32] & 3u) {
    if (has_stamp()) {
      if (stamp_ != NULL) stamp_->::MaxBotMessages::Stamp::Clear();
    }
    if (has_range()) {
      if (range_ != NULL) range_->::MaxBotMessages::Double::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool RangeStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MaxBotMessages.RangeStamped)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .MaxBotMessages.Stamp stamp = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stamp()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_range;
        break;
      }

      // required .MaxBotMessages.Double range = 2;
      case 2: {
        if (tag == 18) {
         parse_range:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_range()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MaxBotMessages.RangeStamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MaxBotMessages.RangeStamped)
  return false;
#undef DO_
}

void RangeStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MaxBotMessages.RangeStamped)
  // required .MaxBotMessages.Stamp stamp = 1;
  if (has_stamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->stamp_, output);
  }

  // required .MaxBotMessages.Double range = 2;
  if (has_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->range_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MaxBotMessages.RangeStamped)
}

::google::protobuf::uint8* RangeStamped::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MaxBotMessages.RangeStamped)
  // required .MaxBotMessages.Stamp stamp = 1;
  if (has_stamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, *this->stamp_, target);
  }

  // required .MaxBotMessages.Double range = 2;
  if (has_range()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, *this->range_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MaxBotMessages.RangeStamped)
  return target;
}

int RangeStamped::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_stamp()) {
    // required .MaxBotMessages.Stamp stamp = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->stamp_);
  }

  if (has_range()) {
    // required .MaxBotMessages.Double range = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->range_);
  }

  return total_size;
}
int RangeStamped::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .MaxBotMessages.Stamp stamp = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->stamp_);

    // required .MaxBotMessages.Double range = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->range_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RangeStamped::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const RangeStamped* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RangeStamped>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RangeStamped::MergeFrom(const RangeStamped& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stamp()) {
      mutable_stamp()->::MaxBotMessages::Stamp::MergeFrom(from.stamp());
    }
    if (from.has_range()) {
      mutable_range()->::MaxBotMessages::Double::MergeFrom(from.range());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void RangeStamped::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RangeStamped::CopyFrom(const RangeStamped& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RangeStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_stamp()) {
    if (!this->stamp_->IsInitialized()) return false;
  }
  if (has_range()) {
    if (!this->range_->IsInitialized()) return false;
  }
  return true;
}

void RangeStamped::Swap(RangeStamped* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RangeStamped::InternalSwap(RangeStamped* other) {
  std::swap(stamp_, other->stamp_);
  std::swap(range_, other->range_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RangeStamped::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RangeStamped_descriptor_;
  metadata.reflection = RangeStamped_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RangeStamped

// required .MaxBotMessages.Stamp stamp = 1;
bool RangeStamped::has_stamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RangeStamped::set_has_stamp() {
  _has_bits_[0] |= 0x00000001u;
}
void RangeStamped::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000001u;
}
void RangeStamped::clear_stamp() {
  if (stamp_ != NULL) stamp_->::MaxBotMessages::Stamp::Clear();
  clear_has_stamp();
}
const ::MaxBotMessages::Stamp& RangeStamped::stamp() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.RangeStamped.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
::MaxBotMessages::Stamp* RangeStamped::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::MaxBotMessages::Stamp;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.RangeStamped.stamp)
  return stamp_;
}
::MaxBotMessages::Stamp* RangeStamped::release_stamp() {
  clear_has_stamp();
  ::MaxBotMessages::Stamp* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
void RangeStamped::set_allocated_stamp(::MaxBotMessages::Stamp* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.RangeStamped.stamp)
}

// required .MaxBotMessages.Double range = 2;
bool RangeStamped::has_range() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RangeStamped::set_has_range() {
  _has_bits_[0] |= 0x00000002u;
}
void RangeStamped::clear_has_range() {
  _has_bits_[0] &= ~0x00000002u;
}
void RangeStamped::clear_range() {
  if (range_ != NULL) range_->::MaxBotMessages::Double::Clear();
  clear_has_range();
}
const ::MaxBotMessages::Double& RangeStamped::range() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.RangeStamped.range)
  return range_ != NULL ? *range_ : *default_instance_->range_;
}
::MaxBotMessages::Double* RangeStamped::mutable_range() {
  set_has_range();
  if (range_ == NULL) {
    range_ = new ::MaxBotMessages::Double;
  }
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.RangeStamped.range)
  return range_;
}
::MaxBotMessages::Double* RangeStamped::release_range() {
  clear_has_range();
  ::MaxBotMessages::Double* temp = range_;
  range_ = NULL;
  return temp;
}
void RangeStamped::set_allocated_range(::MaxBotMessages::Double* range) {
  delete range_;
  range_ = range;
  if (range) {
    set_has_range();
  } else {
    clear_has_range();
  }
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.RangeStamped.range)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace MaxBotMessages

// @@protoc_insertion_point(global_scope)
