// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIPointCloudLoaderService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIPointCloudLoaderService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIPointCloudLoaderService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_grpcIPointCloudLoaderService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIPointCloudLoaderService_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIPointCloudLoaderService_2eproto;
namespace grpcIPointCloudLoader {
class loadRequest;
struct loadRequestDefaultTypeInternal;
extern loadRequestDefaultTypeInternal _loadRequest_default_instance_;
class loadResponse;
struct loadResponseDefaultTypeInternal;
extern loadResponseDefaultTypeInternal _loadResponse_default_instance_;
}  // namespace grpcIPointCloudLoader
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIPointCloudLoader::loadRequest* Arena::CreateMaybeMessage<::grpcIPointCloudLoader::loadRequest>(Arena*);
template<> ::grpcIPointCloudLoader::loadResponse* Arena::CreateMaybeMessage<::grpcIPointCloudLoader::loadResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIPointCloudLoader {

// ===================================================================

class loadRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIPointCloudLoader.loadRequest) */ {
 public:
  inline loadRequest() : loadRequest(nullptr) {}
  ~loadRequest() override;
  explicit constexpr loadRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
    if (GetOwningArena() == from.GetOwningArena()) {
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
    if (GetOwningArena() == other->GetOwningArena()) {
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

  inline loadRequest* New() const final {
    return new loadRequest();
  }

  loadRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<loadRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const loadRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const loadRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(loadRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIPointCloudLoader.loadRequest";
  }
  protected:
  explicit loadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFilepathFieldNumber = 1,
    kPointCloudFieldNumber = 2,
  };
  // string filepath = 1;
  void clear_filepath();
  const std::string& filepath() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_filepath(ArgT0&& arg0, ArgT... args);
  std::string* mutable_filepath();
  PROTOBUF_MUST_USE_RESULT std::string* release_filepath();
  void set_allocated_filepath(std::string* filepath);
  private:
  const std::string& _internal_filepath() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_filepath(const std::string& value);
  std::string* _internal_mutable_filepath();
  public:

  // bytes pointCloud = 2;
  void clear_pointcloud();
  const std::string& pointcloud() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_pointcloud(ArgT0&& arg0, ArgT... args);
  std::string* mutable_pointcloud();
  PROTOBUF_MUST_USE_RESULT std::string* release_pointcloud();
  void set_allocated_pointcloud(std::string* pointcloud);
  private:
  const std::string& _internal_pointcloud() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pointcloud(const std::string& value);
  std::string* _internal_mutable_pointcloud();
  public:

  // @@protoc_insertion_point(class_scope:grpcIPointCloudLoader.loadRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr filepath_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pointcloud_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIPointCloudLoaderService_2eproto;
};
// -------------------------------------------------------------------

class loadResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIPointCloudLoader.loadResponse) */ {
 public:
  inline loadResponse() : loadResponse(nullptr) {}
  ~loadResponse() override;
  explicit constexpr loadResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
    if (GetOwningArena() == from.GetOwningArena()) {
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
    if (GetOwningArena() == other->GetOwningArena()) {
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

  inline loadResponse* New() const final {
    return new loadResponse();
  }

  loadResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<loadResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const loadResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const loadResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(loadResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIPointCloudLoader.loadResponse";
  }
  protected:
  explicit loadResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointCloudFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes pointCloud = 1;
  void clear_pointcloud();
  const std::string& pointcloud() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_pointcloud(ArgT0&& arg0, ArgT... args);
  std::string* mutable_pointcloud();
  PROTOBUF_MUST_USE_RESULT std::string* release_pointcloud();
  void set_allocated_pointcloud(std::string* pointcloud);
  private:
  const std::string& _internal_pointcloud() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pointcloud(const std::string& value);
  std::string* _internal_mutable_pointcloud();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIPointCloudLoader.loadResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pointcloud_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIPointCloudLoaderService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// loadRequest

// string filepath = 1;
inline void loadRequest::clear_filepath() {
  filepath_.ClearToEmpty();
}
inline const std::string& loadRequest::filepath() const {
  // @@protoc_insertion_point(field_get:grpcIPointCloudLoader.loadRequest.filepath)
  return _internal_filepath();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void loadRequest::set_filepath(ArgT0&& arg0, ArgT... args) {
 
 filepath_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPointCloudLoader.loadRequest.filepath)
}
inline std::string* loadRequest::mutable_filepath() {
  std::string* _s = _internal_mutable_filepath();
  // @@protoc_insertion_point(field_mutable:grpcIPointCloudLoader.loadRequest.filepath)
  return _s;
}
inline const std::string& loadRequest::_internal_filepath() const {
  return filepath_.Get();
}
inline void loadRequest::_internal_set_filepath(const std::string& value) {
  
  filepath_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* loadRequest::_internal_mutable_filepath() {
  
  return filepath_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* loadRequest::release_filepath() {
  // @@protoc_insertion_point(field_release:grpcIPointCloudLoader.loadRequest.filepath)
  return filepath_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void loadRequest::set_allocated_filepath(std::string* filepath) {
  if (filepath != nullptr) {
    
  } else {
    
  }
  filepath_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), filepath,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPointCloudLoader.loadRequest.filepath)
}

// bytes pointCloud = 2;
inline void loadRequest::clear_pointcloud() {
  pointcloud_.ClearToEmpty();
}
inline const std::string& loadRequest::pointcloud() const {
  // @@protoc_insertion_point(field_get:grpcIPointCloudLoader.loadRequest.pointCloud)
  return _internal_pointcloud();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void loadRequest::set_pointcloud(ArgT0&& arg0, ArgT... args) {
 
 pointcloud_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPointCloudLoader.loadRequest.pointCloud)
}
inline std::string* loadRequest::mutable_pointcloud() {
  std::string* _s = _internal_mutable_pointcloud();
  // @@protoc_insertion_point(field_mutable:grpcIPointCloudLoader.loadRequest.pointCloud)
  return _s;
}
inline const std::string& loadRequest::_internal_pointcloud() const {
  return pointcloud_.Get();
}
inline void loadRequest::_internal_set_pointcloud(const std::string& value) {
  
  pointcloud_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* loadRequest::_internal_mutable_pointcloud() {
  
  return pointcloud_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* loadRequest::release_pointcloud() {
  // @@protoc_insertion_point(field_release:grpcIPointCloudLoader.loadRequest.pointCloud)
  return pointcloud_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void loadRequest::set_allocated_pointcloud(std::string* pointcloud) {
  if (pointcloud != nullptr) {
    
  } else {
    
  }
  pointcloud_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), pointcloud,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPointCloudLoader.loadRequest.pointCloud)
}

// -------------------------------------------------------------------

// loadResponse

// bytes pointCloud = 1;
inline void loadResponse::clear_pointcloud() {
  pointcloud_.ClearToEmpty();
}
inline const std::string& loadResponse::pointcloud() const {
  // @@protoc_insertion_point(field_get:grpcIPointCloudLoader.loadResponse.pointCloud)
  return _internal_pointcloud();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void loadResponse::set_pointcloud(ArgT0&& arg0, ArgT... args) {
 
 pointcloud_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPointCloudLoader.loadResponse.pointCloud)
}
inline std::string* loadResponse::mutable_pointcloud() {
  std::string* _s = _internal_mutable_pointcloud();
  // @@protoc_insertion_point(field_mutable:grpcIPointCloudLoader.loadResponse.pointCloud)
  return _s;
}
inline const std::string& loadResponse::_internal_pointcloud() const {
  return pointcloud_.Get();
}
inline void loadResponse::_internal_set_pointcloud(const std::string& value) {
  
  pointcloud_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* loadResponse::_internal_mutable_pointcloud() {
  
  return pointcloud_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* loadResponse::release_pointcloud() {
  // @@protoc_insertion_point(field_release:grpcIPointCloudLoader.loadResponse.pointCloud)
  return pointcloud_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void loadResponse::set_allocated_pointcloud(std::string* pointcloud) {
  if (pointcloud != nullptr) {
    
  } else {
    
  }
  pointcloud_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), pointcloud,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPointCloudLoader.loadResponse.pointCloud)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void loadResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 loadResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 loadResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIPointCloudLoader.loadResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void loadResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void loadResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIPointCloudLoader.loadResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIPointCloudLoader

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIPointCloudLoaderService_2eproto
