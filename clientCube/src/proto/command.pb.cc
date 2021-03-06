// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/command.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "command.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace dotCapture {

namespace {

const ::google::protobuf::Descriptor* Command_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Command_reflection_ = NULL;
const ::google::protobuf::Descriptor* Command_Option_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Command_Option_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Command_OptionType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fcommand_2eproto() {
  protobuf_AddDesc_proto_2fcommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/command.proto");
  GOOGLE_CHECK(file != NULL);
  Command_descriptor_ = file->message_type(0);
  static const int Command_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, option_),
  };
  Command_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Command_descriptor_,
      Command::default_instance_,
      Command_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Command));
  Command_Option_descriptor_ = Command_descriptor_->nested_type(0);
  static const int Command_Option_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command_Option, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command_Option, value_),
  };
  Command_Option_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Command_Option_descriptor_,
      Command_Option::default_instance_,
      Command_Option_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command_Option, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command_Option, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Command_Option));
  Command_OptionType_descriptor_ = Command_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fcommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Command_descriptor_, &Command::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Command_Option_descriptor_, &Command_Option::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fcommand_2eproto() {
  delete Command::default_instance_;
  delete Command_reflection_;
  delete Command_Option::default_instance_;
  delete Command_Option_reflection_;
}

void protobuf_AddDesc_proto_2fcommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023proto/command.proto\022\ndotCapture\"\223\002\n\007Co"
    "mmand\022*\n\006option\030\001 \003(\0132\032.dotCapture.Comma"
    "nd.Option\032P\n\006Option\0227\n\004type\030\001 \002(\0162\036.dotC"
    "apture.Command.OptionType:\tTHRESHOLD\022\r\n\005"
    "value\030\002 \001(\002\"\211\001\n\nOptionType\022\013\n\007SHUTTER\020\000\022"
    "\016\n\nBRIGHTNESS\020\001\022\014\n\010EXPOSURE\020\002\022\010\n\004GAIN\020\003\022"
    "\r\n\tTHRESHOLD\020\004\022\023\n\017START_RECORDING\020\005\022\022\n\016S"
    "TOP_RECORDING\020\006\022\016\n\nDISCONNECT\020\007", 311);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/command.proto", &protobuf_RegisterTypes);
  Command::default_instance_ = new Command();
  Command_Option::default_instance_ = new Command_Option();
  Command::default_instance_->InitAsDefaultInstance();
  Command_Option::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fcommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fcommand_2eproto {
  StaticDescriptorInitializer_proto_2fcommand_2eproto() {
    protobuf_AddDesc_proto_2fcommand_2eproto();
  }
} static_descriptor_initializer_proto_2fcommand_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Command_OptionType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Command_OptionType_descriptor_;
}
bool Command_OptionType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Command_OptionType Command::SHUTTER;
const Command_OptionType Command::BRIGHTNESS;
const Command_OptionType Command::EXPOSURE;
const Command_OptionType Command::GAIN;
const Command_OptionType Command::THRESHOLD;
const Command_OptionType Command::START_RECORDING;
const Command_OptionType Command::STOP_RECORDING;
const Command_OptionType Command::DISCONNECT;
const Command_OptionType Command::OptionType_MIN;
const Command_OptionType Command::OptionType_MAX;
const int Command::OptionType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Command_Option::kTypeFieldNumber;
const int Command_Option::kValueFieldNumber;
#endif  // !_MSC_VER

Command_Option::Command_Option()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Command_Option::InitAsDefaultInstance() {
}

Command_Option::Command_Option(const Command_Option& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Command_Option::SharedCtor() {
  _cached_size_ = 0;
  type_ = 4;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Command_Option::~Command_Option() {
  SharedDtor();
}

void Command_Option::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Command_Option::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Command_Option::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Command_Option_descriptor_;
}

const Command_Option& Command_Option::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fcommand_2eproto();
  return *default_instance_;
}

Command_Option* Command_Option::default_instance_ = NULL;

Command_Option* Command_Option::New() const {
  return new Command_Option;
}

void Command_Option::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 4;
    value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Command_Option::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .dotCapture.Command.OptionType type = 1 [default = THRESHOLD];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::dotCapture::Command_OptionType_IsValid(value)) {
            set_type(static_cast< ::dotCapture::Command_OptionType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_value;
        break;
      }

      // optional float value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Command_Option::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .dotCapture.Command.OptionType type = 1 [default = THRESHOLD];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional float value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Command_Option::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .dotCapture.Command.OptionType type = 1 [default = THRESHOLD];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional float value = 2;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Command_Option::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .dotCapture.Command.OptionType type = 1 [default = THRESHOLD];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional float value = 2;
    if (has_value()) {
      total_size += 1 + 4;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Command_Option::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Command_Option* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Command_Option*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Command_Option::MergeFrom(const Command_Option& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Command_Option::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Command_Option::CopyFrom(const Command_Option& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Command_Option::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Command_Option::Swap(Command_Option* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Command_Option::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Command_Option_descriptor_;
  metadata.reflection = Command_Option_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Command::kOptionFieldNumber;
#endif  // !_MSC_VER

Command::Command()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Command::InitAsDefaultInstance() {
}

Command::Command(const Command& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Command::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Command::~Command() {
  SharedDtor();
}

void Command::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Command::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Command::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Command_descriptor_;
}

const Command& Command::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fcommand_2eproto();
  return *default_instance_;
}

Command* Command::default_instance_ = NULL;

Command* Command::New() const {
  return new Command;
}

void Command::Clear() {
  option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Command::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .dotCapture.Command.Option option = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_option()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_option;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Command::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .dotCapture.Command.Option option = 1;
  for (int i = 0; i < this->option_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->option(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Command::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .dotCapture.Command.Option option = 1;
  for (int i = 0; i < this->option_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->option(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Command::ByteSize() const {
  int total_size = 0;

  // repeated .dotCapture.Command.Option option = 1;
  total_size += 1 * this->option_size();
  for (int i = 0; i < this->option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->option(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Command::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Command* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Command*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Command::MergeFrom(const Command& from) {
  GOOGLE_CHECK_NE(&from, this);
  option_.MergeFrom(from.option_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Command::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Command::CopyFrom(const Command& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Command::IsInitialized() const {

  for (int i = 0; i < option_size(); i++) {
    if (!this->option(i).IsInitialized()) return false;
  }
  return true;
}

void Command::Swap(Command* other) {
  if (other != this) {
    option_.Swap(&other->option_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Command::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Command_descriptor_;
  metadata.reflection = Command_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace dotCapture

// @@protoc_insertion_point(global_scope)
