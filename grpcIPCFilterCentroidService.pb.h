// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIPCFilterCentroidService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIPCFilterCentroidService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIPCFilterCentroidService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIPCFilterCentroidService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIPCFilterCentroidService_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIPCFilterCentroidService_2eproto;
namespace grpcIPCFilterCentroid {
class filterRequest;
struct filterRequestDefaultTypeInternal;
extern filterRequestDefaultTypeInternal _filterRequest_default_instance_;
class filterResponse;
struct filterResponseDefaultTypeInternal;
extern filterResponseDefaultTypeInternal _filterResponse_default_instance_;
}  // namespace grpcIPCFilterCentroid
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIPCFilterCentroid::filterRequest* Arena::CreateMaybeMessage<::grpcIPCFilterCentroid::filterRequest>(Arena*);
template<> ::grpcIPCFilterCentroid::filterResponse* Arena::CreateMaybeMessage<::grpcIPCFilterCentroid::filterResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIPCFilterCentroid {

// ===================================================================

class filterRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIPCFilterCentroid.filterRequest) */ {
 public:
  inline filterRequest() : filterRequest(nullptr) {}
  ~filterRequest() override;
  explicit constexpr filterRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  filterRequest(const filterRequest& from);
  filterRequest(filterRequest&& from) noexcept
    : filterRequest() {
    *this = ::std::move(from);
  }

  inline filterRequest& operator=(const filterRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline filterRequest& operator=(filterRequest&& from) noexcept {
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
  static const filterRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const filterRequest* internal_default_instance() {
    return reinterpret_cast<const filterRequest*>(
               &_filterRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(filterRequest& a, filterRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(filterRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(filterRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline filterRequest* New() const final {
    return new filterRequest();
  }

  filterRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<filterRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const filterRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const filterRequest& from);
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
  void InternalSwap(filterRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIPCFilterCentroid.filterRequest";
  }
  protected:
  explicit filterRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kInPointCloudFieldNumber = 1,
    kCentroidFieldNumber = 2,
    kOutPointCloudFieldNumber = 3,
  };
  // bytes inPointCloud = 1;
  void clear_inpointcloud();
  const std::string& inpointcloud() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_inpointcloud(ArgT0&& arg0, ArgT... args);
  std::string* mutable_inpointcloud();
  PROTOBUF_MUST_USE_RESULT std::string* release_inpointcloud();
  void set_allocated_inpointcloud(std::string* inpointcloud);
  private:
  const std::string& _internal_inpointcloud() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_inpointcloud(const std::string& value);
  std::string* _internal_mutable_inpointcloud();
  public:

  // bytes centroid = 2;
  void clear_centroid();
  const std::string& centroid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_centroid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_centroid();
  PROTOBUF_MUST_USE_RESULT std::string* release_centroid();
  void set_allocated_centroid(std::string* centroid);
  private:
  const std::string& _internal_centroid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_centroid(const std::string& value);
  std::string* _internal_mutable_centroid();
  public:

  // bytes outPointCloud = 3;
  void clear_outpointcloud();
  const std::string& outpointcloud() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_outpointcloud(ArgT0&& arg0, ArgT... args);
  std::string* mutable_outpointcloud();
  PROTOBUF_MUST_USE_RESULT std::string* release_outpointcloud();
  void set_allocated_outpointcloud(std::string* outpointcloud);
  private:
  const std::string& _internal_outpointcloud() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_outpointcloud(const std::string& value);
  std::string* _internal_mutable_outpointcloud();
  public:

  // @@protoc_insertion_point(class_scope:grpcIPCFilterCentroid.filterRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr inpointcloud_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr centroid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr outpointcloud_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIPCFilterCentroidService_2eproto;
};
// -------------------------------------------------------------------

class filterResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIPCFilterCentroid.filterResponse) */ {
 public:
  inline filterResponse() : filterResponse(nullptr) {}
  ~filterResponse() override;
  explicit constexpr filterResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  filterResponse(const filterResponse& from);
  filterResponse(filterResponse&& from) noexcept
    : filterResponse() {
    *this = ::std::move(from);
  }

  inline filterResponse& operator=(const filterResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline filterResponse& operator=(filterResponse&& from) noexcept {
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
  static const filterResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const filterResponse* internal_default_instance() {
    return reinterpret_cast<const filterResponse*>(
               &_filterResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(filterResponse& a, filterResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(filterResponse* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(filterResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline filterResponse* New() const final {
    return new filterResponse();
  }

  filterResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<filterResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const filterResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const filterResponse& from);
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
  void InternalSwap(filterResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIPCFilterCentroid.filterResponse";
  }
  protected:
  explicit filterResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kOutPointCloudFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // bytes outPointCloud = 1;
  void clear_outpointcloud();
  const std::string& outpointcloud() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_outpointcloud(ArgT0&& arg0, ArgT... args);
  std::string* mutable_outpointcloud();
  PROTOBUF_MUST_USE_RESULT std::string* release_outpointcloud();
  void set_allocated_outpointcloud(std::string* outpointcloud);
  private:
  const std::string& _internal_outpointcloud() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_outpointcloud(const std::string& value);
  std::string* _internal_mutable_outpointcloud();
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIPCFilterCentroid.filterResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr outpointcloud_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIPCFilterCentroidService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// filterRequest

// bytes inPointCloud = 1;
inline void filterRequest::clear_inpointcloud() {
  inpointcloud_.ClearToEmpty();
}
inline const std::string& filterRequest::inpointcloud() const {
  // @@protoc_insertion_point(field_get:grpcIPCFilterCentroid.filterRequest.inPointCloud)
  return _internal_inpointcloud();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void filterRequest::set_inpointcloud(ArgT0&& arg0, ArgT... args) {
 
 inpointcloud_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPCFilterCentroid.filterRequest.inPointCloud)
}
inline std::string* filterRequest::mutable_inpointcloud() {
  std::string* _s = _internal_mutable_inpointcloud();
  // @@protoc_insertion_point(field_mutable:grpcIPCFilterCentroid.filterRequest.inPointCloud)
  return _s;
}
inline const std::string& filterRequest::_internal_inpointcloud() const {
  return inpointcloud_.Get();
}
inline void filterRequest::_internal_set_inpointcloud(const std::string& value) {
  
  inpointcloud_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* filterRequest::_internal_mutable_inpointcloud() {
  
  return inpointcloud_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* filterRequest::release_inpointcloud() {
  // @@protoc_insertion_point(field_release:grpcIPCFilterCentroid.filterRequest.inPointCloud)
  return inpointcloud_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void filterRequest::set_allocated_inpointcloud(std::string* inpointcloud) {
  if (inpointcloud != nullptr) {
    
  } else {
    
  }
  inpointcloud_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), inpointcloud,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPCFilterCentroid.filterRequest.inPointCloud)
}

// bytes centroid = 2;
inline void filterRequest::clear_centroid() {
  centroid_.ClearToEmpty();
}
inline const std::string& filterRequest::centroid() const {
  // @@protoc_insertion_point(field_get:grpcIPCFilterCentroid.filterRequest.centroid)
  return _internal_centroid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void filterRequest::set_centroid(ArgT0&& arg0, ArgT... args) {
 
 centroid_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPCFilterCentroid.filterRequest.centroid)
}
inline std::string* filterRequest::mutable_centroid() {
  std::string* _s = _internal_mutable_centroid();
  // @@protoc_insertion_point(field_mutable:grpcIPCFilterCentroid.filterRequest.centroid)
  return _s;
}
inline const std::string& filterRequest::_internal_centroid() const {
  return centroid_.Get();
}
inline void filterRequest::_internal_set_centroid(const std::string& value) {
  
  centroid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* filterRequest::_internal_mutable_centroid() {
  
  return centroid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* filterRequest::release_centroid() {
  // @@protoc_insertion_point(field_release:grpcIPCFilterCentroid.filterRequest.centroid)
  return centroid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void filterRequest::set_allocated_centroid(std::string* centroid) {
  if (centroid != nullptr) {
    
  } else {
    
  }
  centroid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), centroid,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPCFilterCentroid.filterRequest.centroid)
}

// bytes outPointCloud = 3;
inline void filterRequest::clear_outpointcloud() {
  outpointcloud_.ClearToEmpty();
}
inline const std::string& filterRequest::outpointcloud() const {
  // @@protoc_insertion_point(field_get:grpcIPCFilterCentroid.filterRequest.outPointCloud)
  return _internal_outpointcloud();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void filterRequest::set_outpointcloud(ArgT0&& arg0, ArgT... args) {
 
 outpointcloud_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPCFilterCentroid.filterRequest.outPointCloud)
}
inline std::string* filterRequest::mutable_outpointcloud() {
  std::string* _s = _internal_mutable_outpointcloud();
  // @@protoc_insertion_point(field_mutable:grpcIPCFilterCentroid.filterRequest.outPointCloud)
  return _s;
}
inline const std::string& filterRequest::_internal_outpointcloud() const {
  return outpointcloud_.Get();
}
inline void filterRequest::_internal_set_outpointcloud(const std::string& value) {
  
  outpointcloud_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* filterRequest::_internal_mutable_outpointcloud() {
  
  return outpointcloud_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* filterRequest::release_outpointcloud() {
  // @@protoc_insertion_point(field_release:grpcIPCFilterCentroid.filterRequest.outPointCloud)
  return outpointcloud_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void filterRequest::set_allocated_outpointcloud(std::string* outpointcloud) {
  if (outpointcloud != nullptr) {
    
  } else {
    
  }
  outpointcloud_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), outpointcloud,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPCFilterCentroid.filterRequest.outPointCloud)
}

// -------------------------------------------------------------------

// filterResponse

// bytes outPointCloud = 1;
inline void filterResponse::clear_outpointcloud() {
  outpointcloud_.ClearToEmpty();
}
inline const std::string& filterResponse::outpointcloud() const {
  // @@protoc_insertion_point(field_get:grpcIPCFilterCentroid.filterResponse.outPointCloud)
  return _internal_outpointcloud();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void filterResponse::set_outpointcloud(ArgT0&& arg0, ArgT... args) {
 
 outpointcloud_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIPCFilterCentroid.filterResponse.outPointCloud)
}
inline std::string* filterResponse::mutable_outpointcloud() {
  std::string* _s = _internal_mutable_outpointcloud();
  // @@protoc_insertion_point(field_mutable:grpcIPCFilterCentroid.filterResponse.outPointCloud)
  return _s;
}
inline const std::string& filterResponse::_internal_outpointcloud() const {
  return outpointcloud_.Get();
}
inline void filterResponse::_internal_set_outpointcloud(const std::string& value) {
  
  outpointcloud_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* filterResponse::_internal_mutable_outpointcloud() {
  
  return outpointcloud_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* filterResponse::release_outpointcloud() {
  // @@protoc_insertion_point(field_release:grpcIPCFilterCentroid.filterResponse.outPointCloud)
  return outpointcloud_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void filterResponse::set_allocated_outpointcloud(std::string* outpointcloud) {
  if (outpointcloud != nullptr) {
    
  } else {
    
  }
  outpointcloud_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), outpointcloud,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIPCFilterCentroid.filterResponse.outPointCloud)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void filterResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 filterResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 filterResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIPCFilterCentroid.filterResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void filterResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void filterResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIPCFilterCentroid.filterResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIPCFilterCentroid

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIPCFilterCentroidService_2eproto
