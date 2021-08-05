// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcILoopCorrectorService.proto

#include "grpcILoopCorrectorService.pb.h"

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
namespace grpcILoopCorrector {
constexpr setCameraParametersRequest::setCameraParametersRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : intrinsicparams_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , distortionparams_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct setCameraParametersRequestDefaultTypeInternal {
  constexpr setCameraParametersRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~setCameraParametersRequestDefaultTypeInternal() {}
  union {
    setCameraParametersRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT setCameraParametersRequestDefaultTypeInternal _setCameraParametersRequest_default_instance_;
constexpr correctRequest::correctRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : querykeyframe_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , detectedloopkeyframe_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , s_wl_wc_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , duplicatedpointsindices_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct correctRequestDefaultTypeInternal {
  constexpr correctRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~correctRequestDefaultTypeInternal() {}
  union {
    correctRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT correctRequestDefaultTypeInternal _correctRequest_default_instance_;
constexpr correctResponse::correctResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : xpcfgrpcreturnvalue_(0){}
struct correctResponseDefaultTypeInternal {
  constexpr correctResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~correctResponseDefaultTypeInternal() {}
  union {
    correctResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT correctResponseDefaultTypeInternal _correctResponse_default_instance_;
}  // namespace grpcILoopCorrector
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcILoopCorrectorService_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcILoopCorrectorService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcILoopCorrectorService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcILoopCorrectorService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::setCameraParametersRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::setCameraParametersRequest, intrinsicparams_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::setCameraParametersRequest, distortionparams_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctRequest, querykeyframe_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctRequest, detectedloopkeyframe_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctRequest, s_wl_wc_),
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctRequest, duplicatedpointsindices_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcILoopCorrector::correctResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcILoopCorrector::setCameraParametersRequest)},
  { 7, -1, sizeof(::grpcILoopCorrector::correctRequest)},
  { 16, -1, sizeof(::grpcILoopCorrector::correctResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcILoopCorrector::_setCameraParametersRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcILoopCorrector::_correctRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcILoopCorrector::_correctResponse_default_instance_),
};

const char descriptor_table_protodef_grpcILoopCorrectorService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037grpcILoopCorrectorService.proto\022\022grpcI"
  "LoopCorrector\032\033google/protobuf/empty.pro"
  "to\"O\n\032setCameraParametersRequest\022\027\n\017intr"
  "insicParams\030\001 \001(\014\022\030\n\020distortionParams\030\002 "
  "\001(\014\"w\n\016correctRequest\022\025\n\rqueryKeyframe\030\001"
  " \001(\014\022\034\n\024detectedLoopKeyframe\030\002 \001(\014\022\017\n\007S_"
  "wl_wc\030\003 \001(\014\022\037\n\027duplicatedPointsIndices\030\004"
  " \001(\014\".\n\017correctResponse\022\033\n\023xpcfGrpcRetur"
  "nValue\030\001 \001(\0212\322\001\n\031grpcILoopCorrectorServi"
  "ce\022_\n\023setCameraParameters\022..grpcILoopCor"
  "rector.setCameraParametersRequest\032\026.goog"
  "le.protobuf.Empty\"\000\022T\n\007correct\022\".grpcILo"
  "opCorrector.correctRequest\032#.grpcILoopCo"
  "rrector.correctResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcILoopCorrectorService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcILoopCorrectorService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcILoopCorrectorService_2eproto = {
  false, false, 553, descriptor_table_protodef_grpcILoopCorrectorService_2eproto, "grpcILoopCorrectorService.proto", 
  &descriptor_table_grpcILoopCorrectorService_2eproto_once, descriptor_table_grpcILoopCorrectorService_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_grpcILoopCorrectorService_2eproto::offsets,
  file_level_metadata_grpcILoopCorrectorService_2eproto, file_level_enum_descriptors_grpcILoopCorrectorService_2eproto, file_level_service_descriptors_grpcILoopCorrectorService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpcILoopCorrectorService_2eproto_getter() {
  return &descriptor_table_grpcILoopCorrectorService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcILoopCorrectorService_2eproto(&descriptor_table_grpcILoopCorrectorService_2eproto);
namespace grpcILoopCorrector {

// ===================================================================

class setCameraParametersRequest::_Internal {
 public:
};

setCameraParametersRequest::setCameraParametersRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcILoopCorrector.setCameraParametersRequest)
}
setCameraParametersRequest::setCameraParametersRequest(const setCameraParametersRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  intrinsicparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_intrinsicparams().empty()) {
    intrinsicparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_intrinsicparams(), 
      GetArenaForAllocation());
  }
  distortionparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_distortionparams().empty()) {
    distortionparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_distortionparams(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcILoopCorrector.setCameraParametersRequest)
}

inline void setCameraParametersRequest::SharedCtor() {
intrinsicparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
distortionparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

setCameraParametersRequest::~setCameraParametersRequest() {
  // @@protoc_insertion_point(destructor:grpcILoopCorrector.setCameraParametersRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void setCameraParametersRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  intrinsicparams_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  distortionparams_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void setCameraParametersRequest::ArenaDtor(void* object) {
  setCameraParametersRequest* _this = reinterpret_cast< setCameraParametersRequest* >(object);
  (void)_this;
}
void setCameraParametersRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void setCameraParametersRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void setCameraParametersRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcILoopCorrector.setCameraParametersRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  intrinsicparams_.ClearToEmpty();
  distortionparams_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* setCameraParametersRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes intrinsicParams = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_intrinsicparams();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes distortionParams = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_distortionparams();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* setCameraParametersRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcILoopCorrector.setCameraParametersRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes intrinsicParams = 1;
  if (!this->_internal_intrinsicparams().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_intrinsicparams(), target);
  }

  // bytes distortionParams = 2;
  if (!this->_internal_distortionparams().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_distortionparams(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcILoopCorrector.setCameraParametersRequest)
  return target;
}

size_t setCameraParametersRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcILoopCorrector.setCameraParametersRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes intrinsicParams = 1;
  if (!this->_internal_intrinsicparams().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_intrinsicparams());
  }

  // bytes distortionParams = 2;
  if (!this->_internal_distortionparams().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_distortionparams());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData setCameraParametersRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    setCameraParametersRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*setCameraParametersRequest::GetClassData() const { return &_class_data_; }

void setCameraParametersRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<setCameraParametersRequest *>(to)->MergeFrom(
      static_cast<const setCameraParametersRequest &>(from));
}


void setCameraParametersRequest::MergeFrom(const setCameraParametersRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcILoopCorrector.setCameraParametersRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_intrinsicparams().empty()) {
    _internal_set_intrinsicparams(from._internal_intrinsicparams());
  }
  if (!from._internal_distortionparams().empty()) {
    _internal_set_distortionparams(from._internal_distortionparams());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void setCameraParametersRequest::CopyFrom(const setCameraParametersRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcILoopCorrector.setCameraParametersRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool setCameraParametersRequest::IsInitialized() const {
  return true;
}

void setCameraParametersRequest::InternalSwap(setCameraParametersRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &intrinsicparams_, GetArenaForAllocation(),
      &other->intrinsicparams_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &distortionparams_, GetArenaForAllocation(),
      &other->distortionparams_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata setCameraParametersRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcILoopCorrectorService_2eproto_getter, &descriptor_table_grpcILoopCorrectorService_2eproto_once,
      file_level_metadata_grpcILoopCorrectorService_2eproto[0]);
}

// ===================================================================

class correctRequest::_Internal {
 public:
};

correctRequest::correctRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcILoopCorrector.correctRequest)
}
correctRequest::correctRequest(const correctRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  querykeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_querykeyframe().empty()) {
    querykeyframe_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_querykeyframe(), 
      GetArenaForAllocation());
  }
  detectedloopkeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_detectedloopkeyframe().empty()) {
    detectedloopkeyframe_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_detectedloopkeyframe(), 
      GetArenaForAllocation());
  }
  s_wl_wc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_s_wl_wc().empty()) {
    s_wl_wc_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_s_wl_wc(), 
      GetArenaForAllocation());
  }
  duplicatedpointsindices_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_duplicatedpointsindices().empty()) {
    duplicatedpointsindices_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_duplicatedpointsindices(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcILoopCorrector.correctRequest)
}

inline void correctRequest::SharedCtor() {
querykeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
detectedloopkeyframe_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
s_wl_wc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
duplicatedpointsindices_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

correctRequest::~correctRequest() {
  // @@protoc_insertion_point(destructor:grpcILoopCorrector.correctRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void correctRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  querykeyframe_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  detectedloopkeyframe_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  s_wl_wc_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  duplicatedpointsindices_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void correctRequest::ArenaDtor(void* object) {
  correctRequest* _this = reinterpret_cast< correctRequest* >(object);
  (void)_this;
}
void correctRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void correctRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void correctRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcILoopCorrector.correctRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  querykeyframe_.ClearToEmpty();
  detectedloopkeyframe_.ClearToEmpty();
  s_wl_wc_.ClearToEmpty();
  duplicatedpointsindices_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* correctRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes queryKeyframe = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_querykeyframe();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes detectedLoopKeyframe = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_detectedloopkeyframe();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes S_wl_wc = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_s_wl_wc();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes duplicatedPointsIndices = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_duplicatedpointsindices();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* correctRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcILoopCorrector.correctRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes queryKeyframe = 1;
  if (!this->_internal_querykeyframe().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_querykeyframe(), target);
  }

  // bytes detectedLoopKeyframe = 2;
  if (!this->_internal_detectedloopkeyframe().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_detectedloopkeyframe(), target);
  }

  // bytes S_wl_wc = 3;
  if (!this->_internal_s_wl_wc().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_s_wl_wc(), target);
  }

  // bytes duplicatedPointsIndices = 4;
  if (!this->_internal_duplicatedpointsindices().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_duplicatedpointsindices(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcILoopCorrector.correctRequest)
  return target;
}

size_t correctRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcILoopCorrector.correctRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes queryKeyframe = 1;
  if (!this->_internal_querykeyframe().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_querykeyframe());
  }

  // bytes detectedLoopKeyframe = 2;
  if (!this->_internal_detectedloopkeyframe().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_detectedloopkeyframe());
  }

  // bytes S_wl_wc = 3;
  if (!this->_internal_s_wl_wc().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_s_wl_wc());
  }

  // bytes duplicatedPointsIndices = 4;
  if (!this->_internal_duplicatedpointsindices().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_duplicatedpointsindices());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData correctRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    correctRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*correctRequest::GetClassData() const { return &_class_data_; }

void correctRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<correctRequest *>(to)->MergeFrom(
      static_cast<const correctRequest &>(from));
}


void correctRequest::MergeFrom(const correctRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcILoopCorrector.correctRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_querykeyframe().empty()) {
    _internal_set_querykeyframe(from._internal_querykeyframe());
  }
  if (!from._internal_detectedloopkeyframe().empty()) {
    _internal_set_detectedloopkeyframe(from._internal_detectedloopkeyframe());
  }
  if (!from._internal_s_wl_wc().empty()) {
    _internal_set_s_wl_wc(from._internal_s_wl_wc());
  }
  if (!from._internal_duplicatedpointsindices().empty()) {
    _internal_set_duplicatedpointsindices(from._internal_duplicatedpointsindices());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void correctRequest::CopyFrom(const correctRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcILoopCorrector.correctRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool correctRequest::IsInitialized() const {
  return true;
}

void correctRequest::InternalSwap(correctRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &querykeyframe_, GetArenaForAllocation(),
      &other->querykeyframe_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &detectedloopkeyframe_, GetArenaForAllocation(),
      &other->detectedloopkeyframe_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &s_wl_wc_, GetArenaForAllocation(),
      &other->s_wl_wc_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &duplicatedpointsindices_, GetArenaForAllocation(),
      &other->duplicatedpointsindices_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata correctRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcILoopCorrectorService_2eproto_getter, &descriptor_table_grpcILoopCorrectorService_2eproto_once,
      file_level_metadata_grpcILoopCorrectorService_2eproto[1]);
}

// ===================================================================

class correctResponse::_Internal {
 public:
};

correctResponse::correctResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcILoopCorrector.correctResponse)
}
correctResponse::correctResponse(const correctResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcILoopCorrector.correctResponse)
}

inline void correctResponse::SharedCtor() {
xpcfgrpcreturnvalue_ = 0;
}

correctResponse::~correctResponse() {
  // @@protoc_insertion_point(destructor:grpcILoopCorrector.correctResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void correctResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void correctResponse::ArenaDtor(void* object) {
  correctResponse* _this = reinterpret_cast< correctResponse* >(object);
  (void)_this;
}
void correctResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void correctResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void correctResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcILoopCorrector.correctResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* correctResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // sint32 xpcfGrpcReturnValue = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          xpcfgrpcreturnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* correctResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcILoopCorrector.correctResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // sint32 xpcfGrpcReturnValue = 1;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(1, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcILoopCorrector.correctResponse)
  return target;
}

size_t correctResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcILoopCorrector.correctResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // sint32 xpcfGrpcReturnValue = 1;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData correctResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    correctResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*correctResponse::GetClassData() const { return &_class_data_; }

void correctResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<correctResponse *>(to)->MergeFrom(
      static_cast<const correctResponse &>(from));
}


void correctResponse::MergeFrom(const correctResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcILoopCorrector.correctResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void correctResponse::CopyFrom(const correctResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcILoopCorrector.correctResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool correctResponse::IsInitialized() const {
  return true;
}

void correctResponse::InternalSwap(correctResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata correctResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcILoopCorrectorService_2eproto_getter, &descriptor_table_grpcILoopCorrectorService_2eproto_once,
      file_level_metadata_grpcILoopCorrectorService_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcILoopCorrector
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcILoopCorrector::setCameraParametersRequest* Arena::CreateMaybeMessage< ::grpcILoopCorrector::setCameraParametersRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcILoopCorrector::setCameraParametersRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcILoopCorrector::correctRequest* Arena::CreateMaybeMessage< ::grpcILoopCorrector::correctRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcILoopCorrector::correctRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcILoopCorrector::correctResponse* Arena::CreateMaybeMessage< ::grpcILoopCorrector::correctResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcILoopCorrector::correctResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
