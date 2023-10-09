// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIKeypointsReIndexerService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIKeypointsReIndexerService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIKeypointsReIndexerService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIKeypointsReIndexerService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIKeypointsReIndexerService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIKeypointsReIndexerService_2eproto;
namespace grpcIKeypointsReIndexer {
class reindexRequest;
struct reindexRequestDefaultTypeInternal;
extern reindexRequestDefaultTypeInternal _reindexRequest_default_instance_;
class reindexResponse;
struct reindexResponseDefaultTypeInternal;
extern reindexResponseDefaultTypeInternal _reindexResponse_default_instance_;
}  // namespace grpcIKeypointsReIndexer
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIKeypointsReIndexer::reindexRequest* Arena::CreateMaybeMessage<::grpcIKeypointsReIndexer::reindexRequest>(Arena*);
template<> ::grpcIKeypointsReIndexer::reindexResponse* Arena::CreateMaybeMessage<::grpcIKeypointsReIndexer::reindexResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIKeypointsReIndexer {

// ===================================================================

class reindexRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIKeypointsReIndexer.reindexRequest) */ {
 public:
  inline reindexRequest() : reindexRequest(nullptr) {}
  ~reindexRequest() override;
  explicit PROTOBUF_CONSTEXPR reindexRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  reindexRequest(const reindexRequest& from);
  reindexRequest(reindexRequest&& from) noexcept
    : reindexRequest() {
    *this = ::std::move(from);
  }

  inline reindexRequest& operator=(const reindexRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline reindexRequest& operator=(reindexRequest&& from) noexcept {
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
  static const reindexRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const reindexRequest* internal_default_instance() {
    return reinterpret_cast<const reindexRequest*>(
               &_reindexRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(reindexRequest& a, reindexRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(reindexRequest* other) {
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
  void UnsafeArenaSwap(reindexRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  reindexRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<reindexRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const reindexRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const reindexRequest& from) {
    reindexRequest::MergeImpl(*this, from);
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
  void InternalSwap(reindexRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIKeypointsReIndexer.reindexRequest";
  }
  protected:
  explicit reindexRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeypoints1FieldNumber = 2,
    kKeypoints2FieldNumber = 3,
    kMatchesFieldNumber = 4,
    kMatchedKeypoints1FieldNumber = 5,
    kMatchedKeypoints2FieldNumber = 6,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes keypoints1 = 2;
  void clear_keypoints1();
  const std::string& keypoints1() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_keypoints1(ArgT0&& arg0, ArgT... args);
  std::string* mutable_keypoints1();
  PROTOBUF_NODISCARD std::string* release_keypoints1();
  void set_allocated_keypoints1(std::string* keypoints1);
  private:
  const std::string& _internal_keypoints1() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_keypoints1(const std::string& value);
  std::string* _internal_mutable_keypoints1();
  public:

  // bytes keypoints2 = 3;
  void clear_keypoints2();
  const std::string& keypoints2() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_keypoints2(ArgT0&& arg0, ArgT... args);
  std::string* mutable_keypoints2();
  PROTOBUF_NODISCARD std::string* release_keypoints2();
  void set_allocated_keypoints2(std::string* keypoints2);
  private:
  const std::string& _internal_keypoints2() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_keypoints2(const std::string& value);
  std::string* _internal_mutable_keypoints2();
  public:

  // bytes matches = 4;
  void clear_matches();
  const std::string& matches() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_matches(ArgT0&& arg0, ArgT... args);
  std::string* mutable_matches();
  PROTOBUF_NODISCARD std::string* release_matches();
  void set_allocated_matches(std::string* matches);
  private:
  const std::string& _internal_matches() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_matches(const std::string& value);
  std::string* _internal_mutable_matches();
  public:

  // bytes matchedKeypoints1 = 5;
  void clear_matchedkeypoints1();
  const std::string& matchedkeypoints1() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_matchedkeypoints1(ArgT0&& arg0, ArgT... args);
  std::string* mutable_matchedkeypoints1();
  PROTOBUF_NODISCARD std::string* release_matchedkeypoints1();
  void set_allocated_matchedkeypoints1(std::string* matchedkeypoints1);
  private:
  const std::string& _internal_matchedkeypoints1() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_matchedkeypoints1(const std::string& value);
  std::string* _internal_mutable_matchedkeypoints1();
  public:

  // bytes matchedKeypoints2 = 6;
  void clear_matchedkeypoints2();
  const std::string& matchedkeypoints2() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_matchedkeypoints2(ArgT0&& arg0, ArgT... args);
  std::string* mutable_matchedkeypoints2();
  PROTOBUF_NODISCARD std::string* release_matchedkeypoints2();
  void set_allocated_matchedkeypoints2(std::string* matchedkeypoints2);
  private:
  const std::string& _internal_matchedkeypoints2() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_matchedkeypoints2(const std::string& value);
  std::string* _internal_mutable_matchedkeypoints2();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIKeypointsReIndexer.reindexRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keypoints1_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keypoints2_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matches_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matchedkeypoints1_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matchedkeypoints2_;
    int32_t grpcservercompressionformat_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcIKeypointsReIndexerService_2eproto;
};
// -------------------------------------------------------------------

class reindexResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIKeypointsReIndexer.reindexResponse) */ {
 public:
  inline reindexResponse() : reindexResponse(nullptr) {}
  ~reindexResponse() override;
  explicit PROTOBUF_CONSTEXPR reindexResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  reindexResponse(const reindexResponse& from);
  reindexResponse(reindexResponse&& from) noexcept
    : reindexResponse() {
    *this = ::std::move(from);
  }

  inline reindexResponse& operator=(const reindexResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline reindexResponse& operator=(reindexResponse&& from) noexcept {
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
  static const reindexResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const reindexResponse* internal_default_instance() {
    return reinterpret_cast<const reindexResponse*>(
               &_reindexResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(reindexResponse& a, reindexResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(reindexResponse* other) {
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
  void UnsafeArenaSwap(reindexResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  reindexResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<reindexResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const reindexResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const reindexResponse& from) {
    reindexResponse::MergeImpl(*this, from);
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
  void InternalSwap(reindexResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIKeypointsReIndexer.reindexResponse";
  }
  protected:
  explicit reindexResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMatchedKeypoints1FieldNumber = 1,
    kMatchedKeypoints2FieldNumber = 2,
    kXpcfGrpcReturnValueFieldNumber = 3,
  };
  // bytes matchedKeypoints1 = 1;
  void clear_matchedkeypoints1();
  const std::string& matchedkeypoints1() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_matchedkeypoints1(ArgT0&& arg0, ArgT... args);
  std::string* mutable_matchedkeypoints1();
  PROTOBUF_NODISCARD std::string* release_matchedkeypoints1();
  void set_allocated_matchedkeypoints1(std::string* matchedkeypoints1);
  private:
  const std::string& _internal_matchedkeypoints1() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_matchedkeypoints1(const std::string& value);
  std::string* _internal_mutable_matchedkeypoints1();
  public:

  // bytes matchedKeypoints2 = 2;
  void clear_matchedkeypoints2();
  const std::string& matchedkeypoints2() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_matchedkeypoints2(ArgT0&& arg0, ArgT... args);
  std::string* mutable_matchedkeypoints2();
  PROTOBUF_NODISCARD std::string* release_matchedkeypoints2();
  void set_allocated_matchedkeypoints2(std::string* matchedkeypoints2);
  private:
  const std::string& _internal_matchedkeypoints2() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_matchedkeypoints2(const std::string& value);
  std::string* _internal_mutable_matchedkeypoints2();
  public:

  // sint32 xpcfGrpcReturnValue = 3;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIKeypointsReIndexer.reindexResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matchedkeypoints1_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matchedkeypoints2_;
    int32_t xpcfgrpcreturnvalue_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcIKeypointsReIndexerService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// reindexRequest

// int32 grpcServerCompressionFormat = 1;
inline void reindexRequest::clear_grpcservercompressionformat() {
  _impl_.grpcservercompressionformat_ = 0;
}
inline int32_t reindexRequest::_internal_grpcservercompressionformat() const {
  return _impl_.grpcservercompressionformat_;
}
inline int32_t reindexRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void reindexRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  _impl_.grpcservercompressionformat_ = value;
}
inline void reindexRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexRequest.grpcServerCompressionFormat)
}

// bytes keypoints1 = 2;
inline void reindexRequest::clear_keypoints1() {
  _impl_.keypoints1_.ClearToEmpty();
}
inline const std::string& reindexRequest::keypoints1() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexRequest.keypoints1)
  return _internal_keypoints1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexRequest::set_keypoints1(ArgT0&& arg0, ArgT... args) {
 
 _impl_.keypoints1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexRequest.keypoints1)
}
inline std::string* reindexRequest::mutable_keypoints1() {
  std::string* _s = _internal_mutable_keypoints1();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexRequest.keypoints1)
  return _s;
}
inline const std::string& reindexRequest::_internal_keypoints1() const {
  return _impl_.keypoints1_.Get();
}
inline void reindexRequest::_internal_set_keypoints1(const std::string& value) {
  
  _impl_.keypoints1_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexRequest::_internal_mutable_keypoints1() {
  
  return _impl_.keypoints1_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexRequest::release_keypoints1() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexRequest.keypoints1)
  return _impl_.keypoints1_.Release();
}
inline void reindexRequest::set_allocated_keypoints1(std::string* keypoints1) {
  if (keypoints1 != nullptr) {
    
  } else {
    
  }
  _impl_.keypoints1_.SetAllocated(keypoints1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.keypoints1_.IsDefault()) {
    _impl_.keypoints1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexRequest.keypoints1)
}

// bytes keypoints2 = 3;
inline void reindexRequest::clear_keypoints2() {
  _impl_.keypoints2_.ClearToEmpty();
}
inline const std::string& reindexRequest::keypoints2() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexRequest.keypoints2)
  return _internal_keypoints2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexRequest::set_keypoints2(ArgT0&& arg0, ArgT... args) {
 
 _impl_.keypoints2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexRequest.keypoints2)
}
inline std::string* reindexRequest::mutable_keypoints2() {
  std::string* _s = _internal_mutable_keypoints2();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexRequest.keypoints2)
  return _s;
}
inline const std::string& reindexRequest::_internal_keypoints2() const {
  return _impl_.keypoints2_.Get();
}
inline void reindexRequest::_internal_set_keypoints2(const std::string& value) {
  
  _impl_.keypoints2_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexRequest::_internal_mutable_keypoints2() {
  
  return _impl_.keypoints2_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexRequest::release_keypoints2() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexRequest.keypoints2)
  return _impl_.keypoints2_.Release();
}
inline void reindexRequest::set_allocated_keypoints2(std::string* keypoints2) {
  if (keypoints2 != nullptr) {
    
  } else {
    
  }
  _impl_.keypoints2_.SetAllocated(keypoints2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.keypoints2_.IsDefault()) {
    _impl_.keypoints2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexRequest.keypoints2)
}

// bytes matches = 4;
inline void reindexRequest::clear_matches() {
  _impl_.matches_.ClearToEmpty();
}
inline const std::string& reindexRequest::matches() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexRequest.matches)
  return _internal_matches();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexRequest::set_matches(ArgT0&& arg0, ArgT... args) {
 
 _impl_.matches_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexRequest.matches)
}
inline std::string* reindexRequest::mutable_matches() {
  std::string* _s = _internal_mutable_matches();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexRequest.matches)
  return _s;
}
inline const std::string& reindexRequest::_internal_matches() const {
  return _impl_.matches_.Get();
}
inline void reindexRequest::_internal_set_matches(const std::string& value) {
  
  _impl_.matches_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexRequest::_internal_mutable_matches() {
  
  return _impl_.matches_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexRequest::release_matches() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexRequest.matches)
  return _impl_.matches_.Release();
}
inline void reindexRequest::set_allocated_matches(std::string* matches) {
  if (matches != nullptr) {
    
  } else {
    
  }
  _impl_.matches_.SetAllocated(matches, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.matches_.IsDefault()) {
    _impl_.matches_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexRequest.matches)
}

// bytes matchedKeypoints1 = 5;
inline void reindexRequest::clear_matchedkeypoints1() {
  _impl_.matchedkeypoints1_.ClearToEmpty();
}
inline const std::string& reindexRequest::matchedkeypoints1() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints1)
  return _internal_matchedkeypoints1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexRequest::set_matchedkeypoints1(ArgT0&& arg0, ArgT... args) {
 
 _impl_.matchedkeypoints1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints1)
}
inline std::string* reindexRequest::mutable_matchedkeypoints1() {
  std::string* _s = _internal_mutable_matchedkeypoints1();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints1)
  return _s;
}
inline const std::string& reindexRequest::_internal_matchedkeypoints1() const {
  return _impl_.matchedkeypoints1_.Get();
}
inline void reindexRequest::_internal_set_matchedkeypoints1(const std::string& value) {
  
  _impl_.matchedkeypoints1_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexRequest::_internal_mutable_matchedkeypoints1() {
  
  return _impl_.matchedkeypoints1_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexRequest::release_matchedkeypoints1() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints1)
  return _impl_.matchedkeypoints1_.Release();
}
inline void reindexRequest::set_allocated_matchedkeypoints1(std::string* matchedkeypoints1) {
  if (matchedkeypoints1 != nullptr) {
    
  } else {
    
  }
  _impl_.matchedkeypoints1_.SetAllocated(matchedkeypoints1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.matchedkeypoints1_.IsDefault()) {
    _impl_.matchedkeypoints1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints1)
}

// bytes matchedKeypoints2 = 6;
inline void reindexRequest::clear_matchedkeypoints2() {
  _impl_.matchedkeypoints2_.ClearToEmpty();
}
inline const std::string& reindexRequest::matchedkeypoints2() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints2)
  return _internal_matchedkeypoints2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexRequest::set_matchedkeypoints2(ArgT0&& arg0, ArgT... args) {
 
 _impl_.matchedkeypoints2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints2)
}
inline std::string* reindexRequest::mutable_matchedkeypoints2() {
  std::string* _s = _internal_mutable_matchedkeypoints2();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints2)
  return _s;
}
inline const std::string& reindexRequest::_internal_matchedkeypoints2() const {
  return _impl_.matchedkeypoints2_.Get();
}
inline void reindexRequest::_internal_set_matchedkeypoints2(const std::string& value) {
  
  _impl_.matchedkeypoints2_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexRequest::_internal_mutable_matchedkeypoints2() {
  
  return _impl_.matchedkeypoints2_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexRequest::release_matchedkeypoints2() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints2)
  return _impl_.matchedkeypoints2_.Release();
}
inline void reindexRequest::set_allocated_matchedkeypoints2(std::string* matchedkeypoints2) {
  if (matchedkeypoints2 != nullptr) {
    
  } else {
    
  }
  _impl_.matchedkeypoints2_.SetAllocated(matchedkeypoints2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.matchedkeypoints2_.IsDefault()) {
    _impl_.matchedkeypoints2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexRequest.matchedKeypoints2)
}

// -------------------------------------------------------------------

// reindexResponse

// bytes matchedKeypoints1 = 1;
inline void reindexResponse::clear_matchedkeypoints1() {
  _impl_.matchedkeypoints1_.ClearToEmpty();
}
inline const std::string& reindexResponse::matchedkeypoints1() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints1)
  return _internal_matchedkeypoints1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexResponse::set_matchedkeypoints1(ArgT0&& arg0, ArgT... args) {
 
 _impl_.matchedkeypoints1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints1)
}
inline std::string* reindexResponse::mutable_matchedkeypoints1() {
  std::string* _s = _internal_mutable_matchedkeypoints1();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints1)
  return _s;
}
inline const std::string& reindexResponse::_internal_matchedkeypoints1() const {
  return _impl_.matchedkeypoints1_.Get();
}
inline void reindexResponse::_internal_set_matchedkeypoints1(const std::string& value) {
  
  _impl_.matchedkeypoints1_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexResponse::_internal_mutable_matchedkeypoints1() {
  
  return _impl_.matchedkeypoints1_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexResponse::release_matchedkeypoints1() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints1)
  return _impl_.matchedkeypoints1_.Release();
}
inline void reindexResponse::set_allocated_matchedkeypoints1(std::string* matchedkeypoints1) {
  if (matchedkeypoints1 != nullptr) {
    
  } else {
    
  }
  _impl_.matchedkeypoints1_.SetAllocated(matchedkeypoints1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.matchedkeypoints1_.IsDefault()) {
    _impl_.matchedkeypoints1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints1)
}

// bytes matchedKeypoints2 = 2;
inline void reindexResponse::clear_matchedkeypoints2() {
  _impl_.matchedkeypoints2_.ClearToEmpty();
}
inline const std::string& reindexResponse::matchedkeypoints2() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints2)
  return _internal_matchedkeypoints2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void reindexResponse::set_matchedkeypoints2(ArgT0&& arg0, ArgT... args) {
 
 _impl_.matchedkeypoints2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints2)
}
inline std::string* reindexResponse::mutable_matchedkeypoints2() {
  std::string* _s = _internal_mutable_matchedkeypoints2();
  // @@protoc_insertion_point(field_mutable:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints2)
  return _s;
}
inline const std::string& reindexResponse::_internal_matchedkeypoints2() const {
  return _impl_.matchedkeypoints2_.Get();
}
inline void reindexResponse::_internal_set_matchedkeypoints2(const std::string& value) {
  
  _impl_.matchedkeypoints2_.Set(value, GetArenaForAllocation());
}
inline std::string* reindexResponse::_internal_mutable_matchedkeypoints2() {
  
  return _impl_.matchedkeypoints2_.Mutable(GetArenaForAllocation());
}
inline std::string* reindexResponse::release_matchedkeypoints2() {
  // @@protoc_insertion_point(field_release:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints2)
  return _impl_.matchedkeypoints2_.Release();
}
inline void reindexResponse::set_allocated_matchedkeypoints2(std::string* matchedkeypoints2) {
  if (matchedkeypoints2 != nullptr) {
    
  } else {
    
  }
  _impl_.matchedkeypoints2_.SetAllocated(matchedkeypoints2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.matchedkeypoints2_.IsDefault()) {
    _impl_.matchedkeypoints2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIKeypointsReIndexer.reindexResponse.matchedKeypoints2)
}

// sint32 xpcfGrpcReturnValue = 3;
inline void reindexResponse::clear_xpcfgrpcreturnvalue() {
  _impl_.xpcfgrpcreturnvalue_ = 0;
}
inline int32_t reindexResponse::_internal_xpcfgrpcreturnvalue() const {
  return _impl_.xpcfgrpcreturnvalue_;
}
inline int32_t reindexResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIKeypointsReIndexer.reindexResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void reindexResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  _impl_.xpcfgrpcreturnvalue_ = value;
}
inline void reindexResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIKeypointsReIndexer.reindexResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIKeypointsReIndexer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIKeypointsReIndexerService_2eproto
