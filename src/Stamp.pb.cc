// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Stamp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Stamp.pb.h"

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

const ::google::protobuf::Descriptor* Stamp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Stamp_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MeasurementType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Stamp_2eproto() {
  protobuf_AddDesc_Stamp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Stamp.proto");
  GOOGLE_CHECK(file != NULL);
  Stamp_descriptor_ = file->message_type(0);
  static const int Stamp_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stamp, component_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stamp, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stamp, measurement_type_),
  };
  Stamp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Stamp_descriptor_,
      Stamp::default_instance_,
      Stamp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stamp, _has_bits_[0]),
      -1,
      -1,
      sizeof(Stamp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stamp, _internal_metadata_),
      -1);
  MeasurementType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Stamp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Stamp_descriptor_, &Stamp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Stamp_2eproto() {
  delete Stamp::default_instance_;
  delete Stamp_reflection_;
}

void protobuf_AddDesc_Stamp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Stamp.proto\022\016MaxBotMessages\"p\n\005Stamp\022\024"
    "\n\014component_id\030\001 \002(\t\022\014\n\004time\030\002 \002(\003\022C\n\020me"
    "asurement_type\030\003 \001(\0162\037.MaxBotMessages.Me"
    "asurementType:\010ABSOLUTE*1\n\017MeasurementTy"
    "pe\022\014\n\010ABSOLUTE\020\000\022\020\n\014DIFFERENTIAL\020\001", 194);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Stamp.proto", &protobuf_RegisterTypes);
  Stamp::default_instance_ = new Stamp();
  Stamp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Stamp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Stamp_2eproto {
  StaticDescriptorInitializer_Stamp_2eproto() {
    protobuf_AddDesc_Stamp_2eproto();
  }
} static_descriptor_initializer_Stamp_2eproto_;
const ::google::protobuf::EnumDescriptor* MeasurementType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MeasurementType_descriptor_;
}
bool MeasurementType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Stamp::kComponentIdFieldNumber;
const int Stamp::kTimeFieldNumber;
const int Stamp::kMeasurementTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Stamp::Stamp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MaxBotMessages.Stamp)
}

void Stamp::InitAsDefaultInstance() {
}

Stamp::Stamp(const Stamp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MaxBotMessages.Stamp)
}

void Stamp::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  component_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_ = GOOGLE_LONGLONG(0);
  measurement_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Stamp::~Stamp() {
  // @@protoc_insertion_point(destructor:MaxBotMessages.Stamp)
  SharedDtor();
}

void Stamp::SharedDtor() {
  component_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Stamp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Stamp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Stamp_descriptor_;
}

const Stamp& Stamp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Stamp_2eproto();
  return *default_instance_;
}

Stamp* Stamp::default_instance_ = NULL;

Stamp* Stamp::New(::google::protobuf::Arena* arena) const {
  Stamp* n = new Stamp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Stamp::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Stamp*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(time_, measurement_type_);
    if (has_component_id()) {
      component_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Stamp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MaxBotMessages.Stamp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string component_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_component_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->component_id().data(), this->component_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MaxBotMessages.Stamp.component_id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_time;
        break;
      }

      // required int64 time = 2;
      case 2: {
        if (tag == 16) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_measurement_type;
        break;
      }

      // optional .MaxBotMessages.MeasurementType measurement_type = 3 [default = ABSOLUTE];
      case 3: {
        if (tag == 24) {
         parse_measurement_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::MaxBotMessages::MeasurementType_IsValid(value)) {
            set_measurement_type(static_cast< ::MaxBotMessages::MeasurementType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
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
  // @@protoc_insertion_point(parse_success:MaxBotMessages.Stamp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MaxBotMessages.Stamp)
  return false;
#undef DO_
}

void Stamp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MaxBotMessages.Stamp)
  // required string component_id = 1;
  if (has_component_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component_id().data(), this->component_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MaxBotMessages.Stamp.component_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->component_id(), output);
  }

  // required int64 time = 2;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->time(), output);
  }

  // optional .MaxBotMessages.MeasurementType measurement_type = 3 [default = ABSOLUTE];
  if (has_measurement_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->measurement_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MaxBotMessages.Stamp)
}

::google::protobuf::uint8* Stamp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MaxBotMessages.Stamp)
  // required string component_id = 1;
  if (has_component_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component_id().data(), this->component_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MaxBotMessages.Stamp.component_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->component_id(), target);
  }

  // required int64 time = 2;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->time(), target);
  }

  // optional .MaxBotMessages.MeasurementType measurement_type = 3 [default = ABSOLUTE];
  if (has_measurement_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->measurement_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MaxBotMessages.Stamp)
  return target;
}

int Stamp::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_component_id()) {
    // required string component_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->component_id());
  }

  if (has_time()) {
    // required int64 time = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->time());
  }

  return total_size;
}
int Stamp::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string component_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->component_id());

    // required int64 time = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->time());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional .MaxBotMessages.MeasurementType measurement_type = 3 [default = ABSOLUTE];
  if (has_measurement_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->measurement_type());
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

void Stamp::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Stamp* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Stamp>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Stamp::MergeFrom(const Stamp& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_component_id()) {
      set_has_component_id();
      component_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.component_id_);
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_measurement_type()) {
      set_measurement_type(from.measurement_type());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Stamp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Stamp::CopyFrom(const Stamp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Stamp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Stamp::Swap(Stamp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Stamp::InternalSwap(Stamp* other) {
  component_id_.Swap(&other->component_id_);
  std::swap(time_, other->time_);
  std::swap(measurement_type_, other->measurement_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Stamp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Stamp_descriptor_;
  metadata.reflection = Stamp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Stamp

// required string component_id = 1;
bool Stamp::has_component_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Stamp::set_has_component_id() {
  _has_bits_[0] |= 0x00000001u;
}
void Stamp::clear_has_component_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void Stamp::clear_component_id() {
  component_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_component_id();
}
 const ::std::string& Stamp::component_id() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Stamp.component_id)
  return component_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Stamp::set_component_id(const ::std::string& value) {
  set_has_component_id();
  component_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MaxBotMessages.Stamp.component_id)
}
 void Stamp::set_component_id(const char* value) {
  set_has_component_id();
  component_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MaxBotMessages.Stamp.component_id)
}
 void Stamp::set_component_id(const char* value, size_t size) {
  set_has_component_id();
  component_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MaxBotMessages.Stamp.component_id)
}
 ::std::string* Stamp::mutable_component_id() {
  set_has_component_id();
  // @@protoc_insertion_point(field_mutable:MaxBotMessages.Stamp.component_id)
  return component_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Stamp::release_component_id() {
  clear_has_component_id();
  return component_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Stamp::set_allocated_component_id(::std::string* component_id) {
  if (component_id != NULL) {
    set_has_component_id();
  } else {
    clear_has_component_id();
  }
  component_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), component_id);
  // @@protoc_insertion_point(field_set_allocated:MaxBotMessages.Stamp.component_id)
}

// required int64 time = 2;
bool Stamp::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Stamp::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
void Stamp::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
void Stamp::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
 ::google::protobuf::int64 Stamp::time() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Stamp.time)
  return time_;
}
 void Stamp::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Stamp.time)
}

// optional .MaxBotMessages.MeasurementType measurement_type = 3 [default = ABSOLUTE];
bool Stamp::has_measurement_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Stamp::set_has_measurement_type() {
  _has_bits_[0] |= 0x00000004u;
}
void Stamp::clear_has_measurement_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void Stamp::clear_measurement_type() {
  measurement_type_ = 0;
  clear_has_measurement_type();
}
 ::MaxBotMessages::MeasurementType Stamp::measurement_type() const {
  // @@protoc_insertion_point(field_get:MaxBotMessages.Stamp.measurement_type)
  return static_cast< ::MaxBotMessages::MeasurementType >(measurement_type_);
}
 void Stamp::set_measurement_type(::MaxBotMessages::MeasurementType value) {
  assert(::MaxBotMessages::MeasurementType_IsValid(value));
  set_has_measurement_type();
  measurement_type_ = value;
  // @@protoc_insertion_point(field_set:MaxBotMessages.Stamp.measurement_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace MaxBotMessages

// @@protoc_insertion_point(global_scope)
