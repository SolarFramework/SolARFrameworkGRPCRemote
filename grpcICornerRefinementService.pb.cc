// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcICornerRefinementService.proto

#include "grpcICornerRefinementService.pb.h"

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

namespace grpcICornerRefinement {
PROTOBUF_CONSTEXPR refineRequest::refineRequest(
    ::_pbi::ConstantInitialized)
  : image_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , corners_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , grpcservercompressionformat_(0){}
struct refineRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR refineRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~refineRequestDefaultTypeInternal() {}
  union {
    refineRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 refineRequestDefaultTypeInternal _refineRequest_default_instance_;
PROTOBUF_CONSTEXPR refineResponse::refineResponse(
    ::_pbi::ConstantInitialized)
  : corners_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct refineResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR refineResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~refineResponseDefaultTypeInternal() {}
  union {
    refineResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 refineResponseDefaultTypeInternal _refineResponse_default_instance_;
}  // namespace grpcICornerRefinement
static ::_pb::Metadata file_level_metadata_grpcICornerRefinementService_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grpcICornerRefinementService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grpcICornerRefinementService_2eproto = nullptr;

const uint32_t TableStruct_grpcICornerRefinementService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, image_),
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, corners_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineResponse, corners_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpcICornerRefinement::refineRequest)},
  { 9, -1, -1, sizeof(::grpcICornerRefinement::refineResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::grpcICornerRefinement::_refineRequest_default_instance_._instance,
  &::grpcICornerRefinement::_refineResponse_default_instance_._instance,
};

const char descriptor_table_protodef_grpcICornerRefinementService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"grpcICornerRefinementService.proto\022\025gr"
  "pcICornerRefinement\032\033google/protobuf/emp"
  "ty.proto\"T\n\rrefineRequest\022#\n\033grpcServerC"
  "ompressionFormat\030\001 \001(\005\022\r\n\005image\030\002 \001(\014\022\017\n"
  "\007corners\030\003 \001(\014\"!\n\016refineResponse\022\017\n\007corn"
  "ers\030\001 \001(\0142w\n\034grpcICornerRefinementServic"
  "e\022W\n\006refine\022$.grpcICornerRefinement.refi"
  "neRequest\032%.grpcICornerRefinement.refine"
  "Response\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_grpcICornerRefinementService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_grpcICornerRefinementService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grpcICornerRefinementService_2eproto = {
    false, false, 338, descriptor_table_protodef_grpcICornerRefinementService_2eproto,
    "grpcICornerRefinementService.proto",
    &descriptor_table_grpcICornerRefinementService_2eproto_once, descriptor_table_grpcICornerRefinementService_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_grpcICornerRefinementService_2eproto::offsets,
    file_level_metadata_grpcICornerRefinementService_2eproto, file_level_enum_descriptors_grpcICornerRefinementService_2eproto,
    file_level_service_descriptors_grpcICornerRefinementService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grpcICornerRefinementService_2eproto_getter() {
  return &descriptor_table_grpcICornerRefinementService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grpcICornerRefinementService_2eproto(&descriptor_table_grpcICornerRefinementService_2eproto);
namespace grpcICornerRefinement {

// ===================================================================

class refineRequest::_Internal {
 public:
};

refineRequest::refineRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcICornerRefinement.refineRequest)
}
refineRequest::refineRequest(const refineRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  image_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    image_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_image().empty()) {
    image_.Set(from._internal_image(), 
      GetArenaForAllocation());
  }
  corners_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    corners_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_corners().empty()) {
    corners_.Set(from._internal_corners(), 
      GetArenaForAllocation());
  }
  grpcservercompressionformat_ = from.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcICornerRefinement.refineRequest)
}

inline void refineRequest::SharedCtor() {
image_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  image_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
corners_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  corners_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
grpcservercompressionformat_ = 0;
}

refineRequest::~refineRequest() {
  // @@protoc_insertion_point(destructor:grpcICornerRefinement.refineRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void refineRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  image_.Destroy();
  corners_.Destroy();
}

void refineRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void refineRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcICornerRefinement.refineRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  image_.ClearToEmpty();
  corners_.ClearToEmpty();
  grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* refineRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // bytes image = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_image();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes corners = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_corners();
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

uint8_t* refineRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcICornerRefinement.refineRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes image = 2;
  if (!this->_internal_image().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_image(), target);
  }

  // bytes corners = 3;
  if (!this->_internal_corners().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_corners(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcICornerRefinement.refineRequest)
  return target;
}

size_t refineRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcICornerRefinement.refineRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image = 2;
  if (!this->_internal_image().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image());
  }

  // bytes corners = 3;
  if (!this->_internal_corners().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_corners());
  }

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_grpcservercompressionformat());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData refineRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    refineRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*refineRequest::GetClassData() const { return &_class_data_; }

void refineRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<refineRequest *>(to)->MergeFrom(
      static_cast<const refineRequest &>(from));
}


void refineRequest::MergeFrom(const refineRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcICornerRefinement.refineRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image().empty()) {
    _internal_set_image(from._internal_image());
  }
  if (!from._internal_corners().empty()) {
    _internal_set_corners(from._internal_corners());
  }
  if (from._internal_grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void refineRequest::CopyFrom(const refineRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcICornerRefinement.refineRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool refineRequest::IsInitialized() const {
  return true;
}

void refineRequest::InternalSwap(refineRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &image_, lhs_arena,
      &other->image_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &corners_, lhs_arena,
      &other->corners_, rhs_arena
  );
  swap(grpcservercompressionformat_, other->grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata refineRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcICornerRefinementService_2eproto_getter, &descriptor_table_grpcICornerRefinementService_2eproto_once,
      file_level_metadata_grpcICornerRefinementService_2eproto[0]);
}

// ===================================================================

class refineResponse::_Internal {
 public:
};

refineResponse::refineResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcICornerRefinement.refineResponse)
}
refineResponse::refineResponse(const refineResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  corners_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    corners_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_corners().empty()) {
    corners_.Set(from._internal_corners(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcICornerRefinement.refineResponse)
}

inline void refineResponse::SharedCtor() {
corners_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  corners_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

refineResponse::~refineResponse() {
  // @@protoc_insertion_point(destructor:grpcICornerRefinement.refineResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void refineResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  corners_.Destroy();
}

void refineResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void refineResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcICornerRefinement.refineResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  corners_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* refineResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes corners = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_corners();
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

uint8_t* refineResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcICornerRefinement.refineResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes corners = 1;
  if (!this->_internal_corners().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_corners(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcICornerRefinement.refineResponse)
  return target;
}

size_t refineResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcICornerRefinement.refineResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes corners = 1;
  if (!this->_internal_corners().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_corners());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData refineResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    refineResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*refineResponse::GetClassData() const { return &_class_data_; }

void refineResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<refineResponse *>(to)->MergeFrom(
      static_cast<const refineResponse &>(from));
}


void refineResponse::MergeFrom(const refineResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcICornerRefinement.refineResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_corners().empty()) {
    _internal_set_corners(from._internal_corners());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void refineResponse::CopyFrom(const refineResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcICornerRefinement.refineResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool refineResponse::IsInitialized() const {
  return true;
}

void refineResponse::InternalSwap(refineResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &corners_, lhs_arena,
      &other->corners_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata refineResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcICornerRefinementService_2eproto_getter, &descriptor_table_grpcICornerRefinementService_2eproto_once,
      file_level_metadata_grpcICornerRefinementService_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcICornerRefinement
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcICornerRefinement::refineRequest*
Arena::CreateMaybeMessage< ::grpcICornerRefinement::refineRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcICornerRefinement::refineRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcICornerRefinement::refineResponse*
Arena::CreateMaybeMessage< ::grpcICornerRefinement::refineResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcICornerRefinement::refineResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
