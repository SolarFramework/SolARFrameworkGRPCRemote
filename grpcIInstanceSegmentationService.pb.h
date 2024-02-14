// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIInstanceSegmentationService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIInstanceSegmentationService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIInstanceSegmentationService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIInstanceSegmentationService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIInstanceSegmentationService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIInstanceSegmentationService_2eproto;
namespace grpcIInstanceSegmentation {
class segmentRequest;
struct segmentRequestDefaultTypeInternal;
extern segmentRequestDefaultTypeInternal _segmentRequest_default_instance_;
class segmentResponse;
struct segmentResponseDefaultTypeInternal;
extern segmentResponseDefaultTypeInternal _segmentResponse_default_instance_;
}  // namespace grpcIInstanceSegmentation
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIInstanceSegmentation::segmentRequest* Arena::CreateMaybeMessage<::grpcIInstanceSegmentation::segmentRequest>(Arena*);
template<> ::grpcIInstanceSegmentation::segmentResponse* Arena::CreateMaybeMessage<::grpcIInstanceSegmentation::segmentResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIInstanceSegmentation {

// ===================================================================

class segmentRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIInstanceSegmentation.segmentRequest) */ {
 public:
  inline segmentRequest() : segmentRequest(nullptr) {}
  ~segmentRequest() override;
  explicit PROTOBUF_CONSTEXPR segmentRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  segmentRequest(const segmentRequest& from);
  segmentRequest(segmentRequest&& from) noexcept
    : segmentRequest() {
    *this = ::std::move(from);
  }

  inline segmentRequest& operator=(const segmentRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline segmentRequest& operator=(segmentRequest&& from) noexcept {
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
  static const segmentRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const segmentRequest* internal_default_instance() {
    return reinterpret_cast<const segmentRequest*>(
               &_segmentRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(segmentRequest& a, segmentRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(segmentRequest* other) {
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
  void UnsafeArenaSwap(segmentRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  segmentRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<segmentRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const segmentRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const segmentRequest& from);
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
  void InternalSwap(segmentRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIInstanceSegmentation.segmentRequest";
  }
  protected:
  explicit segmentRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kImageFieldNumber = 2,
    kBoxesFieldNumber = 3,
    kMasksFieldNumber = 4,
    kClassIdsFieldNumber = 5,
    kScoresFieldNumber = 6,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes image = 2;
  void clear_image();
  const std::string& image() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_image(ArgT0&& arg0, ArgT... args);
  std::string* mutable_image();
  PROTOBUF_NODISCARD std::string* release_image();
  void set_allocated_image(std::string* image);
  private:
  const std::string& _internal_image() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_image(const std::string& value);
  std::string* _internal_mutable_image();
  public:

  // bytes boxes = 3;
  void clear_boxes();
  const std::string& boxes() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_boxes(ArgT0&& arg0, ArgT... args);
  std::string* mutable_boxes();
  PROTOBUF_NODISCARD std::string* release_boxes();
  void set_allocated_boxes(std::string* boxes);
  private:
  const std::string& _internal_boxes() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_boxes(const std::string& value);
  std::string* _internal_mutable_boxes();
  public:

  // bytes masks = 4;
  void clear_masks();
  const std::string& masks() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_masks(ArgT0&& arg0, ArgT... args);
  std::string* mutable_masks();
  PROTOBUF_NODISCARD std::string* release_masks();
  void set_allocated_masks(std::string* masks);
  private:
  const std::string& _internal_masks() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_masks(const std::string& value);
  std::string* _internal_mutable_masks();
  public:

  // bytes classIds = 5;
  void clear_classids();
  const std::string& classids() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_classids(ArgT0&& arg0, ArgT... args);
  std::string* mutable_classids();
  PROTOBUF_NODISCARD std::string* release_classids();
  void set_allocated_classids(std::string* classids);
  private:
  const std::string& _internal_classids() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_classids(const std::string& value);
  std::string* _internal_mutable_classids();
  public:

  // bytes scores = 6;
  void clear_scores();
  const std::string& scores() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_scores(ArgT0&& arg0, ArgT... args);
  std::string* mutable_scores();
  PROTOBUF_NODISCARD std::string* release_scores();
  void set_allocated_scores(std::string* scores);
  private:
  const std::string& _internal_scores() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_scores(const std::string& value);
  std::string* _internal_mutable_scores();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIInstanceSegmentation.segmentRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr image_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr boxes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr masks_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr classids_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr scores_;
  int32_t grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIInstanceSegmentationService_2eproto;
};
// -------------------------------------------------------------------

class segmentResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIInstanceSegmentation.segmentResponse) */ {
 public:
  inline segmentResponse() : segmentResponse(nullptr) {}
  ~segmentResponse() override;
  explicit PROTOBUF_CONSTEXPR segmentResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  segmentResponse(const segmentResponse& from);
  segmentResponse(segmentResponse&& from) noexcept
    : segmentResponse() {
    *this = ::std::move(from);
  }

  inline segmentResponse& operator=(const segmentResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline segmentResponse& operator=(segmentResponse&& from) noexcept {
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
  static const segmentResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const segmentResponse* internal_default_instance() {
    return reinterpret_cast<const segmentResponse*>(
               &_segmentResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(segmentResponse& a, segmentResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(segmentResponse* other) {
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
  void UnsafeArenaSwap(segmentResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  segmentResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<segmentResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const segmentResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const segmentResponse& from);
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
  void InternalSwap(segmentResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIInstanceSegmentation.segmentResponse";
  }
  protected:
  explicit segmentResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBoxesFieldNumber = 1,
    kMasksFieldNumber = 2,
    kClassIdsFieldNumber = 3,
    kScoresFieldNumber = 4,
    kXpcfGrpcReturnValueFieldNumber = 5,
  };
  // bytes boxes = 1;
  void clear_boxes();
  const std::string& boxes() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_boxes(ArgT0&& arg0, ArgT... args);
  std::string* mutable_boxes();
  PROTOBUF_NODISCARD std::string* release_boxes();
  void set_allocated_boxes(std::string* boxes);
  private:
  const std::string& _internal_boxes() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_boxes(const std::string& value);
  std::string* _internal_mutable_boxes();
  public:

  // bytes masks = 2;
  void clear_masks();
  const std::string& masks() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_masks(ArgT0&& arg0, ArgT... args);
  std::string* mutable_masks();
  PROTOBUF_NODISCARD std::string* release_masks();
  void set_allocated_masks(std::string* masks);
  private:
  const std::string& _internal_masks() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_masks(const std::string& value);
  std::string* _internal_mutable_masks();
  public:

  // bytes classIds = 3;
  void clear_classids();
  const std::string& classids() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_classids(ArgT0&& arg0, ArgT... args);
  std::string* mutable_classids();
  PROTOBUF_NODISCARD std::string* release_classids();
  void set_allocated_classids(std::string* classids);
  private:
  const std::string& _internal_classids() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_classids(const std::string& value);
  std::string* _internal_mutable_classids();
  public:

  // bytes scores = 4;
  void clear_scores();
  const std::string& scores() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_scores(ArgT0&& arg0, ArgT... args);
  std::string* mutable_scores();
  PROTOBUF_NODISCARD std::string* release_scores();
  void set_allocated_scores(std::string* scores);
  private:
  const std::string& _internal_scores() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_scores(const std::string& value);
  std::string* _internal_mutable_scores();
  public:

  // sint32 xpcfGrpcReturnValue = 5;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIInstanceSegmentation.segmentResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr boxes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr masks_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr classids_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr scores_;
  int32_t xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIInstanceSegmentationService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// segmentRequest

// int32 grpcServerCompressionFormat = 1;
inline void segmentRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline int32_t segmentRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline int32_t segmentRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void segmentRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  grpcservercompressionformat_ = value;
}
inline void segmentRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentRequest.grpcServerCompressionFormat)
}

// bytes image = 2;
inline void segmentRequest::clear_image() {
  image_.ClearToEmpty();
}
inline const std::string& segmentRequest::image() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentRequest.image)
  return _internal_image();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentRequest::set_image(ArgT0&& arg0, ArgT... args) {
 
 image_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentRequest.image)
}
inline std::string* segmentRequest::mutable_image() {
  std::string* _s = _internal_mutable_image();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentRequest.image)
  return _s;
}
inline const std::string& segmentRequest::_internal_image() const {
  return image_.Get();
}
inline void segmentRequest::_internal_set_image(const std::string& value) {
  
  image_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentRequest::_internal_mutable_image() {
  
  return image_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentRequest::release_image() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentRequest.image)
  return image_.Release();
}
inline void segmentRequest::set_allocated_image(std::string* image) {
  if (image != nullptr) {
    
  } else {
    
  }
  image_.SetAllocated(image, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (image_.IsDefault()) {
    image_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentRequest.image)
}

// bytes boxes = 3;
inline void segmentRequest::clear_boxes() {
  boxes_.ClearToEmpty();
}
inline const std::string& segmentRequest::boxes() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentRequest.boxes)
  return _internal_boxes();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentRequest::set_boxes(ArgT0&& arg0, ArgT... args) {
 
 boxes_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentRequest.boxes)
}
inline std::string* segmentRequest::mutable_boxes() {
  std::string* _s = _internal_mutable_boxes();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentRequest.boxes)
  return _s;
}
inline const std::string& segmentRequest::_internal_boxes() const {
  return boxes_.Get();
}
inline void segmentRequest::_internal_set_boxes(const std::string& value) {
  
  boxes_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentRequest::_internal_mutable_boxes() {
  
  return boxes_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentRequest::release_boxes() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentRequest.boxes)
  return boxes_.Release();
}
inline void segmentRequest::set_allocated_boxes(std::string* boxes) {
  if (boxes != nullptr) {
    
  } else {
    
  }
  boxes_.SetAllocated(boxes, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (boxes_.IsDefault()) {
    boxes_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentRequest.boxes)
}

// bytes masks = 4;
inline void segmentRequest::clear_masks() {
  masks_.ClearToEmpty();
}
inline const std::string& segmentRequest::masks() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentRequest.masks)
  return _internal_masks();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentRequest::set_masks(ArgT0&& arg0, ArgT... args) {
 
 masks_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentRequest.masks)
}
inline std::string* segmentRequest::mutable_masks() {
  std::string* _s = _internal_mutable_masks();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentRequest.masks)
  return _s;
}
inline const std::string& segmentRequest::_internal_masks() const {
  return masks_.Get();
}
inline void segmentRequest::_internal_set_masks(const std::string& value) {
  
  masks_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentRequest::_internal_mutable_masks() {
  
  return masks_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentRequest::release_masks() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentRequest.masks)
  return masks_.Release();
}
inline void segmentRequest::set_allocated_masks(std::string* masks) {
  if (masks != nullptr) {
    
  } else {
    
  }
  masks_.SetAllocated(masks, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (masks_.IsDefault()) {
    masks_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentRequest.masks)
}

// bytes classIds = 5;
inline void segmentRequest::clear_classids() {
  classids_.ClearToEmpty();
}
inline const std::string& segmentRequest::classids() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentRequest.classIds)
  return _internal_classids();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentRequest::set_classids(ArgT0&& arg0, ArgT... args) {
 
 classids_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentRequest.classIds)
}
inline std::string* segmentRequest::mutable_classids() {
  std::string* _s = _internal_mutable_classids();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentRequest.classIds)
  return _s;
}
inline const std::string& segmentRequest::_internal_classids() const {
  return classids_.Get();
}
inline void segmentRequest::_internal_set_classids(const std::string& value) {
  
  classids_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentRequest::_internal_mutable_classids() {
  
  return classids_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentRequest::release_classids() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentRequest.classIds)
  return classids_.Release();
}
inline void segmentRequest::set_allocated_classids(std::string* classids) {
  if (classids != nullptr) {
    
  } else {
    
  }
  classids_.SetAllocated(classids, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (classids_.IsDefault()) {
    classids_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentRequest.classIds)
}

// bytes scores = 6;
inline void segmentRequest::clear_scores() {
  scores_.ClearToEmpty();
}
inline const std::string& segmentRequest::scores() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentRequest.scores)
  return _internal_scores();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentRequest::set_scores(ArgT0&& arg0, ArgT... args) {
 
 scores_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentRequest.scores)
}
inline std::string* segmentRequest::mutable_scores() {
  std::string* _s = _internal_mutable_scores();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentRequest.scores)
  return _s;
}
inline const std::string& segmentRequest::_internal_scores() const {
  return scores_.Get();
}
inline void segmentRequest::_internal_set_scores(const std::string& value) {
  
  scores_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentRequest::_internal_mutable_scores() {
  
  return scores_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentRequest::release_scores() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentRequest.scores)
  return scores_.Release();
}
inline void segmentRequest::set_allocated_scores(std::string* scores) {
  if (scores != nullptr) {
    
  } else {
    
  }
  scores_.SetAllocated(scores, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (scores_.IsDefault()) {
    scores_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentRequest.scores)
}

// -------------------------------------------------------------------

// segmentResponse

// bytes boxes = 1;
inline void segmentResponse::clear_boxes() {
  boxes_.ClearToEmpty();
}
inline const std::string& segmentResponse::boxes() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentResponse.boxes)
  return _internal_boxes();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentResponse::set_boxes(ArgT0&& arg0, ArgT... args) {
 
 boxes_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentResponse.boxes)
}
inline std::string* segmentResponse::mutable_boxes() {
  std::string* _s = _internal_mutable_boxes();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentResponse.boxes)
  return _s;
}
inline const std::string& segmentResponse::_internal_boxes() const {
  return boxes_.Get();
}
inline void segmentResponse::_internal_set_boxes(const std::string& value) {
  
  boxes_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentResponse::_internal_mutable_boxes() {
  
  return boxes_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentResponse::release_boxes() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentResponse.boxes)
  return boxes_.Release();
}
inline void segmentResponse::set_allocated_boxes(std::string* boxes) {
  if (boxes != nullptr) {
    
  } else {
    
  }
  boxes_.SetAllocated(boxes, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (boxes_.IsDefault()) {
    boxes_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentResponse.boxes)
}

// bytes masks = 2;
inline void segmentResponse::clear_masks() {
  masks_.ClearToEmpty();
}
inline const std::string& segmentResponse::masks() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentResponse.masks)
  return _internal_masks();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentResponse::set_masks(ArgT0&& arg0, ArgT... args) {
 
 masks_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentResponse.masks)
}
inline std::string* segmentResponse::mutable_masks() {
  std::string* _s = _internal_mutable_masks();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentResponse.masks)
  return _s;
}
inline const std::string& segmentResponse::_internal_masks() const {
  return masks_.Get();
}
inline void segmentResponse::_internal_set_masks(const std::string& value) {
  
  masks_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentResponse::_internal_mutable_masks() {
  
  return masks_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentResponse::release_masks() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentResponse.masks)
  return masks_.Release();
}
inline void segmentResponse::set_allocated_masks(std::string* masks) {
  if (masks != nullptr) {
    
  } else {
    
  }
  masks_.SetAllocated(masks, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (masks_.IsDefault()) {
    masks_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentResponse.masks)
}

// bytes classIds = 3;
inline void segmentResponse::clear_classids() {
  classids_.ClearToEmpty();
}
inline const std::string& segmentResponse::classids() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentResponse.classIds)
  return _internal_classids();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentResponse::set_classids(ArgT0&& arg0, ArgT... args) {
 
 classids_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentResponse.classIds)
}
inline std::string* segmentResponse::mutable_classids() {
  std::string* _s = _internal_mutable_classids();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentResponse.classIds)
  return _s;
}
inline const std::string& segmentResponse::_internal_classids() const {
  return classids_.Get();
}
inline void segmentResponse::_internal_set_classids(const std::string& value) {
  
  classids_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentResponse::_internal_mutable_classids() {
  
  return classids_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentResponse::release_classids() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentResponse.classIds)
  return classids_.Release();
}
inline void segmentResponse::set_allocated_classids(std::string* classids) {
  if (classids != nullptr) {
    
  } else {
    
  }
  classids_.SetAllocated(classids, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (classids_.IsDefault()) {
    classids_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentResponse.classIds)
}

// bytes scores = 4;
inline void segmentResponse::clear_scores() {
  scores_.ClearToEmpty();
}
inline const std::string& segmentResponse::scores() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentResponse.scores)
  return _internal_scores();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void segmentResponse::set_scores(ArgT0&& arg0, ArgT... args) {
 
 scores_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentResponse.scores)
}
inline std::string* segmentResponse::mutable_scores() {
  std::string* _s = _internal_mutable_scores();
  // @@protoc_insertion_point(field_mutable:grpcIInstanceSegmentation.segmentResponse.scores)
  return _s;
}
inline const std::string& segmentResponse::_internal_scores() const {
  return scores_.Get();
}
inline void segmentResponse::_internal_set_scores(const std::string& value) {
  
  scores_.Set(value, GetArenaForAllocation());
}
inline std::string* segmentResponse::_internal_mutable_scores() {
  
  return scores_.Mutable(GetArenaForAllocation());
}
inline std::string* segmentResponse::release_scores() {
  // @@protoc_insertion_point(field_release:grpcIInstanceSegmentation.segmentResponse.scores)
  return scores_.Release();
}
inline void segmentResponse::set_allocated_scores(std::string* scores) {
  if (scores != nullptr) {
    
  } else {
    
  }
  scores_.SetAllocated(scores, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (scores_.IsDefault()) {
    scores_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIInstanceSegmentation.segmentResponse.scores)
}

// sint32 xpcfGrpcReturnValue = 5;
inline void segmentResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline int32_t segmentResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline int32_t segmentResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIInstanceSegmentation.segmentResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void segmentResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void segmentResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIInstanceSegmentation.segmentResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIInstanceSegmentation

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIInstanceSegmentationService_2eproto
