// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIDeviceService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIDeviceService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIDeviceService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIDeviceService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIDeviceService_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIDeviceService_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_grpcIDeviceService_2eproto_metadata_getter(int index);
namespace grpcIDevice {
class startRequest;
struct startRequestDefaultTypeInternal;
extern startRequestDefaultTypeInternal _startRequest_default_instance_;
class startResponse;
struct startResponseDefaultTypeInternal;
extern startResponseDefaultTypeInternal _startResponse_default_instance_;
class stopRequest;
struct stopRequestDefaultTypeInternal;
extern stopRequestDefaultTypeInternal _stopRequest_default_instance_;
class stopResponse;
struct stopResponseDefaultTypeInternal;
extern stopResponseDefaultTypeInternal _stopResponse_default_instance_;
}  // namespace grpcIDevice
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIDevice::startRequest* Arena::CreateMaybeMessage<::grpcIDevice::startRequest>(Arena*);
template<> ::grpcIDevice::startResponse* Arena::CreateMaybeMessage<::grpcIDevice::startResponse>(Arena*);
template<> ::grpcIDevice::stopRequest* Arena::CreateMaybeMessage<::grpcIDevice::stopRequest>(Arena*);
template<> ::grpcIDevice::stopResponse* Arena::CreateMaybeMessage<::grpcIDevice::stopResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIDevice {

// ===================================================================

class startRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIDevice.startRequest) */ {
 public:
  inline startRequest() : startRequest(nullptr) {}
  virtual ~startRequest();
  explicit constexpr startRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  startRequest(const startRequest& from);
  startRequest(startRequest&& from) noexcept
    : startRequest() {
    *this = ::std::move(from);
  }

  inline startRequest& operator=(const startRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline startRequest& operator=(startRequest&& from) noexcept {
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
  static const startRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const startRequest* internal_default_instance() {
    return reinterpret_cast<const startRequest*>(
               &_startRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(startRequest& a, startRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(startRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(startRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline startRequest* New() const final {
    return CreateMaybeMessage<startRequest>(nullptr);
  }

  startRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<startRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const startRequest& from);
  void MergeFrom(const startRequest& from);
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
  void InternalSwap(startRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIDevice.startRequest";
  }
  protected:
  explicit startRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIDeviceService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  ::PROTOBUF_NAMESPACE_ID::int32 grpcservercompressionformat() const;
  void set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIDevice.startRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIDeviceService_2eproto;
};
// -------------------------------------------------------------------

class startResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIDevice.startResponse) */ {
 public:
  inline startResponse() : startResponse(nullptr) {}
  virtual ~startResponse();
  explicit constexpr startResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  startResponse(const startResponse& from);
  startResponse(startResponse&& from) noexcept
    : startResponse() {
    *this = ::std::move(from);
  }

  inline startResponse& operator=(const startResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline startResponse& operator=(startResponse&& from) noexcept {
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
  static const startResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const startResponse* internal_default_instance() {
    return reinterpret_cast<const startResponse*>(
               &_startResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(startResponse& a, startResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(startResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(startResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline startResponse* New() const final {
    return CreateMaybeMessage<startResponse>(nullptr);
  }

  startResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<startResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const startResponse& from);
  void MergeFrom(const startResponse& from);
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
  void InternalSwap(startResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIDevice.startResponse";
  }
  protected:
  explicit startResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIDeviceService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXpcfGrpcReturnValueFieldNumber = 1,
  };
  // sint32 xpcfGrpcReturnValue = 1;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIDevice.startResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIDeviceService_2eproto;
};
// -------------------------------------------------------------------

class stopRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIDevice.stopRequest) */ {
 public:
  inline stopRequest() : stopRequest(nullptr) {}
  virtual ~stopRequest();
  explicit constexpr stopRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  stopRequest(const stopRequest& from);
  stopRequest(stopRequest&& from) noexcept
    : stopRequest() {
    *this = ::std::move(from);
  }

  inline stopRequest& operator=(const stopRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline stopRequest& operator=(stopRequest&& from) noexcept {
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
  static const stopRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const stopRequest* internal_default_instance() {
    return reinterpret_cast<const stopRequest*>(
               &_stopRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(stopRequest& a, stopRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(stopRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(stopRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline stopRequest* New() const final {
    return CreateMaybeMessage<stopRequest>(nullptr);
  }

  stopRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<stopRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const stopRequest& from);
  void MergeFrom(const stopRequest& from);
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
  void InternalSwap(stopRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIDevice.stopRequest";
  }
  protected:
  explicit stopRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIDeviceService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGrpcServerCompressionFormatFieldNumber = 1,
  };
  // int32 grpcServerCompressionFormat = 1;
  void clear_grpcservercompressionformat();
  ::PROTOBUF_NAMESPACE_ID::int32 grpcservercompressionformat() const;
  void set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_grpcservercompressionformat() const;
  void _internal_set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIDevice.stopRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 grpcservercompressionformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIDeviceService_2eproto;
};
// -------------------------------------------------------------------

class stopResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIDevice.stopResponse) */ {
 public:
  inline stopResponse() : stopResponse(nullptr) {}
  virtual ~stopResponse();
  explicit constexpr stopResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  stopResponse(const stopResponse& from);
  stopResponse(stopResponse&& from) noexcept
    : stopResponse() {
    *this = ::std::move(from);
  }

  inline stopResponse& operator=(const stopResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline stopResponse& operator=(stopResponse&& from) noexcept {
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
  static const stopResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const stopResponse* internal_default_instance() {
    return reinterpret_cast<const stopResponse*>(
               &_stopResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(stopResponse& a, stopResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(stopResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(stopResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline stopResponse* New() const final {
    return CreateMaybeMessage<stopResponse>(nullptr);
  }

  stopResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<stopResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const stopResponse& from);
  void MergeFrom(const stopResponse& from);
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
  void InternalSwap(stopResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIDevice.stopResponse";
  }
  protected:
  explicit stopResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_grpcIDeviceService_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXpcfGrpcReturnValueFieldNumber = 1,
  };
  // sint32 xpcfGrpcReturnValue = 1;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIDevice.stopResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIDeviceService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// startRequest

// int32 grpcServerCompressionFormat = 1;
inline void startRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 startRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 startRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIDevice.startRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void startRequest::_internal_set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  grpcservercompressionformat_ = value;
}
inline void startRequest::set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIDevice.startRequest.grpcServerCompressionFormat)
}

// -------------------------------------------------------------------

// startResponse

// sint32 xpcfGrpcReturnValue = 1;
inline void startResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 startResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 startResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIDevice.startResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void startResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void startResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIDevice.startResponse.xpcfGrpcReturnValue)
}

// -------------------------------------------------------------------

// stopRequest

// int32 grpcServerCompressionFormat = 1;
inline void stopRequest::clear_grpcservercompressionformat() {
  grpcservercompressionformat_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stopRequest::_internal_grpcservercompressionformat() const {
  return grpcservercompressionformat_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stopRequest::grpcservercompressionformat() const {
  // @@protoc_insertion_point(field_get:grpcIDevice.stopRequest.grpcServerCompressionFormat)
  return _internal_grpcservercompressionformat();
}
inline void stopRequest::_internal_set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  grpcservercompressionformat_ = value;
}
inline void stopRequest::set_grpcservercompressionformat(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_grpcservercompressionformat(value);
  // @@protoc_insertion_point(field_set:grpcIDevice.stopRequest.grpcServerCompressionFormat)
}

// -------------------------------------------------------------------

// stopResponse

// sint32 xpcfGrpcReturnValue = 1;
inline void stopResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stopResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 stopResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIDevice.stopResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void stopResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void stopResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIDevice.stopResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIDevice

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIDeviceService_2eproto
