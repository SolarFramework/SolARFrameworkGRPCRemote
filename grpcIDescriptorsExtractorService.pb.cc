// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIDescriptorsExtractorService.proto

#include "grpcIDescriptorsExtractorService.pb.h"

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
namespace grpcIDescriptorsExtractor {
constexpr getTypeStringResponse::getTypeStringResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : xpcfgrpcreturnvalue_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct getTypeStringResponseDefaultTypeInternal {
  constexpr getTypeStringResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~getTypeStringResponseDefaultTypeInternal() {}
  union {
    getTypeStringResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT getTypeStringResponseDefaultTypeInternal _getTypeStringResponse_default_instance_;
constexpr extractRequest::extractRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : image_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , keypoints_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , descriptors_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
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
  : descriptors_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct extractResponseDefaultTypeInternal {
  constexpr extractResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~extractResponseDefaultTypeInternal() {}
  union {
    extractResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT extractResponseDefaultTypeInternal _extractResponse_default_instance_;
}  // namespace grpcIDescriptorsExtractor
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcIDescriptorsExtractorService_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcIDescriptorsExtractorService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcIDescriptorsExtractorService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcIDescriptorsExtractorService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::getTypeStringResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::getTypeStringResponse, xpcfgrpcreturnvalue_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::extractRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::extractRequest, image_),
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::extractRequest, keypoints_),
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::extractRequest, descriptors_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::extractResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIDescriptorsExtractor::extractResponse, descriptors_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcIDescriptorsExtractor::getTypeStringResponse)},
  { 6, -1, sizeof(::grpcIDescriptorsExtractor::extractRequest)},
  { 14, -1, sizeof(::grpcIDescriptorsExtractor::extractResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIDescriptorsExtractor::_getTypeStringResponse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIDescriptorsExtractor::_extractRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIDescriptorsExtractor::_extractResponse_default_instance_),
};

const char descriptor_table_protodef_grpcIDescriptorsExtractorService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&grpcIDescriptorsExtractorService.proto"
  "\022\031grpcIDescriptorsExtractor\032\033google/prot"
  "obuf/empty.proto\"4\n\025getTypeStringRespons"
  "e\022\033\n\023xpcfGrpcReturnValue\030\001 \001(\t\"G\n\016extrac"
  "tRequest\022\r\n\005image\030\001 \001(\014\022\021\n\tkeypoints\030\002 \001"
  "(\014\022\023\n\013descriptors\030\003 \001(\014\"&\n\017extractRespon"
  "se\022\023\n\013descriptors\030\001 \001(\0142\343\001\n grpcIDescrip"
  "torsExtractorService\022[\n\rgetTypeString\022\026."
  "google.protobuf.Empty\0320.grpcIDescriptors"
  "Extractor.getTypeStringResponse\"\000\022b\n\007ext"
  "ract\022).grpcIDescriptorsExtractor.extract"
  "Request\032*.grpcIDescriptorsExtractor.extr"
  "actResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcIDescriptorsExtractorService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcIDescriptorsExtractorService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIDescriptorsExtractorService_2eproto = {
  false, false, 501, descriptor_table_protodef_grpcIDescriptorsExtractorService_2eproto, "grpcIDescriptorsExtractorService.proto", 
  &descriptor_table_grpcIDescriptorsExtractorService_2eproto_once, descriptor_table_grpcIDescriptorsExtractorService_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_grpcIDescriptorsExtractorService_2eproto::offsets,
  file_level_metadata_grpcIDescriptorsExtractorService_2eproto, file_level_enum_descriptors_grpcIDescriptorsExtractorService_2eproto, file_level_service_descriptors_grpcIDescriptorsExtractorService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpcIDescriptorsExtractorService_2eproto_getter() {
  return &descriptor_table_grpcIDescriptorsExtractorService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcIDescriptorsExtractorService_2eproto(&descriptor_table_grpcIDescriptorsExtractorService_2eproto);
namespace grpcIDescriptorsExtractor {

// ===================================================================

class getTypeStringResponse::_Internal {
 public:
};

getTypeStringResponse::getTypeStringResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIDescriptorsExtractor.getTypeStringResponse)
}
getTypeStringResponse::getTypeStringResponse(const getTypeStringResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  xpcfgrpcreturnvalue_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_xpcfgrpcreturnvalue().empty()) {
    xpcfgrpcreturnvalue_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_xpcfgrpcreturnvalue(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIDescriptorsExtractor.getTypeStringResponse)
}

inline void getTypeStringResponse::SharedCtor() {
xpcfgrpcreturnvalue_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

getTypeStringResponse::~getTypeStringResponse() {
  // @@protoc_insertion_point(destructor:grpcIDescriptorsExtractor.getTypeStringResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void getTypeStringResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  xpcfgrpcreturnvalue_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void getTypeStringResponse::ArenaDtor(void* object) {
  getTypeStringResponse* _this = reinterpret_cast< getTypeStringResponse* >(object);
  (void)_this;
}
void getTypeStringResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void getTypeStringResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void getTypeStringResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIDescriptorsExtractor.getTypeStringResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  xpcfgrpcreturnvalue_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* getTypeStringResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string xpcfGrpcReturnValue = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_xpcfgrpcreturnvalue();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpcIDescriptorsExtractor.getTypeStringResponse.xpcfGrpcReturnValue"));
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

::PROTOBUF_NAMESPACE_ID::uint8* getTypeStringResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIDescriptorsExtractor.getTypeStringResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string xpcfGrpcReturnValue = 1;
  if (!this->_internal_xpcfgrpcreturnvalue().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_xpcfgrpcreturnvalue().data(), static_cast<int>(this->_internal_xpcfgrpcreturnvalue().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcIDescriptorsExtractor.getTypeStringResponse.xpcfGrpcReturnValue");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIDescriptorsExtractor.getTypeStringResponse)
  return target;
}

size_t getTypeStringResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIDescriptorsExtractor.getTypeStringResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string xpcfGrpcReturnValue = 1;
  if (!this->_internal_xpcfgrpcreturnvalue().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData getTypeStringResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    getTypeStringResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*getTypeStringResponse::GetClassData() const { return &_class_data_; }

void getTypeStringResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<getTypeStringResponse *>(to)->MergeFrom(
      static_cast<const getTypeStringResponse &>(from));
}


void getTypeStringResponse::MergeFrom(const getTypeStringResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIDescriptorsExtractor.getTypeStringResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_xpcfgrpcreturnvalue().empty()) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void getTypeStringResponse::CopyFrom(const getTypeStringResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIDescriptorsExtractor.getTypeStringResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool getTypeStringResponse::IsInitialized() const {
  return true;
}

void getTypeStringResponse::InternalSwap(getTypeStringResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &xpcfgrpcreturnvalue_, GetArenaForAllocation(),
      &other->xpcfgrpcreturnvalue_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata getTypeStringResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIDescriptorsExtractorService_2eproto_getter, &descriptor_table_grpcIDescriptorsExtractorService_2eproto_once,
      file_level_metadata_grpcIDescriptorsExtractorService_2eproto[0]);
}

// ===================================================================

class extractRequest::_Internal {
 public:
};

extractRequest::extractRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIDescriptorsExtractor.extractRequest)
}
extractRequest::extractRequest(const extractRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_image().empty()) {
    image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_image(), 
      GetArenaForAllocation());
  }
  keypoints_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_keypoints().empty()) {
    keypoints_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_keypoints(), 
      GetArenaForAllocation());
  }
  descriptors_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_descriptors().empty()) {
    descriptors_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_descriptors(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIDescriptorsExtractor.extractRequest)
}

inline void extractRequest::SharedCtor() {
image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
keypoints_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
descriptors_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

extractRequest::~extractRequest() {
  // @@protoc_insertion_point(destructor:grpcIDescriptorsExtractor.extractRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void extractRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  image_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  keypoints_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  descriptors_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
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
// @@protoc_insertion_point(message_clear_start:grpcIDescriptorsExtractor.extractRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  image_.ClearToEmpty();
  keypoints_.ClearToEmpty();
  descriptors_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* extractRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // bytes keypoints = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_keypoints();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes descriptors = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_descriptors();
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

::PROTOBUF_NAMESPACE_ID::uint8* extractRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIDescriptorsExtractor.extractRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes image = 1;
  if (!this->_internal_image().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_image(), target);
  }

  // bytes keypoints = 2;
  if (!this->_internal_keypoints().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_keypoints(), target);
  }

  // bytes descriptors = 3;
  if (!this->_internal_descriptors().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_descriptors(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIDescriptorsExtractor.extractRequest)
  return target;
}

size_t extractRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIDescriptorsExtractor.extractRequest)
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

  // bytes keypoints = 2;
  if (!this->_internal_keypoints().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keypoints());
  }

  // bytes descriptors = 3;
  if (!this->_internal_descriptors().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_descriptors());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData extractRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    extractRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*extractRequest::GetClassData() const { return &_class_data_; }

void extractRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<extractRequest *>(to)->MergeFrom(
      static_cast<const extractRequest &>(from));
}


void extractRequest::MergeFrom(const extractRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIDescriptorsExtractor.extractRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image().empty()) {
    _internal_set_image(from._internal_image());
  }
  if (!from._internal_keypoints().empty()) {
    _internal_set_keypoints(from._internal_keypoints());
  }
  if (!from._internal_descriptors().empty()) {
    _internal_set_descriptors(from._internal_descriptors());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void extractRequest::CopyFrom(const extractRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIDescriptorsExtractor.extractRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool extractRequest::IsInitialized() const {
  return true;
}

void extractRequest::InternalSwap(extractRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &image_, GetArenaForAllocation(),
      &other->image_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &keypoints_, GetArenaForAllocation(),
      &other->keypoints_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &descriptors_, GetArenaForAllocation(),
      &other->descriptors_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata extractRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIDescriptorsExtractorService_2eproto_getter, &descriptor_table_grpcIDescriptorsExtractorService_2eproto_once,
      file_level_metadata_grpcIDescriptorsExtractorService_2eproto[1]);
}

// ===================================================================

class extractResponse::_Internal {
 public:
};

extractResponse::extractResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIDescriptorsExtractor.extractResponse)
}
extractResponse::extractResponse(const extractResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  descriptors_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_descriptors().empty()) {
    descriptors_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_descriptors(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIDescriptorsExtractor.extractResponse)
}

inline void extractResponse::SharedCtor() {
descriptors_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

extractResponse::~extractResponse() {
  // @@protoc_insertion_point(destructor:grpcIDescriptorsExtractor.extractResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void extractResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  descriptors_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
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
// @@protoc_insertion_point(message_clear_start:grpcIDescriptorsExtractor.extractResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  descriptors_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* extractResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes descriptors = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_descriptors();
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

::PROTOBUF_NAMESPACE_ID::uint8* extractResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIDescriptorsExtractor.extractResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes descriptors = 1;
  if (!this->_internal_descriptors().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_descriptors(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIDescriptorsExtractor.extractResponse)
  return target;
}

size_t extractResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIDescriptorsExtractor.extractResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes descriptors = 1;
  if (!this->_internal_descriptors().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_descriptors());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData extractResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    extractResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*extractResponse::GetClassData() const { return &_class_data_; }

void extractResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<extractResponse *>(to)->MergeFrom(
      static_cast<const extractResponse &>(from));
}


void extractResponse::MergeFrom(const extractResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIDescriptorsExtractor.extractResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_descriptors().empty()) {
    _internal_set_descriptors(from._internal_descriptors());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void extractResponse::CopyFrom(const extractResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIDescriptorsExtractor.extractResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool extractResponse::IsInitialized() const {
  return true;
}

void extractResponse::InternalSwap(extractResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &descriptors_, GetArenaForAllocation(),
      &other->descriptors_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata extractResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIDescriptorsExtractorService_2eproto_getter, &descriptor_table_grpcIDescriptorsExtractorService_2eproto_once,
      file_level_metadata_grpcIDescriptorsExtractorService_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIDescriptorsExtractor
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIDescriptorsExtractor::getTypeStringResponse* Arena::CreateMaybeMessage< ::grpcIDescriptorsExtractor::getTypeStringResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIDescriptorsExtractor::getTypeStringResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIDescriptorsExtractor::extractRequest* Arena::CreateMaybeMessage< ::grpcIDescriptorsExtractor::extractRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIDescriptorsExtractor::extractRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIDescriptorsExtractor::extractResponse* Arena::CreateMaybeMessage< ::grpcIDescriptorsExtractor::extractResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIDescriptorsExtractor::extractResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
