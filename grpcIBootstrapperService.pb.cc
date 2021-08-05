// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIBootstrapperService.proto

#include "grpcIBootstrapperService.pb.h"

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
namespace grpcIBootstrapper {
constexpr setCameraParametersRequest::setCameraParametersRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : intrinsicparams_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , distorsionparams_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct setCameraParametersRequestDefaultTypeInternal {
  constexpr setCameraParametersRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~setCameraParametersRequestDefaultTypeInternal() {}
  union {
    setCameraParametersRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT setCameraParametersRequestDefaultTypeInternal _setCameraParametersRequest_default_instance_;
constexpr processRequest::processRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : image_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , pose_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , view_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct processRequestDefaultTypeInternal {
  constexpr processRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~processRequestDefaultTypeInternal() {}
  union {
    processRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT processRequestDefaultTypeInternal _processRequest_default_instance_;
constexpr processResponse::processResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : view_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , xpcfgrpcreturnvalue_(0){}
struct processResponseDefaultTypeInternal {
  constexpr processResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~processResponseDefaultTypeInternal() {}
  union {
    processResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT processResponseDefaultTypeInternal _processResponse_default_instance_;
}  // namespace grpcIBootstrapper
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcIBootstrapperService_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcIBootstrapperService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcIBootstrapperService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcIBootstrapperService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::setCameraParametersRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::setCameraParametersRequest, intrinsicparams_),
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::setCameraParametersRequest, distorsionparams_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processRequest, image_),
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processRequest, pose_),
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processRequest, view_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processResponse, view_),
  PROTOBUF_FIELD_OFFSET(::grpcIBootstrapper::processResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcIBootstrapper::setCameraParametersRequest)},
  { 7, -1, sizeof(::grpcIBootstrapper::processRequest)},
  { 15, -1, sizeof(::grpcIBootstrapper::processResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIBootstrapper::_setCameraParametersRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIBootstrapper::_processRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIBootstrapper::_processResponse_default_instance_),
};

const char descriptor_table_protodef_grpcIBootstrapperService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036grpcIBootstrapperService.proto\022\021grpcIB"
  "ootstrapper\032\033google/protobuf/empty.proto"
  "\"O\n\032setCameraParametersRequest\022\027\n\017intrin"
  "sicParams\030\001 \001(\014\022\030\n\020distorsionParams\030\002 \001("
  "\014\";\n\016processRequest\022\r\n\005image\030\001 \001(\014\022\014\n\004po"
  "se\030\002 \001(\014\022\014\n\004view\030\003 \001(\014\"<\n\017processRespons"
  "e\022\014\n\004view\030\001 \001(\014\022\033\n\023xpcfGrpcReturnValue\030\002"
  " \001(\0212\316\001\n\030grpcIBootstrapperService\022^\n\023set"
  "CameraParameters\022-.grpcIBootstrapper.set"
  "CameraParametersRequest\032\026.google.protobu"
  "f.Empty\"\000\022R\n\007process\022!.grpcIBootstrapper"
  ".processRequest\032\".grpcIBootstrapper.proc"
  "essResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcIBootstrapperService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcIBootstrapperService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIBootstrapperService_2eproto = {
  false, false, 501, descriptor_table_protodef_grpcIBootstrapperService_2eproto, "grpcIBootstrapperService.proto", 
  &descriptor_table_grpcIBootstrapperService_2eproto_once, descriptor_table_grpcIBootstrapperService_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_grpcIBootstrapperService_2eproto::offsets,
  file_level_metadata_grpcIBootstrapperService_2eproto, file_level_enum_descriptors_grpcIBootstrapperService_2eproto, file_level_service_descriptors_grpcIBootstrapperService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpcIBootstrapperService_2eproto_getter() {
  return &descriptor_table_grpcIBootstrapperService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcIBootstrapperService_2eproto(&descriptor_table_grpcIBootstrapperService_2eproto);
namespace grpcIBootstrapper {

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
  // @@protoc_insertion_point(arena_constructor:grpcIBootstrapper.setCameraParametersRequest)
}
setCameraParametersRequest::setCameraParametersRequest(const setCameraParametersRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  intrinsicparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_intrinsicparams().empty()) {
    intrinsicparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_intrinsicparams(), 
      GetArenaForAllocation());
  }
  distorsionparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_distorsionparams().empty()) {
    distorsionparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_distorsionparams(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIBootstrapper.setCameraParametersRequest)
}

inline void setCameraParametersRequest::SharedCtor() {
intrinsicparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
distorsionparams_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

setCameraParametersRequest::~setCameraParametersRequest() {
  // @@protoc_insertion_point(destructor:grpcIBootstrapper.setCameraParametersRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void setCameraParametersRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  intrinsicparams_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  distorsionparams_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
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
// @@protoc_insertion_point(message_clear_start:grpcIBootstrapper.setCameraParametersRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  intrinsicparams_.ClearToEmpty();
  distorsionparams_.ClearToEmpty();
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
      // bytes distorsionParams = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_distorsionparams();
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
  // @@protoc_insertion_point(serialize_to_array_start:grpcIBootstrapper.setCameraParametersRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes intrinsicParams = 1;
  if (!this->_internal_intrinsicparams().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_intrinsicparams(), target);
  }

  // bytes distorsionParams = 2;
  if (!this->_internal_distorsionparams().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_distorsionparams(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIBootstrapper.setCameraParametersRequest)
  return target;
}

size_t setCameraParametersRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIBootstrapper.setCameraParametersRequest)
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

  // bytes distorsionParams = 2;
  if (!this->_internal_distorsionparams().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_distorsionparams());
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
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIBootstrapper.setCameraParametersRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_intrinsicparams().empty()) {
    _internal_set_intrinsicparams(from._internal_intrinsicparams());
  }
  if (!from._internal_distorsionparams().empty()) {
    _internal_set_distorsionparams(from._internal_distorsionparams());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void setCameraParametersRequest::CopyFrom(const setCameraParametersRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIBootstrapper.setCameraParametersRequest)
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
      &distorsionparams_, GetArenaForAllocation(),
      &other->distorsionparams_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata setCameraParametersRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIBootstrapperService_2eproto_getter, &descriptor_table_grpcIBootstrapperService_2eproto_once,
      file_level_metadata_grpcIBootstrapperService_2eproto[0]);
}

// ===================================================================

class processRequest::_Internal {
 public:
};

processRequest::processRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIBootstrapper.processRequest)
}
processRequest::processRequest(const processRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_image().empty()) {
    image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_image(), 
      GetArenaForAllocation());
  }
  pose_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_pose().empty()) {
    pose_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_pose(), 
      GetArenaForAllocation());
  }
  view_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_view().empty()) {
    view_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_view(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIBootstrapper.processRequest)
}

inline void processRequest::SharedCtor() {
image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
pose_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
view_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

processRequest::~processRequest() {
  // @@protoc_insertion_point(destructor:grpcIBootstrapper.processRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void processRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  image_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pose_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  view_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void processRequest::ArenaDtor(void* object) {
  processRequest* _this = reinterpret_cast< processRequest* >(object);
  (void)_this;
}
void processRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void processRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void processRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIBootstrapper.processRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  image_.ClearToEmpty();
  pose_.ClearToEmpty();
  view_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* processRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes image = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_image();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes pose = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_pose();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes view = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_view();
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

::PROTOBUF_NAMESPACE_ID::uint8* processRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIBootstrapper.processRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes image = 1;
  if (!this->_internal_image().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_image(), target);
  }

  // bytes pose = 2;
  if (!this->_internal_pose().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_pose(), target);
  }

  // bytes view = 3;
  if (!this->_internal_view().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_view(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIBootstrapper.processRequest)
  return target;
}

size_t processRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIBootstrapper.processRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image = 1;
  if (!this->_internal_image().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image());
  }

  // bytes pose = 2;
  if (!this->_internal_pose().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_pose());
  }

  // bytes view = 3;
  if (!this->_internal_view().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_view());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData processRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    processRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*processRequest::GetClassData() const { return &_class_data_; }

void processRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<processRequest *>(to)->MergeFrom(
      static_cast<const processRequest &>(from));
}


void processRequest::MergeFrom(const processRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIBootstrapper.processRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image().empty()) {
    _internal_set_image(from._internal_image());
  }
  if (!from._internal_pose().empty()) {
    _internal_set_pose(from._internal_pose());
  }
  if (!from._internal_view().empty()) {
    _internal_set_view(from._internal_view());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void processRequest::CopyFrom(const processRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIBootstrapper.processRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool processRequest::IsInitialized() const {
  return true;
}

void processRequest::InternalSwap(processRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &image_, GetArenaForAllocation(),
      &other->image_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &pose_, GetArenaForAllocation(),
      &other->pose_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &view_, GetArenaForAllocation(),
      &other->view_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata processRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIBootstrapperService_2eproto_getter, &descriptor_table_grpcIBootstrapperService_2eproto_once,
      file_level_metadata_grpcIBootstrapperService_2eproto[1]);
}

// ===================================================================

class processResponse::_Internal {
 public:
};

processResponse::processResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIBootstrapper.processResponse)
}
processResponse::processResponse(const processResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  view_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_view().empty()) {
    view_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_view(), 
      GetArenaForAllocation());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIBootstrapper.processResponse)
}

inline void processResponse::SharedCtor() {
view_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
xpcfgrpcreturnvalue_ = 0;
}

processResponse::~processResponse() {
  // @@protoc_insertion_point(destructor:grpcIBootstrapper.processResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void processResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  view_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void processResponse::ArenaDtor(void* object) {
  processResponse* _this = reinterpret_cast< processResponse* >(object);
  (void)_this;
}
void processResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void processResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void processResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIBootstrapper.processResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  view_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* processResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes view = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_view();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 xpcfGrpcReturnValue = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
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

::PROTOBUF_NAMESPACE_ID::uint8* processResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIBootstrapper.processResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes view = 1;
  if (!this->_internal_view().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_view(), target);
  }

  // sint32 xpcfGrpcReturnValue = 2;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(2, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIBootstrapper.processResponse)
  return target;
}

size_t processResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIBootstrapper.processResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes view = 1;
  if (!this->_internal_view().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_view());
  }

  // sint32 xpcfGrpcReturnValue = 2;
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData processResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    processResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*processResponse::GetClassData() const { return &_class_data_; }

void processResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<processResponse *>(to)->MergeFrom(
      static_cast<const processResponse &>(from));
}


void processResponse::MergeFrom(const processResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIBootstrapper.processResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_view().empty()) {
    _internal_set_view(from._internal_view());
  }
  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void processResponse::CopyFrom(const processResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIBootstrapper.processResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool processResponse::IsInitialized() const {
  return true;
}

void processResponse::InternalSwap(processResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &view_, GetArenaForAllocation(),
      &other->view_, other->GetArenaForAllocation()
  );
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata processResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIBootstrapperService_2eproto_getter, &descriptor_table_grpcIBootstrapperService_2eproto_once,
      file_level_metadata_grpcIBootstrapperService_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIBootstrapper
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIBootstrapper::setCameraParametersRequest* Arena::CreateMaybeMessage< ::grpcIBootstrapper::setCameraParametersRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIBootstrapper::setCameraParametersRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIBootstrapper::processRequest* Arena::CreateMaybeMessage< ::grpcIBootstrapper::processRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIBootstrapper::processRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIBootstrapper::processResponse* Arena::CreateMaybeMessage< ::grpcIBootstrapper::processResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIBootstrapper::processResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
