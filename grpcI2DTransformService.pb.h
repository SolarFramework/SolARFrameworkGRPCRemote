// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcI2DTransformService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcI2DTransformService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcI2DTransformService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcI2DTransformService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcI2DTransformService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcI2DTransformService_2eproto;
namespace grpcI2DTransform {
class transformRequest;
struct transformRequestDefaultTypeInternal;
extern transformRequestDefaultTypeInternal _transformRequest_default_instance_;
class transformResponse;
struct transformResponseDefaultTypeInternal;
extern transformResponseDefaultTypeInternal _transformResponse_default_instance_;
}  // namespace grpcI2DTransform
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcI2DTransform::transformRequest* Arena::CreateMaybeMessage<::grpcI2DTransform::transformRequest>(Arena*);
template<> ::grpcI2DTransform::transformResponse* Arena::CreateMaybeMessage<::grpcI2DTransform::transformResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcI2DTransform {

// ===================================================================

class transformRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcI2DTransform.transformRequest) */ {
 public:
  inline transformRequest() : transformRequest(nullptr) {}
  ~transformRequest() override;
  explicit PROTOBUF_CONSTEXPR transformRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  transformRequest(const transformRequest& from);
  transformRequest(transformRequest&& from) noexcept
    : transformRequest() {
    *this = ::std::move(from);
  }

  inline transformRequest& operator=(const transformRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline transformRequest& operator=(transformRequest&& from) noexcept {
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
  static const transformRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const transformRequest* internal_default_instance() {
    return reinterpret_cast<const transformRequest*>(
               &_transformRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(transformRequest& a, transformRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(transformRequest* other) {
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
  void UnsafeArenaSwap(transformRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  transformRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<transformRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const transformRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const transformRequest& from);
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
  void InternalSwap(transformRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcI2DTransform.transformRequest";
  }
  protected:
  explicit transformRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInputPointsFieldNumber = 2,
    kTransformationFieldNumber = 3,
    kOutputPointsFieldNumber = 4,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes inputPoints = 2;
  void clear_inputpoints();
  const std::string& inputpoints() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_inputpoints(ArgT0&& arg0, ArgT... args);
  std::string* mutable_inputpoints();
  PROTOBUF_NODISCARD std::string* release_inputpoints();
  void set_allocated_inputpoints(std::string* inputpoints);
  private:
  const std::string& _internal_inputpoints() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_inputpoints(const std::string& value);
  std::string* _internal_mutable_inputpoints();
  public:

  // bytes transformation = 3;
  void clear_transformation();
  const std::string& transformation() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_transformation(ArgT0&& arg0, ArgT... args);
  std::string* mutable_transformation();
  PROTOBUF_NODISCARD std::string* release_transformation();
  void set_allocated_transformation(std::string* transformation);
  private:
  const std::string& _internal_transformation() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_transformation(const std::string& value);
  std::string* _internal_mutable_transformation();
  public:

  // bytes outputPoints = 4;
  void clear_outputpoints();
  const std::string& outputpoints() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_outputpoints(ArgT0&& arg0, ArgT... args);
  std::string* mutable_outputpoints();
  PROTOBUF_NODISCARD std::string* release_outputpoints();
  void set_allocated_outputpoints(std::string* outputpoints);
  private:
  const std::string& _internal_outputpoints() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_outputpoints(const std::string& value);
  std::string* _internal_mutable_outputpoints();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcI2DTransform.transformRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr inputpoints_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr transformation_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr outputpoints_;
  int32_t grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcI2DTransformService_2eproto;
};
// -------------------------------------------------------------------

class transformResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcI2DTransform.transformResponse) */ {
 public:
  inline transformResponse() : transformResponse(nullptr) {}
  ~transformResponse() override;
  explicit PROTOBUF_CONSTEXPR transformResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  transformResponse(const transformResponse& from);
  transformResponse(transformResponse&& from) noexcept
    : transformResponse() {
    *this = ::std::move(from);
  }

  inline transformResponse& operator=(const transformResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline transformResponse& operator=(transformResponse&& from) noexcept {
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
  static const transformResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const transformResponse* internal_default_instance() {
    return reinterpret_cast<const transformResponse*>(
               &_transformResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(transformResponse& a, transformResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(transformResponse* other) {
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
  void UnsafeArenaSwap(transformResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  transformResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<transformResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const transformResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const transformResponse& from);
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
  void InternalSwap(transformResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcI2DTransform.transformResponse";
  }
  protected:
  explicit transformResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOutputPointsFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes outputPoints = 1;
  void clear_outputpoints();
  const std::string& outputpoints() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_outputpoints(ArgT0&& arg0, ArgT... args);
  std::string* mutable_outputpoints();
  PROTOBUF_NODISCARD std::string* release_outputpoints();
  void set_allocated_outputpoints(std::string* outputpoints);
  private:
  const std::string& _internal_outputpoints() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_outputpoints(const std::string& value);
  std::string* _internal_mutable_outputpoints();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  int32_t xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(int32_t value);
  private:
  int32_t _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcI2DTransform.transformResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr outputpoints_;
  int32_t xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcI2DTransformService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// transformRequest

// int32 grpcServerCompressionFormat = 1;
inline void transformRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline int32_t transformRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline int32_t transformRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcI2DTransform.transformRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void transformRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  grpcservercompressionformat_ = value;
}
inline void transformRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcI2DTransform.transformRequest.grpcServerCompressionFormat)
}

// bytes inputPoints = 2;
inline void transformRequest::clear_inputpoints() {
  inputpoints_.ClearToEmpty();
}
inline const std::string& transformRequest::inputpoints() const {
  // @@protoc_insertion_point(field_get:grpcI2DTransform.transformRequest.inputPoints)
  return _internal_inputpoints();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void transformRequest::set_inputpoints(ArgT0&& arg0, ArgT... args) {
 
 inputpoints_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI2DTransform.transformRequest.inputPoints)
}
inline std::string* transformRequest::mutable_inputpoints() {
  std::string* _s = _internal_mutable_inputpoints();
  // @@protoc_insertion_point(field_mutable:grpcI2DTransform.transformRequest.inputPoints)
  return _s;
}
inline const std::string& transformRequest::_internal_inputpoints() const {
  return inputpoints_.Get();
}
inline void transformRequest::_internal_set_inputpoints(const std::string& value) {
  
  inputpoints_.Set(value, GetArenaForAllocation());
}
inline std::string* transformRequest::_internal_mutable_inputpoints() {
  
  return inputpoints_.Mutable(GetArenaForAllocation());
}
inline std::string* transformRequest::release_inputpoints() {
  // @@protoc_insertion_point(field_release:grpcI2DTransform.transformRequest.inputPoints)
  return inputpoints_.Release();
}
inline void transformRequest::set_allocated_inputpoints(std::string* inputpoints) {
  if (inputpoints != nullptr) {
    
  } else {
    
  }
  inputpoints_.SetAllocated(inputpoints, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (inputpoints_.IsDefault()) {
    inputpoints_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI2DTransform.transformRequest.inputPoints)
}

// bytes transformation = 3;
inline void transformRequest::clear_transformation() {
  transformation_.ClearToEmpty();
}
inline const std::string& transformRequest::transformation() const {
  // @@protoc_insertion_point(field_get:grpcI2DTransform.transformRequest.transformation)
  return _internal_transformation();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void transformRequest::set_transformation(ArgT0&& arg0, ArgT... args) {
 
 transformation_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI2DTransform.transformRequest.transformation)
}
inline std::string* transformRequest::mutable_transformation() {
  std::string* _s = _internal_mutable_transformation();
  // @@protoc_insertion_point(field_mutable:grpcI2DTransform.transformRequest.transformation)
  return _s;
}
inline const std::string& transformRequest::_internal_transformation() const {
  return transformation_.Get();
}
inline void transformRequest::_internal_set_transformation(const std::string& value) {
  
  transformation_.Set(value, GetArenaForAllocation());
}
inline std::string* transformRequest::_internal_mutable_transformation() {
  
  return transformation_.Mutable(GetArenaForAllocation());
}
inline std::string* transformRequest::release_transformation() {
  // @@protoc_insertion_point(field_release:grpcI2DTransform.transformRequest.transformation)
  return transformation_.Release();
}
inline void transformRequest::set_allocated_transformation(std::string* transformation) {
  if (transformation != nullptr) {
    
  } else {
    
  }
  transformation_.SetAllocated(transformation, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (transformation_.IsDefault()) {
    transformation_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI2DTransform.transformRequest.transformation)
}

// bytes outputPoints = 4;
inline void transformRequest::clear_outputpoints() {
  outputpoints_.ClearToEmpty();
}
inline const std::string& transformRequest::outputpoints() const {
  // @@protoc_insertion_point(field_get:grpcI2DTransform.transformRequest.outputPoints)
  return _internal_outputpoints();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void transformRequest::set_outputpoints(ArgT0&& arg0, ArgT... args) {
 
 outputpoints_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI2DTransform.transformRequest.outputPoints)
}
inline std::string* transformRequest::mutable_outputpoints() {
  std::string* _s = _internal_mutable_outputpoints();
  // @@protoc_insertion_point(field_mutable:grpcI2DTransform.transformRequest.outputPoints)
  return _s;
}
inline const std::string& transformRequest::_internal_outputpoints() const {
  return outputpoints_.Get();
}
inline void transformRequest::_internal_set_outputpoints(const std::string& value) {
  
  outputpoints_.Set(value, GetArenaForAllocation());
}
inline std::string* transformRequest::_internal_mutable_outputpoints() {
  
  return outputpoints_.Mutable(GetArenaForAllocation());
}
inline std::string* transformRequest::release_outputpoints() {
  // @@protoc_insertion_point(field_release:grpcI2DTransform.transformRequest.outputPoints)
  return outputpoints_.Release();
}
inline void transformRequest::set_allocated_outputpoints(std::string* outputpoints) {
  if (outputpoints != nullptr) {
    
  } else {
    
  }
  outputpoints_.SetAllocated(outputpoints, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (outputpoints_.IsDefault()) {
    outputpoints_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI2DTransform.transformRequest.outputPoints)
}

// -------------------------------------------------------------------

// transformResponse

// bytes outputPoints = 1;
inline void transformResponse::clear_outputpoints() {
  outputpoints_.ClearToEmpty();
}
inline const std::string& transformResponse::outputpoints() const {
  // @@protoc_insertion_point(field_get:grpcI2DTransform.transformResponse.outputPoints)
  return _internal_outputpoints();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void transformResponse::set_outputpoints(ArgT0&& arg0, ArgT... args) {
 
 outputpoints_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcI2DTransform.transformResponse.outputPoints)
}
inline std::string* transformResponse::mutable_outputpoints() {
  std::string* _s = _internal_mutable_outputpoints();
  // @@protoc_insertion_point(field_mutable:grpcI2DTransform.transformResponse.outputPoints)
  return _s;
}
inline const std::string& transformResponse::_internal_outputpoints() const {
  return outputpoints_.Get();
}
inline void transformResponse::_internal_set_outputpoints(const std::string& value) {
  
  outputpoints_.Set(value, GetArenaForAllocation());
}
inline std::string* transformResponse::_internal_mutable_outputpoints() {
  
  return outputpoints_.Mutable(GetArenaForAllocation());
}
inline std::string* transformResponse::release_outputpoints() {
  // @@protoc_insertion_point(field_release:grpcI2DTransform.transformResponse.outputPoints)
  return outputpoints_.Release();
}
inline void transformResponse::set_allocated_outputpoints(std::string* outputpoints) {
  if (outputpoints != nullptr) {
    
  } else {
    
  }
  outputpoints_.SetAllocated(outputpoints, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (outputpoints_.IsDefault()) {
    outputpoints_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcI2DTransform.transformResponse.outputPoints)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void transformResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline int32_t transformResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline int32_t transformResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcI2DTransform.transformResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void transformResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void transformResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcI2DTransform.transformResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcI2DTransform

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcI2DTransformService_2eproto
