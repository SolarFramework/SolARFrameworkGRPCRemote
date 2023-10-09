// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIImage2WorldMapperService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIImage2WorldMapperService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIImage2WorldMapperService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
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
#define PROTOBUF_INTERNAL_EXPORT_grpcIImage2WorldMapperService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIImage2WorldMapperService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIImage2WorldMapperService_2eproto;
namespace grpcIImage2WorldMapper {
class mapRequest;
struct mapRequestDefaultTypeInternal;
extern mapRequestDefaultTypeInternal _mapRequest_default_instance_;
class mapResponse;
struct mapResponseDefaultTypeInternal;
extern mapResponseDefaultTypeInternal _mapResponse_default_instance_;
}  // namespace grpcIImage2WorldMapper
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIImage2WorldMapper::mapRequest* Arena::CreateMaybeMessage<::grpcIImage2WorldMapper::mapRequest>(Arena*);
template<> ::grpcIImage2WorldMapper::mapResponse* Arena::CreateMaybeMessage<::grpcIImage2WorldMapper::mapResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIImage2WorldMapper {

// ===================================================================

class mapRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImage2WorldMapper.mapRequest) */ {
 public:
  inline mapRequest() : mapRequest(nullptr) {}
  ~mapRequest() override;
  explicit PROTOBUF_CONSTEXPR mapRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  mapRequest(const mapRequest& from);
  mapRequest(mapRequest&& from) noexcept
    : mapRequest() {
    *this = ::std::move(from);
  }

  inline mapRequest& operator=(const mapRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline mapRequest& operator=(mapRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const mapRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const mapRequest* internal_default_instance() {
    return reinterpret_cast<const mapRequest*>(
               &_mapRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(mapRequest& a, mapRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(mapRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(mapRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  mapRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<mapRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const mapRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const mapRequest& from) {
    mapRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(mapRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImage2WorldMapper.mapRequest";
  }
  protected:
  explicit mapRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDigitalPointsFieldNumber = 2,
    kWorldPointsFieldNumber = 3,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes digitalPoints = 2;
  void clear_digitalpoints();
  const std::string& digitalpoints() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_digitalpoints(ArgT0&& arg0, ArgT... args);
  std::string* mutable_digitalpoints();
  PROTOBUF_NODISCARD std::string* release_digitalpoints();
  void set_allocated_digitalpoints(std::string* digitalpoints);
  private:
  const std::string& _internal_digitalpoints() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_digitalpoints(const std::string& value);
  std::string* _internal_mutable_digitalpoints();
  public:

  // bytes worldPoints = 3;
  void clear_worldpoints();
  const std::string& worldpoints() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_worldpoints(ArgT0&& arg0, ArgT... args);
  std::string* mutable_worldpoints();
  PROTOBUF_NODISCARD std::string* release_worldpoints();
  void set_allocated_worldpoints(std::string* worldpoints);
  private:
  const std::string& _internal_worldpoints() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_worldpoints(const std::string& value);
  std::string* _internal_mutable_worldpoints();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIImage2WorldMapper.mapRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr digitalpoints_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr worldpoints_;
    int32_t grpcservercompressionformat_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcIImage2WorldMapperService_2eproto;
};
// -------------------------------------------------------------------

class mapResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImage2WorldMapper.mapResponse) */ {
 public:
  inline mapResponse() : mapResponse(nullptr) {}
  ~mapResponse() override;
  explicit PROTOBUF_CONSTEXPR mapResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  mapResponse(const mapResponse& from);
  mapResponse(mapResponse&& from) noexcept
    : mapResponse() {
    *this = ::std::move(from);
  }

  inline mapResponse& operator=(const mapResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline mapResponse& operator=(mapResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const mapResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const mapResponse* internal_default_instance() {
    return reinterpret_cast<const mapResponse*>(
               &_mapResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(mapResponse& a, mapResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(mapResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(mapResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  mapResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<mapResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const mapResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const mapResponse& from) {
    mapResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(mapResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImage2WorldMapper.mapResponse";
  }
  protected:
  explicit mapResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWorldPointsFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes worldPoints = 1;
  void clear_worldpoints();
  const std::string& worldpoints() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_worldpoints(ArgT0&& arg0, ArgT... args);
  std::string* mutable_worldpoints();
  PROTOBUF_NODISCARD std::string* release_worldpoints();
  void set_allocated_worldpoints(std::string* worldpoints);
  private:
  const std::string& _internal_worldpoints() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_worldpoints(const std::string& value);
  std::string* _internal_mutable_worldpoints();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIImage2WorldMapper.mapResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr worldpoints_;
    int32_t xpcfgrpcreturnvalue_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcIImage2WorldMapperService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// mapRequest

// int32 grpcServerCompressionFormat = 1;
inline void mapRequest::clear_grpcservercompressionformat() {
  _impl_.grpcservercompressionformat_ = 0;
}
inline int32_t mapRequest::_internal_grpcservercompressionformat() const {
  return _impl_.grpcservercompressionformat_;
}
inline int32_t mapRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIImage2WorldMapper.mapRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void mapRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  _impl_.grpcservercompressionformat_ = value;
}
inline void mapRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIImage2WorldMapper.mapRequest.grpcServerCompressionFormat)
}

// bytes digitalPoints = 2;
inline void mapRequest::clear_digitalpoints() {
  _impl_.digitalpoints_.ClearToEmpty();
}
inline const std::string& mapRequest::digitalpoints() const {
  // @@protoc_insertion_point(field_get:grpcIImage2WorldMapper.mapRequest.digitalPoints)
  return _internal_digitalpoints();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void mapRequest::set_digitalpoints(ArgT0&& arg0, ArgT... args) {
 
 _impl_.digitalpoints_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImage2WorldMapper.mapRequest.digitalPoints)
}
inline std::string* mapRequest::mutable_digitalpoints() {
  std::string* _s = _internal_mutable_digitalpoints();
  // @@protoc_insertion_point(field_mutable:grpcIImage2WorldMapper.mapRequest.digitalPoints)
  return _s;
}
inline const std::string& mapRequest::_internal_digitalpoints() const {
  return _impl_.digitalpoints_.Get();
}
inline void mapRequest::_internal_set_digitalpoints(const std::string& value) {
  
  _impl_.digitalpoints_.Set(value, GetArenaForAllocation());
}
inline std::string* mapRequest::_internal_mutable_digitalpoints() {
  
  return _impl_.digitalpoints_.Mutable(GetArenaForAllocation());
}
inline std::string* mapRequest::release_digitalpoints() {
  // @@protoc_insertion_point(field_release:grpcIImage2WorldMapper.mapRequest.digitalPoints)
  return _impl_.digitalpoints_.Release();
}
inline void mapRequest::set_allocated_digitalpoints(std::string* digitalpoints) {
  if (digitalpoints != nullptr) {
    
  } else {
    
  }
  _impl_.digitalpoints_.SetAllocated(digitalpoints, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.digitalpoints_.IsDefault()) {
    _impl_.digitalpoints_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImage2WorldMapper.mapRequest.digitalPoints)
}

// bytes worldPoints = 3;
inline void mapRequest::clear_worldpoints() {
  _impl_.worldpoints_.ClearToEmpty();
}
inline const std::string& mapRequest::worldpoints() const {
  // @@protoc_insertion_point(field_get:grpcIImage2WorldMapper.mapRequest.worldPoints)
  return _internal_worldpoints();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void mapRequest::set_worldpoints(ArgT0&& arg0, ArgT... args) {
 
 _impl_.worldpoints_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImage2WorldMapper.mapRequest.worldPoints)
}
inline std::string* mapRequest::mutable_worldpoints() {
  std::string* _s = _internal_mutable_worldpoints();
  // @@protoc_insertion_point(field_mutable:grpcIImage2WorldMapper.mapRequest.worldPoints)
  return _s;
}
inline const std::string& mapRequest::_internal_worldpoints() const {
  return _impl_.worldpoints_.Get();
}
inline void mapRequest::_internal_set_worldpoints(const std::string& value) {
  
  _impl_.worldpoints_.Set(value, GetArenaForAllocation());
}
inline std::string* mapRequest::_internal_mutable_worldpoints() {
  
  return _impl_.worldpoints_.Mutable(GetArenaForAllocation());
}
inline std::string* mapRequest::release_worldpoints() {
  // @@protoc_insertion_point(field_release:grpcIImage2WorldMapper.mapRequest.worldPoints)
  return _impl_.worldpoints_.Release();
}
inline void mapRequest::set_allocated_worldpoints(std::string* worldpoints) {
  if (worldpoints != nullptr) {
    
  } else {
    
  }
  _impl_.worldpoints_.SetAllocated(worldpoints, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.worldpoints_.IsDefault()) {
    _impl_.worldpoints_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImage2WorldMapper.mapRequest.worldPoints)
}

// -------------------------------------------------------------------

// mapResponse

// bytes worldPoints = 1;
inline void mapResponse::clear_worldpoints() {
  _impl_.worldpoints_.ClearToEmpty();
}
inline const std::string& mapResponse::worldpoints() const {
  // @@protoc_insertion_point(field_get:grpcIImage2WorldMapper.mapResponse.worldPoints)
  return _internal_worldpoints();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void mapResponse::set_worldpoints(ArgT0&& arg0, ArgT... args) {
 
 _impl_.worldpoints_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImage2WorldMapper.mapResponse.worldPoints)
}
inline std::string* mapResponse::mutable_worldpoints() {
  std::string* _s = _internal_mutable_worldpoints();
  // @@protoc_insertion_point(field_mutable:grpcIImage2WorldMapper.mapResponse.worldPoints)
  return _s;
}
inline const std::string& mapResponse::_internal_worldpoints() const {
  return _impl_.worldpoints_.Get();
}
inline void mapResponse::_internal_set_worldpoints(const std::string& value) {
  
  _impl_.worldpoints_.Set(value, GetArenaForAllocation());
}
inline std::string* mapResponse::_internal_mutable_worldpoints() {
  
  return _impl_.worldpoints_.Mutable(GetArenaForAllocation());
}
inline std::string* mapResponse::release_worldpoints() {
  // @@protoc_insertion_point(field_release:grpcIImage2WorldMapper.mapResponse.worldPoints)
  return _impl_.worldpoints_.Release();
}
inline void mapResponse::set_allocated_worldpoints(std::string* worldpoints) {
  if (worldpoints != nullptr) {
    
  } else {
    
  }
  _impl_.worldpoints_.SetAllocated(worldpoints, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.worldpoints_.IsDefault()) {
    _impl_.worldpoints_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImage2WorldMapper.mapResponse.worldPoints)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void mapResponse::clear_xpcfgrpcreturnvalue() {
  _impl_.xpcfgrpcreturnvalue_ = 0;
}
inline int32_t mapResponse::_internal_xpcfgrpcreturnvalue() const {
  return _impl_.xpcfgrpcreturnvalue_;
}
inline int32_t mapResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIImage2WorldMapper.mapResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void mapResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  _impl_.xpcfgrpcreturnvalue_ = value;
}
inline void mapResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIImage2WorldMapper.mapResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIImage2WorldMapper

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIImage2WorldMapperService_2eproto
