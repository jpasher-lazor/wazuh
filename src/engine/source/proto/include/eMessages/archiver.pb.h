// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: archiver.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_archiver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_archiver_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "engine.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_archiver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_archiver_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_archiver_2eproto;
namespace com {
namespace wazuh {
namespace api {
namespace engine {
namespace archiver {
class ArchiverActivate_Request;
struct ArchiverActivate_RequestDefaultTypeInternal;
extern ArchiverActivate_RequestDefaultTypeInternal _ArchiverActivate_Request_default_instance_;
class ArchiverDeactivate_Request;
struct ArchiverDeactivate_RequestDefaultTypeInternal;
extern ArchiverDeactivate_RequestDefaultTypeInternal _ArchiverDeactivate_Request_default_instance_;
class ArchiverStatus_Request;
struct ArchiverStatus_RequestDefaultTypeInternal;
extern ArchiverStatus_RequestDefaultTypeInternal _ArchiverStatus_Request_default_instance_;
class ArchiverStatus_Response;
struct ArchiverStatus_ResponseDefaultTypeInternal;
extern ArchiverStatus_ResponseDefaultTypeInternal _ArchiverStatus_Response_default_instance_;
}  // namespace archiver
}  // namespace engine
}  // namespace api
}  // namespace wazuh
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::wazuh::api::engine::archiver::ArchiverActivate_Request* Arena::CreateMaybeMessage<::com::wazuh::api::engine::archiver::ArchiverActivate_Request>(Arena*);
template<> ::com::wazuh::api::engine::archiver::ArchiverDeactivate_Request* Arena::CreateMaybeMessage<::com::wazuh::api::engine::archiver::ArchiverDeactivate_Request>(Arena*);
template<> ::com::wazuh::api::engine::archiver::ArchiverStatus_Request* Arena::CreateMaybeMessage<::com::wazuh::api::engine::archiver::ArchiverStatus_Request>(Arena*);
template<> ::com::wazuh::api::engine::archiver::ArchiverStatus_Response* Arena::CreateMaybeMessage<::com::wazuh::api::engine::archiver::ArchiverStatus_Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace wazuh {
namespace api {
namespace engine {
namespace archiver {

// ===================================================================

class ArchiverActivate_Request final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:com.wazuh.api.engine.archiver.ArchiverActivate_Request) */ {
 public:
  inline ArchiverActivate_Request() : ArchiverActivate_Request(nullptr) {}
  explicit PROTOBUF_CONSTEXPR ArchiverActivate_Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArchiverActivate_Request(const ArchiverActivate_Request& from);
  ArchiverActivate_Request(ArchiverActivate_Request&& from) noexcept
    : ArchiverActivate_Request() {
    *this = ::std::move(from);
  }

  inline ArchiverActivate_Request& operator=(const ArchiverActivate_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArchiverActivate_Request& operator=(ArchiverActivate_Request&& from) noexcept {
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
  static const ArchiverActivate_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArchiverActivate_Request* internal_default_instance() {
    return reinterpret_cast<const ArchiverActivate_Request*>(
               &_ArchiverActivate_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ArchiverActivate_Request& a, ArchiverActivate_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(ArchiverActivate_Request* other) {
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
  void UnsafeArenaSwap(ArchiverActivate_Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArchiverActivate_Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArchiverActivate_Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const ArchiverActivate_Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const ArchiverActivate_Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.wazuh.api.engine.archiver.ArchiverActivate_Request";
  }
  protected:
  explicit ArchiverActivate_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:com.wazuh.api.engine.archiver.ArchiverActivate_Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_archiver_2eproto;
};
// -------------------------------------------------------------------

class ArchiverDeactivate_Request final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:com.wazuh.api.engine.archiver.ArchiverDeactivate_Request) */ {
 public:
  inline ArchiverDeactivate_Request() : ArchiverDeactivate_Request(nullptr) {}
  explicit PROTOBUF_CONSTEXPR ArchiverDeactivate_Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArchiverDeactivate_Request(const ArchiverDeactivate_Request& from);
  ArchiverDeactivate_Request(ArchiverDeactivate_Request&& from) noexcept
    : ArchiverDeactivate_Request() {
    *this = ::std::move(from);
  }

  inline ArchiverDeactivate_Request& operator=(const ArchiverDeactivate_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArchiverDeactivate_Request& operator=(ArchiverDeactivate_Request&& from) noexcept {
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
  static const ArchiverDeactivate_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArchiverDeactivate_Request* internal_default_instance() {
    return reinterpret_cast<const ArchiverDeactivate_Request*>(
               &_ArchiverDeactivate_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ArchiverDeactivate_Request& a, ArchiverDeactivate_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(ArchiverDeactivate_Request* other) {
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
  void UnsafeArenaSwap(ArchiverDeactivate_Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArchiverDeactivate_Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArchiverDeactivate_Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const ArchiverDeactivate_Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const ArchiverDeactivate_Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.wazuh.api.engine.archiver.ArchiverDeactivate_Request";
  }
  protected:
  explicit ArchiverDeactivate_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:com.wazuh.api.engine.archiver.ArchiverDeactivate_Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_archiver_2eproto;
};
// -------------------------------------------------------------------

class ArchiverStatus_Request final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:com.wazuh.api.engine.archiver.ArchiverStatus_Request) */ {
 public:
  inline ArchiverStatus_Request() : ArchiverStatus_Request(nullptr) {}
  explicit PROTOBUF_CONSTEXPR ArchiverStatus_Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArchiverStatus_Request(const ArchiverStatus_Request& from);
  ArchiverStatus_Request(ArchiverStatus_Request&& from) noexcept
    : ArchiverStatus_Request() {
    *this = ::std::move(from);
  }

  inline ArchiverStatus_Request& operator=(const ArchiverStatus_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArchiverStatus_Request& operator=(ArchiverStatus_Request&& from) noexcept {
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
  static const ArchiverStatus_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArchiverStatus_Request* internal_default_instance() {
    return reinterpret_cast<const ArchiverStatus_Request*>(
               &_ArchiverStatus_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ArchiverStatus_Request& a, ArchiverStatus_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(ArchiverStatus_Request* other) {
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
  void UnsafeArenaSwap(ArchiverStatus_Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArchiverStatus_Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArchiverStatus_Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const ArchiverStatus_Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const ArchiverStatus_Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.wazuh.api.engine.archiver.ArchiverStatus_Request";
  }
  protected:
  explicit ArchiverStatus_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:com.wazuh.api.engine.archiver.ArchiverStatus_Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_archiver_2eproto;
};
// -------------------------------------------------------------------

class ArchiverStatus_Response final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.wazuh.api.engine.archiver.ArchiverStatus_Response) */ {
 public:
  inline ArchiverStatus_Response() : ArchiverStatus_Response(nullptr) {}
  ~ArchiverStatus_Response() override;
  explicit PROTOBUF_CONSTEXPR ArchiverStatus_Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArchiverStatus_Response(const ArchiverStatus_Response& from);
  ArchiverStatus_Response(ArchiverStatus_Response&& from) noexcept
    : ArchiverStatus_Response() {
    *this = ::std::move(from);
  }

  inline ArchiverStatus_Response& operator=(const ArchiverStatus_Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArchiverStatus_Response& operator=(ArchiverStatus_Response&& from) noexcept {
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
  static const ArchiverStatus_Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArchiverStatus_Response* internal_default_instance() {
    return reinterpret_cast<const ArchiverStatus_Response*>(
               &_ArchiverStatus_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(ArchiverStatus_Response& a, ArchiverStatus_Response& b) {
    a.Swap(&b);
  }
  inline void Swap(ArchiverStatus_Response* other) {
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
  void UnsafeArenaSwap(ArchiverStatus_Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArchiverStatus_Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArchiverStatus_Response>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ArchiverStatus_Response& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ArchiverStatus_Response& from) {
    ArchiverStatus_Response::MergeImpl(*this, from);
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
  void InternalSwap(ArchiverStatus_Response* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.wazuh.api.engine.archiver.ArchiverStatus_Response";
  }
  protected:
  explicit ArchiverStatus_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorFieldNumber = 2,
    kStatusFieldNumber = 1,
    kActiveFieldNumber = 3,
  };
  // optional string error = 2;
  bool has_error() const;
  private:
  bool _internal_has_error() const;
  public:
  void clear_error();
  const std::string& error() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_error(ArgT0&& arg0, ArgT... args);
  std::string* mutable_error();
  PROTOBUF_NODISCARD std::string* release_error();
  void set_allocated_error(std::string* error);
  private:
  const std::string& _internal_error() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_error(const std::string& value);
  std::string* _internal_mutable_error();
  public:

  // .com.wazuh.api.engine.ReturnStatus status = 1;
  void clear_status();
  ::com::wazuh::api::engine::ReturnStatus status() const;
  void set_status(::com::wazuh::api::engine::ReturnStatus value);
  private:
  ::com::wazuh::api::engine::ReturnStatus _internal_status() const;
  void _internal_set_status(::com::wazuh::api::engine::ReturnStatus value);
  public:

  // bool active = 3;
  void clear_active();
  bool active() const;
  void set_active(bool value);
  private:
  bool _internal_active() const;
  void _internal_set_active(bool value);
  public:

  // @@protoc_insertion_point(class_scope:com.wazuh.api.engine.archiver.ArchiverStatus_Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_;
    int status_;
    bool active_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_archiver_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ArchiverActivate_Request

// -------------------------------------------------------------------

// ArchiverDeactivate_Request

// -------------------------------------------------------------------

// ArchiverStatus_Request

// -------------------------------------------------------------------

// ArchiverStatus_Response

// .com.wazuh.api.engine.ReturnStatus status = 1;
inline void ArchiverStatus_Response::clear_status() {
  _impl_.status_ = 0;
}
inline ::com::wazuh::api::engine::ReturnStatus ArchiverStatus_Response::_internal_status() const {
  return static_cast< ::com::wazuh::api::engine::ReturnStatus >(_impl_.status_);
}
inline ::com::wazuh::api::engine::ReturnStatus ArchiverStatus_Response::status() const {
  // @@protoc_insertion_point(field_get:com.wazuh.api.engine.archiver.ArchiverStatus_Response.status)
  return _internal_status();
}
inline void ArchiverStatus_Response::_internal_set_status(::com::wazuh::api::engine::ReturnStatus value) {
  
  _impl_.status_ = value;
}
inline void ArchiverStatus_Response::set_status(::com::wazuh::api::engine::ReturnStatus value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:com.wazuh.api.engine.archiver.ArchiverStatus_Response.status)
}

// optional string error = 2;
inline bool ArchiverStatus_Response::_internal_has_error() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ArchiverStatus_Response::has_error() const {
  return _internal_has_error();
}
inline void ArchiverStatus_Response::clear_error() {
  _impl_.error_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ArchiverStatus_Response::error() const {
  // @@protoc_insertion_point(field_get:com.wazuh.api.engine.archiver.ArchiverStatus_Response.error)
  return _internal_error();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ArchiverStatus_Response::set_error(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.error_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.wazuh.api.engine.archiver.ArchiverStatus_Response.error)
}
inline std::string* ArchiverStatus_Response::mutable_error() {
  std::string* _s = _internal_mutable_error();
  // @@protoc_insertion_point(field_mutable:com.wazuh.api.engine.archiver.ArchiverStatus_Response.error)
  return _s;
}
inline const std::string& ArchiverStatus_Response::_internal_error() const {
  return _impl_.error_.Get();
}
inline void ArchiverStatus_Response::_internal_set_error(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.error_.Set(value, GetArenaForAllocation());
}
inline std::string* ArchiverStatus_Response::_internal_mutable_error() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.error_.Mutable(GetArenaForAllocation());
}
inline std::string* ArchiverStatus_Response::release_error() {
  // @@protoc_insertion_point(field_release:com.wazuh.api.engine.archiver.ArchiverStatus_Response.error)
  if (!_internal_has_error()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.error_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.error_.IsDefault()) {
    _impl_.error_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ArchiverStatus_Response::set_allocated_error(std::string* error) {
  if (error != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.error_.SetAllocated(error, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.error_.IsDefault()) {
    _impl_.error_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.wazuh.api.engine.archiver.ArchiverStatus_Response.error)
}

// bool active = 3;
inline void ArchiverStatus_Response::clear_active() {
  _impl_.active_ = false;
}
inline bool ArchiverStatus_Response::_internal_active() const {
  return _impl_.active_;
}
inline bool ArchiverStatus_Response::active() const {
  // @@protoc_insertion_point(field_get:com.wazuh.api.engine.archiver.ArchiverStatus_Response.active)
  return _internal_active();
}
inline void ArchiverStatus_Response::_internal_set_active(bool value) {
  
  _impl_.active_ = value;
}
inline void ArchiverStatus_Response::set_active(bool value) {
  _internal_set_active(value);
  // @@protoc_insertion_point(field_set:com.wazuh.api.engine.archiver.ArchiverStatus_Response.active)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace archiver
}  // namespace engine
}  // namespace api
}  // namespace wazuh
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_archiver_2eproto
