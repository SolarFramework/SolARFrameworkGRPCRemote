// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcICornerRefinementService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcICornerRefinementService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcICornerRefinementService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcICornerRefinementService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcICornerRefinementService_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcICornerRefinementService_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_grpcICornerRefinementService_2eproto_metadata_getter(int index);
namespace grpcICornerRefinement {
class refineRequest;
struct refineRequestDefaultTypeInternal;
extern refineRequestDefaultTypeInternal _refineRequest_default_instance_;
class refineResponse;
struct refineResponseDefaultTypeInternal;
extern refineResponseDefaultTypeInternal _refineResponse_default_instance_;
}  // namespace grpcICornerRefinement
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcICornerRefinement::refineRequest* Arena::CreateMaybeMessage<::grpcICornerRefinement::refineRequest>(Arena*);
template<> ::grpcICornerRefinement::refineResponse* Arena::CreateMaybeMessage<::grpcICornerRefinement::refineResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcICornerRefinement {

// ===================================================================

class refineRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcICornerRefinement.refineRequest) */ {
 public:
  inline refineRequest() : refineRequest(nullptr) {}
  virtual ~refineRequest();
  explicit constexpr refineRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  refineRequest(const refineRequest& from);
  refineRequest(refineRequest&& from) noexcept
    : refineRequest() {
    *this = ::std::move(from);
  }

  inline refineRequest& operator=(const refineRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline refineRequest& operator=(refineRequest&& from) noexcept {
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
  static const refineRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const refineRequest* internal_default_instance() {
    return reinterpret_cast<const refineRequest*>(
               &_refineRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(refineRequest& a, refineRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(refineRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(refineRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline refineRequest* New() const final {
    return CreateMaybeMessage<refineRequest>(nullptr);
  }

  refineRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<refineRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const refineRequest& from);
  void MergeFrom(const refineRequest& from);
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
  void InternalSwap(refineRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcICornerRefinement.refineRequest";
  }
  protected:
  explicit refineRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcICornerRefinementService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kImageFieldNumber = 1,
    kCornersFieldNumber = 2,
  };
  // bytes image = 1;
  void clear_image();
  const std::string& image() const;
  void set_image(const std::string& value);
  void set_image(std::string&& value);
  void set_image(const char* value);
  void set_image(const void* value, size_t size);
  std::string* mutable_image();
  std::string* release_image();
  void set_allocated_image(std::string* image);
  private:
  const std::string& _internal_image() const;
  void _internal_set_image(const std::string& value);
  std::string* _internal_mutable_image();
  public:

  // bytes corners = 2;
  void clear_corners();
  const std::string& corners() const;
  void set_corners(const std::string& value);
  void set_corners(std::string&& value);
  void set_corners(const char* value);
  void set_corners(const void* value, size_t size);
  std::string* mutable_corners();
  std::string* release_corners();
  void set_allocated_corners(std::string* corners);
  private:
  const std::string& _internal_corners() const;
  void _internal_set_corners(const std::string& value);
  std::string* _internal_mutable_corners();
  public:

  // @@protoc_insertion_point(class_scope:grpcICornerRefinement.refineRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr image_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr corners_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcICornerRefinementService_2eproto;
};
// -------------------------------------------------------------------

class refineResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcICornerRefinement.refineResponse) */ {
 public:
  inline refineResponse() : refineResponse(nullptr) {}
  virtual ~refineResponse();
  explicit constexpr refineResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  refineResponse(const refineResponse& from);
  refineResponse(refineResponse&& from) noexcept
    : refineResponse() {
    *this = ::std::move(from);
  }

  inline refineResponse& operator=(const refineResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline refineResponse& operator=(refineResponse&& from) noexcept {
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
  static const refineResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const refineResponse* internal_default_instance() {
    return reinterpret_cast<const refineResponse*>(
               &_refineResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(refineResponse& a, refineResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(refineResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(refineResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline refineResponse* New() const final {
    return CreateMaybeMessage<refineResponse>(nullptr);
  }

  refineResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<refineResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const refineResponse& from);
  void MergeFrom(const refineResponse& from);
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
  void InternalSwap(refineResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcICornerRefinement.refineResponse";
  }
  protected:
  explicit refineResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcICornerRefinementService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCornersFieldNumber = 1,
  };
  // bytes corners = 1;
  void clear_corners();
  const std::string& corners() const;
  void set_corners(const std::string& value);
  void set_corners(std::string&& value);
  void set_corners(const char* value);
  void set_corners(const void* value, size_t size);
  std::string* mutable_corners();
  std::string* release_corners();
  void set_allocated_corners(std::string* corners);
  private:
  const std::string& _internal_corners() const;
  void _internal_set_corners(const std::string& value);
  std::string* _internal_mutable_corners();
  public:

  // @@protoc_insertion_point(class_scope:grpcICornerRefinement.refineResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr corners_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcICornerRefinementService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// refineRequest

// bytes image = 1;
inline void refineRequest::clear_image() {
  image_.ClearToEmpty();
}
inline const std::string& refineRequest::image() const {
  // @@protoc_insertion_point(field_get:grpcICornerRefinement.refineRequest.image)
  return _internal_image();
}
inline void refineRequest::set_image(const std::string& value) {
  _internal_set_image(value);
  // @@protoc_insertion_point(field_set:grpcICornerRefinement.refineRequest.image)
}
inline std::string* refineRequest::mutable_image() {
  // @@protoc_insertion_point(field_mutable:grpcICornerRefinement.refineRequest.image)
  return _internal_mutable_image();
}
inline const std::string& refineRequest::_internal_image() const {
  return image_.Get();
}
inline void refineRequest::_internal_set_image(const std::string& value) {
  
  image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void refineRequest::set_image(std::string&& value) {
  
  image_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcICornerRefinement.refineRequest.image)
}
inline void refineRequest::set_image(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcICornerRefinement.refineRequest.image)
}
inline void refineRequest::set_image(const void* value,
    size_t size) {
  
  image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcICornerRefinement.refineRequest.image)
}
inline std::string* refineRequest::_internal_mutable_image() {
  
  return image_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* refineRequest::release_image() {
  // @@protoc_insertion_point(field_release:grpcICornerRefinement.refineRequest.image)
  return image_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void refineRequest::set_allocated_image(std::string* image) {
  if (image != nullptr) {
    
  } else {
    
  }
  image_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), image,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcICornerRefinement.refineRequest.image)
}

// bytes corners = 2;
inline void refineRequest::clear_corners() {
  corners_.ClearToEmpty();
}
inline const std::string& refineRequest::corners() const {
  // @@protoc_insertion_point(field_get:grpcICornerRefinement.refineRequest.corners)
  return _internal_corners();
}
inline void refineRequest::set_corners(const std::string& value) {
  _internal_set_corners(value);
  // @@protoc_insertion_point(field_set:grpcICornerRefinement.refineRequest.corners)
}
inline std::string* refineRequest::mutable_corners() {
  // @@protoc_insertion_point(field_mutable:grpcICornerRefinement.refineRequest.corners)
  return _internal_mutable_corners();
}
inline const std::string& refineRequest::_internal_corners() const {
  return corners_.Get();
}
inline void refineRequest::_internal_set_corners(const std::string& value) {
  
  corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void refineRequest::set_corners(std::string&& value) {
  
  corners_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcICornerRefinement.refineRequest.corners)
}
inline void refineRequest::set_corners(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcICornerRefinement.refineRequest.corners)
}
inline void refineRequest::set_corners(const void* value,
    size_t size) {
  
  corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcICornerRefinement.refineRequest.corners)
}
inline std::string* refineRequest::_internal_mutable_corners() {
  
  return corners_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* refineRequest::release_corners() {
  // @@protoc_insertion_point(field_release:grpcICornerRefinement.refineRequest.corners)
  return corners_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void refineRequest::set_allocated_corners(std::string* corners) {
  if (corners != nullptr) {
    
  } else {
    
  }
  corners_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), corners,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcICornerRefinement.refineRequest.corners)
}

// -------------------------------------------------------------------

// refineResponse

// bytes corners = 1;
inline void refineResponse::clear_corners() {
  corners_.ClearToEmpty();
}
inline const std::string& refineResponse::corners() const {
  // @@protoc_insertion_point(field_get:grpcICornerRefinement.refineResponse.corners)
  return _internal_corners();
}
inline void refineResponse::set_corners(const std::string& value) {
  _internal_set_corners(value);
  // @@protoc_insertion_point(field_set:grpcICornerRefinement.refineResponse.corners)
}
inline std::string* refineResponse::mutable_corners() {
  // @@protoc_insertion_point(field_mutable:grpcICornerRefinement.refineResponse.corners)
  return _internal_mutable_corners();
}
inline const std::string& refineResponse::_internal_corners() const {
  return corners_.Get();
}
inline void refineResponse::_internal_set_corners(const std::string& value) {
  
  corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void refineResponse::set_corners(std::string&& value) {
  
  corners_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpcICornerRefinement.refineResponse.corners)
}
inline void refineResponse::set_corners(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpcICornerRefinement.refineResponse.corners)
}
inline void refineResponse::set_corners(const void* value,
    size_t size) {
  
  corners_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpcICornerRefinement.refineResponse.corners)
}
inline std::string* refineResponse::_internal_mutable_corners() {
  
  return corners_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* refineResponse::release_corners() {
  // @@protoc_insertion_point(field_release:grpcICornerRefinement.refineResponse.corners)
  return corners_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void refineResponse::set_allocated_corners(std::string* corners) {
  if (corners != nullptr) {
    
  } else {
    
  }
  corners_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), corners,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpcICornerRefinement.refineResponse.corners)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcICornerRefinement

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcICornerRefinementService_2eproto
