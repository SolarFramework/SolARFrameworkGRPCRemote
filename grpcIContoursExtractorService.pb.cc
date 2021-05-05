// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIContoursExtractorService.proto

#include "grpcIContoursExtractorService.pb.h"

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
namespace grpcIContoursExtractor {
constexpr extractRequest::extractRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : inputimg_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , contours_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct extractRequestDefaultTypeInternal {
  constexpr extractRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~extractRequestDefaultTypeInternal() {}
  union {
    extractRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT extractRequestDefaultTypeInternal _extractRequest_default_instance_;
constexpr extractResponse::extractResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : contours_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , xpcfgrpcreturnvalue_(0){}
struct extractResponseDefaultTypeInternal {
  constexpr extractResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~extractResponseDefaultTypeInternal() {}
  union {
    extractResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT extractResponseDefaultTypeInternal _extractResponse_default_instance_;
}  // namespace grpcIContoursExtractor
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcIContoursExtractorService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcIContoursExtractorService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcIContoursExtractorService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcIContoursExtractorService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIContoursExtractor::extractRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIContoursExtractor::extractRequest, inputimg_),
  PROTOBUF_FIELD_OFFSET(::grpcIContoursExtractor::extractRequest, contours_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIContoursExtractor::extractResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIContoursExtractor::extractResponse, contours_),
  PROTOBUF_FIELD_OFFSET(::grpcIContoursExtractor::extractResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcIContoursExtractor::extractRequest)},
  { 7, -1, sizeof(::grpcIContoursExtractor::extractResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIContoursExtractor::_extractRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIContoursExtractor::_extractResponse_default_instance_),
};

const char descriptor_table_protodef_grpcIContoursExtractorService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#grpcIContoursExtractorService.proto\022\026g"
  "rpcIContoursExtractor\032\033google/protobuf/e"
  "mpty.proto\"4\n\016extractRequest\022\020\n\010inputImg"
  "\030\001 \001(\014\022\020\n\010contours\030\002 \001(\014\"@\n\017extractRespo"
  "nse\022\020\n\010contours\030\001 \001(\014\022\033\n\023xpcfGrpcReturnV"
  "alue\030\002 \001(\0212}\n\035grpcIContoursExtractorServ"
  "ice\022\\\n\007extract\022&.grpcIContoursExtractor."
  "extractRequest\032\'.grpcIContoursExtractor."
  "extractResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcIContoursExtractorService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcIContoursExtractorService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIContoursExtractorService_2eproto = {
  false, false, 345, descriptor_table_protodef_grpcIContoursExtractorService_2eproto, "grpcIContoursExtractorService.proto", 
  &descriptor_table_grpcIContoursExtractorService_2eproto_once, descriptor_table_grpcIContoursExtractorService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcIContoursExtractorService_2eproto::offsets,
  file_level_metadata_grpcIContoursExtractorService_2eproto, file_level_enum_descriptors_grpcIContoursExtractorService_2eproto, file_level_service_descriptors_grpcIContoursExtractorService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_grpcIContoursExtractorService_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_grpcIContoursExtractorService_2eproto);
  return descriptor_table_grpcIContoursExtractorService_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcIContoursExtractorService_2eproto(&descriptor_table_grpcIContoursExtractorService_2eproto);
namespace grpcIContoursExtractor {

// ===================================================================

class extractRequest::_Internal {
 public:
};

extractRequest::extractRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcIContoursExtractor.extractRequest)
}
extractRequest::extractRequest(const extractRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  inputimg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_inputimg().empty()) {
    inputimg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_inputimg(), 
      GetArena());
  }
  contours_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_contours().empty()) {
    contours_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_contours(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIContoursExtractor.extractRequest)
}

void extractRequest::SharedCtor() {
inputimg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
contours_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

extractRequest::~extractRequest() {
  // @@protoc_insertion_point(destructor:grpcIContoursExtractor.extractRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void extractRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  inputimg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  contours_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void extractRequest::ArenaDtor(void* object) {
  extractRequest* _this = reinterpret_cast< extractRequest* >(object);
  (void)_this;
}
void extractRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void extractRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void extractRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIContoursExtractor.extractRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  inputimg_.ClearToEmpty();
  contours_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* extractRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes inputImg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_inputimg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes contours = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_contours();
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

::PROTOBUF_NAMESPACE_ID::uint8* extractRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIContoursExtractor.extractRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes inputImg = 1;
  if (this->inputimg().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_inputimg(), target);
  }

  // bytes contours = 2;
  if (this->contours().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_contours(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIContoursExtractor.extractRequest)
  return target;
}

size_t extractRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIContoursExtractor.extractRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes inputImg = 1;
  if (this->inputimg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_inputimg());
  }

  // bytes contours = 2;
  if (this->contours().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_contours());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void extractRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcIContoursExtractor.extractRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const extractRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<extractRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcIContoursExtractor.extractRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcIContoursExtractor.extractRequest)
    MergeFrom(*source);
  }
}

void extractRequest::MergeFrom(const extractRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIContoursExtractor.extractRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.inputimg().size() > 0) {
    _internal_set_inputimg(from._internal_inputimg());
  }
  if (from.contours().size() > 0) {
    _internal_set_contours(from._internal_contours());
  }
}

void extractRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcIContoursExtractor.extractRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void extractRequest::CopyFrom(const extractRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIContoursExtractor.extractRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool extractRequest::IsInitialized() const {
  return true;
}

void extractRequest::InternalSwap(extractRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  inputimg_.Swap(&other->inputimg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  contours_.Swap(&other->contours_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata extractRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class extractResponse::_Internal {
 public:
};

extractResponse::extractResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grpcIContoursExtractor.extractResponse)
}
extractResponse::extractResponse(const extractResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  contours_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_contours().empty()) {
    contours_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_contours(), 
      GetArena());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIContoursExtractor.extractResponse)
}

void extractResponse::SharedCtor() {
contours_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
xpcfgrpcreturnvalue_ = 0;
}

extractResponse::~extractResponse() {
  // @@protoc_insertion_point(destructor:grpcIContoursExtractor.extractResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void extractResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  contours_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void extractResponse::ArenaDtor(void* object) {
  extractResponse* _this = reinterpret_cast< extractResponse* >(object);
  (void)_this;
}
void extractResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void extractResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void extractResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIContoursExtractor.extractResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  contours_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* extractResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes contours = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_contours();
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

::PROTOBUF_NAMESPACE_ID::uint8* extractResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIContoursExtractor.extractResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes contours = 1;
  if (this->contours().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_contours(), target);
  }

  // sint32 xpcfGrpcReturnValue = 2;
  if (this->xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(2, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIContoursExtractor.extractResponse)
  return target;
}

size_t extractResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIContoursExtractor.extractResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes contours = 1;
  if (this->contours().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_contours());
  }

  // sint32 xpcfGrpcReturnValue = 2;
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

void extractResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpcIContoursExtractor.extractResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const extractResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<extractResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpcIContoursExtractor.extractResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpcIContoursExtractor.extractResponse)
    MergeFrom(*source);
  }
}

void extractResponse::MergeFrom(const extractResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIContoursExtractor.extractResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.contours().size() > 0) {
    _internal_set_contours(from._internal_contours());
  }
  if (from.xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
}

void extractResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpcIContoursExtractor.extractResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void extractResponse::CopyFrom(const extractResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIContoursExtractor.extractResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool extractResponse::IsInitialized() const {
  return true;
}

void extractResponse::InternalSwap(extractResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  contours_.Swap(&other->contours_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata extractResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIContoursExtractor
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIContoursExtractor::extractRequest* Arena::CreateMaybeMessage< ::grpcIContoursExtractor::extractRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIContoursExtractor::extractRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIContoursExtractor::extractResponse* Arena::CreateMaybeMessage< ::grpcIContoursExtractor::extractResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIContoursExtractor::extractResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
