// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/model.proto

#include "tensorflow_serving/apis/model.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fwrappers_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Int64Value_google_2fprotobuf_2fwrappers_2eproto;
namespace tensorflow {
namespace serving {
class ModelSpecDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ModelSpec> _instance;
  const PROTOBUF_NAMESPACE_ID::Int64Value* version_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_label_;
} _ModelSpec_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void InitDefaultsscc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_ModelSpec_default_instance_;
    new (ptr) ::tensorflow::serving::ModelSpec();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::ModelSpec::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto}, {
      &scc_info_Int64Value_google_2fprotobuf_2fwrappers_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_5fserving_2fapis_2fmodel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fmodel_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_5fserving_2fapis_2fmodel_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_5fserving_2fapis_2fmodel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelSpec, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelSpec, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelSpec, name_),
  offsetof(::tensorflow::serving::ModelSpecDefaultTypeInternal, version_),
  offsetof(::tensorflow::serving::ModelSpecDefaultTypeInternal, version_label_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelSpec, signature_name_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelSpec, version_choice_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::serving::ModelSpec)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_ModelSpec_default_instance_),
};

const char descriptor_table_protodef_tensorflow_5fserving_2fapis_2fmodel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#tensorflow_serving/apis/model.proto\022\022t"
  "ensorflow.serving\032\036google/protobuf/wrapp"
  "ers.proto\"\214\001\n\tModelSpec\022\014\n\004name\030\001 \001(\t\022.\n"
  "\007version\030\002 \001(\0132\033.google.protobuf.Int64Va"
  "lueH\000\022\027\n\rversion_label\030\004 \001(\tH\000\022\026\n\016signat"
  "ure_name\030\003 \001(\tB\020\n\016version_choiceB\003\370\001\001b\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fwrappers_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_sccs[1] = {
  &scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_once;
static bool descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto = {
  &descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_initialized, descriptor_table_protodef_tensorflow_5fserving_2fapis_2fmodel_2eproto, "tensorflow_serving/apis/model.proto", 245,
  &descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_once, descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_sccs, descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_tensorflow_5fserving_2fapis_2fmodel_2eproto::offsets,
  file_level_metadata_tensorflow_5fserving_2fapis_2fmodel_2eproto, 1, file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fmodel_2eproto, file_level_service_descriptors_tensorflow_5fserving_2fapis_2fmodel_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2fapis_2fmodel_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto), true);
namespace tensorflow {
namespace serving {

// ===================================================================

void ModelSpec::InitAsDefaultInstance() {
  ::tensorflow::serving::_ModelSpec_default_instance_.version_ = const_cast< PROTOBUF_NAMESPACE_ID::Int64Value*>(
      PROTOBUF_NAMESPACE_ID::Int64Value::internal_default_instance());
  ::tensorflow::serving::_ModelSpec_default_instance_.version_label_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
class ModelSpec::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Int64Value& version(const ModelSpec* msg);
};

const PROTOBUF_NAMESPACE_ID::Int64Value&
ModelSpec::_Internal::version(const ModelSpec* msg) {
  return *msg->version_choice_.version_;
}
void ModelSpec::set_allocated_version(PROTOBUF_NAMESPACE_ID::Int64Value* version) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_version_choice();
  if (version) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(version)->GetArena();
    if (message_arena != submessage_arena) {
      version = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    set_has_version();
    version_choice_.version_ = version;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ModelSpec.version)
}
void ModelSpec::clear_version() {
  if (_internal_has_version()) {
    if (GetArenaNoVirtual() == nullptr) {
      delete version_choice_.version_;
    }
    clear_has_version_choice();
  }
}
ModelSpec::ModelSpec()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.serving.ModelSpec)
}
ModelSpec::ModelSpec(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.ModelSpec)
}
ModelSpec::ModelSpec(const ModelSpec& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_name(),
      GetArenaNoVirtual());
  }
  signature_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_signature_name().empty()) {
    signature_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_signature_name(),
      GetArenaNoVirtual());
  }
  clear_has_version_choice();
  switch (from.version_choice_case()) {
    case kVersion: {
      _internal_mutable_version()->PROTOBUF_NAMESPACE_ID::Int64Value::MergeFrom(from._internal_version());
      break;
    }
    case kVersionLabel: {
      _internal_set_version_label(from._internal_version_label());
      break;
    }
    case VERSION_CHOICE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.ModelSpec)
}

void ModelSpec::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  signature_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  clear_has_version_choice();
}

ModelSpec::~ModelSpec() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.ModelSpec)
  SharedDtor();
}

void ModelSpec::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  signature_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (has_version_choice()) {
    clear_version_choice();
  }
}

void ModelSpec::ArenaDtor(void* object) {
  ModelSpec* _this = reinterpret_cast< ModelSpec* >(object);
  (void)_this;
}
void ModelSpec::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ModelSpec::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ModelSpec& ModelSpec::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base);
  return *internal_default_instance();
}


void ModelSpec::clear_version_choice() {
// @@protoc_insertion_point(one_of_clear_start:tensorflow.serving.ModelSpec)
  switch (version_choice_case()) {
    case kVersion: {
      if (GetArenaNoVirtual() == nullptr) {
        delete version_choice_.version_;
      }
      break;
    }
    case kVersionLabel: {
      version_choice_.version_label_.Destroy(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
          GetArenaNoVirtual());
      break;
    }
    case VERSION_CHOICE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = VERSION_CHOICE_NOT_SET;
}


void ModelSpec::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.ModelSpec)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  signature_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  clear_version_choice();
  _internal_metadata_.Clear();
}

const char* ModelSpec::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.ModelSpec.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Int64Value version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_version(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string signature_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_signature_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.ModelSpec.signature_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string version_label = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_version_label();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.ModelSpec.version_label"));
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

::PROTOBUF_NAMESPACE_ID::uint8* ModelSpec::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.ModelSpec)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.ModelSpec.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // .google.protobuf.Int64Value version = 2;
  if (_internal_has_version()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::version(this), target, stream);
  }

  // string signature_name = 3;
  if (this->signature_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_signature_name().data(), static_cast<int>(this->_internal_signature_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.ModelSpec.signature_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_signature_name(), target);
  }

  // string version_label = 4;
  if (_internal_has_version_label()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version_label().data(), static_cast<int>(this->_internal_version_label().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.ModelSpec.version_label");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_version_label(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.ModelSpec)
  return target;
}

size_t ModelSpec::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.ModelSpec)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string signature_name = 3;
  if (this->signature_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_signature_name());
  }

  switch (version_choice_case()) {
    // .google.protobuf.Int64Value version = 2;
    case kVersion: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *version_choice_.version_);
      break;
    }
    // string version_label = 4;
    case kVersionLabel: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_version_label());
      break;
    }
    case VERSION_CHOICE_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ModelSpec::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.ModelSpec)
  GOOGLE_DCHECK_NE(&from, this);
  const ModelSpec* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ModelSpec>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.ModelSpec)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.ModelSpec)
    MergeFrom(*source);
  }
}

void ModelSpec::MergeFrom(const ModelSpec& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.ModelSpec)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.signature_name().size() > 0) {
    _internal_set_signature_name(from._internal_signature_name());
  }
  switch (from.version_choice_case()) {
    case kVersion: {
      _internal_mutable_version()->PROTOBUF_NAMESPACE_ID::Int64Value::MergeFrom(from._internal_version());
      break;
    }
    case kVersionLabel: {
      _internal_set_version_label(from._internal_version_label());
      break;
    }
    case VERSION_CHOICE_NOT_SET: {
      break;
    }
  }
}

void ModelSpec::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.ModelSpec)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModelSpec::CopyFrom(const ModelSpec& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.ModelSpec)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelSpec::IsInitialized() const {
  return true;
}

void ModelSpec::InternalSwap(ModelSpec* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  signature_name_.Swap(&other->signature_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(version_choice_, other->version_choice_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata ModelSpec::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::serving::ModelSpec* Arena::CreateMaybeMessage< ::tensorflow::serving::ModelSpec >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::ModelSpec >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
