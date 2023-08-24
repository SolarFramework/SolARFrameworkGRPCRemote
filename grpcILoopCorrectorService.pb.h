// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcILoopCorrectorService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcILoopCorrectorService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcILoopCorrectorService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcILoopCorrectorService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcILoopCorrectorService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcILoopCorrectorService_2eproto;
namespace grpcILoopCorrector {
class correctRequest;
struct correctRequestDefaultTypeInternal;
extern correctRequestDefaultTypeInternal _correctRequest_default_instance_;
class correctResponse;
struct correctResponseDefaultTypeInternal;
extern correctResponseDefaultTypeInternal _correctResponse_default_instance_;
}  // namespace grpcILoopCorrector
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcILoopCorrector::correctRequest* Arena::CreateMaybeMessage<::grpcILoopCorrector::correctRequest>(Arena*);
template<> ::grpcILoopCorrector::correctResponse* Arena::CreateMaybeMessage<::grpcILoopCorrector::correctResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcILoopCorrector {

// ===================================================================

class correctRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcILoopCorrector.correctRequest) */ {
 public:
  inline correctRequest() : correctRequest(nullptr) {}
  ~correctRequest() override;
  explicit PROTOBUF_CONSTEXPR correctRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  correctRequest(const correctRequest& from);
  correctRequest(correctRequest&& from) noexcept
    : correctRequest() {
    *this = ::std::move(from);
  }

  inline correctRequest& operator=(const correctRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline correctRequest& operator=(correctRequest&& from) noexcept {
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
  static const correctRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const correctRequest* internal_default_instance() {
    return reinterpret_cast<const correctRequest*>(
               &_correctRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(correctRequest& a, correctRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(correctRequest* other) {
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
  void UnsafeArenaSwap(correctRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  correctRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<correctRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const correctRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const correctRequest& from) {
    correctRequest::MergeImpl(*this, from);
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
  void InternalSwap(correctRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcILoopCorrector.correctRequest";
  }
  protected:
  explicit correctRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kQueryKeyframeFieldNumber = 2,
    kDetectedLoopKeyframeFieldNumber = 3,
    kSWlWcFieldNumber = 4,
    kDuplicatedPointsIndicesFieldNumber = 5,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes queryKeyframe = 2;
  void clear_querykeyframe();
  const std::string& querykeyframe() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_querykeyframe(ArgT0&& arg0, ArgT... args);
  std::string* mutable_querykeyframe();
  PROTOBUF_NODISCARD std::string* release_querykeyframe();
  void set_allocated_querykeyframe(std::string* querykeyframe);
  private:
  const std::string& _internal_querykeyframe() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_querykeyframe(const std::string& value);
  std::string* _internal_mutable_querykeyframe();
  public:

  // bytes detectedLoopKeyframe = 3;
  void clear_detectedloopkeyframe();
  const std::string& detectedloopkeyframe() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_detectedloopkeyframe(ArgT0&& arg0, ArgT... args);
  std::string* mutable_detectedloopkeyframe();
  PROTOBUF_NODISCARD std::string* release_detectedloopkeyframe();
  void set_allocated_detectedloopkeyframe(std::string* detectedloopkeyframe);
  private:
  const std::string& _internal_detectedloopkeyframe() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_detectedloopkeyframe(const std::string& value);
  std::string* _internal_mutable_detectedloopkeyframe();
  public:

  // bytes S_wl_wc = 4;
  void clear_s_wl_wc();
  const std::string& s_wl_wc() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_s_wl_wc(ArgT0&& arg0, ArgT... args);
  std::string* mutable_s_wl_wc();
  PROTOBUF_NODISCARD std::string* release_s_wl_wc();
  void set_allocated_s_wl_wc(std::string* s_wl_wc);
  private:
  const std::string& _internal_s_wl_wc() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_s_wl_wc(const std::string& value);
  std::string* _internal_mutable_s_wl_wc();
  public:

  // bytes duplicatedPointsIndices = 5;
  void clear_duplicatedpointsindices();
  const std::string& duplicatedpointsindices() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_duplicatedpointsindices(ArgT0&& arg0, ArgT... args);
  std::string* mutable_duplicatedpointsindices();
  PROTOBUF_NODISCARD std::string* release_duplicatedpointsindices();
  void set_allocated_duplicatedpointsindices(std::string* duplicatedpointsindices);
  private:
  const std::string& _internal_duplicatedpointsindices() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_duplicatedpointsindices(const std::string& value);
  std::string* _internal_mutable_duplicatedpointsindices();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcILoopCorrector.correctRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr querykeyframe_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr detectedloopkeyframe_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr s_wl_wc_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr duplicatedpointsindices_;
    int32_t grpcservercompressionformat_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcILoopCorrectorService_2eproto;
};
// -------------------------------------------------------------------

class correctResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcILoopCorrector.correctResponse) */ {
 public:
  inline correctResponse() : correctResponse(nullptr) {}
  ~correctResponse() override;
  explicit PROTOBUF_CONSTEXPR correctResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  correctResponse(const correctResponse& from);
  correctResponse(correctResponse&& from) noexcept
    : correctResponse() {
    *this = ::std::move(from);
  }

  inline correctResponse& operator=(const correctResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline correctResponse& operator=(correctResponse&& from) noexcept {
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
  static const correctResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const correctResponse* internal_default_instance() {
    return reinterpret_cast<const correctResponse*>(
               &_correctResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(correctResponse& a, correctResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(correctResponse* other) {
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
  void UnsafeArenaSwap(correctResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  correctResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<correctResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const correctResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const correctResponse& from) {
    correctResponse::MergeImpl(*this, from);
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
  void InternalSwap(correctResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcILoopCorrector.correctResponse";
  }
  protected:
  explicit correctResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXpcfGrpcReturnValueFieldNumber = 1,
  };
  // sint32 xpcfGrpcReturnValue = 1;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcILoopCorrector.correctResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t xpcfgrpcreturnvalue_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcILoopCorrectorService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// correctRequest

// int32 grpcServerCompressionFormat = 1;
inline void correctRequest::clear_grpcservercompressionformat() {
  _impl_.grpcservercompressionformat_ = 0;
}
inline int32_t correctRequest::_internal_grpcservercompressionformat() const {
  return _impl_.grpcservercompressionformat_;
}
inline int32_t correctRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcILoopCorrector.correctRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void correctRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  _impl_.grpcservercompressionformat_ = value;
}
inline void correctRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcILoopCorrector.correctRequest.grpcServerCompressionFormat)
}

// bytes queryKeyframe = 2;
inline void correctRequest::clear_querykeyframe() {
  _impl_.querykeyframe_.ClearToEmpty();
}
inline const std::string& correctRequest::querykeyframe() const {
  // @@protoc_insertion_point(field_get:grpcILoopCorrector.correctRequest.queryKeyframe)
  return _internal_querykeyframe();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void correctRequest::set_querykeyframe(ArgT0&& arg0, ArgT... args) {
 
 _impl_.querykeyframe_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcILoopCorrector.correctRequest.queryKeyframe)
}
inline std::string* correctRequest::mutable_querykeyframe() {
  std::string* _s = _internal_mutable_querykeyframe();
  // @@protoc_insertion_point(field_mutable:grpcILoopCorrector.correctRequest.queryKeyframe)
  return _s;
}
inline const std::string& correctRequest::_internal_querykeyframe() const {
  return _impl_.querykeyframe_.Get();
}
inline void correctRequest::_internal_set_querykeyframe(const std::string& value) {
  
  _impl_.querykeyframe_.Set(value, GetArenaForAllocation());
}
inline std::string* correctRequest::_internal_mutable_querykeyframe() {
  
  return _impl_.querykeyframe_.Mutable(GetArenaForAllocation());
}
inline std::string* correctRequest::release_querykeyframe() {
  // @@protoc_insertion_point(field_release:grpcILoopCorrector.correctRequest.queryKeyframe)
  return _impl_.querykeyframe_.Release();
}
inline void correctRequest::set_allocated_querykeyframe(std::string* querykeyframe) {
  if (querykeyframe != nullptr) {
    
  } else {
    
  }
  _impl_.querykeyframe_.SetAllocated(querykeyframe, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.querykeyframe_.IsDefault()) {
    _impl_.querykeyframe_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcILoopCorrector.correctRequest.queryKeyframe)
}

// bytes detectedLoopKeyframe = 3;
inline void correctRequest::clear_detectedloopkeyframe() {
  _impl_.detectedloopkeyframe_.ClearToEmpty();
}
inline const std::string& correctRequest::detectedloopkeyframe() const {
  // @@protoc_insertion_point(field_get:grpcILoopCorrector.correctRequest.detectedLoopKeyframe)
  return _internal_detectedloopkeyframe();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void correctRequest::set_detectedloopkeyframe(ArgT0&& arg0, ArgT... args) {
 
 _impl_.detectedloopkeyframe_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcILoopCorrector.correctRequest.detectedLoopKeyframe)
}
inline std::string* correctRequest::mutable_detectedloopkeyframe() {
  std::string* _s = _internal_mutable_detectedloopkeyframe();
  // @@protoc_insertion_point(field_mutable:grpcILoopCorrector.correctRequest.detectedLoopKeyframe)
  return _s;
}
inline const std::string& correctRequest::_internal_detectedloopkeyframe() const {
  return _impl_.detectedloopkeyframe_.Get();
}
inline void correctRequest::_internal_set_detectedloopkeyframe(const std::string& value) {
  
  _impl_.detectedloopkeyframe_.Set(value, GetArenaForAllocation());
}
inline std::string* correctRequest::_internal_mutable_detectedloopkeyframe() {
  
  return _impl_.detectedloopkeyframe_.Mutable(GetArenaForAllocation());
}
inline std::string* correctRequest::release_detectedloopkeyframe() {
  // @@protoc_insertion_point(field_release:grpcILoopCorrector.correctRequest.detectedLoopKeyframe)
  return _impl_.detectedloopkeyframe_.Release();
}
inline void correctRequest::set_allocated_detectedloopkeyframe(std::string* detectedloopkeyframe) {
  if (detectedloopkeyframe != nullptr) {
    
  } else {
    
  }
  _impl_.detectedloopkeyframe_.SetAllocated(detectedloopkeyframe, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.detectedloopkeyframe_.IsDefault()) {
    _impl_.detectedloopkeyframe_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcILoopCorrector.correctRequest.detectedLoopKeyframe)
}

// bytes S_wl_wc = 4;
inline void correctRequest::clear_s_wl_wc() {
  _impl_.s_wl_wc_.ClearToEmpty();
}
inline const std::string& correctRequest::s_wl_wc() const {
  // @@protoc_insertion_point(field_get:grpcILoopCorrector.correctRequest.S_wl_wc)
  return _internal_s_wl_wc();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void correctRequest::set_s_wl_wc(ArgT0&& arg0, ArgT... args) {
 
 _impl_.s_wl_wc_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcILoopCorrector.correctRequest.S_wl_wc)
}
inline std::string* correctRequest::mutable_s_wl_wc() {
  std::string* _s = _internal_mutable_s_wl_wc();
  // @@protoc_insertion_point(field_mutable:grpcILoopCorrector.correctRequest.S_wl_wc)
  return _s;
}
inline const std::string& correctRequest::_internal_s_wl_wc() const {
  return _impl_.s_wl_wc_.Get();
}
inline void correctRequest::_internal_set_s_wl_wc(const std::string& value) {
  
  _impl_.s_wl_wc_.Set(value, GetArenaForAllocation());
}
inline std::string* correctRequest::_internal_mutable_s_wl_wc() {
  
  return _impl_.s_wl_wc_.Mutable(GetArenaForAllocation());
}
inline std::string* correctRequest::release_s_wl_wc() {
  // @@protoc_insertion_point(field_release:grpcILoopCorrector.correctRequest.S_wl_wc)
  return _impl_.s_wl_wc_.Release();
}
inline void correctRequest::set_allocated_s_wl_wc(std::string* s_wl_wc) {
  if (s_wl_wc != nullptr) {
    
  } else {
    
  }
  _impl_.s_wl_wc_.SetAllocated(s_wl_wc, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.s_wl_wc_.IsDefault()) {
    _impl_.s_wl_wc_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcILoopCorrector.correctRequest.S_wl_wc)
}

// bytes duplicatedPointsIndices = 5;
inline void correctRequest::clear_duplicatedpointsindices() {
  _impl_.duplicatedpointsindices_.ClearToEmpty();
}
inline const std::string& correctRequest::duplicatedpointsindices() const {
  // @@protoc_insertion_point(field_get:grpcILoopCorrector.correctRequest.duplicatedPointsIndices)
  return _internal_duplicatedpointsindices();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void correctRequest::set_duplicatedpointsindices(ArgT0&& arg0, ArgT... args) {
 
 _impl_.duplicatedpointsindices_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcILoopCorrector.correctRequest.duplicatedPointsIndices)
}
inline std::string* correctRequest::mutable_duplicatedpointsindices() {
  std::string* _s = _internal_mutable_duplicatedpointsindices();
  // @@protoc_insertion_point(field_mutable:grpcILoopCorrector.correctRequest.duplicatedPointsIndices)
  return _s;
}
inline const std::string& correctRequest::_internal_duplicatedpointsindices() const {
  return _impl_.duplicatedpointsindices_.Get();
}
inline void correctRequest::_internal_set_duplicatedpointsindices(const std::string& value) {
  
  _impl_.duplicatedpointsindices_.Set(value, GetArenaForAllocation());
}
inline std::string* correctRequest::_internal_mutable_duplicatedpointsindices() {
  
  return _impl_.duplicatedpointsindices_.Mutable(GetArenaForAllocation());
}
inline std::string* correctRequest::release_duplicatedpointsindices() {
  // @@protoc_insertion_point(field_release:grpcILoopCorrector.correctRequest.duplicatedPointsIndices)
  return _impl_.duplicatedpointsindices_.Release();
}
inline void correctRequest::set_allocated_duplicatedpointsindices(std::string* duplicatedpointsindices) {
  if (duplicatedpointsindices != nullptr) {
    
  } else {
    
  }
  _impl_.duplicatedpointsindices_.SetAllocated(duplicatedpointsindices, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.duplicatedpointsindices_.IsDefault()) {
    _impl_.duplicatedpointsindices_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcILoopCorrector.correctRequest.duplicatedPointsIndices)
}

// -------------------------------------------------------------------

// correctResponse

// sint32 xpcfGrpcReturnValue = 1;
inline void correctResponse::clear_xpcfgrpcreturnvalue() {
  _impl_.xpcfgrpcreturnvalue_ = 0;
}
inline int32_t correctResponse::_internal_xpcfgrpcreturnvalue() const {
  return _impl_.xpcfgrpcreturnvalue_;
}
inline int32_t correctResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcILoopCorrector.correctResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void correctResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  _impl_.xpcfgrpcreturnvalue_ = value;
}
inline void correctResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcILoopCorrector.correctResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcILoopCorrector

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcILoopCorrectorService_2eproto
