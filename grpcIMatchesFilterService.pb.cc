// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIMatchesFilterService.proto

#include "grpcIMatchesFilterService.pb.h"

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
namespace grpcIMatchesFilter {
constexpr filterRequest::filterRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : inputmatches_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , keypoints_1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , keypoints_2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , outputmatches_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct filterRequestDefaultTypeInternal {
  constexpr filterRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~filterRequestDefaultTypeInternal() {}
  union {
    filterRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT filterRequestDefaultTypeInternal _filterRequest_default_instance_;
constexpr filterResponse::filterResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : outputmatches_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct filterResponseDefaultTypeInternal {
  constexpr filterResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~filterResponseDefaultTypeInternal() {}
  union {
    filterResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT filterResponseDefaultTypeInternal _filterResponse_default_instance_;
}  // namespace grpcIMatchesFilter
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcIMatchesFilterService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcIMatchesFilterService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcIMatchesFilterService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcIMatchesFilterService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterRequest, inputmatches_),
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterRequest, keypoints_1_),
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterRequest, keypoints_2_),
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterRequest, outputmatches_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIMatchesFilter::filterResponse, outputmatches_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcIMatchesFilter::filterRequest)},
  { 9, -1, sizeof(::grpcIMatchesFilter::filterResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIMatchesFilter::_filterRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIMatchesFilter::_filterResponse_default_instance_),
};

const char descriptor_table_protodef_grpcIMatchesFilterService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037grpcIMatchesFilterService.proto\022\022grpcI"
  "MatchesFilter\032\033google/protobuf/empty.pro"
  "to\"f\n\rfilterRequest\022\024\n\014inputMatches\030\001 \001("
  "\014\022\023\n\013keyPoints_1\030\002 \001(\014\022\023\n\013keyPoints_2\030\003 "
  "\001(\014\022\025\n\routputMatches\030\004 \001(\014\"\'\n\016filterResp"
  "onse\022\025\n\routputMatches\030\001 \001(\0142n\n\031grpcIMatc"
  "hesFilterService\022Q\n\006filter\022!.grpcIMatche"
  "sFilter.filterRequest\032\".grpcIMatchesFilt"
  "er.filterResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcIMatchesFilterService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcIMatchesFilterService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIMatchesFilterService_2eproto = {
  false, false, 347, descriptor_table_protodef_grpcIMatchesFilterService_2eproto, "grpcIMatchesFilterService.proto", 
  &descriptor_table_grpcIMatchesFilterService_2eproto_once, descriptor_table_grpcIMatchesFilterService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcIMatchesFilterService_2eproto::offsets,
  file_level_metadata_grpcIMatchesFilterService_2eproto, file_level_enum_descriptors_grpcIMatchesFilterService_2eproto, file_level_service_descriptors_grpcIMatchesFilterService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpcIMatchesFilterService_2eproto_getter() {
  return &descriptor_table_grpcIMatchesFilterService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcIMatchesFilterService_2eproto(&descriptor_table_grpcIMatchesFilterService_2eproto);
namespace grpcIMatchesFilter {

// ===================================================================

class filterRequest::_Internal {
 public:
};

filterRequest::filterRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIMatchesFilter.filterRequest)
}
filterRequest::filterRequest(const filterRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  inputmatches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_inputmatches().empty()) {
    inputmatches_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_inputmatches(), 
      GetArenaForAllocation());
  }
  keypoints_1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_keypoints_1().empty()) {
    keypoints_1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_keypoints_1(), 
      GetArenaForAllocation());
  }
  keypoints_2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_keypoints_2().empty()) {
    keypoints_2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_keypoints_2(), 
      GetArenaForAllocation());
  }
  outputmatches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_outputmatches().empty()) {
    outputmatches_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_outputmatches(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIMatchesFilter.filterRequest)
}

inline void filterRequest::SharedCtor() {
inputmatches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
keypoints_1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
keypoints_2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
outputmatches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

filterRequest::~filterRequest() {
  // @@protoc_insertion_point(destructor:grpcIMatchesFilter.filterRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void filterRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  inputmatches_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  keypoints_1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  keypoints_2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  outputmatches_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void filterRequest::ArenaDtor(void* object) {
  filterRequest* _this = reinterpret_cast< filterRequest* >(object);
  (void)_this;
}
void filterRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void filterRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void filterRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIMatchesFilter.filterRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  inputmatches_.ClearToEmpty();
  keypoints_1_.ClearToEmpty();
  keypoints_2_.ClearToEmpty();
  outputmatches_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* filterRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes inputMatches = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_inputmatches();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes keyPoints_1 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_keypoints_1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes keyPoints_2 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_keypoints_2();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes outputMatches = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_outputmatches();
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

::PROTOBUF_NAMESPACE_ID::uint8* filterRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIMatchesFilter.filterRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes inputMatches = 1;
  if (!this->_internal_inputmatches().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_inputmatches(), target);
  }

  // bytes keyPoints_1 = 2;
  if (!this->_internal_keypoints_1().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_keypoints_1(), target);
  }

  // bytes keyPoints_2 = 3;
  if (!this->_internal_keypoints_2().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_keypoints_2(), target);
  }

  // bytes outputMatches = 4;
  if (!this->_internal_outputmatches().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_outputmatches(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIMatchesFilter.filterRequest)
  return target;
}

size_t filterRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIMatchesFilter.filterRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes inputMatches = 1;
  if (!this->_internal_inputmatches().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_inputmatches());
  }

  // bytes keyPoints_1 = 2;
  if (!this->_internal_keypoints_1().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keypoints_1());
  }

  // bytes keyPoints_2 = 3;
  if (!this->_internal_keypoints_2().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keypoints_2());
  }

  // bytes outputMatches = 4;
  if (!this->_internal_outputmatches().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_outputmatches());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData filterRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    filterRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*filterRequest::GetClassData() const { return &_class_data_; }

void filterRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<filterRequest *>(to)->MergeFrom(
      static_cast<const filterRequest &>(from));
}


void filterRequest::MergeFrom(const filterRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIMatchesFilter.filterRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_inputmatches().empty()) {
    _internal_set_inputmatches(from._internal_inputmatches());
  }
  if (!from._internal_keypoints_1().empty()) {
    _internal_set_keypoints_1(from._internal_keypoints_1());
  }
  if (!from._internal_keypoints_2().empty()) {
    _internal_set_keypoints_2(from._internal_keypoints_2());
  }
  if (!from._internal_outputmatches().empty()) {
    _internal_set_outputmatches(from._internal_outputmatches());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void filterRequest::CopyFrom(const filterRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIMatchesFilter.filterRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool filterRequest::IsInitialized() const {
  return true;
}

void filterRequest::InternalSwap(filterRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &inputmatches_, GetArenaForAllocation(),
      &other->inputmatches_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &keypoints_1_, GetArenaForAllocation(),
      &other->keypoints_1_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &keypoints_2_, GetArenaForAllocation(),
      &other->keypoints_2_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &outputmatches_, GetArenaForAllocation(),
      &other->outputmatches_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata filterRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIMatchesFilterService_2eproto_getter, &descriptor_table_grpcIMatchesFilterService_2eproto_once,
      file_level_metadata_grpcIMatchesFilterService_2eproto[0]);
}

// ===================================================================

class filterResponse::_Internal {
 public:
};

filterResponse::filterResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIMatchesFilter.filterResponse)
}
filterResponse::filterResponse(const filterResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  outputmatches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_outputmatches().empty()) {
    outputmatches_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_outputmatches(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIMatchesFilter.filterResponse)
}

inline void filterResponse::SharedCtor() {
outputmatches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

filterResponse::~filterResponse() {
  // @@protoc_insertion_point(destructor:grpcIMatchesFilter.filterResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void filterResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  outputmatches_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void filterResponse::ArenaDtor(void* object) {
  filterResponse* _this = reinterpret_cast< filterResponse* >(object);
  (void)_this;
}
void filterResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void filterResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void filterResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIMatchesFilter.filterResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  outputmatches_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* filterResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes outputMatches = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_outputmatches();
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

::PROTOBUF_NAMESPACE_ID::uint8* filterResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIMatchesFilter.filterResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes outputMatches = 1;
  if (!this->_internal_outputmatches().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_outputmatches(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIMatchesFilter.filterResponse)
  return target;
}

size_t filterResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIMatchesFilter.filterResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes outputMatches = 1;
  if (!this->_internal_outputmatches().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_outputmatches());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData filterResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    filterResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*filterResponse::GetClassData() const { return &_class_data_; }

void filterResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<filterResponse *>(to)->MergeFrom(
      static_cast<const filterResponse &>(from));
}


void filterResponse::MergeFrom(const filterResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIMatchesFilter.filterResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_outputmatches().empty()) {
    _internal_set_outputmatches(from._internal_outputmatches());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void filterResponse::CopyFrom(const filterResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIMatchesFilter.filterResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool filterResponse::IsInitialized() const {
  return true;
}

void filterResponse::InternalSwap(filterResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &outputmatches_, GetArenaForAllocation(),
      &other->outputmatches_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata filterResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIMatchesFilterService_2eproto_getter, &descriptor_table_grpcIMatchesFilterService_2eproto_once,
      file_level_metadata_grpcIMatchesFilterService_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIMatchesFilter
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIMatchesFilter::filterRequest* Arena::CreateMaybeMessage< ::grpcIMatchesFilter::filterRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIMatchesFilter::filterRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIMatchesFilter::filterResponse* Arena::CreateMaybeMessage< ::grpcIMatchesFilter::filterResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIMatchesFilter::filterResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
