// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIMappingService.proto

#include "grpcIMappingService.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace grpcIMapping {
PROTOBUF_CONSTEXPR idleRequest::idleRequest(
    ::_pbi::ConstantInitialized)
  : grpcservercompressionformat_(0){}
struct idleRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR idleRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~idleRequestDefaultTypeInternal() {}
  union {
    idleRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 idleRequestDefaultTypeInternal _idleRequest_default_instance_;
PROTOBUF_CONSTEXPR idleResponse::idleResponse(
    ::_pbi::ConstantInitialized)
  : xpcfgrpcreturnvalue_(false){}
struct idleResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR idleResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~idleResponseDefaultTypeInternal() {}
  union {
    idleResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 idleResponseDefaultTypeInternal _idleResponse_default_instance_;
PROTOBUF_CONSTEXPR processRequest::processRequest(
    ::_pbi::ConstantInitialized)
  : frame_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , keyframe_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , grpcservercompressionformat_(0){}
struct processRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR processRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~processRequestDefaultTypeInternal() {}
  union {
    processRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 processRequestDefaultTypeInternal _processRequest_default_instance_;
PROTOBUF_CONSTEXPR processResponse::processResponse(
    ::_pbi::ConstantInitialized)
  : keyframe_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , xpcfgrpcreturnvalue_(0){}
struct processResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR processResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~processResponseDefaultTypeInternal() {}
  union {
    processResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 processResponseDefaultTypeInternal _processResponse_default_instance_;
}  // namespace grpcIMapping
static ::_pb::Metadata file_level_metadata_grpcIMappingService_2eproto[4];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grpcIMappingService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grpcIMappingService_2eproto = nullptr;

const uint32_t TableStruct_grpcIMappingService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::idleRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::idleRequest, grpcservercompressionformat_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::idleResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::idleResponse, xpcfgrpcreturnvalue_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processRequest, grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processRequest, frame_),
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processRequest, keyframe_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processResponse, keyframe_),
  PROTOBUF_FIELD_OFFSET(::grpcIMapping::processResponse, xpcfgrpcreturnvalue_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpcIMapping::idleRequest)},
  { 7, -1, -1, sizeof(::grpcIMapping::idleResponse)},
  { 14, -1, -1, sizeof(::grpcIMapping::processRequest)},
  { 23, -1, -1, sizeof(::grpcIMapping::processResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::grpcIMapping::_idleRequest_default_instance_._instance,
  &::grpcIMapping::_idleResponse_default_instance_._instance,
  &::grpcIMapping::_processRequest_default_instance_._instance,
  &::grpcIMapping::_processResponse_default_instance_._instance,
};

const char descriptor_table_protodef_grpcIMappingService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031grpcIMappingService.proto\022\014grpcIMappin"
  "g\032\033google/protobuf/empty.proto\"2\n\013idleRe"
  "quest\022#\n\033grpcServerCompressionFormat\030\001 \001"
  "(\005\"+\n\014idleResponse\022\033\n\023xpcfGrpcReturnValu"
  "e\030\001 \001(\010\"V\n\016processRequest\022#\n\033grpcServerC"
  "ompressionFormat\030\001 \001(\005\022\r\n\005frame\030\002 \001(\014\022\020\n"
  "\010keyframe\030\003 \001(\014\"@\n\017processResponse\022\020\n\010ke"
  "yframe\030\001 \001(\014\022\033\n\023xpcfGrpcReturnValue\030\002 \001("
  "\0212\240\001\n\023grpcIMappingService\022\?\n\004idle\022\031.grpc"
  "IMapping.idleRequest\032\032.grpcIMapping.idle"
  "Response\"\000\022H\n\007process\022\034.grpcIMapping.pro"
  "cessRequest\032\035.grpcIMapping.processRespon"
  "se\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_grpcIMappingService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_grpcIMappingService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grpcIMappingService_2eproto = {
    false, false, 492, descriptor_table_protodef_grpcIMappingService_2eproto,
    "grpcIMappingService.proto",
    &descriptor_table_grpcIMappingService_2eproto_once, descriptor_table_grpcIMappingService_2eproto_deps, 1, 4,
    schemas, file_default_instances, TableStruct_grpcIMappingService_2eproto::offsets,
    file_level_metadata_grpcIMappingService_2eproto, file_level_enum_descriptors_grpcIMappingService_2eproto,
    file_level_service_descriptors_grpcIMappingService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grpcIMappingService_2eproto_getter() {
  return &descriptor_table_grpcIMappingService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grpcIMappingService_2eproto(&descriptor_table_grpcIMappingService_2eproto);
namespace grpcIMapping {

// ===================================================================

class idleRequest::_Internal {
 public:
};

idleRequest::idleRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcIMapping.idleRequest)
}
idleRequest::idleRequest(const idleRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  grpcservercompressionformat_ = from.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcIMapping.idleRequest)
}

inline void idleRequest::SharedCtor() {
grpcservercompressionformat_ = 0;
}

idleRequest::~idleRequest() {
  // @@protoc_insertion_point(destructor:grpcIMapping.idleRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void idleRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void idleRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void idleRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIMapping.idleRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* idleRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 grpcServerCompressionFormat = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          grpcservercompressionformat_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* idleRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIMapping.idleRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIMapping.idleRequest)
  return target;
}

size_t idleRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIMapping.idleRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_grpcservercompressionformat());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData idleRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    idleRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*idleRequest::GetClassData() const { return &_class_data_; }

void idleRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<idleRequest *>(to)->MergeFrom(
      static_cast<const idleRequest &>(from));
}


void idleRequest::MergeFrom(const idleRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIMapping.idleRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void idleRequest::CopyFrom(const idleRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIMapping.idleRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool idleRequest::IsInitialized() const {
  return true;
}

void idleRequest::InternalSwap(idleRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(grpcservercompressionformat_, other->grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata idleRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcIMappingService_2eproto_getter, &descriptor_table_grpcIMappingService_2eproto_once,
      file_level_metadata_grpcIMappingService_2eproto[0]);
}

// ===================================================================

class idleResponse::_Internal {
 public:
};

idleResponse::idleResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcIMapping.idleResponse)
}
idleResponse::idleResponse(const idleResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIMapping.idleResponse)
}

inline void idleResponse::SharedCtor() {
xpcfgrpcreturnvalue_ = false;
}

idleResponse::~idleResponse() {
  // @@protoc_insertion_point(destructor:grpcIMapping.idleResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void idleResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void idleResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void idleResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIMapping.idleResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  xpcfgrpcreturnvalue_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* idleResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool xpcfGrpcReturnValue = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          xpcfgrpcreturnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* idleResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIMapping.idleResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool xpcfGrpcReturnValue = 1;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIMapping.idleResponse)
  return target;
}

size_t idleResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIMapping.idleResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool xpcfGrpcReturnValue = 1;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData idleResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    idleResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*idleResponse::GetClassData() const { return &_class_data_; }

void idleResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<idleResponse *>(to)->MergeFrom(
      static_cast<const idleResponse &>(from));
}


void idleResponse::MergeFrom(const idleResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIMapping.idleResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void idleResponse::CopyFrom(const idleResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIMapping.idleResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool idleResponse::IsInitialized() const {
  return true;
}

void idleResponse::InternalSwap(idleResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata idleResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcIMappingService_2eproto_getter, &descriptor_table_grpcIMappingService_2eproto_once,
      file_level_metadata_grpcIMappingService_2eproto[1]);
}

// ===================================================================

class processRequest::_Internal {
 public:
};

processRequest::processRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcIMapping.processRequest)
}
processRequest::processRequest(const processRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  frame_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    frame_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_frame().empty()) {
    frame_.Set(from._internal_frame(), 
      GetArenaForAllocation());
  }
  keyframe_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    keyframe_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_keyframe().empty()) {
    keyframe_.Set(from._internal_keyframe(), 
      GetArenaForAllocation());
  }
  grpcservercompressionformat_ = from.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcIMapping.processRequest)
}

inline void processRequest::SharedCtor() {
frame_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  frame_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
keyframe_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  keyframe_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
grpcservercompressionformat_ = 0;
}

processRequest::~processRequest() {
  // @@protoc_insertion_point(destructor:grpcIMapping.processRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void processRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  frame_.Destroy();
  keyframe_.Destroy();
}

void processRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void processRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIMapping.processRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  frame_.ClearToEmpty();
  keyframe_.ClearToEmpty();
  grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* processRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 grpcServerCompressionFormat = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          grpcservercompressionformat_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes frame = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_frame();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes keyframe = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_keyframe();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* processRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIMapping.processRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes frame = 2;
  if (!this->_internal_frame().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_frame(), target);
  }

  // bytes keyframe = 3;
  if (!this->_internal_keyframe().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_keyframe(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIMapping.processRequest)
  return target;
}

size_t processRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIMapping.processRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes frame = 2;
  if (!this->_internal_frame().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_frame());
  }

  // bytes keyframe = 3;
  if (!this->_internal_keyframe().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keyframe());
  }

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_grpcservercompressionformat());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData processRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    processRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*processRequest::GetClassData() const { return &_class_data_; }

void processRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<processRequest *>(to)->MergeFrom(
      static_cast<const processRequest &>(from));
}


void processRequest::MergeFrom(const processRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIMapping.processRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_frame().empty()) {
    _internal_set_frame(from._internal_frame());
  }
  if (!from._internal_keyframe().empty()) {
    _internal_set_keyframe(from._internal_keyframe());
  }
  if (from._internal_grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void processRequest::CopyFrom(const processRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIMapping.processRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool processRequest::IsInitialized() const {
  return true;
}

void processRequest::InternalSwap(processRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &frame_, lhs_arena,
      &other->frame_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &keyframe_, lhs_arena,
      &other->keyframe_, rhs_arena
  );
  swap(grpcservercompressionformat_, other->grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata processRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcIMappingService_2eproto_getter, &descriptor_table_grpcIMappingService_2eproto_once,
      file_level_metadata_grpcIMappingService_2eproto[2]);
}

// ===================================================================

class processResponse::_Internal {
 public:
};

processResponse::processResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcIMapping.processResponse)
}
processResponse::processResponse(const processResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  keyframe_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    keyframe_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_keyframe().empty()) {
    keyframe_.Set(from._internal_keyframe(), 
      GetArenaForAllocation());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIMapping.processResponse)
}

inline void processResponse::SharedCtor() {
keyframe_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  keyframe_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
xpcfgrpcreturnvalue_ = 0;
}

processResponse::~processResponse() {
  // @@protoc_insertion_point(destructor:grpcIMapping.processResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void processResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  keyframe_.Destroy();
}

void processResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void processResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIMapping.processResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  keyframe_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* processResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes keyframe = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_keyframe();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // sint32 xpcfGrpcReturnValue = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          xpcfgrpcreturnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* processResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIMapping.processResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes keyframe = 1;
  if (!this->_internal_keyframe().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_keyframe(), target);
  }

  // sint32 xpcfGrpcReturnValue = 2;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteSInt32ToArray(2, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIMapping.processResponse)
  return target;
}

size_t processResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIMapping.processResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes keyframe = 1;
  if (!this->_internal_keyframe().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keyframe());
  }

  // sint32 xpcfGrpcReturnValue = 2;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    total_size += ::_pbi::WireFormatLite::SInt32SizePlusOne(this->_internal_xpcfgrpcreturnvalue());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData processResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    processResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*processResponse::GetClassData() const { return &_class_data_; }

void processResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<processResponse *>(to)->MergeFrom(
      static_cast<const processResponse &>(from));
}


void processResponse::MergeFrom(const processResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIMapping.processResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_keyframe().empty()) {
    _internal_set_keyframe(from._internal_keyframe());
  }
  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void processResponse::CopyFrom(const processResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIMapping.processResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool processResponse::IsInitialized() const {
  return true;
}

void processResponse::InternalSwap(processResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &keyframe_, lhs_arena,
      &other->keyframe_, rhs_arena
  );
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata processResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcIMappingService_2eproto_getter, &descriptor_table_grpcIMappingService_2eproto_once,
      file_level_metadata_grpcIMappingService_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIMapping
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIMapping::idleRequest*
Arena::CreateMaybeMessage< ::grpcIMapping::idleRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIMapping::idleRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIMapping::idleResponse*
Arena::CreateMaybeMessage< ::grpcIMapping::idleResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIMapping::idleResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIMapping::processRequest*
Arena::CreateMaybeMessage< ::grpcIMapping::processRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIMapping::processRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIMapping::processResponse*
Arena::CreateMaybeMessage< ::grpcIMapping::processResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIMapping::processResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
