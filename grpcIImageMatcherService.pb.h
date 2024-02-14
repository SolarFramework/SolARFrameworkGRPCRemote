// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIImageMatcherService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIImageMatcherService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIImageMatcherService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIImageMatcherService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIImageMatcherService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIImageMatcherService_2eproto;
namespace grpcIImageMatcher {
class matchRequest;
struct matchRequestDefaultTypeInternal;
extern matchRequestDefaultTypeInternal _matchRequest_default_instance_;
class matchResponse;
struct matchResponseDefaultTypeInternal;
extern matchResponseDefaultTypeInternal _matchResponse_default_instance_;
}  // namespace grpcIImageMatcher
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIImageMatcher::matchRequest* Arena::CreateMaybeMessage<::grpcIImageMatcher::matchRequest>(Arena*);
template<> ::grpcIImageMatcher::matchResponse* Arena::CreateMaybeMessage<::grpcIImageMatcher::matchResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIImageMatcher {

// ===================================================================

class matchRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImageMatcher.matchRequest) */ {
 public:
  inline matchRequest() : matchRequest(nullptr) {}
  ~matchRequest() override;
  explicit PROTOBUF_CONSTEXPR matchRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  matchRequest(const matchRequest& from);
  matchRequest(matchRequest&& from) noexcept
    : matchRequest() {
    *this = ::std::move(from);
  }

  inline matchRequest& operator=(const matchRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline matchRequest& operator=(matchRequest&& from) noexcept {
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
  static const matchRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const matchRequest* internal_default_instance() {
    return reinterpret_cast<const matchRequest*>(
               &_matchRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(matchRequest& a, matchRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(matchRequest* other) {
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
  void UnsafeArenaSwap(matchRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  matchRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<matchRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const matchRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const matchRequest& from);
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
  void InternalSwap(matchRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImageMatcher.matchRequest";
  }
  protected:
  explicit matchRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kImage1FieldNumber = 2,
    kImage2FieldNumber = 3,
    kDescriptors1FieldNumber = 4,
    kDescriptors2FieldNumber = 5,
    kKeypoints1FieldNumber = 6,
    kKeypoints2FieldNumber = 7,
    kMatchesFieldNumber = 8,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes image1 = 2;
  void clear_image1();
  const std::string& image1() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_image1(ArgT0&& arg0, ArgT... args);
  std::string* mutable_image1();
  PROTOBUF_NODISCARD std::string* release_image1();
  void set_allocated_image1(std::string* image1);
  private:
  const std::string& _internal_image1() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_image1(const std::string& value);
  std::string* _internal_mutable_image1();
  public:

  // bytes image2 = 3;
  void clear_image2();
  const std::string& image2() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_image2(ArgT0&& arg0, ArgT... args);
  std::string* mutable_image2();
  PROTOBUF_NODISCARD std::string* release_image2();
  void set_allocated_image2(std::string* image2);
  private:
  const std::string& _internal_image2() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_image2(const std::string& value);
  std::string* _internal_mutable_image2();
  public:

  // bytes descriptors1 = 4;
  void clear_descriptors1();
  const std::string& descriptors1() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_descriptors1(ArgT0&& arg0, ArgT... args);
  std::string* mutable_descriptors1();
  PROTOBUF_NODISCARD std::string* release_descriptors1();
  void set_allocated_descriptors1(std::string* descriptors1);
  private:
  const std::string& _internal_descriptors1() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_descriptors1(const std::string& value);
  std::string* _internal_mutable_descriptors1();
  public:

  // bytes descriptors2 = 5;
  void clear_descriptors2();
  const std::string& descriptors2() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_descriptors2(ArgT0&& arg0, ArgT... args);
  std::string* mutable_descriptors2();
  PROTOBUF_NODISCARD std::string* release_descriptors2();
  void set_allocated_descriptors2(std::string* descriptors2);
  private:
  const std::string& _internal_descriptors2() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_descriptors2(const std::string& value);
  std::string* _internal_mutable_descriptors2();
  public:

  // bytes keypoints1 = 6;
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

  // bytes keypoints2 = 7;
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

  // bytes matches = 8;
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

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIImageMatcher.matchRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr image1_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr image2_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr descriptors1_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr descriptors2_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keypoints1_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keypoints2_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matches_;
  int32_t grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIImageMatcherService_2eproto;
};
// -------------------------------------------------------------------

class matchResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImageMatcher.matchResponse) */ {
 public:
  inline matchResponse() : matchResponse(nullptr) {}
  ~matchResponse() override;
  explicit PROTOBUF_CONSTEXPR matchResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  matchResponse(const matchResponse& from);
  matchResponse(matchResponse&& from) noexcept
    : matchResponse() {
    *this = ::std::move(from);
  }

  inline matchResponse& operator=(const matchResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline matchResponse& operator=(matchResponse&& from) noexcept {
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
  static const matchResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const matchResponse* internal_default_instance() {
    return reinterpret_cast<const matchResponse*>(
               &_matchResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(matchResponse& a, matchResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(matchResponse* other) {
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
  void UnsafeArenaSwap(matchResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  matchResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<matchResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const matchResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const matchResponse& from);
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
  void InternalSwap(matchResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImageMatcher.matchResponse";
  }
  protected:
  explicit matchResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeypoints1FieldNumber = 1,
    kKeypoints2FieldNumber = 2,
    kMatchesFieldNumber = 3,
    kXpcfGrpcReturnValueFieldNumber = 4,
  };
  // bytes keypoints1 = 1;
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

  // bytes keypoints2 = 2;
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

  // bytes matches = 3;
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

  // sint32 xpcfGrpcReturnValue = 4;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIImageMatcher.matchResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keypoints1_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr keypoints2_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr matches_;
  int32_t xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIImageMatcherService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// matchRequest

// int32 grpcServerCompressionFormat = 1;
inline void matchRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline int32_t matchRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline int32_t matchRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void matchRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  grpcservercompressionformat_ = value;
}
inline void matchRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.grpcServerCompressionFormat)
}

// bytes image1 = 2;
inline void matchRequest::clear_image1() {
  image1_.ClearToEmpty();
}
inline const std::string& matchRequest::image1() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.image1)
  return _internal_image1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_image1(ArgT0&& arg0, ArgT... args) {
 
 image1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.image1)
}
inline std::string* matchRequest::mutable_image1() {
  std::string* _s = _internal_mutable_image1();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.image1)
  return _s;
}
inline const std::string& matchRequest::_internal_image1() const {
  return image1_.Get();
}
inline void matchRequest::_internal_set_image1(const std::string& value) {
  
  image1_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_image1() {
  
  return image1_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_image1() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.image1)
  return image1_.Release();
}
inline void matchRequest::set_allocated_image1(std::string* image1) {
  if (image1 != nullptr) {
    
  } else {
    
  }
  image1_.SetAllocated(image1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (image1_.IsDefault()) {
    image1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.image1)
}

// bytes image2 = 3;
inline void matchRequest::clear_image2() {
  image2_.ClearToEmpty();
}
inline const std::string& matchRequest::image2() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.image2)
  return _internal_image2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_image2(ArgT0&& arg0, ArgT... args) {
 
 image2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.image2)
}
inline std::string* matchRequest::mutable_image2() {
  std::string* _s = _internal_mutable_image2();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.image2)
  return _s;
}
inline const std::string& matchRequest::_internal_image2() const {
  return image2_.Get();
}
inline void matchRequest::_internal_set_image2(const std::string& value) {
  
  image2_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_image2() {
  
  return image2_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_image2() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.image2)
  return image2_.Release();
}
inline void matchRequest::set_allocated_image2(std::string* image2) {
  if (image2 != nullptr) {
    
  } else {
    
  }
  image2_.SetAllocated(image2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (image2_.IsDefault()) {
    image2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.image2)
}

// bytes descriptors1 = 4;
inline void matchRequest::clear_descriptors1() {
  descriptors1_.ClearToEmpty();
}
inline const std::string& matchRequest::descriptors1() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.descriptors1)
  return _internal_descriptors1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_descriptors1(ArgT0&& arg0, ArgT... args) {
 
 descriptors1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.descriptors1)
}
inline std::string* matchRequest::mutable_descriptors1() {
  std::string* _s = _internal_mutable_descriptors1();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.descriptors1)
  return _s;
}
inline const std::string& matchRequest::_internal_descriptors1() const {
  return descriptors1_.Get();
}
inline void matchRequest::_internal_set_descriptors1(const std::string& value) {
  
  descriptors1_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_descriptors1() {
  
  return descriptors1_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_descriptors1() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.descriptors1)
  return descriptors1_.Release();
}
inline void matchRequest::set_allocated_descriptors1(std::string* descriptors1) {
  if (descriptors1 != nullptr) {
    
  } else {
    
  }
  descriptors1_.SetAllocated(descriptors1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (descriptors1_.IsDefault()) {
    descriptors1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.descriptors1)
}

// bytes descriptors2 = 5;
inline void matchRequest::clear_descriptors2() {
  descriptors2_.ClearToEmpty();
}
inline const std::string& matchRequest::descriptors2() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.descriptors2)
  return _internal_descriptors2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_descriptors2(ArgT0&& arg0, ArgT... args) {
 
 descriptors2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.descriptors2)
}
inline std::string* matchRequest::mutable_descriptors2() {
  std::string* _s = _internal_mutable_descriptors2();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.descriptors2)
  return _s;
}
inline const std::string& matchRequest::_internal_descriptors2() const {
  return descriptors2_.Get();
}
inline void matchRequest::_internal_set_descriptors2(const std::string& value) {
  
  descriptors2_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_descriptors2() {
  
  return descriptors2_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_descriptors2() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.descriptors2)
  return descriptors2_.Release();
}
inline void matchRequest::set_allocated_descriptors2(std::string* descriptors2) {
  if (descriptors2 != nullptr) {
    
  } else {
    
  }
  descriptors2_.SetAllocated(descriptors2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (descriptors2_.IsDefault()) {
    descriptors2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.descriptors2)
}

// bytes keypoints1 = 6;
inline void matchRequest::clear_keypoints1() {
  keypoints1_.ClearToEmpty();
}
inline const std::string& matchRequest::keypoints1() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.keypoints1)
  return _internal_keypoints1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_keypoints1(ArgT0&& arg0, ArgT... args) {
 
 keypoints1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.keypoints1)
}
inline std::string* matchRequest::mutable_keypoints1() {
  std::string* _s = _internal_mutable_keypoints1();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.keypoints1)
  return _s;
}
inline const std::string& matchRequest::_internal_keypoints1() const {
  return keypoints1_.Get();
}
inline void matchRequest::_internal_set_keypoints1(const std::string& value) {
  
  keypoints1_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_keypoints1() {
  
  return keypoints1_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_keypoints1() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.keypoints1)
  return keypoints1_.Release();
}
inline void matchRequest::set_allocated_keypoints1(std::string* keypoints1) {
  if (keypoints1 != nullptr) {
    
  } else {
    
  }
  keypoints1_.SetAllocated(keypoints1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (keypoints1_.IsDefault()) {
    keypoints1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.keypoints1)
}

// bytes keypoints2 = 7;
inline void matchRequest::clear_keypoints2() {
  keypoints2_.ClearToEmpty();
}
inline const std::string& matchRequest::keypoints2() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.keypoints2)
  return _internal_keypoints2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_keypoints2(ArgT0&& arg0, ArgT... args) {
 
 keypoints2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.keypoints2)
}
inline std::string* matchRequest::mutable_keypoints2() {
  std::string* _s = _internal_mutable_keypoints2();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.keypoints2)
  return _s;
}
inline const std::string& matchRequest::_internal_keypoints2() const {
  return keypoints2_.Get();
}
inline void matchRequest::_internal_set_keypoints2(const std::string& value) {
  
  keypoints2_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_keypoints2() {
  
  return keypoints2_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_keypoints2() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.keypoints2)
  return keypoints2_.Release();
}
inline void matchRequest::set_allocated_keypoints2(std::string* keypoints2) {
  if (keypoints2 != nullptr) {
    
  } else {
    
  }
  keypoints2_.SetAllocated(keypoints2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (keypoints2_.IsDefault()) {
    keypoints2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.keypoints2)
}

// bytes matches = 8;
inline void matchRequest::clear_matches() {
  matches_.ClearToEmpty();
}
inline const std::string& matchRequest::matches() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchRequest.matches)
  return _internal_matches();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchRequest::set_matches(ArgT0&& arg0, ArgT... args) {
 
 matches_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchRequest.matches)
}
inline std::string* matchRequest::mutable_matches() {
  std::string* _s = _internal_mutable_matches();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchRequest.matches)
  return _s;
}
inline const std::string& matchRequest::_internal_matches() const {
  return matches_.Get();
}
inline void matchRequest::_internal_set_matches(const std::string& value) {
  
  matches_.Set(value, GetArenaForAllocation());
}
inline std::string* matchRequest::_internal_mutable_matches() {
  
  return matches_.Mutable(GetArenaForAllocation());
}
inline std::string* matchRequest::release_matches() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchRequest.matches)
  return matches_.Release();
}
inline void matchRequest::set_allocated_matches(std::string* matches) {
  if (matches != nullptr) {
    
  } else {
    
  }
  matches_.SetAllocated(matches, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (matches_.IsDefault()) {
    matches_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchRequest.matches)
}

// -------------------------------------------------------------------

// matchResponse

// bytes keypoints1 = 1;
inline void matchResponse::clear_keypoints1() {
  keypoints1_.ClearToEmpty();
}
inline const std::string& matchResponse::keypoints1() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchResponse.keypoints1)
  return _internal_keypoints1();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchResponse::set_keypoints1(ArgT0&& arg0, ArgT... args) {
 
 keypoints1_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchResponse.keypoints1)
}
inline std::string* matchResponse::mutable_keypoints1() {
  std::string* _s = _internal_mutable_keypoints1();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchResponse.keypoints1)
  return _s;
}
inline const std::string& matchResponse::_internal_keypoints1() const {
  return keypoints1_.Get();
}
inline void matchResponse::_internal_set_keypoints1(const std::string& value) {
  
  keypoints1_.Set(value, GetArenaForAllocation());
}
inline std::string* matchResponse::_internal_mutable_keypoints1() {
  
  return keypoints1_.Mutable(GetArenaForAllocation());
}
inline std::string* matchResponse::release_keypoints1() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchResponse.keypoints1)
  return keypoints1_.Release();
}
inline void matchResponse::set_allocated_keypoints1(std::string* keypoints1) {
  if (keypoints1 != nullptr) {
    
  } else {
    
  }
  keypoints1_.SetAllocated(keypoints1, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (keypoints1_.IsDefault()) {
    keypoints1_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchResponse.keypoints1)
}

// bytes keypoints2 = 2;
inline void matchResponse::clear_keypoints2() {
  keypoints2_.ClearToEmpty();
}
inline const std::string& matchResponse::keypoints2() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchResponse.keypoints2)
  return _internal_keypoints2();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchResponse::set_keypoints2(ArgT0&& arg0, ArgT... args) {
 
 keypoints2_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchResponse.keypoints2)
}
inline std::string* matchResponse::mutable_keypoints2() {
  std::string* _s = _internal_mutable_keypoints2();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchResponse.keypoints2)
  return _s;
}
inline const std::string& matchResponse::_internal_keypoints2() const {
  return keypoints2_.Get();
}
inline void matchResponse::_internal_set_keypoints2(const std::string& value) {
  
  keypoints2_.Set(value, GetArenaForAllocation());
}
inline std::string* matchResponse::_internal_mutable_keypoints2() {
  
  return keypoints2_.Mutable(GetArenaForAllocation());
}
inline std::string* matchResponse::release_keypoints2() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchResponse.keypoints2)
  return keypoints2_.Release();
}
inline void matchResponse::set_allocated_keypoints2(std::string* keypoints2) {
  if (keypoints2 != nullptr) {
    
  } else {
    
  }
  keypoints2_.SetAllocated(keypoints2, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (keypoints2_.IsDefault()) {
    keypoints2_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchResponse.keypoints2)
}

// bytes matches = 3;
inline void matchResponse::clear_matches() {
  matches_.ClearToEmpty();
}
inline const std::string& matchResponse::matches() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchResponse.matches)
  return _internal_matches();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void matchResponse::set_matches(ArgT0&& arg0, ArgT... args) {
 
 matches_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchResponse.matches)
}
inline std::string* matchResponse::mutable_matches() {
  std::string* _s = _internal_mutable_matches();
  // @@protoc_insertion_point(field_mutable:grpcIImageMatcher.matchResponse.matches)
  return _s;
}
inline const std::string& matchResponse::_internal_matches() const {
  return matches_.Get();
}
inline void matchResponse::_internal_set_matches(const std::string& value) {
  
  matches_.Set(value, GetArenaForAllocation());
}
inline std::string* matchResponse::_internal_mutable_matches() {
  
  return matches_.Mutable(GetArenaForAllocation());
}
inline std::string* matchResponse::release_matches() {
  // @@protoc_insertion_point(field_release:grpcIImageMatcher.matchResponse.matches)
  return matches_.Release();
}
inline void matchResponse::set_allocated_matches(std::string* matches) {
  if (matches != nullptr) {
    
  } else {
    
  }
  matches_.SetAllocated(matches, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (matches_.IsDefault()) {
    matches_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIImageMatcher.matchResponse.matches)
}

// sint32 xpcfGrpcReturnValue = 4;
inline void matchResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline int32_t matchResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline int32_t matchResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIImageMatcher.matchResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void matchResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void matchResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIImageMatcher.matchResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIImageMatcher

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIImageMatcherService_2eproto
