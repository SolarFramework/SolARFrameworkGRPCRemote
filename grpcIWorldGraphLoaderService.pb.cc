// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIWorldGraphLoaderService.proto

#include "grpcIWorldGraphLoaderService.pb.h"

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

namespace grpcIWorldGraphLoader {
PROTOBUF_CONSTEXPR loadRequest::loadRequest(
    ::_pbi::ConstantInitialized)
  : trackables_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , grpcservercompressionformat_(0){}
struct loadRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR loadRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~loadRequestDefaultTypeInternal() {}
  union {
    loadRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 loadRequestDefaultTypeInternal _loadRequest_default_instance_;
PROTOBUF_CONSTEXPR loadResponse::loadResponse(
    ::_pbi::ConstantInitialized)
  : trackables_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , xpcfgrpcreturnvalue_(0){}
struct loadResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR loadResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~loadResponseDefaultTypeInternal() {}
  union {
    loadResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 loadResponseDefaultTypeInternal _loadResponse_default_instance_;
}  // namespace grpcIWorldGraphLoader
static ::_pb::Metadata file_level_metadata_grpcIWorldGraphLoaderService_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grpcIWorldGraphLoaderService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grpcIWorldGraphLoaderService_2eproto = nullptr;

const uint32_t TableStruct_grpcIWorldGraphLoaderService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIWorldGraphLoader::loadRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcIWorldGraphLoader::loadRequest, grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcIWorldGraphLoader::loadRequest, trackables_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIWorldGraphLoader::loadResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcIWorldGraphLoader::loadResponse, trackables_),
  PROTOBUF_FIELD_OFFSET(::grpcIWorldGraphLoader::loadResponse, xpcfgrpcreturnvalue_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpcIWorldGraphLoader::loadRequest)},
  { 8, -1, -1, sizeof(::grpcIWorldGraphLoader::loadResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::grpcIWorldGraphLoader::_loadRequest_default_instance_._instance,
  &::grpcIWorldGraphLoader::_loadResponse_default_instance_._instance,
};

const char descriptor_table_protodef_grpcIWorldGraphLoaderService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"grpcIWorldGraphLoaderService.proto\022\025gr"
  "pcIWorldGraphLoader\032\033google/protobuf/emp"
  "ty.proto\"F\n\013loadRequest\022#\n\033grpcServerCom"
  "pressionFormat\030\001 \001(\005\022\022\n\ntrackables\030\002 \001(\014"
  "\"\?\n\014loadResponse\022\022\n\ntrackables\030\001 \001(\014\022\033\n\023"
  "xpcfGrpcReturnValue\030\002 \001(\0212q\n\034grpcIWorldG"
  "raphLoaderService\022Q\n\004load\022\".grpcIWorldGr"
  "aphLoader.loadRequest\032#.grpcIWorldGraphL"
  "oader.loadResponse\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_grpcIWorldGraphLoaderService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_grpcIWorldGraphLoaderService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grpcIWorldGraphLoaderService_2eproto = {
    false, false, 348, descriptor_table_protodef_grpcIWorldGraphLoaderService_2eproto,
    "grpcIWorldGraphLoaderService.proto",
    &descriptor_table_grpcIWorldGraphLoaderService_2eproto_once, descriptor_table_grpcIWorldGraphLoaderService_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_grpcIWorldGraphLoaderService_2eproto::offsets,
    file_level_metadata_grpcIWorldGraphLoaderService_2eproto, file_level_enum_descriptors_grpcIWorldGraphLoaderService_2eproto,
    file_level_service_descriptors_grpcIWorldGraphLoaderService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grpcIWorldGraphLoaderService_2eproto_getter() {
  return &descriptor_table_grpcIWorldGraphLoaderService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grpcIWorldGraphLoaderService_2eproto(&descriptor_table_grpcIWorldGraphLoaderService_2eproto);
namespace grpcIWorldGraphLoader {

// ===================================================================

class loadRequest::_Internal {
 public:
};

loadRequest::loadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcIWorldGraphLoader.loadRequest)
}
loadRequest::loadRequest(const loadRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  trackables_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    trackables_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_trackables().empty()) {
    trackables_.Set(from._internal_trackables(), 
      GetArenaForAllocation());
  }
  grpcservercompressionformat_ = from.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcIWorldGraphLoader.loadRequest)
}

inline void loadRequest::SharedCtor() {
trackables_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  trackables_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
grpcservercompressionformat_ = 0;
}

loadRequest::~loadRequest() {
  // @@protoc_insertion_point(destructor:grpcIWorldGraphLoader.loadRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void loadRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  trackables_.Destroy();
}

void loadRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void loadRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIWorldGraphLoader.loadRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  trackables_.ClearToEmpty();
  grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* loadRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // bytes trackables = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_trackables();
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

uint8_t* loadRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIWorldGraphLoader.loadRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes trackables = 2;
  if (!this->_internal_trackables().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_trackables(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIWorldGraphLoader.loadRequest)
  return target;
}

size_t loadRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIWorldGraphLoader.loadRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes trackables = 2;
  if (!this->_internal_trackables().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_trackables());
  }

  // int32 grpcServerCompressionFormat = 1;
  if (this->_internal_grpcservercompressionformat() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_grpcservercompressionformat());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData loadRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    loadRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*loadRequest::GetClassData() const { return &_class_data_; }

void loadRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<loadRequest *>(to)->MergeFrom(
      static_cast<const loadRequest &>(from));
}


void loadRequest::MergeFrom(const loadRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIWorldGraphLoader.loadRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_trackables().empty()) {
    _internal_set_trackables(from._internal_trackables());
  }
  if (from._internal_grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void loadRequest::CopyFrom(const loadRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIWorldGraphLoader.loadRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool loadRequest::IsInitialized() const {
  return true;
}

void loadRequest::InternalSwap(loadRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &trackables_, lhs_arena,
      &other->trackables_, rhs_arena
  );
  swap(grpcservercompressionformat_, other->grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata loadRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcIWorldGraphLoaderService_2eproto_getter, &descriptor_table_grpcIWorldGraphLoaderService_2eproto_once,
      file_level_metadata_grpcIWorldGraphLoaderService_2eproto[0]);
}

// ===================================================================

class loadResponse::_Internal {
 public:
};

loadResponse::loadResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:grpcIWorldGraphLoader.loadResponse)
}
loadResponse::loadResponse(const loadResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  trackables_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    trackables_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_trackables().empty()) {
    trackables_.Set(from._internal_trackables(), 
      GetArenaForAllocation());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIWorldGraphLoader.loadResponse)
}

inline void loadResponse::SharedCtor() {
trackables_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  trackables_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
xpcfgrpcreturnvalue_ = 0;
}

loadResponse::~loadResponse() {
  // @@protoc_insertion_point(destructor:grpcIWorldGraphLoader.loadResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void loadResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  trackables_.Destroy();
}

void loadResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void loadResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIWorldGraphLoader.loadResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  trackables_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* loadResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes trackables = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_trackables();
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

uint8_t* loadResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIWorldGraphLoader.loadResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes trackables = 1;
  if (!this->_internal_trackables().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_trackables(), target);
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
  // @@protoc_insertion_point(serialize_to_array_end:grpcIWorldGraphLoader.loadResponse)
  return target;
}

size_t loadResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIWorldGraphLoader.loadResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes trackables = 1;
  if (!this->_internal_trackables().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_trackables());
  }

  // sint32 xpcfGrpcReturnValue = 2;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    total_size += ::_pbi::WireFormatLite::SInt32SizePlusOne(this->_internal_xpcfgrpcreturnvalue());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData loadResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    loadResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*loadResponse::GetClassData() const { return &_class_data_; }

void loadResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<loadResponse *>(to)->MergeFrom(
      static_cast<const loadResponse &>(from));
}


void loadResponse::MergeFrom(const loadResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIWorldGraphLoader.loadResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_trackables().empty()) {
    _internal_set_trackables(from._internal_trackables());
  }
  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void loadResponse::CopyFrom(const loadResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIWorldGraphLoader.loadResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool loadResponse::IsInitialized() const {
  return true;
}

void loadResponse::InternalSwap(loadResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &trackables_, lhs_arena,
      &other->trackables_, rhs_arena
  );
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata loadResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grpcIWorldGraphLoaderService_2eproto_getter, &descriptor_table_grpcIWorldGraphLoaderService_2eproto_once,
      file_level_metadata_grpcIWorldGraphLoaderService_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIWorldGraphLoader
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIWorldGraphLoader::loadRequest*
Arena::CreateMaybeMessage< ::grpcIWorldGraphLoader::loadRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIWorldGraphLoader::loadRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIWorldGraphLoader::loadResponse*
Arena::CreateMaybeMessage< ::grpcIWorldGraphLoader::loadResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIWorldGraphLoader::loadResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
