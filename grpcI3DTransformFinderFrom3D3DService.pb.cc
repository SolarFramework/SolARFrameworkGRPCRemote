// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcI3DTransformFinderFrom3D3DService.proto

#include "grpcI3DTransformFinderFrom3D3DService.pb.h"

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

namespace grpcI3DTransformFinderFrom3D3D {
PROTOBUF_CONSTEXPR estimateRequest::estimateRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sourcepointcloud_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.targetpointcloud_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.initialpose_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.pose_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.grpcservercompressionformat_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct estimateRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR estimateRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~estimateRequestDefaultTypeInternal() {}
  union {
    estimateRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 estimateRequestDefaultTypeInternal _estimateRequest_default_instance_;
PROTOBUF_CONSTEXPR estimateResponse::estimateResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.pose_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.xpcfgrpcreturnvalue_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct estimateResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR estimateResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~estimateResponseDefaultTypeInternal() {}
  union {
    estimateResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 estimateResponseDefaultTypeInternal _estimateResponse_default_instance_;
}  // namespace grpcI3DTransformFinderFrom3D3D
static ::_pb::Metadata file_level_metadata_grpcI3DTransformFinderFrom3D3DService_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grpcI3DTransformFinderFrom3D3DService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grpcI3DTransformFinderFrom3D3DService_2eproto = nullptr;

const uint32_t TableStruct_grpcI3DTransformFinderFrom3D3DService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateRequest, _impl_.grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateRequest, _impl_.sourcepointcloud_),
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateRequest, _impl_.targetpointcloud_),
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateRequest, _impl_.initialpose_),
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateRequest, _impl_.pose_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateResponse, _impl_.pose_),
  PROTOBUF_FIELD_OFFSET(::grpcI3DTransformFinderFrom3D3D::estimateResponse, _impl_.xpcfgrpcreturnvalue_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpcI3DTransformFinderFrom3D3D::estimateRequest)},
  { 11, -1, -1, sizeof(::grpcI3DTransformFinderFrom3D3D::estimateResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::grpcI3DTransformFinderFrom3D3D::_estimateRequest_default_instance_._instance,
  &::grpcI3DTransformFinderFrom3D3D::_estimateResponse_default_instance_._instance,
};

const char descriptor_table_protodef_grpcI3DTransformFinderFrom3D3DService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+grpcI3DTransformFinderFrom3D3DService."
  "proto\022\036grpcI3DTransformFinderFrom3D3D\032\033g"
  "oogle/protobuf/empty.proto\"\215\001\n\017estimateR"
  "equest\022#\n\033grpcServerCompressionFormat\030\001 "
  "\001(\005\022\030\n\020sourcePointCloud\030\002 \001(\014\022\030\n\020targetP"
  "ointCloud\030\003 \001(\014\022\023\n\013initialPose\030\004 \001(\014\022\014\n\004"
  "pose\030\005 \001(\014\"=\n\020estimateResponse\022\014\n\004pose\030\001"
  " \001(\014\022\033\n\023xpcfGrpcReturnValue\030\002 \001(\0212\230\001\n%gr"
  "pcI3DTransformFinderFrom3D3DService\022o\n\010e"
  "stimate\022/.grpcI3DTransformFinderFrom3D3D"
  ".estimateRequest\0320.grpcI3DTransformFinde"
  "rFrom3D3D.estimateResponse\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto = {
    false, false, 476, descriptor_table_protodef_grpcI3DTransformFinderFrom3D3DService_2eproto,
    "grpcI3DTransformFinderFrom3D3DService.proto",
    &descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_once, descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_grpcI3DTransformFinderFrom3D3DService_2eproto::offsets,
    file_level_metadata_grpcI3DTransformFinderFrom3D3DService_2eproto, file_level_enum_descriptors_grpcI3DTransformFinderFrom3D3DService_2eproto,
    file_level_service_descriptors_grpcI3DTransformFinderFrom3D3DService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_getter() {
  return &descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grpcI3DTransformFinderFrom3D3DService_2eproto(&descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto);
namespace grpcI3DTransformFinderFrom3D3D {

// ===================================================================

class estimateRequest::_Internal {
 public:
};

estimateRequest::estimateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grpcI3DTransformFinderFrom3D3D.estimateRequest)
}
estimateRequest::estimateRequest(const estimateRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  estimateRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sourcepointcloud_){}
    , decltype(_impl_.targetpointcloud_){}
    , decltype(_impl_.initialpose_){}
    , decltype(_impl_.pose_){}
    , decltype(_impl_.grpcservercompressionformat_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.sourcepointcloud_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sourcepointcloud_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sourcepointcloud().empty()) {
    _this->_impl_.sourcepointcloud_.Set(from._internal_sourcepointcloud(), 
      _this->GetArenaForAllocation());
  }
  _impl_.targetpointcloud_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.targetpointcloud_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_targetpointcloud().empty()) {
    _this->_impl_.targetpointcloud_.Set(from._internal_targetpointcloud(), 
      _this->GetArenaForAllocation());
  }
  _impl_.initialpose_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.initialpose_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_initialpose().empty()) {
    _this->_impl_.initialpose_.Set(from._internal_initialpose(), 
      _this->GetArenaForAllocation());
  }
  _impl_.pose_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pose_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_pose().empty()) {
    _this->_impl_.pose_.Set(from._internal_pose(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.grpcservercompressionformat_ = from._impl_.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcI3DTransformFinderFrom3D3D.estimateRequest)
}

inline void estimateRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sourcepointcloud_){}
    , decltype(_impl_.targetpointcloud_){}
    , decltype(_impl_.initialpose_){}
    , decltype(_impl_.pose_){}
    , decltype(_impl_.grpcservercompressionformat_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.sourcepointcloud_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sourcepointcloud_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.targetpointcloud_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.targetpointcloud_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.initialpose_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.initialpose_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.pose_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pose_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

estimateRequest::~estimateRequest() {
  // @@protoc_insertion_point(destructor:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void estimateRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sourcepointcloud_.Destroy();
  _impl_.targetpointcloud_.Destroy();
  _impl_.initialpose_.Destroy();
  _impl_.pose_.Destroy();
}

void estimateRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void estimateRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sourcepointcloud_.ClearToEmpty();
  _impl_.targetpointcloud_.ClearToEmpty();
  _impl_.initialpose_.ClearToEmpty();
  _impl_.pose_.ClearToEmpty();
  _impl_.grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* estimateRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 grpcServerCompressionFormat = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.grpcservercompressionformat_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes sourcePointCloud = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_sourcepointcloud();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes targetPointCloud = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_targetpointcloud();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes initialPose = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_initialpose();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes pose = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_pose();
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

uint8_t* estimateRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes sourcePointCloud = 2;
  if (!this->_internal_sourcepointcloud().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_sourcepointcloud(), target);
  }

  // bytes targetPointCloud = 3;
  if (!this->_internal_targetpointcloud().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_targetpointcloud(), target);
  }

  // bytes initialPose = 4;
  if (!this->_internal_initialpose().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_initialpose(), target);
  }

  // bytes pose = 5;
  if (!this->_internal_pose().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_pose(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  return target;
}

size_t estimateRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes sourcePointCloud = 2;
  if (!this->_internal_sourcepointcloud().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sourcepointcloud());
  }

  // bytes targetPointCloud = 3;
  if (!this->_internal_targetpointcloud().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_targetpointcloud());
  }

  // bytes initialPose = 4;
  if (!this->_internal_initialpose().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_initialpose());
  }

  // bytes pose = 5;
  if (!this->_internal_pose().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_pose());
  }

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_grpcservercompressionformat());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData estimateRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    estimateRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*estimateRequest::GetClassData() const { return &_class_data_; }


void estimateRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<estimateRequest*>(&to_msg);
  auto& from = static_cast<const estimateRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_sourcepointcloud().empty()) {
    _this->_internal_set_sourcepointcloud(from._internal_sourcepointcloud());
  }
  if (!from._internal_targetpointcloud().empty()) {
    _this->_internal_set_targetpointcloud(from._internal_targetpointcloud());
  }
  if (!from._internal_initialpose().empty()) {
    _this->_internal_set_initialpose(from._internal_initialpose());
  }
  if (!from._internal_pose().empty()) {
    _this->_internal_set_pose(from._internal_pose());
  }
  if (from._internal_grpcservercompressionformat() != 0) {
    _this->_internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void estimateRequest::CopyFrom(const estimateRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcI3DTransformFinderFrom3D3D.estimateRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool estimateRequest::IsInitialized() const {
  return true;
}

void estimateRequest::InternalSwap(estimateRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sourcepointcloud_, lhs_arena,
      &other->_impl_.sourcepointcloud_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.targetpointcloud_, lhs_arena,
      &other->_impl_.targetpointcloud_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.initialpose_, lhs_arena,
      &other->_impl_.initialpose_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.pose_, lhs_arena,
      &other->_impl_.pose_, rhs_arena
  );
  swap(_impl_.grpcservercompressionformat_, other->_impl_.grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata estimateRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_getter, &descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_once,
      file_level_metadata_grpcI3DTransformFinderFrom3D3DService_2eproto[0]);
}

// ===================================================================

class estimateResponse::_Internal {
 public:
};

estimateResponse::estimateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:grpcI3DTransformFinderFrom3D3D.estimateResponse)
}
estimateResponse::estimateResponse(const estimateResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  estimateResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.pose_){}
    , decltype(_impl_.xpcfgrpcreturnvalue_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.pose_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pose_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_pose().empty()) {
    _this->_impl_.pose_.Set(from._internal_pose(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.xpcfgrpcreturnvalue_ = from._impl_.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcI3DTransformFinderFrom3D3D.estimateResponse)
}

inline void estimateResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.pose_){}
    , decltype(_impl_.xpcfgrpcreturnvalue_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.pose_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pose_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

estimateResponse::~estimateResponse() {
  // @@protoc_insertion_point(destructor:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void estimateResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.pose_.Destroy();
}

void estimateResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void estimateResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.pose_.ClearToEmpty();
  _impl_.xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* estimateResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes pose = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_pose();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // sint32 xpcfGrpcReturnValue = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.xpcfgrpcreturnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
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

uint8_t* estimateResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes pose = 1;
  if (!this->_internal_pose().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_pose(), target);
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
  // @@protoc_insertion_point(serialize_to_array_end:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  return target;
}

size_t estimateResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes pose = 1;
  if (!this->_internal_pose().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_pose());
  }

  // sint32 xpcfGrpcReturnValue = 2;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    total_size += ::_pbi::WireFormatLite::SInt32SizePlusOne(this->_internal_xpcfgrpcreturnvalue());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData estimateResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    estimateResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*estimateResponse::GetClassData() const { return &_class_data_; }


void estimateResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<estimateResponse*>(&to_msg);
  auto& from = static_cast<const estimateResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_pose().empty()) {
    _this->_internal_set_pose(from._internal_pose());
  }
  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _this->_internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void estimateResponse::CopyFrom(const estimateResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcI3DTransformFinderFrom3D3D.estimateResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool estimateResponse::IsInitialized() const {
  return true;
}

void estimateResponse::InternalSwap(estimateResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.pose_, lhs_arena,
      &other->_impl_.pose_, rhs_arena
  );
  swap(_impl_.xpcfgrpcreturnvalue_, other->_impl_.xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata estimateResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_getter, &descriptor_table_grpcI3DTransformFinderFrom3D3DService_2eproto_once,
      file_level_metadata_grpcI3DTransformFinderFrom3D3DService_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcI3DTransformFinderFrom3D3D
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcI3DTransformFinderFrom3D3D::estimateRequest*
Arena::CreateMaybeMessage< ::grpcI3DTransformFinderFrom3D3D::estimateRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcI3DTransformFinderFrom3D3D::estimateRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcI3DTransformFinderFrom3D3D::estimateResponse*
Arena::CreateMaybeMessage< ::grpcI3DTransformFinderFrom3D3D::estimateResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcI3DTransformFinderFrom3D3D::estimateResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
