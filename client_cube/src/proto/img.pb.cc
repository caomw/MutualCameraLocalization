// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/img.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "img.pb.h"

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

const ::google::protobuf::Descriptor* Img_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Img_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fimg_2eproto() {
  protobuf_AddDesc_proto_2fimg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/img.proto");
  GOOGLE_CHECK(file != NULL);
  Img_descriptor_ = file->message_type(0);
  static const int Img_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Img, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Img, image_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Img, timestamp_microsec_),
  };
  Img_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Img_descriptor_,
      Img::default_instance_,
      Img_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Img, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Img, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Img));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fimg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Img_descriptor_, &Img::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fimg_2eproto() {
  delete Img::default_instance_;
  delete Img_reflection_;
}

void protobuf_AddDesc_proto_2fimg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017proto/img.proto\022\ndotCapture\"C\n\003Img\022\021\n\t"
    "timestamp\030\001 \002(\003\022\r\n\005image\030\002 \002(\014\022\032\n\022timest"
    "amp_microsec\030\003 \002(\r", 98);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/img.proto", &protobuf_RegisterTypes);
  Img::default_instance_ = new Img();
  Img::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fimg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fimg_2eproto {
  StaticDescriptorInitializer_proto_2fimg_2eproto() {
    protobuf_AddDesc_proto_2fimg_2eproto();
  }
} static_descriptor_initializer_proto_2fimg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Img::kTimestampFieldNumber;
const int Img::kImageFieldNumber;
const int Img::kTimestampMicrosecFieldNumber;
#endif  // !_MSC_VER

Img::Img()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Img::InitAsDefaultInstance() {
}

Img::Img(const Img& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Img::SharedCtor() {
  _cached_size_ = 0;
  timestamp_ = GOOGLE_LONGLONG(0);
  image_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  timestamp_microsec_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Img::~Img() {
  SharedDtor();
}

void Img::SharedDtor() {
  if (image_ != &::google::protobuf::internal::kEmptyString) {
    delete image_;
  }
  if (this != default_instance_) {
  }
}

void Img::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Img::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Img_descriptor_;
}

const Img& Img::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fimg_2eproto();
  return *default_instance_;
}

Img* Img::default_instance_ = NULL;

Img* Img::New() const {
  return new Img;
}

void Img::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    timestamp_ = GOOGLE_LONGLONG(0);
    if (has_image()) {
      if (image_ != &::google::protobuf::internal::kEmptyString) {
        image_->clear();
      }
    }
    timestamp_microsec_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Img::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 timestamp = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));
          set_has_timestamp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_image;
        break;
      }

      // required bytes image = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_image:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_image()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_timestamp_microsec;
        break;
      }

      // required uint32 timestamp_microsec = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timestamp_microsec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &timestamp_microsec_)));
          set_has_timestamp_microsec();
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

void Img::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 timestamp = 1;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->timestamp(), output);
  }

  // required bytes image = 2;
  if (has_image()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->image(), output);
  }

  // required uint32 timestamp_microsec = 3;
  if (has_timestamp_microsec()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->timestamp_microsec(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Img::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 timestamp = 1;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->timestamp(), target);
  }

  // required bytes image = 2;
  if (has_image()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->image(), target);
  }

  // required uint32 timestamp_microsec = 3;
  if (has_timestamp_microsec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->timestamp_microsec(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Img::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 timestamp = 1;
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->timestamp());
    }

    // required bytes image = 2;
    if (has_image()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->image());
    }

    // required uint32 timestamp_microsec = 3;
    if (has_timestamp_microsec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->timestamp_microsec());
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

void Img::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Img* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Img*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Img::MergeFrom(const Img& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_image()) {
      set_image(from.image());
    }
    if (from.has_timestamp_microsec()) {
      set_timestamp_microsec(from.timestamp_microsec());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Img::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Img::CopyFrom(const Img& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Img::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Img::Swap(Img* other) {
  if (other != this) {
    std::swap(timestamp_, other->timestamp_);
    std::swap(image_, other->image_);
    std::swap(timestamp_microsec_, other->timestamp_microsec_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Img::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Img_descriptor_;
  metadata.reflection = Img_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace dotCapture

// @@protoc_insertion_point(global_scope)