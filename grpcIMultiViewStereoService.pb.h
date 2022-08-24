// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIMultiViewStereoService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIMultiViewStereoService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIMultiViewStereoService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_grpcIMultiViewStereoService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIMultiViewStereoService_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIMultiViewStereoService_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_grpcIMultiViewStereoService_2eproto_metadata_getter(int index);
namespace grpcIMultiViewStereo {
class createDenseMapRequest;
struct createDenseMapRequestDefaultTypeInternal;
extern createDenseMapRequestDefaultTypeInternal _createDenseMapRequest_default_instance_;
class createDenseMapResponse;
struct createDenseMapResponseDefaultTypeInternal;
extern createDenseMapResponseDefaultTypeInternal _createDenseMapResponse_default_instance_;
}  // namespace grpcIMultiViewStereo
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIMultiViewStereo::createDenseMapRequest* Arena::CreateMaybeMessage<::grpcIMultiViewStereo::createDenseMapRequest>(Arena*);
template<> ::grpcIMultiViewStereo::createDenseMapResponse* Arena::CreateMaybeMessage<::grpcIMultiViewStereo::createDenseMapResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIMultiViewStereo {

// ===================================================================

class createDenseMapRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMultiViewStereo.createDenseMapRequest) */ {
 public:
  inline createDenseMapRequest() : createDenseMapRequest(nullptr) {}
  virtual ~createDenseMapRequest();
  explicit constexpr createDenseMapRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  createDenseMapRequest(const createDenseMapRequest& from);
  createDenseMapRequest(createDenseMapRequest&& from) noexcept
    : createDenseMapRequest() {
    *this = ::std::move(from);
  }

  inline createDenseMapRequest& operator=(const createDenseMapRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline createDenseMapRequest& operator=(createDenseMapRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const createDenseMapRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const createDenseMapRequest* internal_default_instance() {
    return reinterpret_cast<const createDenseMapRequest*>(
               &_createDenseMapRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(createDenseMapRequest& a, createDenseMapRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(createDenseMapRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(createDenseMapRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline createDenseMapRequest* New() const final {
    return CreateMaybeMessage<createDenseMapRequest>(nullptr);
  }

  createDenseMapRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<createDenseMapRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const createDenseMapRequest& from);
  void MergeFrom(const createDenseMapRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(createDenseMapRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMultiViewStereo.createDenseMapRequest";
  }
  protected:
  explicit createDenseMapRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIMultiViewStereoService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMapFieldNumber = 2,
    kDensemapFieldNumber = 3,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes map = 2;
  void clear_map();
  const std::string& map() const;
  void set_map(const std::string& value);
  void set_map(std::string&& value);
  void set_map(const char* value);
  void set_map(const void* value, size_t size);
  std::string* mutable_map();
  std::string* release_map();
  void set_allocated_map(std::string* map);
  private:
  const std::string& _internal_map() const;
  void _internal_set_map(const std::string& value);
  std::string* _internal_mutable_map();
  public:

  // bytes densemap = 3;
  void clear_densemap();
  const std::string& densemap() const;
  void set_densemap(const std::string& value);
  void set_densemap(std::string&& value);
  void set_densemap(const char* value);
  void set_densemap(const void* value, size_t size);
  std::string* mutable_densemap();
  std::string* release_densemap();
  void set_allocated_densemap(std::string* densemap);
  private:
  const std::string& _internal_densemap() const;
  void _internal_set_densemap(const std::string& value);
  std::string* _internal_mutable_densemap();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  ::PROTOBUF_NAMESPACE_ID::int32 grpcservercompressionformat() const;
  void set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIMultiViewStereo.createDenseMapRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr map_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr densemap_;
  ::PROTOBUF_NAMESPACE_ID::int32 grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIMultiViewStereoService_2eproto;
};
// -------------------------------------------------------------------

class createDenseMapResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMultiViewStereo.createDenseMapResponse) */ {
 public:
  inline createDenseMapResponse() : createDenseMapResponse(nullptr) {}
  virtual ~createDenseMapResponse();
  explicit constexpr createDenseMapResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  createDenseMapResponse(const createDenseMapResponse& from);
  createDenseMapResponse(createDenseMapResponse&& from) noexcept
    : createDenseMapResponse() {
    *this = ::std::move(from);
  }

  inline createDenseMapResponse& operator=(const createDenseMapResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline createDenseMapResponse& operator=(createDenseMapResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const createDenseMapResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const createDenseMapResponse* internal_default_instance() {
    return reinterpret_cast<const createDenseMapResponse*>(
               &_createDenseMapResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(createDenseMapResponse& a, createDenseMapResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(createDenseMapResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(createDenseMapResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline createDenseMapResponse* New() const final {
    return CreateMaybeMessage<createDenseMapResponse>(nullptr);
  }

  createDenseMapResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<createDenseMapResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const createDenseMapResponse& from);
  void MergeFrom(const createDenseMapResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(createDenseMapResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMultiViewStereo.createDenseMapResponse";
  }
  protected:
  explicit createDenseMapResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIMultiViewStereoService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDensemapFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes densemap = 1;
  void clear_densemap();
  const std::string& densemap() const;
  void set_densemap(const std::string& value);
  void set_densemap(std::string&& value);
  void set_densemap(const char* value);
  void set_densemap(const void* value, size_t size);
  std::string* mutable_densemap();
  std::string* release_densemap();
  void set_allocated_densemap(std::string* densemap);
  private:
  const std::string& _internal_densemap() const;
  void _internal_set_densemap(const std::string& value);
  std::string* _internal_mutable_densemap();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIMultiViewStereo.createDenseMapResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr densemap_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIMultiViewStereoService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// createDenseMapRequest

// int32 grpcServerCompressionFormat = 1;
inline void createDenseMapRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 createDenseMapRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 createDenseMapRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIMultiViewStereo.createDenseMapRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void createDenseMapRequest::_internal_set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  grpcservercompressionformat_ = value;
}
inline void createDenseMapRequest::set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIMultiViewStereo.createDenseMapRequest.grpcServerCompressionFormat)
}

// bytes map = 2;
inline void createDenseMapRequest::clear_map() {
  map_.ClearToEmpty();
}
inline const std::string& createDenseMapRequest::map() const {
  // @@protoc_insertion_point(field_get:grpcIMultiViewStereo.createDenseMapRequest.map)
  return _internal_map();
}
inline void createDenseMapRequest::set_map(const std::string& value) {
  _internal_set_map(value);
  // @@protoc_insertion_point(field_set:grpcIMultiViewStereo.createDenseMapRequest.map)
}
inline std::string* createDenseMapRequest::mutable_map() {
  // @@protoc_insertion_point(field_mutable:grpcIMultiViewStereo.createDenseMapRequest.map)
  return _internal_mutable_map();
}
inline const std::string& createDenseMapRequest::_internal_map() const {
  return map_.Get();
}
inline void createDenseMapRequest::_internal_set_map(const std::string& value) {
  
  map_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void createDenseMapRequest::set_map(std::string&& value) {
  
  map_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMultiViewStereo.createDenseMapRequest.map)
}
inline void createDenseMapRequest::set_map(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  map_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMultiViewStereo.createDenseMapRequest.map)
}
inline void createDenseMapRequest::set_map(const void* value,
    size_t size) {
  
  map_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMultiViewStereo.createDenseMapRequest.map)
}
inline std::string* createDenseMapRequest::_internal_mutable_map() {
  
  return map_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* createDenseMapRequest::release_map() {
  // @@protoc_insertion_point(field_release:grpcIMultiViewStereo.createDenseMapRequest.map)
  return map_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void createDenseMapRequest::set_allocated_map(std::string* map) {
  if (map != nullptr) {
    
  } else {
    
  }
  map_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), map,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMultiViewStereo.createDenseMapRequest.map)
}

// bytes densemap = 3;
inline void createDenseMapRequest::clear_densemap() {
  densemap_.ClearToEmpty();
}
inline const std::string& createDenseMapRequest::densemap() const {
  // @@protoc_insertion_point(field_get:grpcIMultiViewStereo.createDenseMapRequest.densemap)
  return _internal_densemap();
}
inline void createDenseMapRequest::set_densemap(const std::string& value) {
  _internal_set_densemap(value);
  // @@protoc_insertion_point(field_set:grpcIMultiViewStereo.createDenseMapRequest.densemap)
}
inline std::string* createDenseMapRequest::mutable_densemap() {
  // @@protoc_insertion_point(field_mutable:grpcIMultiViewStereo.createDenseMapRequest.densemap)
  return _internal_mutable_densemap();
}
inline const std::string& createDenseMapRequest::_internal_densemap() const {
  return densemap_.Get();
}
inline void createDenseMapRequest::_internal_set_densemap(const std::string& value) {
  
  densemap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void createDenseMapRequest::set_densemap(std::string&& value) {
  
  densemap_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMultiViewStereo.createDenseMapRequest.densemap)
}
inline void createDenseMapRequest::set_densemap(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  densemap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMultiViewStereo.createDenseMapRequest.densemap)
}
inline void createDenseMapRequest::set_densemap(const void* value,
    size_t size) {
  
  densemap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMultiViewStereo.createDenseMapRequest.densemap)
}
inline std::string* createDenseMapRequest::_internal_mutable_densemap() {
  
  return densemap_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* createDenseMapRequest::release_densemap() {
  // @@protoc_insertion_point(field_release:grpcIMultiViewStereo.createDenseMapRequest.densemap)
  return densemap_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void createDenseMapRequest::set_allocated_densemap(std::string* densemap) {
  if (densemap != nullptr) {
    
  } else {
    
  }
  densemap_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), densemap,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMultiViewStereo.createDenseMapRequest.densemap)
}

// -------------------------------------------------------------------

// createDenseMapResponse

// bytes densemap = 1;
inline void createDenseMapResponse::clear_densemap() {
  densemap_.ClearToEmpty();
}
inline const std::string& createDenseMapResponse::densemap() const {
  // @@protoc_insertion_point(field_get:grpcIMultiViewStereo.createDenseMapResponse.densemap)
  return _internal_densemap();
}
inline void createDenseMapResponse::set_densemap(const std::string& value) {
  _internal_set_densemap(value);
  // @@protoc_insertion_point(field_set:grpcIMultiViewStereo.createDenseMapResponse.densemap)
}
inline std::string* createDenseMapResponse::mutable_densemap() {
  // @@protoc_insertion_point(field_mutable:grpcIMultiViewStereo.createDenseMapResponse.densemap)
  return _internal_mutable_densemap();
}
inline const std::string& createDenseMapResponse::_internal_densemap() const {
  return densemap_.Get();
}
inline void createDenseMapResponse::_internal_set_densemap(const std::string& value) {
  
  densemap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void createDenseMapResponse::set_densemap(std::string&& value) {
  
  densemap_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMultiViewStereo.createDenseMapResponse.densemap)
}
inline void createDenseMapResponse::set_densemap(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  densemap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMultiViewStereo.createDenseMapResponse.densemap)
}
inline void createDenseMapResponse::set_densemap(const void* value,
    size_t size) {
  
  densemap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMultiViewStereo.createDenseMapResponse.densemap)
}
inline std::string* createDenseMapResponse::_internal_mutable_densemap() {
  
  return densemap_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* createDenseMapResponse::release_densemap() {
  // @@protoc_insertion_point(field_release:grpcIMultiViewStereo.createDenseMapResponse.densemap)
  return densemap_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void createDenseMapResponse::set_allocated_densemap(std::string* densemap) {
  if (densemap != nullptr) {
    
  } else {
    
  }
  densemap_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), densemap,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMultiViewStereo.createDenseMapResponse.densemap)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void createDenseMapResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 createDenseMapResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 createDenseMapResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIMultiViewStereo.createDenseMapResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void createDenseMapResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void createDenseMapResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIMultiViewStereo.createDenseMapResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIMultiViewStereo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIMultiViewStereoService_2eproto