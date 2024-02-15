// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcI3DOverlayService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcI3DOverlayService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcI3DOverlayService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcI3DOverlayService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcI3DOverlayService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcI3DOverlayService_2eproto;
namespace grpcI3DOverlay {
class drawRequest;
struct drawRequestDefaultTypeInternal;
extern drawRequestDefaultTypeInternal _drawRequest_default_instance_;
}  // namespace grpcI3DOverlay
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcI3DOverlay::drawRequest* Arena::CreateMaybeMessage<::grpcI3DOverlay::drawRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcI3DOverlay {

// ===================================================================

class drawRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcI3DOverlay.drawRequest) */ {
 public:
  inline drawRequest() : drawRequest(nullptr) {}
  ~drawRequest() override;
  explicit PROTOBUF_CONSTEXPR drawRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  drawRequest(const drawRequest& from);
  drawRequest(drawRequest&& from) noexcept
    : drawRequest() {
    *this = ::std::move(from);
  }

  inline drawRequest& operator=(const drawRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline drawRequest& operator=(drawRequest&& from) noexcept {
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
  static const drawRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const drawRequest* internal_default_instance() {
    return reinterpret_cast<const drawRequest*>(
               &_drawRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(drawRequest& a, drawRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(drawRequest* other) {
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
  void UnsafeArenaSwap(drawRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  drawRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<drawRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const drawRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const drawRequest& from) {
    drawRequest::MergeImpl(*this, from);
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
  void InternalSwap(drawRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcI3DOverlay.drawRequest";
  }
  protected:
  explicit drawRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPoseFieldNumber = 1,
    kCamParamsFieldNumber = 2,
    kDisplayImageFieldNumber = 3,
  };
  // bytes pose = 1;
  void clear_pose();
  const std::string& pose() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_pose(ArgT0&& arg0, ArgT... args);
  std::string* mutable_pose();
  PROTOBUF_NODISCARD std::string* release_pose();
  void set_allocated_pose(std::string* pose);
  private:
  const std::string& _internal_pose() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pose(const std::string& value);
  std::string* _internal_mutable_pose();
  public:

  // bytes camParams = 2;
  void clear_camparams();
  const std::string& camparams() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_camparams(ArgT0&& arg0, ArgT... args);
  std::string* mutable_camparams();
  PROTOBUF_NODISCARD std::string* release_camparams();
  void set_allocated_camparams(std::string* camparams);
  private:
  const std::string& _internal_camparams() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_camparams(const std::string& value);
  std::string* _internal_mutable_camparams();
  public:

  // bytes displayImage = 3;
  void clear_displayimage();
  const std::string& displayimage() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_displayimage(ArgT0&& arg0, ArgT... args);
  std::string* mutable_displayimage();
  PROTOBUF_NODISCARD std::string* release_displayimage();
  void set_allocated_displayimage(std::string* displayimage);
  private:
  const std::string& _internal_displayimage() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_displayimage(const std::string& value);
  std::string* _internal_mutable_displayimage();
  public:

  // @@protoc_insertion_point(class_scope:grpcI3DOverlay.drawRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pose_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr camparams_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr displayimage_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcI3DOverlayService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// drawRequest

// bytes pose = 1;
inline void drawRequest::clear_pose() {
  _impl_.pose_.ClearToEmpty();
}
inline const std::string& drawRequest::pose() const {
  // @@protoc_insertion_point(field_get:grpcI3DOverlay.drawRequest.pose)
  return _internal_pose();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void drawRequest::set_pose(ArgT0&& arg0, ArgT... args) {
 
 _impl_.pose_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI3DOverlay.drawRequest.pose)
}
inline std::string* drawRequest::mutable_pose() {
  std::string* _s = _internal_mutable_pose();
  // @@protoc_insertion_point(field_mutable:grpcI3DOverlay.drawRequest.pose)
  return _s;
}
inline const std::string& drawRequest::_internal_pose() const {
  return _impl_.pose_.Get();
}
inline void drawRequest::_internal_set_pose(const std::string& value) {
  
  _impl_.pose_.Set(value, GetArenaForAllocation());
}
inline std::string* drawRequest::_internal_mutable_pose() {
  
  return _impl_.pose_.Mutable(GetArenaForAllocation());
}
inline std::string* drawRequest::release_pose() {
  // @@protoc_insertion_point(field_release:grpcI3DOverlay.drawRequest.pose)
  return _impl_.pose_.Release();
}
inline void drawRequest::set_allocated_pose(std::string* pose) {
  if (pose != nullptr) {
    
  } else {
    
  }
  _impl_.pose_.SetAllocated(pose, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.pose_.IsDefault()) {
    _impl_.pose_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI3DOverlay.drawRequest.pose)
}

// bytes camParams = 2;
inline void drawRequest::clear_camparams() {
  _impl_.camparams_.ClearToEmpty();
}
inline const std::string& drawRequest::camparams() const {
  // @@protoc_insertion_point(field_get:grpcI3DOverlay.drawRequest.camParams)
  return _internal_camparams();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void drawRequest::set_camparams(ArgT0&& arg0, ArgT... args) {
 
 _impl_.camparams_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI3DOverlay.drawRequest.camParams)
}
inline std::string* drawRequest::mutable_camparams() {
  std::string* _s = _internal_mutable_camparams();
  // @@protoc_insertion_point(field_mutable:grpcI3DOverlay.drawRequest.camParams)
  return _s;
}
inline const std::string& drawRequest::_internal_camparams() const {
  return _impl_.camparams_.Get();
}
inline void drawRequest::_internal_set_camparams(const std::string& value) {
  
  _impl_.camparams_.Set(value, GetArenaForAllocation());
}
inline std::string* drawRequest::_internal_mutable_camparams() {
  
  return _impl_.camparams_.Mutable(GetArenaForAllocation());
}
inline std::string* drawRequest::release_camparams() {
  // @@protoc_insertion_point(field_release:grpcI3DOverlay.drawRequest.camParams)
  return _impl_.camparams_.Release();
}
inline void drawRequest::set_allocated_camparams(std::string* camparams) {
  if (camparams != nullptr) {
    
  } else {
    
  }
  _impl_.camparams_.SetAllocated(camparams, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.camparams_.IsDefault()) {
    _impl_.camparams_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI3DOverlay.drawRequest.camParams)
}

// bytes displayImage = 3;
inline void drawRequest::clear_displayimage() {
  _impl_.displayimage_.ClearToEmpty();
}
inline const std::string& drawRequest::displayimage() const {
  // @@protoc_insertion_point(field_get:grpcI3DOverlay.drawRequest.displayImage)
  return _internal_displayimage();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void drawRequest::set_displayimage(ArgT0&& arg0, ArgT... args) {
 
 _impl_.displayimage_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI3DOverlay.drawRequest.displayImage)
}
inline std::string* drawRequest::mutable_displayimage() {
  std::string* _s = _internal_mutable_displayimage();
  // @@protoc_insertion_point(field_mutable:grpcI3DOverlay.drawRequest.displayImage)
  return _s;
}
inline const std::string& drawRequest::_internal_displayimage() const {
  return _impl_.displayimage_.Get();
}
inline void drawRequest::_internal_set_displayimage(const std::string& value) {
  
  _impl_.displayimage_.Set(value, GetArenaForAllocation());
}
inline std::string* drawRequest::_internal_mutable_displayimage() {
  
  return _impl_.displayimage_.Mutable(GetArenaForAllocation());
}
inline std::string* drawRequest::release_displayimage() {
  // @@protoc_insertion_point(field_release:grpcI3DOverlay.drawRequest.displayImage)
  return _impl_.displayimage_.Release();
}
inline void drawRequest::set_allocated_displayimage(std::string* displayimage) {
  if (displayimage != nullptr) {
    
  } else {
    
  }
  _impl_.displayimage_.SetAllocated(displayimage, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.displayimage_.IsDefault()) {
    _impl_.displayimage_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI3DOverlay.drawRequest.displayImage)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcI3DOverlay

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcI3DOverlayService_2eproto
