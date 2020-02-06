// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/config/logging_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow_serving/config/log_collector_config.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto;
namespace tensorflow {
namespace serving {
class LoggingConfig;
class LoggingConfigDefaultTypeInternal;
extern LoggingConfigDefaultTypeInternal _LoggingConfig_default_instance_;
class SamplingConfig;
class SamplingConfigDefaultTypeInternal;
extern SamplingConfigDefaultTypeInternal _SamplingConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::serving::LoggingConfig* Arena::CreateMaybeMessage<::tensorflow::serving::LoggingConfig>(Arena*);
template<> ::tensorflow::serving::SamplingConfig* Arena::CreateMaybeMessage<::tensorflow::serving::SamplingConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace serving {

// ===================================================================

class SamplingConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.SamplingConfig) */ {
 public:
  SamplingConfig();
  virtual ~SamplingConfig();

  SamplingConfig(const SamplingConfig& from);
  SamplingConfig(SamplingConfig&& from) noexcept
    : SamplingConfig() {
    *this = ::std::move(from);
  }

  inline SamplingConfig& operator=(const SamplingConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline SamplingConfig& operator=(SamplingConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const SamplingConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SamplingConfig* internal_default_instance() {
    return reinterpret_cast<const SamplingConfig*>(
               &_SamplingConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SamplingConfig& a, SamplingConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(SamplingConfig* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SamplingConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SamplingConfig* New() const final {
    return CreateMaybeMessage<SamplingConfig>(nullptr);
  }

  SamplingConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SamplingConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SamplingConfig& from);
  void MergeFrom(const SamplingConfig& from);
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
  void InternalSwap(SamplingConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.SamplingConfig";
  }
  protected:
  explicit SamplingConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSamplingRateFieldNumber = 1,
  };
  // double sampling_rate = 1;
  void clear_sampling_rate();
  double sampling_rate() const;
  void set_sampling_rate(double value);
  private:
  double _internal_sampling_rate() const;
  void _internal_set_sampling_rate(double value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.serving.SamplingConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double sampling_rate_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto;
};
// -------------------------------------------------------------------

class LoggingConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.LoggingConfig) */ {
 public:
  LoggingConfig();
  virtual ~LoggingConfig();

  LoggingConfig(const LoggingConfig& from);
  LoggingConfig(LoggingConfig&& from) noexcept
    : LoggingConfig() {
    *this = ::std::move(from);
  }

  inline LoggingConfig& operator=(const LoggingConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline LoggingConfig& operator=(LoggingConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const LoggingConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoggingConfig* internal_default_instance() {
    return reinterpret_cast<const LoggingConfig*>(
               &_LoggingConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LoggingConfig& a, LoggingConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(LoggingConfig* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LoggingConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LoggingConfig* New() const final {
    return CreateMaybeMessage<LoggingConfig>(nullptr);
  }

  LoggingConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LoggingConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LoggingConfig& from);
  void MergeFrom(const LoggingConfig& from);
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
  void InternalSwap(LoggingConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.LoggingConfig";
  }
  protected:
  explicit LoggingConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogCollectorConfigFieldNumber = 1,
    kSamplingConfigFieldNumber = 2,
  };
  // .tensorflow.serving.LogCollectorConfig log_collector_config = 1;
  bool has_log_collector_config() const;
  private:
  bool _internal_has_log_collector_config() const;
  public:
  void clear_log_collector_config();
  const ::tensorflow::serving::LogCollectorConfig& log_collector_config() const;
  ::tensorflow::serving::LogCollectorConfig* release_log_collector_config();
  ::tensorflow::serving::LogCollectorConfig* mutable_log_collector_config();
  void set_allocated_log_collector_config(::tensorflow::serving::LogCollectorConfig* log_collector_config);
  private:
  const ::tensorflow::serving::LogCollectorConfig& _internal_log_collector_config() const;
  ::tensorflow::serving::LogCollectorConfig* _internal_mutable_log_collector_config();
  public:
  void unsafe_arena_set_allocated_log_collector_config(
      ::tensorflow::serving::LogCollectorConfig* log_collector_config);
  ::tensorflow::serving::LogCollectorConfig* unsafe_arena_release_log_collector_config();

  // .tensorflow.serving.SamplingConfig sampling_config = 2;
  bool has_sampling_config() const;
  private:
  bool _internal_has_sampling_config() const;
  public:
  void clear_sampling_config();
  const ::tensorflow::serving::SamplingConfig& sampling_config() const;
  ::tensorflow::serving::SamplingConfig* release_sampling_config();
  ::tensorflow::serving::SamplingConfig* mutable_sampling_config();
  void set_allocated_sampling_config(::tensorflow::serving::SamplingConfig* sampling_config);
  private:
  const ::tensorflow::serving::SamplingConfig& _internal_sampling_config() const;
  ::tensorflow::serving::SamplingConfig* _internal_mutable_sampling_config();
  public:
  void unsafe_arena_set_allocated_sampling_config(
      ::tensorflow::serving::SamplingConfig* sampling_config);
  ::tensorflow::serving::SamplingConfig* unsafe_arena_release_sampling_config();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.LoggingConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::serving::LogCollectorConfig* log_collector_config_;
  ::tensorflow::serving::SamplingConfig* sampling_config_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SamplingConfig

// double sampling_rate = 1;
inline void SamplingConfig::clear_sampling_rate() {
  sampling_rate_ = 0;
}
inline double SamplingConfig::_internal_sampling_rate() const {
  return sampling_rate_;
}
inline double SamplingConfig::sampling_rate() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.SamplingConfig.sampling_rate)
  return _internal_sampling_rate();
}
inline void SamplingConfig::_internal_set_sampling_rate(double value) {
  
  sampling_rate_ = value;
}
inline void SamplingConfig::set_sampling_rate(double value) {
  _internal_set_sampling_rate(value);
  // @@protoc_insertion_point(field_set:tensorflow.serving.SamplingConfig.sampling_rate)
}

// -------------------------------------------------------------------

// LoggingConfig

// .tensorflow.serving.LogCollectorConfig log_collector_config = 1;
inline bool LoggingConfig::_internal_has_log_collector_config() const {
  return this != internal_default_instance() && log_collector_config_ != nullptr;
}
inline bool LoggingConfig::has_log_collector_config() const {
  return _internal_has_log_collector_config();
}
inline const ::tensorflow::serving::LogCollectorConfig& LoggingConfig::_internal_log_collector_config() const {
  const ::tensorflow::serving::LogCollectorConfig* p = log_collector_config_;
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::serving::LogCollectorConfig*>(
      &::tensorflow::serving::_LogCollectorConfig_default_instance_);
}
inline const ::tensorflow::serving::LogCollectorConfig& LoggingConfig::log_collector_config() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.LoggingConfig.log_collector_config)
  return _internal_log_collector_config();
}
inline ::tensorflow::serving::LogCollectorConfig* LoggingConfig::release_log_collector_config() {
  auto temp = unsafe_arena_release_log_collector_config();
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::serving::LogCollectorConfig* LoggingConfig::unsafe_arena_release_log_collector_config() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.LoggingConfig.log_collector_config)
  
  ::tensorflow::serving::LogCollectorConfig* temp = log_collector_config_;
  log_collector_config_ = nullptr;
  return temp;
}
inline ::tensorflow::serving::LogCollectorConfig* LoggingConfig::_internal_mutable_log_collector_config() {
  
  if (log_collector_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::LogCollectorConfig>(GetArenaNoVirtual());
    log_collector_config_ = p;
  }
  return log_collector_config_;
}
inline ::tensorflow::serving::LogCollectorConfig* LoggingConfig::mutable_log_collector_config() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.LoggingConfig.log_collector_config)
  return _internal_mutable_log_collector_config();
}
inline void LoggingConfig::set_allocated_log_collector_config(::tensorflow::serving::LogCollectorConfig* log_collector_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(log_collector_config_);
  }
  if (log_collector_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(log_collector_config)->GetArena();
    if (message_arena != submessage_arena) {
      log_collector_config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, log_collector_config, submessage_arena);
    }
    
  } else {
    
  }
  log_collector_config_ = log_collector_config;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.LoggingConfig.log_collector_config)
}

// .tensorflow.serving.SamplingConfig sampling_config = 2;
inline bool LoggingConfig::_internal_has_sampling_config() const {
  return this != internal_default_instance() && sampling_config_ != nullptr;
}
inline bool LoggingConfig::has_sampling_config() const {
  return _internal_has_sampling_config();
}
inline void LoggingConfig::clear_sampling_config() {
  if (GetArenaNoVirtual() == nullptr && sampling_config_ != nullptr) {
    delete sampling_config_;
  }
  sampling_config_ = nullptr;
}
inline const ::tensorflow::serving::SamplingConfig& LoggingConfig::_internal_sampling_config() const {
  const ::tensorflow::serving::SamplingConfig* p = sampling_config_;
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::serving::SamplingConfig*>(
      &::tensorflow::serving::_SamplingConfig_default_instance_);
}
inline const ::tensorflow::serving::SamplingConfig& LoggingConfig::sampling_config() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.LoggingConfig.sampling_config)
  return _internal_sampling_config();
}
inline ::tensorflow::serving::SamplingConfig* LoggingConfig::release_sampling_config() {
  auto temp = unsafe_arena_release_sampling_config();
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::serving::SamplingConfig* LoggingConfig::unsafe_arena_release_sampling_config() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.LoggingConfig.sampling_config)
  
  ::tensorflow::serving::SamplingConfig* temp = sampling_config_;
  sampling_config_ = nullptr;
  return temp;
}
inline ::tensorflow::serving::SamplingConfig* LoggingConfig::_internal_mutable_sampling_config() {
  
  if (sampling_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::SamplingConfig>(GetArenaNoVirtual());
    sampling_config_ = p;
  }
  return sampling_config_;
}
inline ::tensorflow::serving::SamplingConfig* LoggingConfig::mutable_sampling_config() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.LoggingConfig.sampling_config)
  return _internal_mutable_sampling_config();
}
inline void LoggingConfig::set_allocated_sampling_config(::tensorflow::serving::SamplingConfig* sampling_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete sampling_config_;
  }
  if (sampling_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(sampling_config);
    if (message_arena != submessage_arena) {
      sampling_config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sampling_config, submessage_arena);
    }
    
  } else {
    
  }
  sampling_config_ = sampling_config;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.LoggingConfig.sampling_config)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fconfig_2flogging_5fconfig_2eproto
