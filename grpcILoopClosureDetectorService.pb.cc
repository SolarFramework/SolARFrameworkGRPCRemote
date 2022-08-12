// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcILoopClosureDetectorService.proto

#include "grpcILoopClosureDetectorService.pb.h"

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
namespace grpcILoopClosureDetector {
constexpr detectRequest::detectRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : querykeyframe_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , detectedloopkeyframe_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sim3transform_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , duplicatedpointsindices_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , grpcservercompressionformat_(0){}
struct detectRequestDefaultTypeInternal {
  constexpr detectRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~detectRequestDefaultTypeInternal() {}
  union {
    detectRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT detectRequestDefaultTypeInternal _detectRequest_default_instance_;
constexpr detectResponse::detectResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : detectedloopkeyframe_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sim3transform_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , duplicatedpointsindices_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , xpcfgrpcreturnvalue_(0){}
struct detectResponseDefaultTypeInternal {
  constexpr detectResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~detectResponseDefaultTypeInternal() {}
  union {
    detectResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT detectResponseDefaultTypeInternal _detectResponse_default_instance_;
}  // namespace grpcILoopClosureDetector
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcILoopClosureDetectorService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcILoopClosureDetectorService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcILoopClosureDetectorService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcILoopClosureDetectorService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectRequest, grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectRequest, querykeyframe_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectRequest, detectedloopkeyframe_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectRequest, sim3transform_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectRequest, duplicatedpointsindices_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectResponse, detectedloopkeyframe_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectResponse, sim3transform_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectResponse, duplicatedpointsindices_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopClosureDetector::detectResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcILoopClosureDetector::detectRequest)},
  { 10, -1, sizeof(::grpcILoopClosureDetector::detectResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcILoopClosureDetector::_detectRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcILoopClosureDetector::_detectResponse_default_instance_),
};

const char descriptor_table_protodef_grpcILoopClosureDetectorService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%grpcILoopClosureDetectorService.proto\022"
  "\030grpcILoopClosureDetector\032\033google/protob"
  "uf/empty.proto\"\241\001\n\rdetectRequest\022#\n\033grpc"
  "ServerCompressionFormat\030\001 \001(\005\022\025\n\rqueryKe"
  "yframe\030\002 \001(\014\022\034\n\024detectedLoopKeyframe\030\003 \001"
  "(\014\022\025\n\rsim3Transform\030\004 \001(\014\022\037\n\027duplicatedP"
  "ointsIndices\030\005 \001(\014\"\203\001\n\016detectResponse\022\034\n"
  "\024detectedLoopKeyframe\030\001 \001(\014\022\025\n\rsim3Trans"
  "form\030\002 \001(\014\022\037\n\027duplicatedPointsIndices\030\003 "
  "\001(\014\022\033\n\023xpcfGrpcReturnValue\030\004 \001(\0212\200\001\n\037grp"
  "cILoopClosureDetectorService\022]\n\006detect\022\'"
  ".grpcILoopClosureDetector.detectRequest\032"
  "(.grpcILoopClosureDetector.detectRespons"
  "e\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcILoopClosureDetectorService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcILoopClosureDetectorService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcILoopClosureDetectorService_2eproto = {
  false, false, 531, descriptor_table_protodef_grpcILoopClosureDetectorService_2eproto, "grpcILoopClosureDetectorService.proto", 
  &descriptor_table_grpcILoopClosureDetectorService_2eproto_once, descriptor_table_grpcILoopClosureDetectorService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcILoopClosureDetectorService_2eproto::offsets,
  file_level_metadata_grpcILoopClosureDetectorService_2eproto, file_level_enum_descriptors_grpcILoopClosureDetectorService_2eproto, file_level_service_descriptors_grpcILoopClosureDetectorService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_grpcILoopClosureDetectorService_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_grpcILoopClosureDetectorService_2eproto);
  return descriptor_table_grpcILoopClosureDetectorService_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcILoopClosureDetectorService_2eproto(&descriptor_table_grpcILoopClosureDetectorService_2eproto);
namespace grpcILoopClosureDetector {

// ===================================================================

class detectRequest::_Internal {
 public:
};

detectRequest::detectRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcILoopClosureDetector.detectRequest)
}
detectRequest::detectRequest(const detectRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  querykeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_querykeyframe().empty()) {
    querykeyframe_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_querykeyframe(), 
      GetArena());
  }
  detectedloopkeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_detectedloopkeyframe().empty()) {
    detectedloopkeyframe_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_detectedloopkeyframe(), 
      GetArena());
  }
  sim3transform_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sim3transform().empty()) {
    sim3transform_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sim3transform(), 
      GetArena());
  }
  duplicatedpointsindices_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_duplicatedpointsindices().empty()) {
    duplicatedpointsindices_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_duplicatedpointsindices(), 
      GetArena());
  }
  grpcservercompressionformat_ = from.grpcservercompressionformat_;
  // @@protoc_insertion_point(copy_constructor:grpcILoopClosureDetector.detectRequest)
}

void detectRequest::SharedCtor() {
querykeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
detectedloopkeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
sim3transform_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
duplicatedpointsindices_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
grpcservercompressionformat_ = 0;
}

detectRequest::~detectRequest() {
  // @@protoc_insertion_point(destructor:grpcILoopClosureDetector.detectRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void detectRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  querykeyframe_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  detectedloopkeyframe_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sim3transform_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  duplicatedpointsindices_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void detectRequest::ArenaDtor(void* object) {
  detectRequest* _this = reinterpret_cast< detectRequest* >(object);
  (void)_this;
}
void detectRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void detectRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void detectRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcILoopClosureDetector.detectRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  querykeyframe_.ClearToEmpty();
  detectedloopkeyframe_.ClearToEmpty();
  sim3transform_.ClearToEmpty();
  duplicatedpointsindices_.ClearToEmpty();
  grpcservercompressionformat_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* detectRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // bytes queryKeyframe = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_querykeyframe();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes detectedLoopKeyframe = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_detectedloopkeyframe();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes sim3Transform = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_sim3transform();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes duplicatedPointsIndices = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_duplicatedpointsindices();
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

::PROTOBUF_NAMESPACE_ID::uint8* detectRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcILoopClosureDetector.detectRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes queryKeyframe = 2;
  if (this->querykeyframe().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_querykeyframe(), target);
  }

  // bytes detectedLoopKeyframe = 3;
  if (this->detectedloopkeyframe().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_detectedloopkeyframe(), target);
  }

  // bytes sim3Transform = 4;
  if (this->sim3transform().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_sim3transform(), target);
  }

  // bytes duplicatedPointsIndices = 5;
  if (this->duplicatedpointsindices().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_duplicatedpointsindices(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcILoopClosureDetector.detectRequest)
  return target;
}

size_t detectRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcILoopClosureDetector.detectRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes queryKeyframe = 2;
  if (this->querykeyframe().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_querykeyframe());
  }

  // bytes detectedLoopKeyframe = 3;
  if (this->detectedloopkeyframe().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_detectedloopkeyframe());
  }

  // bytes sim3Transform = 4;
  if (this->sim3transform().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sim3transform());
  }

  // bytes duplicatedPointsIndices = 5;
  if (this->duplicatedpointsindices().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_duplicatedpointsindices());
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

void detectRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcILoopClosureDetector.detectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const detectRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<detectRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcILoopClosureDetector.detectRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcILoopClosureDetector.detectRequest)
    MergeFrom(*source);
  }
}

void detectRequest::MergeFrom(const detectRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcILoopClosureDetector.detectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.querykeyframe().size() > 0) {
    _internal_set_querykeyframe(from._internal_querykeyframe());
  }
  if (from.detectedloopkeyframe().size() > 0) {
    _internal_set_detectedloopkeyframe(from._internal_detectedloopkeyframe());
  }
  if (from.sim3transform().size() > 0) {
    _internal_set_sim3transform(from._internal_sim3transform());
  }
  if (from.duplicatedpointsindices().size() > 0) {
    _internal_set_duplicatedpointsindices(from._internal_duplicatedpointsindices());
  }
  if (from.grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
}

void detectRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcILoopClosureDetector.detectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void detectRequest::CopyFrom(const detectRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcILoopClosureDetector.detectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool detectRequest::IsInitialized() const {
  return true;
}

void detectRequest::InternalSwap(detectRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  querykeyframe_.Swap(&other->querykeyframe_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  detectedloopkeyframe_.Swap(&other->detectedloopkeyframe_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sim3transform_.Swap(&other->sim3transform_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  duplicatedpointsindices_.Swap(&other->duplicatedpointsindices_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(grpcservercompressionformat_, other->grpcservercompressionformat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata detectRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class detectResponse::_Internal {
 public:
};

detectResponse::detectResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcILoopClosureDetector.detectResponse)
}
detectResponse::detectResponse(const detectResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  detectedloopkeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_detectedloopkeyframe().empty()) {
    detectedloopkeyframe_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_detectedloopkeyframe(), 
      GetArena());
  }
  sim3transform_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sim3transform().empty()) {
    sim3transform_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sim3transform(), 
      GetArena());
  }
  duplicatedpointsindices_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_duplicatedpointsindices().empty()) {
    duplicatedpointsindices_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_duplicatedpointsindices(), 
      GetArena());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcILoopClosureDetector.detectResponse)
}

void detectResponse::SharedCtor() {
detectedloopkeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
sim3transform_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
duplicatedpointsindices_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
xpcfgrpcreturnvalue_ = 0;
}

detectResponse::~detectResponse() {
  // @@protoc_insertion_point(destructor:grpcILoopClosureDetector.detectResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void detectResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  detectedloopkeyframe_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sim3transform_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  duplicatedpointsindices_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void detectResponse::ArenaDtor(void* object) {
  detectResponse* _this = reinterpret_cast< detectResponse* >(object);
  (void)_this;
}
void detectResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void detectResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void detectResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcILoopClosureDetector.detectResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  detectedloopkeyframe_.ClearToEmpty();
  sim3transform_.ClearToEmpty();
  duplicatedpointsindices_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* detectResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes detectedLoopKeyframe = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_detectedloopkeyframe();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes sim3Transform = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_sim3transform();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes duplicatedPointsIndices = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_duplicatedpointsindices();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 xpcfGrpcReturnValue = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          xpcfgrpcreturnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* detectResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcILoopClosureDetector.detectResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes detectedLoopKeyframe = 1;
  if (this->detectedloopkeyframe().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_detectedloopkeyframe(), target);
  }

  // bytes sim3Transform = 2;
  if (this->sim3transform().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_sim3transform(), target);
  }

  // bytes duplicatedPointsIndices = 3;
  if (this->duplicatedpointsindices().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_duplicatedpointsindices(), target);
  }

  // sint32 xpcfGrpcReturnValue = 4;
  if (this->xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(4, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcILoopClosureDetector.detectResponse)
  return target;
}

size_t detectResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcILoopClosureDetector.detectResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes detectedLoopKeyframe = 1;
  if (this->detectedloopkeyframe().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_detectedloopkeyframe());
  }

  // bytes sim3Transform = 2;
  if (this->sim3transform().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sim3transform());
  }

  // bytes duplicatedPointsIndices = 3;
  if (this->duplicatedpointsindices().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_duplicatedpointsindices());
  }

  // sint32 xpcfGrpcReturnValue = 4;
  if (this->xpcfgrpcreturnvalue() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_xpcfgrpcreturnvalue());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void detectResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcILoopClosureDetector.detectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const detectResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<detectResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcILoopClosureDetector.detectResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcILoopClosureDetector.detectResponse)
    MergeFrom(*source);
  }
}

void detectResponse::MergeFrom(const detectResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcILoopClosureDetector.detectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.detectedloopkeyframe().size() > 0) {
    _internal_set_detectedloopkeyframe(from._internal_detectedloopkeyframe());
  }
  if (from.sim3transform().size() > 0) {
    _internal_set_sim3transform(from._internal_sim3transform());
  }
  if (from.duplicatedpointsindices().size() > 0) {
    _internal_set_duplicatedpointsindices(from._internal_duplicatedpointsindices());
  }
  if (from.xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
}

void detectResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcILoopClosureDetector.detectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void detectResponse::CopyFrom(const detectResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcILoopClosureDetector.detectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool detectResponse::IsInitialized() const {
  return true;
}

void detectResponse::InternalSwap(detectResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  detectedloopkeyframe_.Swap(&other->detectedloopkeyframe_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sim3transform_.Swap(&other->sim3transform_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  duplicatedpointsindices_.Swap(&other->duplicatedpointsindices_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata detectResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcILoopClosureDetector
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcILoopClosureDetector::detectRequest* Arena::CreateMaybeMessage< ::grpcILoopClosureDetector::detectRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcILoopClosureDetector::detectRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcILoopClosureDetector::detectResponse* Arena::CreateMaybeMessage< ::grpcILoopClosureDetector::detectResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcILoopClosureDetector::detectResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
