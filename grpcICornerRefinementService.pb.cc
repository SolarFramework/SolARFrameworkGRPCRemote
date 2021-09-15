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
namespace grpcICornerRefinement {
constexpr refineRequest::refineRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : image_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , corners_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct refineRequestDefaultTypeInternal {
  constexpr refineRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~refineRequestDefaultTypeInternal() {}
  union {
    refineRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT refineRequestDefaultTypeInternal _refineRequest_default_instance_;
constexpr refineResponse::refineResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : corners_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct refineResponseDefaultTypeInternal {
  constexpr refineResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~refineResponseDefaultTypeInternal() {}
  union {
    refineResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT refineResponseDefaultTypeInternal _refineResponse_default_instance_;
}  // namespace grpcICornerRefinement
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcICornerRefinementService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcICornerRefinementService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcICornerRefinementService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcICornerRefinementService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, image_),
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineRequest, corners_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcICornerRefinement::refineResponse, corners_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcICornerRefinement::refineRequest)},
  { 7, -1, sizeof(::grpcICornerRefinement::refineResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcICornerRefinement::_refineRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcICornerRefinement::_refineResponse_default_instance_),
};

const char descriptor_table_protodef_grpcICornerRefinementService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"grpcICornerRefinementService.proto\022\025gr"
  "pcICornerRefinement\032\033google/protobuf/emp"
  "ty.proto\"/\n\rrefineRequest\022\r\n\005image\030\001 \001(\014"
  "\022\017\n\007corners\030\002 \001(\014\"!\n\016refineResponse\022\017\n\007c"
  "orners\030\001 \001(\0142w\n\034grpcICornerRefinementSer"
  "vice\022W\n\006refine\022$.grpcICornerRefinement.r"
  "efineRequest\032%.grpcICornerRefinement.ref"
  "ineResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcICornerRefinementService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcICornerRefinementService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcICornerRefinementService_2eproto = {
  false, false, 301, descriptor_table_protodef_grpcICornerRefinementService_2eproto, "grpcICornerRefinementService.proto", 
  &descriptor_table_grpcICornerRefinementService_2eproto_once, descriptor_table_grpcICornerRefinementService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcICornerRefinementService_2eproto::offsets,
  file_level_metadata_grpcICornerRefinementService_2eproto, file_level_enum_descriptors_grpcICornerRefinementService_2eproto, file_level_service_descriptors_grpcICornerRefinementService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_grpcICornerRefinementService_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_grpcICornerRefinementService_2eproto);
  return descriptor_table_grpcICornerRefinementService_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcICornerRefinementService_2eproto(&descriptor_table_grpcICornerRefinementService_2eproto);
namespace grpcICornerRefinement {

// ===================================================================

class refineRequest::_Internal {
 public:
};

refineRequest::refineRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcICornerRefinement.refineRequest)
}
refineRequest::refineRequest(const refineRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_image().empty()) {
    image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_image(), 
      GetArena());
  }
  corners_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_corners().empty()) {
    corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_corners(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:grpcICornerRefinement.refineRequest)
}

void refineRequest::SharedCtor() {
image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
corners_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

refineRequest::~refineRequest() {
  // @@protoc_insertion_point(destructor:grpcICornerRefinement.refineRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void refineRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  image_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  corners_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void refineRequest::ArenaDtor(void* object) {
  refineRequest* _this = reinterpret_cast< refineRequest* >(object);
  (void)_this;
}
void refineRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void refineRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void refineRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcICornerRefinement.refineRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  image_.ClearToEmpty();
  corners_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* refineRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes image = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_image();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes corners = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_corners();
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

::PROTOBUF_NAMESPACE_ID::uint8* refineRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcICornerRefinement.refineRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes image = 1;
  if (this->image().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_image(), target);
  }

  // bytes corners = 2;
  if (this->corners().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_corners(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcICornerRefinement.refineRequest)
  return target;
}

size_t refineRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcICornerRefinement.refineRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image = 1;
  if (this->image().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image());
  }

  // bytes corners = 2;
  if (this->corners().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_corners());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void refineRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcICornerRefinement.refineRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const refineRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<refineRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcICornerRefinement.refineRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcICornerRefinement.refineRequest)
    MergeFrom(*source);
  }
}

void refineRequest::MergeFrom(const refineRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcICornerRefinement.refineRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.image().size() > 0) {
    _internal_set_image(from._internal_image());
  }
  if (from.corners().size() > 0) {
    _internal_set_corners(from._internal_corners());
  }
}

void refineRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcICornerRefinement.refineRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
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
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  image_.Swap(&other->image_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  corners_.Swap(&other->corners_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata refineRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class refineResponse::_Internal {
 public:
};

refineResponse::refineResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcICornerRefinement.refineResponse)
}
refineResponse::refineResponse(const refineResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  corners_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_corners().empty()) {
    corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_corners(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:grpcICornerRefinement.refineResponse)
}

void refineResponse::SharedCtor() {
corners_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

refineResponse::~refineResponse() {
  // @@protoc_insertion_point(destructor:grpcICornerRefinement.refineResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void refineResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  corners_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void refineResponse::ArenaDtor(void* object) {
  refineResponse* _this = reinterpret_cast< refineResponse* >(object);
  (void)_this;
}
void refineResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void refineResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void refineResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcICornerRefinement.refineResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  corners_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* refineResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes corners = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_corners();
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

::PROTOBUF_NAMESPACE_ID::uint8* refineResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcICornerRefinement.refineResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes corners = 1;
  if (this->corners().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_corners(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcICornerRefinement.refineResponse)
  return target;
}

size_t refineResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcICornerRefinement.refineResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes corners = 1;
  if (this->corners().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_corners());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void refineResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcICornerRefinement.refineResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const refineResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<refineResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcICornerRefinement.refineResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcICornerRefinement.refineResponse)
    MergeFrom(*source);
  }
}

void refineResponse::MergeFrom(const refineResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcICornerRefinement.refineResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.corners().size() > 0) {
    _internal_set_corners(from._internal_corners());
  }
}

void refineResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcICornerRefinement.refineResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
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
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  corners_.Swap(&other->corners_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata refineResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcICornerRefinement
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcICornerRefinement::refineRequest* Arena::CreateMaybeMessage< ::grpcICornerRefinement::refineRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcICornerRefinement::refineRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcICornerRefinement::refineResponse* Arena::CreateMaybeMessage< ::grpcICornerRefinement::refineResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcICornerRefinement::refineResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
