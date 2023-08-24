// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIMeshExporterService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIMeshExporterService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIMeshExporterService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIMeshExporterService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIMeshExporterService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIMeshExporterService_2eproto;
namespace grpcIMeshExporter {
class exportMeshRequest;
struct exportMeshRequestDefaultTypeInternal;
extern exportMeshRequestDefaultTypeInternal _exportMeshRequest_default_instance_;
class exportMeshResponse;
struct exportMeshResponseDefaultTypeInternal;
extern exportMeshResponseDefaultTypeInternal _exportMeshResponse_default_instance_;
}  // namespace grpcIMeshExporter
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIMeshExporter::exportMeshRequest* Arena::CreateMaybeMessage<::grpcIMeshExporter::exportMeshRequest>(Arena*);
template<> ::grpcIMeshExporter::exportMeshResponse* Arena::CreateMaybeMessage<::grpcIMeshExporter::exportMeshResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIMeshExporter {

// ===================================================================

class exportMeshRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMeshExporter.exportMeshRequest) */ {
 public:
  inline exportMeshRequest() : exportMeshRequest(nullptr) {}
  ~exportMeshRequest() override;
  explicit PROTOBUF_CONSTEXPR exportMeshRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  exportMeshRequest(const exportMeshRequest& from);
  exportMeshRequest(exportMeshRequest&& from) noexcept
    : exportMeshRequest() {
    *this = ::std::move(from);
  }

  inline exportMeshRequest& operator=(const exportMeshRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline exportMeshRequest& operator=(exportMeshRequest&& from) noexcept {
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
  static const exportMeshRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const exportMeshRequest* internal_default_instance() {
    return reinterpret_cast<const exportMeshRequest*>(
               &_exportMeshRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(exportMeshRequest& a, exportMeshRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(exportMeshRequest* other) {
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
  void UnsafeArenaSwap(exportMeshRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  exportMeshRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<exportMeshRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const exportMeshRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const exportMeshRequest& from) {
    exportMeshRequest::MergeImpl(*this, from);
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
  void InternalSwap(exportMeshRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMeshExporter.exportMeshRequest";
  }
  protected:
  explicit exportMeshRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMeshFieldNumber = 2,
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // bytes mesh = 2;
  void clear_mesh();
  const std::string& mesh() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_mesh(ArgT0&& arg0, ArgT... args);
  std::string* mutable_mesh();
  PROTOBUF_NODISCARD std::string* release_mesh();
  void set_allocated_mesh(std::string* mesh);
  private:
  const std::string& _internal_mesh() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_mesh(const std::string& value);
  std::string* _internal_mutable_mesh();
  public:

  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  int32_t grpcservercompressionformat() const;
  void set_grpcservercompressionformat(int32_t value);
  private:
  int32_t _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIMeshExporter.exportMeshRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mesh_;
    int32_t grpcservercompressionformat_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grpcIMeshExporterService_2eproto;
};
// -------------------------------------------------------------------

class exportMeshResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIMeshExporter.exportMeshResponse) */ {
 public:
  inline exportMeshResponse() : exportMeshResponse(nullptr) {}
  ~exportMeshResponse() override;
  explicit PROTOBUF_CONSTEXPR exportMeshResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  exportMeshResponse(const exportMeshResponse& from);
  exportMeshResponse(exportMeshResponse&& from) noexcept
    : exportMeshResponse() {
    *this = ::std::move(from);
  }

  inline exportMeshResponse& operator=(const exportMeshResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline exportMeshResponse& operator=(exportMeshResponse&& from) noexcept {
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
  static const exportMeshResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const exportMeshResponse* internal_default_instance() {
    return reinterpret_cast<const exportMeshResponse*>(
               &_exportMeshResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(exportMeshResponse& a, exportMeshResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(exportMeshResponse* other) {
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
  void UnsafeArenaSwap(exportMeshResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  exportMeshResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<exportMeshResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const exportMeshResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const exportMeshResponse& from) {
    exportMeshResponse::MergeImpl(*this, from);
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
  void InternalSwap(exportMeshResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIMeshExporter.exportMeshResponse";
  }
  protected:
  explicit exportMeshResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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

  // @@protoc_insertion_point(class_scope:grpcIMeshExporter.exportMeshResponse)
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
  friend struct ::TableStruct_grpcIMeshExporterService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// exportMeshRequest

// int32 grpcServerCompressionFormat = 1;
inline void exportMeshRequest::clear_grpcservercompressionformat() {
  _impl_.grpcservercompressionformat_ = 0;
}
inline int32_t exportMeshRequest::_internal_grpcservercompressionformat() const {
  return _impl_.grpcservercompressionformat_;
}
inline int32_t exportMeshRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIMeshExporter.exportMeshRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void exportMeshRequest::_internal_set_grpcservercompressionformat(int32_t value) {
  
  _impl_.grpcservercompressionformat_ = value;
}
inline void exportMeshRequest::set_grpcservercompressionformat(int32_t value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIMeshExporter.exportMeshRequest.grpcServerCompressionFormat)
}

// bytes mesh = 2;
inline void exportMeshRequest::clear_mesh() {
  _impl_.mesh_.ClearToEmpty();
}
inline const std::string& exportMeshRequest::mesh() const {
  // @@protoc_insertion_point(field_get:grpcIMeshExporter.exportMeshRequest.mesh)
  return _internal_mesh();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void exportMeshRequest::set_mesh(ArgT0&& arg0, ArgT... args) {
 
 _impl_.mesh_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIMeshExporter.exportMeshRequest.mesh)
}
inline std::string* exportMeshRequest::mutable_mesh() {
  std::string* _s = _internal_mutable_mesh();
  // @@protoc_insertion_point(field_mutable:grpcIMeshExporter.exportMeshRequest.mesh)
  return _s;
}
inline const std::string& exportMeshRequest::_internal_mesh() const {
  return _impl_.mesh_.Get();
}
inline void exportMeshRequest::_internal_set_mesh(const std::string& value) {
  
  _impl_.mesh_.Set(value, GetArenaForAllocation());
}
inline std::string* exportMeshRequest::_internal_mutable_mesh() {
  
  return _impl_.mesh_.Mutable(GetArenaForAllocation());
}
inline std::string* exportMeshRequest::release_mesh() {
  // @@protoc_insertion_point(field_release:grpcIMeshExporter.exportMeshRequest.mesh)
  return _impl_.mesh_.Release();
}
inline void exportMeshRequest::set_allocated_mesh(std::string* mesh) {
  if (mesh != nullptr) {
    
  } else {
    
  }
  _impl_.mesh_.SetAllocated(mesh, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.mesh_.IsDefault()) {
    _impl_.mesh_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpcIMeshExporter.exportMeshRequest.mesh)
}

// -------------------------------------------------------------------

// exportMeshResponse

// sint32 xpcfGrpcReturnValue = 1;
inline void exportMeshResponse::clear_xpcfgrpcreturnvalue() {
  _impl_.xpcfgrpcreturnvalue_ = 0;
}
inline int32_t exportMeshResponse::_internal_xpcfgrpcreturnvalue() const {
  return _impl_.xpcfgrpcreturnvalue_;
}
inline int32_t exportMeshResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIMeshExporter.exportMeshResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void exportMeshResponse::_internal_set_xpcfgrpcreturnvalue(int32_t value) {
  
  _impl_.xpcfgrpcreturnvalue_ = value;
}
inline void exportMeshResponse::set_xpcfgrpcreturnvalue(int32_t value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIMeshExporter.exportMeshResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIMeshExporter

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIMeshExporterService_2eproto
