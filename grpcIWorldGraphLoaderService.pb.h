// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIWorldGraphLoaderService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIWorldGraphLoaderService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIWorldGraphLoaderService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIWorldGraphLoaderService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIWorldGraphLoaderService_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIWorldGraphLoaderService_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_grpcIWorldGraphLoaderService_2eproto_metadata_getter(int index);
namespace grpcIWorldGraphLoader {
class loadRequest;
struct loadRequestDefaultTypeInternal;
extern loadRequestDefaultTypeInternal _loadRequest_default_instance_;
class loadResponse;
struct loadResponseDefaultTypeInternal;
extern loadResponseDefaultTypeInternal _loadResponse_default_instance_;
}  // namespace grpcIWorldGraphLoader
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIWorldGraphLoader::loadRequest* Arena::CreateMaybeMessage<::grpcIWorldGraphLoader::loadRequest>(Arena*);
template<> ::grpcIWorldGraphLoader::loadResponse* Arena::CreateMaybeMessage<::grpcIWorldGraphLoader::loadResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIWorldGraphLoader {

// ===================================================================

class loadRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIWorldGraphLoader.loadRequest) */ {
 public:
  inline loadRequest() : loadRequest(nullptr) {}
  virtual ~loadRequest();
  explicit constexpr loadRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  loadRequest(const loadRequest& from);
  loadRequest(loadRequest&& from) noexcept
    : loadRequest() {
    *this = ::std::move(from);
  }

  inline loadRequest& operator=(const loadRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline loadRequest& operator=(loadRequest&& from) noexcept {
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
  static const loadRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const loadRequest* internal_default_instance() {
    return reinterpret_cast<const loadRequest*>(
               &_loadRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(loadRequest& a, loadRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(loadRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(loadRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline loadRequest* New() const final {
    return CreateMaybeMessage<loadRequest>(nullptr);
  }

  loadRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<loadRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const loadRequest& from);
  void MergeFrom(const loadRequest& from);
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
  void InternalSwap(loadRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIWorldGraphLoader.loadRequest";
  }
  protected:
  explicit loadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIWorldGraphLoaderService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackablesFieldNumber = 1,
  };
  // bytes trackables = 1;
  void clear_trackables();
  const std::string& trackables() const;
  void set_trackables(const std::string& value);
  void set_trackables(std::string&& value);
  void set_trackables(const char* value);
  void set_trackables(const void* value, size_t size);
  std::string* mutable_trackables();
  std::string* release_trackables();
  void set_allocated_trackables(std::string* trackables);
  private:
  const std::string& _internal_trackables() const;
  void _internal_set_trackables(const std::string& value);
  std::string* _internal_mutable_trackables();
  public:

  // @@protoc_insertion_point(class_scope:grpcIWorldGraphLoader.loadRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr trackables_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIWorldGraphLoaderService_2eproto;
};
// -------------------------------------------------------------------

class loadResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIWorldGraphLoader.loadResponse) */ {
 public:
  inline loadResponse() : loadResponse(nullptr) {}
  virtual ~loadResponse();
  explicit constexpr loadResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  loadResponse(const loadResponse& from);
  loadResponse(loadResponse&& from) noexcept
    : loadResponse() {
    *this = ::std::move(from);
  }

  inline loadResponse& operator=(const loadResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline loadResponse& operator=(loadResponse&& from) noexcept {
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
  static const loadResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const loadResponse* internal_default_instance() {
    return reinterpret_cast<const loadResponse*>(
               &_loadResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(loadResponse& a, loadResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(loadResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(loadResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline loadResponse* New() const final {
    return CreateMaybeMessage<loadResponse>(nullptr);
  }

  loadResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<loadResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const loadResponse& from);
  void MergeFrom(const loadResponse& from);
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
  void InternalSwap(loadResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIWorldGraphLoader.loadResponse";
  }
  protected:
  explicit loadResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIWorldGraphLoaderService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackablesFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes trackables = 1;
  void clear_trackables();
  const std::string& trackables() const;
  void set_trackables(const std::string& value);
  void set_trackables(std::string&& value);
  void set_trackables(const char* value);
  void set_trackables(const void* value, size_t size);
  std::string* mutable_trackables();
  std::string* release_trackables();
  void set_allocated_trackables(std::string* trackables);
  private:
  const std::string& _internal_trackables() const;
  void _internal_set_trackables(const std::string& value);
  std::string* _internal_mutable_trackables();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIWorldGraphLoader.loadResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr trackables_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIWorldGraphLoaderService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// loadRequest

// bytes trackables = 1;
inline void loadRequest::clear_trackables() {
  trackables_.ClearToEmpty();
}
inline const std::string& loadRequest::trackables() const {
  // @@protoc_insertion_point(field_get:grpcIWorldGraphLoader.loadRequest.trackables)
  return _internal_trackables();
}
inline void loadRequest::set_trackables(const std::string& value) {
  _internal_set_trackables(value);
  // @@protoc_insertion_point(field_set:grpcIWorldGraphLoader.loadRequest.trackables)
}
inline std::string* loadRequest::mutable_trackables() {
  // @@protoc_insertion_point(field_mutable:grpcIWorldGraphLoader.loadRequest.trackables)
  return _internal_mutable_trackables();
}
inline const std::string& loadRequest::_internal_trackables() const {
  return trackables_.Get();
}
inline void loadRequest::_internal_set_trackables(const std::string& value) {
  
  trackables_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void loadRequest::set_trackables(std::string&& value) {
  
  trackables_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIWorldGraphLoader.loadRequest.trackables)
}
inline void loadRequest::set_trackables(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  trackables_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIWorldGraphLoader.loadRequest.trackables)
}
inline void loadRequest::set_trackables(const void* value,
    size_t size) {
  
  trackables_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIWorldGraphLoader.loadRequest.trackables)
}
inline std::string* loadRequest::_internal_mutable_trackables() {
  
  return trackables_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* loadRequest::release_trackables() {
  // @@protoc_insertion_point(field_release:grpcIWorldGraphLoader.loadRequest.trackables)
  return trackables_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void loadRequest::set_allocated_trackables(std::string* trackables) {
  if (trackables != nullptr) {
    
  } else {
    
  }
  trackables_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), trackables,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIWorldGraphLoader.loadRequest.trackables)
}

// -------------------------------------------------------------------

// loadResponse

// bytes trackables = 1;
inline void loadResponse::clear_trackables() {
  trackables_.ClearToEmpty();
}
inline const std::string& loadResponse::trackables() const {
  // @@protoc_insertion_point(field_get:grpcIWorldGraphLoader.loadResponse.trackables)
  return _internal_trackables();
}
inline void loadResponse::set_trackables(const std::string& value) {
  _internal_set_trackables(value);
  // @@protoc_insertion_point(field_set:grpcIWorldGraphLoader.loadResponse.trackables)
}
inline std::string* loadResponse::mutable_trackables() {
  // @@protoc_insertion_point(field_mutable:grpcIWorldGraphLoader.loadResponse.trackables)
  return _internal_mutable_trackables();
}
inline const std::string& loadResponse::_internal_trackables() const {
  return trackables_.Get();
}
inline void loadResponse::_internal_set_trackables(const std::string& value) {
  
  trackables_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void loadResponse::set_trackables(std::string&& value) {
  
  trackables_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIWorldGraphLoader.loadResponse.trackables)
}
inline void loadResponse::set_trackables(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  trackables_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIWorldGraphLoader.loadResponse.trackables)
}
inline void loadResponse::set_trackables(const void* value,
    size_t size) {
  
  trackables_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIWorldGraphLoader.loadResponse.trackables)
}
inline std::string* loadResponse::_internal_mutable_trackables() {
  
  return trackables_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* loadResponse::release_trackables() {
  // @@protoc_insertion_point(field_release:grpcIWorldGraphLoader.loadResponse.trackables)
  return trackables_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void loadResponse::set_allocated_trackables(std::string* trackables) {
  if (trackables != nullptr) {
    
  } else {
    
  }
  trackables_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), trackables,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIWorldGraphLoader.loadResponse.trackables)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void loadResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 loadResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 loadResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIWorldGraphLoader.loadResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void loadResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void loadResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIWorldGraphLoader.loadResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIWorldGraphLoader

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIWorldGraphLoaderService_2eproto
