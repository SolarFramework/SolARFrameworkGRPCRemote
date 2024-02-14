// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIWorldGraphLoaderService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIWorldGraphLoaderService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIWorldGraphLoaderService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_grpcIWorldGraphLoaderService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIWorldGraphLoaderService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIWorldGraphLoaderService_2eproto;
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

class loadRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIWorldGraphLoader.loadRequest) */ {
 public:
  inline loadRequest() : loadRequest(nullptr) {}
  ~loadRequest() override;
  explicit PROTOBUF_CONSTEXPR loadRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
  void UnsafeArenaSwap(loadRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  loadRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<loadRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const loadRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const loadRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(loadRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIWorldGraphLoader.loadRequest";
  }
  protected:
  explicit loadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackablesFieldNumber = 2,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes trackables = 2;
  void clear_trackables();
  const std::string& trackables() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_trackables(ArgT0&& arg0, ArgT... args);
  std::string* mutable_trackables();
  PROTOBUF_NODISCARD std::string* release_trackables();
  void set_allocated_trackables(std::string* trackables);
  private:
  const std::string& _internal_trackables() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_trackables(const std::string& value);
  std::string* _internal_mutable_trackables();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIWorldGraphLoader.loadRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr trackables_;
  int32_t grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIWorldGraphLoaderService_2eproto;
};
// -------------------------------------------------------------------

class loadResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIWorldGraphLoader.loadResponse) */ {
 public:
  inline loadResponse() : loadResponse(nullptr) {}
  ~loadResponse() override;
  explicit PROTOBUF_CONSTEXPR loadResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
  void UnsafeArenaSwap(loadResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  loadResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<loadResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const loadResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const loadResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(loadResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIWorldGraphLoader.loadResponse";
  }
  protected:
  explicit loadResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackablesFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes trackables = 1;
  void clear_trackables();
  const std::string& trackables() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_trackables(ArgT0&& arg0, ArgT... args);
  std::string* mutable_trackables();
  PROTOBUF_NODISCARD std::string* release_trackables();
  void set_allocated_trackables(std::string* trackables);
  private:
  const std::string& _internal_trackables() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_trackables(const std::string& value);
  std::string* _internal_mutable_trackables();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIWorldGraphLoader.loadResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr trackables_;
  int32_t xpcfgrpcreturnvalue_;
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

// int32 grpcServerCompressionFormat = 1;
inline void loadRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline int32_t loadRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline int32_t loadRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIWorldGraphLoader.loadRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void loadRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  grpcservercompressionformat_ = value;
}
inline void loadRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIWorldGraphLoader.loadRequest.grpcServerCompressionFormat)
}

// bytes trackables = 2;
inline void loadRequest::clear_trackables() {
  trackables_.ClearToEmpty();
}
inline const std::string& loadRequest::trackables() const {
  // @@protoc_insertion_point(field_get:grpcIWorldGraphLoader.loadRequest.trackables)
  return _internal_trackables();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void loadRequest::set_trackables(ArgT0&& arg0, ArgT... args) {
 
 trackables_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIWorldGraphLoader.loadRequest.trackables)
}
inline std::string* loadRequest::mutable_trackables() {
  std::string* _s = _internal_mutable_trackables();
  // @@protoc_insertion_point(field_mutable:grpcIWorldGraphLoader.loadRequest.trackables)
  return _s;
}
inline const std::string& loadRequest::_internal_trackables() const {
  return trackables_.Get();
}
inline void loadRequest::_internal_set_trackables(const std::string& value) {
  
  trackables_.Set(value, GetArenaForAllocation());
}
inline std::string* loadRequest::_internal_mutable_trackables() {
  
  return trackables_.Mutable(GetArenaForAllocation());
}
inline std::string* loadRequest::release_trackables() {
  // @@protoc_insertion_point(field_release:grpcIWorldGraphLoader.loadRequest.trackables)
  return trackables_.Release();
}
inline void loadRequest::set_allocated_trackables(std::string* trackables) {
  if (trackables != nullptr) {
    
  } else {
    
  }
  trackables_.SetAllocated(trackables, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (trackables_.IsDefault()) {
    trackables_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
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
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void loadResponse::set_trackables(ArgT0&& arg0, ArgT... args) {
 
 trackables_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIWorldGraphLoader.loadResponse.trackables)
}
inline std::string* loadResponse::mutable_trackables() {
  std::string* _s = _internal_mutable_trackables();
  // @@protoc_insertion_point(field_mutable:grpcIWorldGraphLoader.loadResponse.trackables)
  return _s;
}
inline const std::string& loadResponse::_internal_trackables() const {
  return trackables_.Get();
}
inline void loadResponse::_internal_set_trackables(const std::string& value) {
  
  trackables_.Set(value, GetArenaForAllocation());
}
inline std::string* loadResponse::_internal_mutable_trackables() {
  
  return trackables_.Mutable(GetArenaForAllocation());
}
inline std::string* loadResponse::release_trackables() {
  // @@protoc_insertion_point(field_release:grpcIWorldGraphLoader.loadResponse.trackables)
  return trackables_.Release();
}
inline void loadResponse::set_allocated_trackables(std::string* trackables) {
  if (trackables != nullptr) {
    
  } else {
    
  }
  trackables_.SetAllocated(trackables, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (trackables_.IsDefault()) {
    trackables_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIWorldGraphLoader.loadResponse.trackables)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void loadResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline int32_t loadResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline int32_t loadResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIWorldGraphLoader.loadResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void loadResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void loadResponse::set_xpcfgrpcreturnvalue(int32_t value) {
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
