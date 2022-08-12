// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcI2Dto3DTransformDecomposerService.proto

#include "grpcI2Dto3DTransformDecomposerService.pb.h"

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
namespace grpcI2Dto3DTransformDecomposer {
constexpr decomposeRequest::decomposeRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : f_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , camparams_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , decomposedposes_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , grpcservercompressionformat_(0){}
struct decomposeRequestDefaultTypeInternal {
  constexpr decomposeRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~decomposeRequestDefaultTypeInternal() {}
  union {
    decomposeRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT decomposeRequestDefaultTypeInternal _decomposeRequest_default_instance_;
constexpr decomposeResponse::decomposeResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : decomposedposes_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , xpcfgrpcreturnvalue_(false){}
struct decomposeResponseDefaultTypeInternal {
  constexpr decomposeResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~decomposeResponseDefaultTypeInternal() {}
  union {
    decomposeResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT decomposeResponseDefaultTypeInternal _decomposeResponse_default_instance_;
}  // namespace grpcI2Dto3DTransformDecomposer
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcI2Dto3DTransformDecomposerService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcI2Dto3DTransformDecomposerService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcI2Dto3DTransformDecomposerService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcI2Dto3DTransformDecomposerService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeRequest, grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeRequest, f_),
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeRequest, camparams_),
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeRequest, decomposedposes_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeResponse, decomposedposes_),
  PROTOBUF_FIELD_OFFSET(::grpcI2Dto3DTransformDecomposer::decomposeResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcI2Dto3DTransformDecomposer::decomposeRequest)},
  { 9, -1, sizeof(::grpcI2Dto3DTransformDecomposer::decomposeResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcI2Dto3DTransformDecomposer::_decomposeRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcI2Dto3DTransformDecomposer::_decomposeResponse_default_instance_),
};

const char descriptor_table_protodef_grpcI2Dto3DTransformDecomposerService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+grpcI2Dto3DTransformDecomposerService."
  "proto\022\036grpcI2Dto3DTransformDecomposer\032\033g"
  "oogle/protobuf/empty.proto\"n\n\020decomposeR"
  "equest\022#\n\033grpcServerCompressionFormat\030\001 "
  "\001(\005\022\t\n\001F\030\002 \001(\014\022\021\n\tcamParams\030\003 \001(\014\022\027\n\017dec"
  "omposedPoses\030\004 \001(\014\"I\n\021decomposeResponse\022"
  "\027\n\017decomposedPoses\030\001 \001(\014\022\033\n\023xpcfGrpcRetu"
  "rnValue\030\002 \001(\0102\233\001\n%grpcI2Dto3DTransformDe"
  "composerService\022r\n\tdecompose\0220.grpcI2Dto"
  "3DTransformDecomposer.decomposeRequest\0321"
  ".grpcI2Dto3DTransformDecomposer.decompos"
  "eResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto = {
  false, false, 459, descriptor_table_protodef_grpcI2Dto3DTransformDecomposerService_2eproto, "grpcI2Dto3DTransformDecomposerService.proto", 
  &descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto_once, descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcI2Dto3DTransformDecomposerService_2eproto::offsets,
  file_level_metadata_grpcI2Dto3DTransformDecomposerService_2eproto, file_level_enum_descriptors_grpcI2Dto3DTransformDecomposerService_2eproto, file_level_service_descriptors_grpcI2Dto3DTransformDecomposerService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto);
  return descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcI2Dto3DTransformDecomposerService_2eproto(&descriptor_table_grpcI2Dto3DTransformDecomposerService_2eproto);
namespace grpcI2Dto3DTransformDecomposer {

// ===================================================================

class decomposeRequest::_Internal {
 public:
};

decomposeRequest::decomposeRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcI2Dto3DTransformDecomposer.decomposeRequest)
}
decomposeRequest::decomposeRequest(const decomposeRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  f_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_f().empty()) {
    f_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_f(), 
      GetArena());
  }
  camparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_camparams().empty()) {
    camparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_camparams(), 
      GetArena());
  }
  decomposedposes_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_decomposedposes().empty()) {
    decomposedposes_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_decomposedposes(), 
      GetArena());
  }
  grpcservercompressionformat_ = from.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcI2Dto3DTransformDecomposer.decomposeRequest)
}

void decomposeRequest::SharedCtor() {
f_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
camparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
decomposedposes_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
grpcservercompressionformat_ = 0;
}

decomposeRequest::~decomposeRequest() {
  // @@protoc_insertion_point(destructor:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void decomposeRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  f_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  camparams_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  decomposedposes_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void decomposeRequest::ArenaDtor(void* object) {
  decomposeRequest* _this = reinterpret_cast< decomposeRequest* >(object);
  (void)_this;
}
void decomposeRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void decomposeRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void decomposeRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  f_.ClearToEmpty();
  camparams_.ClearToEmpty();
  decomposedposes_.ClearToEmpty();
  grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* decomposeRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 grpcServerCompressionFormat = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          grpcservercompressionformat_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes F = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_f();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes camParams = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_camparams();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes decomposedPoses = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_decomposedposes();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* decomposeRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes F = 2;
  if (this->f().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_f(), target);
  }

  // bytes camParams = 3;
  if (this->camparams().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_camparams(), target);
  }

  // bytes decomposedPoses = 4;
  if (this->decomposedposes().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_decomposedposes(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  return target;
}

size_t decomposeRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes F = 2;
  if (this->f().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_f());
  }

  // bytes camParams = 3;
  if (this->camparams().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_camparams());
  }

  // bytes decomposedPoses = 4;
  if (this->decomposedposes().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_decomposedposes());
  }

  // int32 grpcServerCompressionFormat = 1;
  if (this->grpcservercompressionformat() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_grpcservercompressionformat());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void decomposeRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const decomposeRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<decomposeRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcI2Dto3DTransformDecomposer.decomposeRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcI2Dto3DTransformDecomposer.decomposeRequest)
    MergeFrom(*source);
  }
}

void decomposeRequest::MergeFrom(const decomposeRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.f().size() > 0) {
    _internal_set_f(from._internal_f());
  }
  if (from.camparams().size() > 0) {
    _internal_set_camparams(from._internal_camparams());
  }
  if (from.decomposedposes().size() > 0) {
    _internal_set_decomposedposes(from._internal_decomposedposes());
  }
  if (from.grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
}

void decomposeRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void decomposeRequest::CopyFrom(const decomposeRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcI2Dto3DTransformDecomposer.decomposeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool decomposeRequest::IsInitialized() const {
  return true;
}

void decomposeRequest::InternalSwap(decomposeRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  f_.Swap(&other->f_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  camparams_.Swap(&other->camparams_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  decomposedposes_.Swap(&other->decomposedposes_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(grpcservercompressionformat_, other->grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata decomposeRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class decomposeResponse::_Internal {
 public:
};

decomposeResponse::decomposeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcI2Dto3DTransformDecomposer.decomposeResponse)
}
decomposeResponse::decomposeResponse(const decomposeResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  decomposedposes_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_decomposedposes().empty()) {
    decomposedposes_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_decomposedposes(), 
      GetArena());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcI2Dto3DTransformDecomposer.decomposeResponse)
}

void decomposeResponse::SharedCtor() {
decomposedposes_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
xpcfgrpcreturnvalue_ = false;
}

decomposeResponse::~decomposeResponse() {
  // @@protoc_insertion_point(destructor:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void decomposeResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  decomposedposes_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void decomposeResponse::ArenaDtor(void* object) {
  decomposeResponse* _this = reinterpret_cast< decomposeResponse* >(object);
  (void)_this;
}
void decomposeResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void decomposeResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void decomposeResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  decomposedposes_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* decomposeResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes decomposedPoses = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_decomposedposes();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool xpcfGrpcReturnValue = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          xpcfgrpcreturnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* decomposeResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes decomposedPoses = 1;
  if (this->decomposedposes().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_decomposedposes(), target);
  }

  // bool xpcfGrpcReturnValue = 2;
  if (this->xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  return target;
}

size_t decomposeResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes decomposedPoses = 1;
  if (this->decomposedposes().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_decomposedposes());
  }

  // bool xpcfGrpcReturnValue = 2;
  if (this->xpcfgrpcreturnvalue() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void decomposeResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const decomposeResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<decomposeResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcI2Dto3DTransformDecomposer.decomposeResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcI2Dto3DTransformDecomposer.decomposeResponse)
    MergeFrom(*source);
  }
}

void decomposeResponse::MergeFrom(const decomposeResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.decomposedposes().size() > 0) {
    _internal_set_decomposedposes(from._internal_decomposedposes());
  }
  if (from.xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
}

void decomposeResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void decomposeResponse::CopyFrom(const decomposeResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcI2Dto3DTransformDecomposer.decomposeResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool decomposeResponse::IsInitialized() const {
  return true;
}

void decomposeResponse::InternalSwap(decomposeResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  decomposedposes_.Swap(&other->decomposedposes_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata decomposeResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcI2Dto3DTransformDecomposer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcI2Dto3DTransformDecomposer::decomposeRequest* Arena::CreateMaybeMessage< ::grpcI2Dto3DTransformDecomposer::decomposeRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcI2Dto3DTransformDecomposer::decomposeRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcI2Dto3DTransformDecomposer::decomposeResponse* Arena::CreateMaybeMessage< ::grpcI2Dto3DTransformDecomposer::decomposeResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcI2Dto3DTransformDecomposer::decomposeResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
