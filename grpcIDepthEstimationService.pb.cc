// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIDepthEstimationService.proto

#include "grpcIDepthEstimationService.pb.h"

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
namespace grpcIDepthEstimation {
constexpr estimateRequest::estimateRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : matches_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , type_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , rectkeypoints1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , rectkeypoints2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , grpcservercompressionformat_(0)
  , focal_(0)
  , baseline_(0){}
struct estimateRequestDefaultTypeInternal {
  constexpr estimateRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~estimateRequestDefaultTypeInternal() {}
  union {
    estimateRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT estimateRequestDefaultTypeInternal _estimateRequest_default_instance_;
constexpr estimateResponse::estimateResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : rectkeypoints1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , rectkeypoints2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , xpcfgrpcreturnvalue_(0){}
struct estimateResponseDefaultTypeInternal {
  constexpr estimateResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~estimateResponseDefaultTypeInternal() {}
  union {
    estimateResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT estimateResponseDefaultTypeInternal _estimateResponse_default_instance_;
}  // namespace grpcIDepthEstimation
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcIDepthEstimationService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcIDepthEstimationService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcIDepthEstimationService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcIDepthEstimationService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, grpcservercompressionformat_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, matches_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, focal_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, baseline_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, type_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, rectkeypoints1_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateRequest, rectkeypoints2_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateResponse, rectkeypoints1_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateResponse, rectkeypoints2_),
  PROTOBUF_FIELD_OFFSET(::grpcIDepthEstimation::estimateResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcIDepthEstimation::estimateRequest)},
  { 12, -1, sizeof(::grpcIDepthEstimation::estimateResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIDepthEstimation::_estimateRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIDepthEstimation::_estimateResponse_default_instance_),
};

const char descriptor_table_protodef_grpcIDepthEstimationService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!grpcIDepthEstimationService.proto\022\024grp"
  "cIDepthEstimation\032\033google/protobuf/empty"
  ".proto\"\246\001\n\017estimateRequest\022#\n\033grpcServer"
  "CompressionFormat\030\001 \001(\005\022\017\n\007matches\030\002 \001(\014"
  "\022\r\n\005focal\030\003 \001(\002\022\020\n\010baseline\030\004 \001(\002\022\014\n\004typ"
  "e\030\005 \001(\014\022\026\n\016rectKeypoints1\030\006 \001(\014\022\026\n\016rectK"
  "eypoints2\030\007 \001(\014\"_\n\020estimateResponse\022\026\n\016r"
  "ectKeypoints1\030\001 \001(\014\022\026\n\016rectKeypoints2\030\002 "
  "\001(\014\022\033\n\023xpcfGrpcReturnValue\030\003 \001(\0212z\n\033grpc"
  "IDepthEstimationService\022[\n\010estimate\022%.gr"
  "pcIDepthEstimation.estimateRequest\032&.grp"
  "cIDepthEstimation.estimateResponse\"\000b\006pr"
  "oto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcIDepthEstimationService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcIDepthEstimationService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIDepthEstimationService_2eproto = {
  false, false, 484, descriptor_table_protodef_grpcIDepthEstimationService_2eproto, "grpcIDepthEstimationService.proto", 
  &descriptor_table_grpcIDepthEstimationService_2eproto_once, descriptor_table_grpcIDepthEstimationService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcIDepthEstimationService_2eproto::offsets,
  file_level_metadata_grpcIDepthEstimationService_2eproto, file_level_enum_descriptors_grpcIDepthEstimationService_2eproto, file_level_service_descriptors_grpcIDepthEstimationService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_grpcIDepthEstimationService_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_grpcIDepthEstimationService_2eproto);
  return descriptor_table_grpcIDepthEstimationService_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcIDepthEstimationService_2eproto(&descriptor_table_grpcIDepthEstimationService_2eproto);
namespace grpcIDepthEstimation {

// ===================================================================

class estimateRequest::_Internal {
 public:
};

estimateRequest::estimateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcIDepthEstimation.estimateRequest)
}
estimateRequest::estimateRequest(const estimateRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  matches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_matches().empty()) {
    matches_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_matches(), 
      GetArena());
  }
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type().empty()) {
    type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type(), 
      GetArena());
  }
  rectkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_rectkeypoints1().empty()) {
    rectkeypoints1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_rectkeypoints1(), 
      GetArena());
  }
  rectkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_rectkeypoints2().empty()) {
    rectkeypoints2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_rectkeypoints2(), 
      GetArena());
  }
  ::memcpy(&grpcservercompressionformat_, &from.grpcservercompressionformat_,
    static_cast<size_t>(reinterpret_cast<char*>(&baseline_) -
    reinterpret_cast<char*>(&grpcservercompressionformat_)) + sizeof(baseline_));
  // @@protoc_insertion_point(copy_constructor:grpcIDepthEstimation.estimateRequest)
}

void estimateRequest::SharedCtor() {
matches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
rectkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
rectkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&grpcservercompressionformat_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&baseline_) -
    reinterpret_cast<char*>(&grpcservercompressionformat_)) + sizeof(baseline_));
}

estimateRequest::~estimateRequest() {
  // @@protoc_insertion_point(destructor:grpcIDepthEstimation.estimateRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void estimateRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  matches_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  rectkeypoints1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  rectkeypoints2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void estimateRequest::ArenaDtor(void* object) {
  estimateRequest* _this = reinterpret_cast< estimateRequest* >(object);
  (void)_this;
}
void estimateRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void estimateRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void estimateRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIDepthEstimation.estimateRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  matches_.ClearToEmpty();
  type_.ClearToEmpty();
  rectkeypoints1_.ClearToEmpty();
  rectkeypoints2_.ClearToEmpty();
  ::memset(&grpcservercompressionformat_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&baseline_) -
      reinterpret_cast<char*>(&grpcservercompressionformat_)) + sizeof(baseline_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* estimateRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // bytes matches = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_matches();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float focal = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          focal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float baseline = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          baseline_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // bytes type = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes rectKeypoints1 = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_rectkeypoints1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes rectKeypoints2 = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_rectkeypoints2();
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

::PROTOBUF_NAMESPACE_ID::uint8* estimateRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIDepthEstimation.estimateRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 grpcServerCompressionFormat = 1;
  if (this->grpcservercompressionformat() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_grpcservercompressionformat(), target);
  }

  // bytes matches = 2;
  if (this->matches().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_matches(), target);
  }

  // float focal = 3;
  if (!(this->focal() <= 0 && this->focal() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_focal(), target);
  }

  // float baseline = 4;
  if (!(this->baseline() <= 0 && this->baseline() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_baseline(), target);
  }

  // bytes type = 5;
  if (this->type().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_type(), target);
  }

  // bytes rectKeypoints1 = 6;
  if (this->rectkeypoints1().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_rectkeypoints1(), target);
  }

  // bytes rectKeypoints2 = 7;
  if (this->rectkeypoints2().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_rectkeypoints2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIDepthEstimation.estimateRequest)
  return target;
}

size_t estimateRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIDepthEstimation.estimateRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes matches = 2;
  if (this->matches().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_matches());
  }

  // bytes type = 5;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_type());
  }

  // bytes rectKeypoints1 = 6;
  if (this->rectkeypoints1().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_rectkeypoints1());
  }

  // bytes rectKeypoints2 = 7;
  if (this->rectkeypoints2().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_rectkeypoints2());
  }

  // int32 grpcServerCompressionFormat = 1;
  if (this->grpcservercompressionformat() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_grpcservercompressionformat());
  }

  // float focal = 3;
  if (!(this->focal() <= 0 && this->focal() >= 0)) {
    total_size += 1 + 4;
  }

  // float baseline = 4;
  if (!(this->baseline() <= 0 && this->baseline() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void estimateRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcIDepthEstimation.estimateRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const estimateRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<estimateRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcIDepthEstimation.estimateRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcIDepthEstimation.estimateRequest)
    MergeFrom(*source);
  }
}

void estimateRequest::MergeFrom(const estimateRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIDepthEstimation.estimateRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.matches().size() > 0) {
    _internal_set_matches(from._internal_matches());
  }
  if (from.type().size() > 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.rectkeypoints1().size() > 0) {
    _internal_set_rectkeypoints1(from._internal_rectkeypoints1());
  }
  if (from.rectkeypoints2().size() > 0) {
    _internal_set_rectkeypoints2(from._internal_rectkeypoints2());
  }
  if (from.grpcservercompressionformat() != 0) {
    _internal_set_grpcservercompressionformat(from._internal_grpcservercompressionformat());
  }
  if (!(from.focal() <= 0 && from.focal() >= 0)) {
    _internal_set_focal(from._internal_focal());
  }
  if (!(from.baseline() <= 0 && from.baseline() >= 0)) {
    _internal_set_baseline(from._internal_baseline());
  }
}

void estimateRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcIDepthEstimation.estimateRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void estimateRequest::CopyFrom(const estimateRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIDepthEstimation.estimateRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool estimateRequest::IsInitialized() const {
  return true;
}

void estimateRequest::InternalSwap(estimateRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  matches_.Swap(&other->matches_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  rectkeypoints1_.Swap(&other->rectkeypoints1_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  rectkeypoints2_.Swap(&other->rectkeypoints2_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(estimateRequest, baseline_)
      + sizeof(estimateRequest::baseline_)
      - PROTOBUF_FIELD_OFFSET(estimateRequest, grpcservercompressionformat_)>(
          reinterpret_cast<char*>(&grpcservercompressionformat_),
          reinterpret_cast<char*>(&other->grpcservercompressionformat_));
}

::PROTOBUF_NAMESPACE_ID::Metadata estimateRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class estimateResponse::_Internal {
 public:
};

estimateResponse::estimateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcIDepthEstimation.estimateResponse)
}
estimateResponse::estimateResponse(const estimateResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  rectkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_rectkeypoints1().empty()) {
    rectkeypoints1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_rectkeypoints1(), 
      GetArena());
  }
  rectkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_rectkeypoints2().empty()) {
    rectkeypoints2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_rectkeypoints2(), 
      GetArena());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIDepthEstimation.estimateResponse)
}

void estimateResponse::SharedCtor() {
rectkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
rectkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
xpcfgrpcreturnvalue_ = 0;
}

estimateResponse::~estimateResponse() {
  // @@protoc_insertion_point(destructor:grpcIDepthEstimation.estimateResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void estimateResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  rectkeypoints1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  rectkeypoints2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void estimateResponse::ArenaDtor(void* object) {
  estimateResponse* _this = reinterpret_cast< estimateResponse* >(object);
  (void)_this;
}
void estimateResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void estimateResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void estimateResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIDepthEstimation.estimateResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rectkeypoints1_.ClearToEmpty();
  rectkeypoints2_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* estimateResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes rectKeypoints1 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_rectkeypoints1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes rectKeypoints2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_rectkeypoints2();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 xpcfGrpcReturnValue = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
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

::PROTOBUF_NAMESPACE_ID::uint8* estimateResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIDepthEstimation.estimateResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes rectKeypoints1 = 1;
  if (this->rectkeypoints1().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_rectkeypoints1(), target);
  }

  // bytes rectKeypoints2 = 2;
  if (this->rectkeypoints2().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_rectkeypoints2(), target);
  }

  // sint32 xpcfGrpcReturnValue = 3;
  if (this->xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(3, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIDepthEstimation.estimateResponse)
  return target;
}

size_t estimateResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIDepthEstimation.estimateResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes rectKeypoints1 = 1;
  if (this->rectkeypoints1().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_rectkeypoints1());
  }

  // bytes rectKeypoints2 = 2;
  if (this->rectkeypoints2().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_rectkeypoints2());
  }

  // sint32 xpcfGrpcReturnValue = 3;
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

void estimateResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcIDepthEstimation.estimateResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const estimateResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<estimateResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcIDepthEstimation.estimateResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcIDepthEstimation.estimateResponse)
    MergeFrom(*source);
  }
}

void estimateResponse::MergeFrom(const estimateResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIDepthEstimation.estimateResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.rectkeypoints1().size() > 0) {
    _internal_set_rectkeypoints1(from._internal_rectkeypoints1());
  }
  if (from.rectkeypoints2().size() > 0) {
    _internal_set_rectkeypoints2(from._internal_rectkeypoints2());
  }
  if (from.xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
}

void estimateResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcIDepthEstimation.estimateResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void estimateResponse::CopyFrom(const estimateResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIDepthEstimation.estimateResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool estimateResponse::IsInitialized() const {
  return true;
}

void estimateResponse::InternalSwap(estimateResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  rectkeypoints1_.Swap(&other->rectkeypoints1_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  rectkeypoints2_.Swap(&other->rectkeypoints2_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata estimateResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIDepthEstimation
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIDepthEstimation::estimateRequest* Arena::CreateMaybeMessage< ::grpcIDepthEstimation::estimateRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIDepthEstimation::estimateRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIDepthEstimation::estimateResponse* Arena::CreateMaybeMessage< ::grpcIDepthEstimation::estimateResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIDepthEstimation::estimateResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
