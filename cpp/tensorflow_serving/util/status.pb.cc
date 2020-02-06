// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/util/status.proto

#include "tensorflow_serving/util/status.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace tensorflow {
namespace serving {
class StatusProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<StatusProto> _instance;
} _StatusProto_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void InitDefaultsscc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_StatusProto_default_instance_;
    new (ptr) ::tensorflow::serving::StatusProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::StatusProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_5fserving_2futil_2fstatus_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_5fserving_2futil_2fstatus_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_5fserving_2futil_2fstatus_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_5fserving_2futil_2fstatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::StatusProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::StatusProto, error_code_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::StatusProto, error_message_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::serving::StatusProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_StatusProto_default_instance_),
};

const char descriptor_table_protodef_tensorflow_5fserving_2futil_2fstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$tensorflow_serving/util/status.proto\022\022"
  "tensorflow.serving\032*tensorflow/core/prot"
  "obuf/error_codes.proto\"k\n\013StatusProto\0226\n"
  "\nerror_code\030\001 \001(\0162\026.tensorflow.error.Cod"
  "eR\nerror_code\022$\n\rerror_message\030\002 \001(\tR\rer"
  "ror_messageB\003\370\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_deps[1] = {
  &::descriptor_table_tensorflow_2fcore_2fprotobuf_2ferror_5fcodes_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_sccs[1] = {
  &scc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_once;
static bool descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto = {
  &descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_initialized, descriptor_table_protodef_tensorflow_5fserving_2futil_2fstatus_2eproto, "tensorflow_serving/util/status.proto", 224,
  &descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_once, descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_sccs, descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_tensorflow_5fserving_2futil_2fstatus_2eproto::offsets,
  file_level_metadata_tensorflow_5fserving_2futil_2fstatus_2eproto, 1, file_level_enum_descriptors_tensorflow_5fserving_2futil_2fstatus_2eproto, file_level_service_descriptors_tensorflow_5fserving_2futil_2fstatus_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2futil_2fstatus_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto), true);
namespace tensorflow {
namespace serving {

// ===================================================================

void StatusProto::InitAsDefaultInstance() {
}
class StatusProto::_Internal {
 public:
};

StatusProto::StatusProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.serving.StatusProto)
}
StatusProto::StatusProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.StatusProto)
}
StatusProto::StatusProto(const StatusProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  error_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_error_message().empty()) {
    error_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_error_message(),
      GetArenaNoVirtual());
  }
  error_code_ = from.error_code_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.StatusProto)
}

void StatusProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto.base);
  error_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
}

StatusProto::~StatusProto() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.StatusProto)
  SharedDtor();
}

void StatusProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  error_message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void StatusProto::ArenaDtor(void* object) {
  StatusProto* _this = reinterpret_cast< StatusProto* >(object);
  (void)_this;
}
void StatusProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StatusProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StatusProto& StatusProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto.base);
  return *internal_default_instance();
}


void StatusProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.StatusProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  error_message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  error_code_ = 0;
  _internal_metadata_.Clear();
}

const char* StatusProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .tensorflow.error.Code error_code = 1[json_name = "error_code"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_error_code(static_cast<::tensorflow::error::Code>(val));
        } else goto handle_unusual;
        continue;
      // string error_message = 2[json_name = "error_message"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_error_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.StatusProto.error_message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* StatusProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.StatusProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.error.Code error_code = 1[json_name = "error_code"];
  if (this->error_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_error_code(), target);
  }

  // string error_message = 2[json_name = "error_message"];
  if (this->error_message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_error_message().data(), static_cast<int>(this->_internal_error_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.StatusProto.error_message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_error_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.StatusProto)
  return target;
}

size_t StatusProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.StatusProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string error_message = 2[json_name = "error_message"];
  if (this->error_message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_error_message());
  }

  // .tensorflow.error.Code error_code = 1[json_name = "error_code"];
  if (this->error_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_error_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StatusProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.StatusProto)
  GOOGLE_DCHECK_NE(&from, this);
  const StatusProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StatusProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.StatusProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.StatusProto)
    MergeFrom(*source);
  }
}

void StatusProto::MergeFrom(const StatusProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.StatusProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.error_message().size() > 0) {
    _internal_set_error_message(from._internal_error_message());
  }
  if (from.error_code() != 0) {
    _internal_set_error_code(from._internal_error_code());
  }
}

void StatusProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.StatusProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatusProto::CopyFrom(const StatusProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.StatusProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatusProto::IsInitialized() const {
  return true;
}

void StatusProto::InternalSwap(StatusProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  error_message_.Swap(&other->error_message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(error_code_, other->error_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StatusProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::serving::StatusProto* Arena::CreateMaybeMessage< ::tensorflow::serving::StatusProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::StatusProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
