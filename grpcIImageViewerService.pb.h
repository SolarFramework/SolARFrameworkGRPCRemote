// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcIImageViewerService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grpcIImageViewerService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grpcIImageViewerService_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grpcIImageViewerService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grpcIImageViewerService_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcIImageViewerService_2eproto;
namespace grpcIImageViewer {
class displayKeyRequest;
struct displayKeyRequestDefaultTypeInternal;
extern displayKeyRequestDefaultTypeInternal _displayKeyRequest_default_instance_;
class displayKeyResponse;
struct displayKeyResponseDefaultTypeInternal;
extern displayKeyResponseDefaultTypeInternal _displayKeyResponse_default_instance_;
class displayRequest;
struct displayRequestDefaultTypeInternal;
extern displayRequestDefaultTypeInternal _displayRequest_default_instance_;
class displayResponse;
struct displayResponseDefaultTypeInternal;
extern displayResponseDefaultTypeInternal _displayResponse_default_instance_;
}  // namespace grpcIImageViewer
PROTOBUF_NAMESPACE_OPEN
template<> ::grpcIImageViewer::displayKeyRequest* Arena::CreateMaybeMessage<::grpcIImageViewer::displayKeyRequest>(Arena*);
template<> ::grpcIImageViewer::displayKeyResponse* Arena::CreateMaybeMessage<::grpcIImageViewer::displayKeyResponse>(Arena*);
template<> ::grpcIImageViewer::displayRequest* Arena::CreateMaybeMessage<::grpcIImageViewer::displayRequest>(Arena*);
template<> ::grpcIImageViewer::displayResponse* Arena::CreateMaybeMessage<::grpcIImageViewer::displayResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpcIImageViewer {

// ===================================================================

class displayRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImageViewer.displayRequest) */ {
 public:
  inline displayRequest() : displayRequest(nullptr) {}
  ~displayRequest() override;
  explicit constexpr displayRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  displayRequest(const displayRequest& from);
  displayRequest(displayRequest&& from) noexcept
    : displayRequest() {
    *this = ::std::move(from);
  }

  inline displayRequest& operator=(const displayRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline displayRequest& operator=(displayRequest&& from) noexcept {
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
  static const displayRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const displayRequest* internal_default_instance() {
    return reinterpret_cast<const displayRequest*>(
               &_displayRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(displayRequest& a, displayRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(displayRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(displayRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline displayRequest* New() const final {
    return new displayRequest();
  }

  displayRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<displayRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const displayRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const displayRequest& from);
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
  void InternalSwap(displayRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImageViewer.displayRequest";
  }
  protected:
  explicit displayRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kImgFieldNumber = 1,
  };
  // bytes img = 1;
  void clear_img();
  const std::string& img() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_img(ArgT0&& arg0, ArgT... args);
  std::string* mutable_img();
  PROTOBUF_MUST_USE_RESULT std::string* release_img();
  void set_allocated_img(std::string* img);
  private:
  const std::string& _internal_img() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_img(const std::string& value);
  std::string* _internal_mutable_img();
  public:

  // @@protoc_insertion_point(class_scope:grpcIImageViewer.displayRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr img_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIImageViewerService_2eproto;
};
// -------------------------------------------------------------------

class displayResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImageViewer.displayResponse) */ {
 public:
  inline displayResponse() : displayResponse(nullptr) {}
  ~displayResponse() override;
  explicit constexpr displayResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  displayResponse(const displayResponse& from);
  displayResponse(displayResponse&& from) noexcept
    : displayResponse() {
    *this = ::std::move(from);
  }

  inline displayResponse& operator=(const displayResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline displayResponse& operator=(displayResponse&& from) noexcept {
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
  static const displayResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const displayResponse* internal_default_instance() {
    return reinterpret_cast<const displayResponse*>(
               &_displayResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(displayResponse& a, displayResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(displayResponse* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(displayResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline displayResponse* New() const final {
    return new displayResponse();
  }

  displayResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<displayResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const displayResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const displayResponse& from);
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
  void InternalSwap(displayResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImageViewer.displayResponse";
  }
  protected:
  explicit displayResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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

  // @@protoc_insertion_point(class_scope:grpcIImageViewer.displayResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIImageViewerService_2eproto;
};
// -------------------------------------------------------------------

class displayKeyRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImageViewer.displayKeyRequest) */ {
 public:
  inline displayKeyRequest() : displayKeyRequest(nullptr) {}
  ~displayKeyRequest() override;
  explicit constexpr displayKeyRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  displayKeyRequest(const displayKeyRequest& from);
  displayKeyRequest(displayKeyRequest&& from) noexcept
    : displayKeyRequest() {
    *this = ::std::move(from);
  }

  inline displayKeyRequest& operator=(const displayKeyRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline displayKeyRequest& operator=(displayKeyRequest&& from) noexcept {
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
  static const displayKeyRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const displayKeyRequest* internal_default_instance() {
    return reinterpret_cast<const displayKeyRequest*>(
               &_displayKeyRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(displayKeyRequest& a, displayKeyRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(displayKeyRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(displayKeyRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline displayKeyRequest* New() const final {
    return new displayKeyRequest();
  }

  displayKeyRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<displayKeyRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const displayKeyRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const displayKeyRequest& from);
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
  void InternalSwap(displayKeyRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImageViewer.displayKeyRequest";
  }
  protected:
  explicit displayKeyRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kImgFieldNumber = 1,
    kKeyFieldNumber = 2,
  };
  // bytes img = 1;
  void clear_img();
  const std::string& img() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_img(ArgT0&& arg0, ArgT... args);
  std::string* mutable_img();
  PROTOBUF_MUST_USE_RESULT std::string* release_img();
  void set_allocated_img(std::string* img);
  private:
  const std::string& _internal_img() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_img(const std::string& value);
  std::string* _internal_mutable_img();
  public:

  // sint32 key = 2;
  void clear_key();
  ::PROTOBUF_NAMESPACE_ID::int32 key() const;
  void set_key(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_key() const;
  void _internal_set_key(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIImageViewer.displayKeyRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr img_;
  ::PROTOBUF_NAMESPACE_ID::int32 key_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIImageViewerService_2eproto;
};
// -------------------------------------------------------------------

class displayKeyResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpcIImageViewer.displayKeyResponse) */ {
 public:
  inline displayKeyResponse() : displayKeyResponse(nullptr) {}
  ~displayKeyResponse() override;
  explicit constexpr displayKeyResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  displayKeyResponse(const displayKeyResponse& from);
  displayKeyResponse(displayKeyResponse&& from) noexcept
    : displayKeyResponse() {
    *this = ::std::move(from);
  }

  inline displayKeyResponse& operator=(const displayKeyResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline displayKeyResponse& operator=(displayKeyResponse&& from) noexcept {
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
  static const displayKeyResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const displayKeyResponse* internal_default_instance() {
    return reinterpret_cast<const displayKeyResponse*>(
               &_displayKeyResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(displayKeyResponse& a, displayKeyResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(displayKeyResponse* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(displayKeyResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline displayKeyResponse* New() const final {
    return new displayKeyResponse();
  }

  displayKeyResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<displayKeyResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const displayKeyResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const displayKeyResponse& from);
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
  void InternalSwap(displayKeyResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpcIImageViewer.displayKeyResponse";
  }
  protected:
  explicit displayKeyResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kKeyFieldNumber = 1,
    kXpcfGrpcReturnValueFieldNumber = 2,
  };
  // sint32 key = 1;
  void clear_key();
  ::PROTOBUF_NAMESPACE_ID::int32 key() const;
  void set_key(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_key() const;
  void _internal_set_key(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // sint32 xpcfGrpcReturnValue = 2;
  void clear_xpcfgrpcreturnvalue();
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue() const;
  void set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xpcfgrpcreturnvalue() const;
  void _internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:grpcIImageViewer.displayKeyResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 key_;
  ::PROTOBUF_NAMESPACE_ID::int32 xpcfgrpcreturnvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_grpcIImageViewerService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// displayRequest

// bytes img = 1;
inline void displayRequest::clear_img() {
  img_.ClearToEmpty();
}
inline const std::string& displayRequest::img() const {
  // @@protoc_insertion_point(field_get:grpcIImageViewer.displayRequest.img)
  return _internal_img();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void displayRequest::set_img(ArgT0&& arg0, ArgT... args) {
 
 img_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageViewer.displayRequest.img)
}
inline std::string* displayRequest::mutable_img() {
  std::string* _s = _internal_mutable_img();
  // @@protoc_insertion_point(field_mutable:grpcIImageViewer.displayRequest.img)
  return _s;
}
inline const std::string& displayRequest::_internal_img() const {
  return img_.Get();
}
inline void displayRequest::_internal_set_img(const std::string& value) {
  
  img_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* displayRequest::_internal_mutable_img() {
  
  return img_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* displayRequest::release_img() {
  // @@protoc_insertion_point(field_release:grpcIImageViewer.displayRequest.img)
  return img_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void displayRequest::set_allocated_img(std::string* img) {
  if (img != nullptr) {
    
  } else {
    
  }
  img_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), img,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIImageViewer.displayRequest.img)
}

// -------------------------------------------------------------------

// displayResponse

// sint32 xpcfGrpcReturnValue = 1;
inline void displayResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIImageViewer.displayResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void displayResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void displayResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIImageViewer.displayResponse.xpcfGrpcReturnValue)
}

// -------------------------------------------------------------------

// displayKeyRequest

// bytes img = 1;
inline void displayKeyRequest::clear_img() {
  img_.ClearToEmpty();
}
inline const std::string& displayKeyRequest::img() const {
  // @@protoc_insertion_point(field_get:grpcIImageViewer.displayKeyRequest.img)
  return _internal_img();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void displayKeyRequest::set_img(ArgT0&& arg0, ArgT... args) {
 
 img_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpcIImageViewer.displayKeyRequest.img)
}
inline std::string* displayKeyRequest::mutable_img() {
  std::string* _s = _internal_mutable_img();
  // @@protoc_insertion_point(field_mutable:grpcIImageViewer.displayKeyRequest.img)
  return _s;
}
inline const std::string& displayKeyRequest::_internal_img() const {
  return img_.Get();
}
inline void displayKeyRequest::_internal_set_img(const std::string& value) {
  
  img_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* displayKeyRequest::_internal_mutable_img() {
  
  return img_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* displayKeyRequest::release_img() {
  // @@protoc_insertion_point(field_release:grpcIImageViewer.displayKeyRequest.img)
  return img_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void displayKeyRequest::set_allocated_img(std::string* img) {
  if (img != nullptr) {
    
  } else {
    
  }
  img_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), img,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:grpcIImageViewer.displayKeyRequest.img)
}

// sint32 key = 2;
inline void displayKeyRequest::clear_key() {
  key_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayKeyRequest::_internal_key() const {
  return key_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayKeyRequest::key() const {
  // @@protoc_insertion_point(field_get:grpcIImageViewer.displayKeyRequest.key)
  return _internal_key();
}
inline void displayKeyRequest::_internal_set_key(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  key_ = value;
}
inline void displayKeyRequest::set_key(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:grpcIImageViewer.displayKeyRequest.key)
}

// -------------------------------------------------------------------

// displayKeyResponse

// sint32 key = 1;
inline void displayKeyResponse::clear_key() {
  key_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayKeyResponse::_internal_key() const {
  return key_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayKeyResponse::key() const {
  // @@protoc_insertion_point(field_get:grpcIImageViewer.displayKeyResponse.key)
  return _internal_key();
}
inline void displayKeyResponse::_internal_set_key(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  key_ = value;
}
inline void displayKeyResponse::set_key(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:grpcIImageViewer.displayKeyResponse.key)
}

// sint32 xpcfGrpcReturnValue = 2;
inline void displayKeyResponse::clear_xpcfgrpcreturnvalue() {
  xpcfgrpcreturnvalue_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayKeyResponse::_internal_xpcfgrpcreturnvalue() const {
  return xpcfgrpcreturnvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 displayKeyResponse::xpcfgrpcreturnvalue() const {
  // @@protoc_insertion_point(field_get:grpcIImageViewer.displayKeyResponse.xpcfGrpcReturnValue)
  return _internal_xpcfgrpcreturnvalue();
}
inline void displayKeyResponse::_internal_set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  xpcfgrpcreturnvalue_ = value;
}
inline void displayKeyResponse::set_xpcfgrpcreturnvalue(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xpcfgrpcreturnvalue(value);
  // @@protoc_insertion_point(field_set:grpcIImageViewer.displayKeyResponse.xpcfGrpcReturnValue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpcIImageViewer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grpcIImageViewerService_2eproto
