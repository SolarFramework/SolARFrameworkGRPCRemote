// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIMapUpdateService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIMapUpdateService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIMapUpdateService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_grpcIMapUpdateService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIMapUpdateService_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIMapUpdateService_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_grpcIMapUpdateService_2eproto_metadata_getter(int index);
namespace grpcIMapUpdate {
class setCameraParametersRequest;
struct setCameraParametersRequestDefaultTypeInternal;
extern setCameraParametersRequestDefaultTypeInternal _setCameraParametersRequest_default_instance_;
class updateRequest;
struct updateRequestDefaultTypeInternal;
extern updateRequestDefaultTypeInternal _updateRequest_default_instance_;
class updateResponse;
struct updateResponseDefaultTypeInternal;
extern updateResponseDefaultTypeInternal _updateResponse_default_instance_;
}  // namespace grpcIMapUpdate
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIMapUpdate::setCameraParametersRequest* Arena::CreateMaybeMessage<::grpcIMapUpdate::setCameraParametersRequest>(Arena*);
template<> ::grpcIMapUpdate::updateRequest* Arena::CreateMaybeMessage<::grpcIMapUpdate::updateRequest>(Arena*);
template<> ::grpcIMapUpdate::updateResponse* Arena::CreateMaybeMessage<::grpcIMapUpdate::updateResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIMapUpdate {

// ===================================================================

class setCameraParametersRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMapUpdate.setCameraParametersRequest) */ {
 public:
  inline setCameraParametersRequest() : setCameraParametersRequest(nullptr) {}
  virtual ~setCameraParametersRequest();
  explicit constexpr setCameraParametersRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  setCameraParametersRequest(const setCameraParametersRequest& from);
  setCameraParametersRequest(setCameraParametersRequest&& from) noexcept
    : setCameraParametersRequest() {
    *this = ::std::move(from);
  }

  inline setCameraParametersRequest& operator=(const setCameraParametersRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline setCameraParametersRequest& operator=(setCameraParametersRequest&& from) noexcept {
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
  static const setCameraParametersRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const setCameraParametersRequest* internal_default_instance() {
    return reinterpret_cast<const setCameraParametersRequest*>(
               &_setCameraParametersRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(setCameraParametersRequest& a, setCameraParametersRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(setCameraParametersRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(setCameraParametersRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline setCameraParametersRequest* New() const final {
    return CreateMaybeMessage<setCameraParametersRequest>(nullptr);
  }

  setCameraParametersRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<setCameraParametersRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const setCameraParametersRequest& from);
  void MergeFrom(const setCameraParametersRequest& from);
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
  void InternalSwap(setCameraParametersRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMapUpdate.setCameraParametersRequest";
  }
  protected:
  explicit setCameraParametersRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIMapUpdateService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIntrinsicParamsFieldNumber = 1,
    kDistortionParamsFieldNumber = 2,
  };
  // bytes intrinsicParams = 1;
  void clear_intrinsicparams();
  const std::string& intrinsicparams() const;
  void set_intrinsicparams(const std::string& value);
  void set_intrinsicparams(std::string&& value);
  void set_intrinsicparams(const char* value);
  void set_intrinsicparams(const void* value, size_t size);
  std::string* mutable_intrinsicparams();
  std::string* release_intrinsicparams();
  void set_allocated_intrinsicparams(std::string* intrinsicparams);
  private:
  const std::string& _internal_intrinsicparams() const;
  void _internal_set_intrinsicparams(const std::string& value);
  std::string* _internal_mutable_intrinsicparams();
  public:

  // bytes distortionParams = 2;
  void clear_distortionparams();
  const std::string& distortionparams() const;
  void set_distortionparams(const std::string& value);
  void set_distortionparams(std::string&& value);
  void set_distortionparams(const char* value);
  void set_distortionparams(const void* value, size_t size);
  std::string* mutable_distortionparams();
  std::string* release_distortionparams();
  void set_allocated_distortionparams(std::string* distortionparams);
  private:
  const std::string& _internal_distortionparams() const;
  void _internal_set_distortionparams(const std::string& value);
  std::string* _internal_mutable_distortionparams();
  public:

  // @@protoc_insertion_point(class_scope:grpcIMapUpdate.setCameraParametersRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr intrinsicparams_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr distortionparams_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIMapUpdateService_2eproto;
};
// -------------------------------------------------------------------

class updateRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMapUpdate.updateRequest) */ {
 public:
  inline updateRequest() : updateRequest(nullptr) {}
  virtual ~updateRequest();
  explicit constexpr updateRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  updateRequest(const updateRequest& from);
  updateRequest(updateRequest&& from) noexcept
    : updateRequest() {
    *this = ::std::move(from);
  }

  inline updateRequest& operator=(const updateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline updateRequest& operator=(updateRequest&& from) noexcept {
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
  static const updateRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const updateRequest* internal_default_instance() {
    return reinterpret_cast<const updateRequest*>(
               &_updateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(updateRequest& a, updateRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(updateRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(updateRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline updateRequest* New() const final {
    return CreateMaybeMessage<updateRequest>(nullptr);
  }

  updateRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<updateRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const updateRequest& from);
  void MergeFrom(const updateRequest& from);
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
  void InternalSwap(updateRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMapUpdate.updateRequest";
  }
  protected:
  explicit updateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIMapUpdateService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGlobalMapFieldNumber = 1,
    kNewKeyframeIdsFieldNumber = 2,
  };
  // bytes globalMap = 1;
  void clear_globalmap();
  const std::string& globalmap() const;
  void set_globalmap(const std::string& value);
  void set_globalmap(std::string&& value);
  void set_globalmap(const char* value);
  void set_globalmap(const void* value, size_t size);
  std::string* mutable_globalmap();
  std::string* release_globalmap();
  void set_allocated_globalmap(std::string* globalmap);
  private:
  const std::string& _internal_globalmap() const;
  void _internal_set_globalmap(const std::string& value);
  std::string* _internal_mutable_globalmap();
  public:

  // bytes newKeyframeIds = 2;
  void clear_newkeyframeids();
  const std::string& newkeyframeids() const;
  void set_newkeyframeids(const std::string& value);
  void set_newkeyframeids(std::string&& value);
  void set_newkeyframeids(const char* value);
  void set_newkeyframeids(const void* value, size_t size);
  std::string* mutable_newkeyframeids();
  std::string* release_newkeyframeids();
  void set_allocated_newkeyframeids(std::string* newkeyframeids);
  private:
  const std::string& _internal_newkeyframeids() const;
  void _internal_set_newkeyframeids(const std::string& value);
  std::string* _internal_mutable_newkeyframeids();
  public:

  // @@protoc_insertion_point(class_scope:grpcIMapUpdate.updateRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr globalmap_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr newkeyframeids_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIMapUpdateService_2eproto;
};
// -------------------------------------------------------------------

class updateResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMapUpdate.updateResponse) */ {
 public:
  inline updateResponse() : updateResponse(nullptr) {}
  virtual ~updateResponse();
  explicit constexpr updateResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  updateResponse(const updateResponse& from);
  updateResponse(updateResponse&& from) noexcept
    : updateResponse() {
    *this = ::std::move(from);
  }

  inline updateResponse& operator=(const updateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline updateResponse& operator=(updateResponse&& from) noexcept {
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
  static const updateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const updateResponse* internal_default_instance() {
    return reinterpret_cast<const updateResponse*>(
               &_updateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(updateResponse& a, updateResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(updateResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(updateResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline updateResponse* New() const final {
    return CreateMaybeMessage<updateResponse>(nullptr);
  }

  updateResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<updateResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const updateResponse& from);
  void MergeFrom(const updateResponse& from);
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
  void InternalSwap(updateResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMapUpdate.updateResponse";
  }
  protected:
  explicit updateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIMapUpdateService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXpcfGrpcReturnValueFieldNumber = 1,
  };
  // sint32 xpcfGrpcReturnValue = 1;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIMapUpdate.updateResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIMapUpdateService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// setCameraParametersRequest

// bytes intrinsicParams = 1;
inline void setCameraParametersRequest::clear_intrinsicparams() {
  intrinsicparams_.ClearToEmpty();
}
inline const std::string& setCameraParametersRequest::intrinsicparams() const {
  // @@protoc_insertion_point(field_get:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
  return _internal_intrinsicparams();
}
inline void setCameraParametersRequest::set_intrinsicparams(const std::string& value) {
  _internal_set_intrinsicparams(value);
  // @@protoc_insertion_point(field_set:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
}
inline std::string* setCameraParametersRequest::mutable_intrinsicparams() {
  // @@protoc_insertion_point(field_mutable:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
  return _internal_mutable_intrinsicparams();
}
inline const std::string& setCameraParametersRequest::_internal_intrinsicparams() const {
  return intrinsicparams_.Get();
}
inline void setCameraParametersRequest::_internal_set_intrinsicparams(const std::string& value) {
  
  intrinsicparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void setCameraParametersRequest::set_intrinsicparams(std::string&& value) {
  
  intrinsicparams_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
}
inline void setCameraParametersRequest::set_intrinsicparams(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  intrinsicparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
}
inline void setCameraParametersRequest::set_intrinsicparams(const void* value,
    size_t size) {
  
  intrinsicparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
}
inline std::string* setCameraParametersRequest::_internal_mutable_intrinsicparams() {
  
  return intrinsicparams_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* setCameraParametersRequest::release_intrinsicparams() {
  // @@protoc_insertion_point(field_release:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
  return intrinsicparams_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void setCameraParametersRequest::set_allocated_intrinsicparams(std::string* intrinsicparams) {
  if (intrinsicparams != nullptr) {
    
  } else {
    
  }
  intrinsicparams_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), intrinsicparams,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMapUpdate.setCameraParametersRequest.intrinsicParams)
}

// bytes distortionParams = 2;
inline void setCameraParametersRequest::clear_distortionparams() {
  distortionparams_.ClearToEmpty();
}
inline const std::string& setCameraParametersRequest::distortionparams() const {
  // @@protoc_insertion_point(field_get:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
  return _internal_distortionparams();
}
inline void setCameraParametersRequest::set_distortionparams(const std::string& value) {
  _internal_set_distortionparams(value);
  // @@protoc_insertion_point(field_set:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
}
inline std::string* setCameraParametersRequest::mutable_distortionparams() {
  // @@protoc_insertion_point(field_mutable:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
  return _internal_mutable_distortionparams();
}
inline const std::string& setCameraParametersRequest::_internal_distortionparams() const {
  return distortionparams_.Get();
}
inline void setCameraParametersRequest::_internal_set_distortionparams(const std::string& value) {
  
  distortionparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void setCameraParametersRequest::set_distortionparams(std::string&& value) {
  
  distortionparams_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
}
inline void setCameraParametersRequest::set_distortionparams(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  distortionparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
}
inline void setCameraParametersRequest::set_distortionparams(const void* value,
    size_t size) {
  
  distortionparams_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
}
inline std::string* setCameraParametersRequest::_internal_mutable_distortionparams() {
  
  return distortionparams_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* setCameraParametersRequest::release_distortionparams() {
  // @@protoc_insertion_point(field_release:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
  return distortionparams_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void setCameraParametersRequest::set_allocated_distortionparams(std::string* distortionparams) {
  if (distortionparams != nullptr) {
    
  } else {
    
  }
  distortionparams_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), distortionparams,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMapUpdate.setCameraParametersRequest.distortionParams)
}

// -------------------------------------------------------------------

// updateRequest

// bytes globalMap = 1;
inline void updateRequest::clear_globalmap() {
  globalmap_.ClearToEmpty();
}
inline const std::string& updateRequest::globalmap() const {
  // @@protoc_insertion_point(field_get:grpcIMapUpdate.updateRequest.globalMap)
  return _internal_globalmap();
}
inline void updateRequest::set_globalmap(const std::string& value) {
  _internal_set_globalmap(value);
  // @@protoc_insertion_point(field_set:grpcIMapUpdate.updateRequest.globalMap)
}
inline std::string* updateRequest::mutable_globalmap() {
  // @@protoc_insertion_point(field_mutable:grpcIMapUpdate.updateRequest.globalMap)
  return _internal_mutable_globalmap();
}
inline const std::string& updateRequest::_internal_globalmap() const {
  return globalmap_.Get();
}
inline void updateRequest::_internal_set_globalmap(const std::string& value) {
  
  globalmap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void updateRequest::set_globalmap(std::string&& value) {
  
  globalmap_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMapUpdate.updateRequest.globalMap)
}
inline void updateRequest::set_globalmap(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  globalmap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMapUpdate.updateRequest.globalMap)
}
inline void updateRequest::set_globalmap(const void* value,
    size_t size) {
  
  globalmap_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMapUpdate.updateRequest.globalMap)
}
inline std::string* updateRequest::_internal_mutable_globalmap() {
  
  return globalmap_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* updateRequest::release_globalmap() {
  // @@protoc_insertion_point(field_release:grpcIMapUpdate.updateRequest.globalMap)
  return globalmap_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void updateRequest::set_allocated_globalmap(std::string* globalmap) {
  if (globalmap != nullptr) {
    
  } else {
    
  }
  globalmap_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), globalmap,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMapUpdate.updateRequest.globalMap)
}

// bytes newKeyframeIds = 2;
inline void updateRequest::clear_newkeyframeids() {
  newkeyframeids_.ClearToEmpty();
}
inline const std::string& updateRequest::newkeyframeids() const {
  // @@protoc_insertion_point(field_get:grpcIMapUpdate.updateRequest.newKeyframeIds)
  return _internal_newkeyframeids();
}
inline void updateRequest::set_newkeyframeids(const std::string& value) {
  _internal_set_newkeyframeids(value);
  // @@protoc_insertion_point(field_set:grpcIMapUpdate.updateRequest.newKeyframeIds)
}
inline std::string* updateRequest::mutable_newkeyframeids() {
  // @@protoc_insertion_point(field_mutable:grpcIMapUpdate.updateRequest.newKeyframeIds)
  return _internal_mutable_newkeyframeids();
}
inline const std::string& updateRequest::_internal_newkeyframeids() const {
  return newkeyframeids_.Get();
}
inline void updateRequest::_internal_set_newkeyframeids(const std::string& value) {
  
  newkeyframeids_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void updateRequest::set_newkeyframeids(std::string&& value) {
  
  newkeyframeids_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcIMapUpdate.updateRequest.newKeyframeIds)
}
inline void updateRequest::set_newkeyframeids(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  newkeyframeids_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcIMapUpdate.updateRequest.newKeyframeIds)
}
inline void updateRequest::set_newkeyframeids(const void* value,
    size_t size) {
  
  newkeyframeids_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcIMapUpdate.updateRequest.newKeyframeIds)
}
inline std::string* updateRequest::_internal_mutable_newkeyframeids() {
  
  return newkeyframeids_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* updateRequest::release_newkeyframeids() {
  // @@protoc_insertion_point(field_release:grpcIMapUpdate.updateRequest.newKeyframeIds)
  return newkeyframeids_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void updateRequest::set_allocated_newkeyframeids(std::string* newkeyframeids) {
  if (newkeyframeids != nullptr) {
    
  } else {
    
  }
  newkeyframeids_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), newkeyframeids,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcIMapUpdate.updateRequest.newKeyframeIds)
}

// -------------------------------------------------------------------

// updateResponse

// sint32 xpcfGrpcReturnValue = 1;
inline void updateResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 updateResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 updateResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIMapUpdate.updateResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void updateResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void updateResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIMapUpdate.updateResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIMapUpdate

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIMapUpdateService_2eproto
