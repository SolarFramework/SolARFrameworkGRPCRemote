// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIKeypointsReIndexerService.proto

#include "grpcIKeypointsReIndexerService.pb.h"

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
namespace grpcIKeypointsReIndexer {
constexpr reindexRequest::reindexRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : keypoints1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , keypoints2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , matches_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , matchedkeypoints1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , matchedkeypoints2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct reindexRequestDefaultTypeInternal {
  constexpr reindexRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~reindexRequestDefaultTypeInternal() {}
  union {
    reindexRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT reindexRequestDefaultTypeInternal _reindexRequest_default_instance_;
constexpr reindexResponse::reindexResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : matchedkeypoints1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , matchedkeypoints2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , xpcfgrpcreturnvalue_(0){}
struct reindexResponseDefaultTypeInternal {
  constexpr reindexResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~reindexResponseDefaultTypeInternal() {}
  union {
    reindexResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT reindexResponseDefaultTypeInternal _reindexResponse_default_instance_;
}  // namespace grpcIKeypointsReIndexer
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcIKeypointsReIndexerService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcIKeypointsReIndexerService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcIKeypointsReIndexerService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grpcIKeypointsReIndexerService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexRequest, keypoints1_),
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexRequest, keypoints2_),
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexRequest, matches_),
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexRequest, matchedkeypoints1_),
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexRequest, matchedkeypoints2_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexResponse, matchedkeypoints1_),
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexResponse, matchedkeypoints2_),
  PROTOBUF_FIELD_OFFSET(::grpcIKeypointsReIndexer::reindexResponse, xpcfgrpcreturnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcIKeypointsReIndexer::reindexRequest)},
  { 10, -1, sizeof(::grpcIKeypointsReIndexer::reindexResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIKeypointsReIndexer::_reindexRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcIKeypointsReIndexer::_reindexResponse_default_instance_),
};

const char descriptor_table_protodef_grpcIKeypointsReIndexerService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$grpcIKeypointsReIndexerService.proto\022\027"
  "grpcIKeypointsReIndexer\032\033google/protobuf"
  "/empty.proto\"\177\n\016reindexRequest\022\022\n\nkeypoi"
  "nts1\030\001 \001(\014\022\022\n\nkeypoints2\030\002 \001(\014\022\017\n\007matche"
  "s\030\003 \001(\014\022\031\n\021matchedKeypoints1\030\004 \001(\014\022\031\n\021ma"
  "tchedKeypoints2\030\005 \001(\014\"d\n\017reindexResponse"
  "\022\031\n\021matchedKeypoints1\030\001 \001(\014\022\031\n\021matchedKe"
  "ypoints2\030\002 \001(\014\022\033\n\023xpcfGrpcReturnValue\030\003 "
  "\001(\0212\200\001\n\036grpcIKeypointsReIndexerService\022^"
  "\n\007reindex\022\'.grpcIKeypointsReIndexer.rein"
  "dexRequest\032(.grpcIKeypointsReIndexer.rei"
  "ndexResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grpcIKeypointsReIndexerService_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcIKeypointsReIndexerService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIKeypointsReIndexerService_2eproto = {
  false, false, 462, descriptor_table_protodef_grpcIKeypointsReIndexerService_2eproto, "grpcIKeypointsReIndexerService.proto", 
  &descriptor_table_grpcIKeypointsReIndexerService_2eproto_once, descriptor_table_grpcIKeypointsReIndexerService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grpcIKeypointsReIndexerService_2eproto::offsets,
  file_level_metadata_grpcIKeypointsReIndexerService_2eproto, file_level_enum_descriptors_grpcIKeypointsReIndexerService_2eproto, file_level_service_descriptors_grpcIKeypointsReIndexerService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpcIKeypointsReIndexerService_2eproto_getter() {
  return &descriptor_table_grpcIKeypointsReIndexerService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcIKeypointsReIndexerService_2eproto(&descriptor_table_grpcIKeypointsReIndexerService_2eproto);
namespace grpcIKeypointsReIndexer {

// ===================================================================

class reindexRequest::_Internal {
 public:
};

reindexRequest::reindexRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIKeypointsReIndexer.reindexRequest)
}
reindexRequest::reindexRequest(const reindexRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  keypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_keypoints1().empty()) {
    keypoints1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_keypoints1(), 
      GetArenaForAllocation());
  }
  keypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_keypoints2().empty()) {
    keypoints2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_keypoints2(), 
      GetArenaForAllocation());
  }
  matches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_matches().empty()) {
    matches_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_matches(), 
      GetArenaForAllocation());
  }
  matchedkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_matchedkeypoints1().empty()) {
    matchedkeypoints1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_matchedkeypoints1(), 
      GetArenaForAllocation());
  }
  matchedkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_matchedkeypoints2().empty()) {
    matchedkeypoints2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_matchedkeypoints2(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcIKeypointsReIndexer.reindexRequest)
}

inline void reindexRequest::SharedCtor() {
keypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
keypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
matches_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
matchedkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
matchedkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

reindexRequest::~reindexRequest() {
  // @@protoc_insertion_point(destructor:grpcIKeypointsReIndexer.reindexRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void reindexRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  keypoints1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  keypoints2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  matches_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  matchedkeypoints1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  matchedkeypoints2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void reindexRequest::ArenaDtor(void* object) {
  reindexRequest* _this = reinterpret_cast< reindexRequest* >(object);
  (void)_this;
}
void reindexRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void reindexRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void reindexRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIKeypointsReIndexer.reindexRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  keypoints1_.ClearToEmpty();
  keypoints2_.ClearToEmpty();
  matches_.ClearToEmpty();
  matchedkeypoints1_.ClearToEmpty();
  matchedkeypoints2_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* reindexRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes keypoints1 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_keypoints1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes keypoints2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_keypoints2();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes matches = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_matches();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes matchedKeypoints1 = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_matchedkeypoints1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes matchedKeypoints2 = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_matchedkeypoints2();
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

::PROTOBUF_NAMESPACE_ID::uint8* reindexRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIKeypointsReIndexer.reindexRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes keypoints1 = 1;
  if (!this->_internal_keypoints1().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_keypoints1(), target);
  }

  // bytes keypoints2 = 2;
  if (!this->_internal_keypoints2().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_keypoints2(), target);
  }

  // bytes matches = 3;
  if (!this->_internal_matches().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_matches(), target);
  }

  // bytes matchedKeypoints1 = 4;
  if (!this->_internal_matchedkeypoints1().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_matchedkeypoints1(), target);
  }

  // bytes matchedKeypoints2 = 5;
  if (!this->_internal_matchedkeypoints2().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_matchedkeypoints2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIKeypointsReIndexer.reindexRequest)
  return target;
}

size_t reindexRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIKeypointsReIndexer.reindexRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes keypoints1 = 1;
  if (!this->_internal_keypoints1().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keypoints1());
  }

  // bytes keypoints2 = 2;
  if (!this->_internal_keypoints2().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_keypoints2());
  }

  // bytes matches = 3;
  if (!this->_internal_matches().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_matches());
  }

  // bytes matchedKeypoints1 = 4;
  if (!this->_internal_matchedkeypoints1().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_matchedkeypoints1());
  }

  // bytes matchedKeypoints2 = 5;
  if (!this->_internal_matchedkeypoints2().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_matchedkeypoints2());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData reindexRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    reindexRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*reindexRequest::GetClassData() const { return &_class_data_; }

void reindexRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<reindexRequest *>(to)->MergeFrom(
      static_cast<const reindexRequest &>(from));
}


void reindexRequest::MergeFrom(const reindexRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIKeypointsReIndexer.reindexRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_keypoints1().empty()) {
    _internal_set_keypoints1(from._internal_keypoints1());
  }
  if (!from._internal_keypoints2().empty()) {
    _internal_set_keypoints2(from._internal_keypoints2());
  }
  if (!from._internal_matches().empty()) {
    _internal_set_matches(from._internal_matches());
  }
  if (!from._internal_matchedkeypoints1().empty()) {
    _internal_set_matchedkeypoints1(from._internal_matchedkeypoints1());
  }
  if (!from._internal_matchedkeypoints2().empty()) {
    _internal_set_matchedkeypoints2(from._internal_matchedkeypoints2());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void reindexRequest::CopyFrom(const reindexRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIKeypointsReIndexer.reindexRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool reindexRequest::IsInitialized() const {
  return true;
}

void reindexRequest::InternalSwap(reindexRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &keypoints1_, GetArenaForAllocation(),
      &other->keypoints1_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &keypoints2_, GetArenaForAllocation(),
      &other->keypoints2_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &matches_, GetArenaForAllocation(),
      &other->matches_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &matchedkeypoints1_, GetArenaForAllocation(),
      &other->matchedkeypoints1_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &matchedkeypoints2_, GetArenaForAllocation(),
      &other->matchedkeypoints2_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata reindexRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIKeypointsReIndexerService_2eproto_getter, &descriptor_table_grpcIKeypointsReIndexerService_2eproto_once,
      file_level_metadata_grpcIKeypointsReIndexerService_2eproto[0]);
}

// ===================================================================

class reindexResponse::_Internal {
 public:
};

reindexResponse::reindexResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcIKeypointsReIndexer.reindexResponse)
}
reindexResponse::reindexResponse(const reindexResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  matchedkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_matchedkeypoints1().empty()) {
    matchedkeypoints1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_matchedkeypoints1(), 
      GetArenaForAllocation());
  }
  matchedkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_matchedkeypoints2().empty()) {
    matchedkeypoints2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_matchedkeypoints2(), 
      GetArenaForAllocation());
  }
  xpcfgrpcreturnvalue_ = from.xpcfgrpcreturnvalue_;
  // @@protoc_insertion_point(copy_constructor:grpcIKeypointsReIndexer.reindexResponse)
}

inline void reindexResponse::SharedCtor() {
matchedkeypoints1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
matchedkeypoints2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
xpcfgrpcreturnvalue_ = 0;
}

reindexResponse::~reindexResponse() {
  // @@protoc_insertion_point(destructor:grpcIKeypointsReIndexer.reindexResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void reindexResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  matchedkeypoints1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  matchedkeypoints2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void reindexResponse::ArenaDtor(void* object) {
  reindexResponse* _this = reinterpret_cast< reindexResponse* >(object);
  (void)_this;
}
void reindexResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void reindexResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void reindexResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcIKeypointsReIndexer.reindexResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  matchedkeypoints1_.ClearToEmpty();
  matchedkeypoints2_.ClearToEmpty();
  xpcfgrpcreturnvalue_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* reindexResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes matchedKeypoints1 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_matchedkeypoints1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes matchedKeypoints2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_matchedkeypoints2();
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

::PROTOBUF_NAMESPACE_ID::uint8* reindexResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcIKeypointsReIndexer.reindexResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes matchedKeypoints1 = 1;
  if (!this->_internal_matchedkeypoints1().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_matchedkeypoints1(), target);
  }

  // bytes matchedKeypoints2 = 2;
  if (!this->_internal_matchedkeypoints2().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_matchedkeypoints2(), target);
  }

  // sint32 xpcfGrpcReturnValue = 3;
  if (this->_internal_xpcfgrpcreturnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(3, this->_internal_xpcfgrpcreturnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcIKeypointsReIndexer.reindexResponse)
  return target;
}

size_t reindexResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcIKeypointsReIndexer.reindexResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes matchedKeypoints1 = 1;
  if (!this->_internal_matchedkeypoints1().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_matchedkeypoints1());
  }

  // bytes matchedKeypoints2 = 2;
  if (!this->_internal_matchedkeypoints2().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_matchedkeypoints2());
  }

  // sint32 xpcfGrpcReturnValue = 3;
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData reindexResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    reindexResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*reindexResponse::GetClassData() const { return &_class_data_; }

void reindexResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<reindexResponse *>(to)->MergeFrom(
      static_cast<const reindexResponse &>(from));
}


void reindexResponse::MergeFrom(const reindexResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcIKeypointsReIndexer.reindexResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_matchedkeypoints1().empty()) {
    _internal_set_matchedkeypoints1(from._internal_matchedkeypoints1());
  }
  if (!from._internal_matchedkeypoints2().empty()) {
    _internal_set_matchedkeypoints2(from._internal_matchedkeypoints2());
  }
  if (from._internal_xpcfgrpcreturnvalue() != 0) {
    _internal_set_xpcfgrpcreturnvalue(from._internal_xpcfgrpcreturnvalue());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void reindexResponse::CopyFrom(const reindexResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcIKeypointsReIndexer.reindexResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool reindexResponse::IsInitialized() const {
  return true;
}

void reindexResponse::InternalSwap(reindexResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &matchedkeypoints1_, GetArenaForAllocation(),
      &other->matchedkeypoints1_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &matchedkeypoints2_, GetArenaForAllocation(),
      &other->matchedkeypoints2_, other->GetArenaForAllocation()
  );
  swap(xpcfgrpcreturnvalue_, other->xpcfgrpcreturnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata reindexResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcIKeypointsReIndexerService_2eproto_getter, &descriptor_table_grpcIKeypointsReIndexerService_2eproto_once,
      file_level_metadata_grpcIKeypointsReIndexerService_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcIKeypointsReIndexer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcIKeypointsReIndexer::reindexRequest* Arena::CreateMaybeMessage< ::grpcIKeypointsReIndexer::reindexRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIKeypointsReIndexer::reindexRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcIKeypointsReIndexer::reindexResponse* Arena::CreateMaybeMessage< ::grpcIKeypointsReIndexer::reindexResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcIKeypointsReIndexer::reindexResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
