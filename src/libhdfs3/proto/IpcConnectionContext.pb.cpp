// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IpcConnectionContext.proto

#include "IpcConnectionContext.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_IpcConnectionContext_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UserInformationProto_IpcConnectionContext_2eproto;
namespace Hdfs {
namespace Internal {
class UserInformationProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UserInformationProto> _instance;
} _UserInformationProto_default_instance_;
class IpcConnectionContextProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IpcConnectionContextProto> _instance;
} _IpcConnectionContextProto_default_instance_;
}  // namespace Internal
}  // namespace Hdfs
static void InitDefaultsscc_info_IpcConnectionContextProto_IpcConnectionContext_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Hdfs::Internal::_IpcConnectionContextProto_default_instance_;
    new (ptr) ::Hdfs::Internal::IpcConnectionContextProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Hdfs::Internal::IpcConnectionContextProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_IpcConnectionContextProto_IpcConnectionContext_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_IpcConnectionContextProto_IpcConnectionContext_2eproto}, {
      &scc_info_UserInformationProto_IpcConnectionContext_2eproto.base,}};

static void InitDefaultsscc_info_UserInformationProto_IpcConnectionContext_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Hdfs::Internal::_UserInformationProto_default_instance_;
    new (ptr) ::Hdfs::Internal::UserInformationProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Hdfs::Internal::UserInformationProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UserInformationProto_IpcConnectionContext_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_UserInformationProto_IpcConnectionContext_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_IpcConnectionContext_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_IpcConnectionContext_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_IpcConnectionContext_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_IpcConnectionContext_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::UserInformationProto, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::UserInformationProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::UserInformationProto, effectiveuser_),
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::UserInformationProto, realuser_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::IpcConnectionContextProto, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::IpcConnectionContextProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::IpcConnectionContextProto, userinfo_),
  PROTOBUF_FIELD_OFFSET(::Hdfs::Internal::IpcConnectionContextProto, protocol_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::Hdfs::Internal::UserInformationProto)},
  { 9, 16, sizeof(::Hdfs::Internal::IpcConnectionContextProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Hdfs::Internal::_UserInformationProto_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Hdfs::Internal::_IpcConnectionContextProto_default_instance_),
};

const char descriptor_table_protodef_IpcConnectionContext_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032IpcConnectionContext.proto\022\rHdfs.Inter"
  "nal\"\?\n\024UserInformationProto\022\025\n\reffective"
  "User\030\001 \001(\t\022\020\n\010realUser\030\002 \001(\t\"d\n\031IpcConne"
  "ctionContextProto\0225\n\010userInfo\030\002 \001(\0132#.Hd"
  "fs.Internal.UserInformationProto\022\020\n\010prot"
  "ocol\030\003 \001(\tB\?\n\036org.apache.hadoop.ipc.prot"
  "obufB\032IpcConnectionContextProtos\240\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_IpcConnectionContext_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_IpcConnectionContext_2eproto_sccs[2] = {
  &scc_info_IpcConnectionContextProto_IpcConnectionContext_2eproto.base,
  &scc_info_UserInformationProto_IpcConnectionContext_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_IpcConnectionContext_2eproto_once;
static bool descriptor_table_IpcConnectionContext_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_IpcConnectionContext_2eproto = {
  &descriptor_table_IpcConnectionContext_2eproto_initialized, descriptor_table_protodef_IpcConnectionContext_2eproto, "IpcConnectionContext.proto", 275,
  &descriptor_table_IpcConnectionContext_2eproto_once, descriptor_table_IpcConnectionContext_2eproto_sccs, descriptor_table_IpcConnectionContext_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_IpcConnectionContext_2eproto::offsets,
  file_level_metadata_IpcConnectionContext_2eproto, 2, file_level_enum_descriptors_IpcConnectionContext_2eproto, file_level_service_descriptors_IpcConnectionContext_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_IpcConnectionContext_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_IpcConnectionContext_2eproto), true);
namespace Hdfs {
namespace Internal {

// ===================================================================

void UserInformationProto::InitAsDefaultInstance() {
}
class UserInformationProto::_Internal {
 public:
  using HasBits = decltype(std::declval<UserInformationProto>()._has_bits_);
  static void set_has_effectiveuser(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_realuser(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

UserInformationProto::UserInformationProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Hdfs.Internal.UserInformationProto)
}
UserInformationProto::UserInformationProto(const UserInformationProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  effectiveuser_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_effectiveuser()) {
    effectiveuser_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.effectiveuser_);
  }
  realuser_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_realuser()) {
    realuser_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.realuser_);
  }
  // @@protoc_insertion_point(copy_constructor:Hdfs.Internal.UserInformationProto)
}

void UserInformationProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UserInformationProto_IpcConnectionContext_2eproto.base);
  effectiveuser_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  realuser_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

UserInformationProto::~UserInformationProto() {
  // @@protoc_insertion_point(destructor:Hdfs.Internal.UserInformationProto)
  SharedDtor();
}

void UserInformationProto::SharedDtor() {
  effectiveuser_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  realuser_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UserInformationProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UserInformationProto& UserInformationProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UserInformationProto_IpcConnectionContext_2eproto.base);
  return *internal_default_instance();
}


void UserInformationProto::Clear() {
// @@protoc_insertion_point(message_clear_start:Hdfs.Internal.UserInformationProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      effectiveuser_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      realuser_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* UserInformationProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string effectiveUser = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_effectiveuser();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Hdfs.Internal.UserInformationProto.effectiveUser");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string realUser = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_realuser();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Hdfs.Internal.UserInformationProto.realUser");
          #endif  // !NDEBUG
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* UserInformationProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Hdfs.Internal.UserInformationProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string effectiveUser = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_effectiveuser().data(), static_cast<int>(this->_internal_effectiveuser().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Hdfs.Internal.UserInformationProto.effectiveUser");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_effectiveuser(), target);
  }

  // optional string realUser = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_realuser().data(), static_cast<int>(this->_internal_realuser().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Hdfs.Internal.UserInformationProto.realUser");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_realuser(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Hdfs.Internal.UserInformationProto)
  return target;
}

size_t UserInformationProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Hdfs.Internal.UserInformationProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string effectiveUser = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_effectiveuser());
    }

    // optional string realUser = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_realuser());
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

void UserInformationProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Hdfs.Internal.UserInformationProto)
  GOOGLE_DCHECK_NE(&from, this);
  const UserInformationProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<UserInformationProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Hdfs.Internal.UserInformationProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Hdfs.Internal.UserInformationProto)
    MergeFrom(*source);
  }
}

void UserInformationProto::MergeFrom(const UserInformationProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Hdfs.Internal.UserInformationProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      effectiveuser_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.effectiveuser_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      realuser_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.realuser_);
    }
  }
}

void UserInformationProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Hdfs.Internal.UserInformationProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserInformationProto::CopyFrom(const UserInformationProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Hdfs.Internal.UserInformationProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInformationProto::IsInitialized() const {
  return true;
}

void UserInformationProto::InternalSwap(UserInformationProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  effectiveuser_.Swap(&other->effectiveuser_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  realuser_.Swap(&other->realuser_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata UserInformationProto::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void IpcConnectionContextProto::InitAsDefaultInstance() {
  ::Hdfs::Internal::_IpcConnectionContextProto_default_instance_._instance.get_mutable()->userinfo_ = const_cast< ::Hdfs::Internal::UserInformationProto*>(
      ::Hdfs::Internal::UserInformationProto::internal_default_instance());
}
class IpcConnectionContextProto::_Internal {
 public:
  using HasBits = decltype(std::declval<IpcConnectionContextProto>()._has_bits_);
  static const ::Hdfs::Internal::UserInformationProto& userinfo(const IpcConnectionContextProto* msg);
  static void set_has_userinfo(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_protocol(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::Hdfs::Internal::UserInformationProto&
IpcConnectionContextProto::_Internal::userinfo(const IpcConnectionContextProto* msg) {
  return *msg->userinfo_;
}
IpcConnectionContextProto::IpcConnectionContextProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Hdfs.Internal.IpcConnectionContextProto)
}
IpcConnectionContextProto::IpcConnectionContextProto(const IpcConnectionContextProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  protocol_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_protocol()) {
    protocol_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.protocol_);
  }
  if (from._internal_has_userinfo()) {
    userinfo_ = new ::Hdfs::Internal::UserInformationProto(*from.userinfo_);
  } else {
    userinfo_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:Hdfs.Internal.IpcConnectionContextProto)
}

void IpcConnectionContextProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_IpcConnectionContextProto_IpcConnectionContext_2eproto.base);
  protocol_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  userinfo_ = nullptr;
}

IpcConnectionContextProto::~IpcConnectionContextProto() {
  // @@protoc_insertion_point(destructor:Hdfs.Internal.IpcConnectionContextProto)
  SharedDtor();
}

void IpcConnectionContextProto::SharedDtor() {
  protocol_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete userinfo_;
}

void IpcConnectionContextProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IpcConnectionContextProto& IpcConnectionContextProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IpcConnectionContextProto_IpcConnectionContext_2eproto.base);
  return *internal_default_instance();
}


void IpcConnectionContextProto::Clear() {
// @@protoc_insertion_point(message_clear_start:Hdfs.Internal.IpcConnectionContextProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      protocol_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(userinfo_ != nullptr);
      userinfo_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* IpcConnectionContextProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .Hdfs.Internal.UserInformationProto userInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_userinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string protocol = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_protocol();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Hdfs.Internal.IpcConnectionContextProto.protocol");
          #endif  // !NDEBUG
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* IpcConnectionContextProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Hdfs.Internal.IpcConnectionContextProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .Hdfs.Internal.UserInformationProto userInfo = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::userinfo(this), target, stream);
  }

  // optional string protocol = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_protocol().data(), static_cast<int>(this->_internal_protocol().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Hdfs.Internal.IpcConnectionContextProto.protocol");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_protocol(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Hdfs.Internal.IpcConnectionContextProto)
  return target;
}

size_t IpcConnectionContextProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Hdfs.Internal.IpcConnectionContextProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string protocol = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_protocol());
    }

    // optional .Hdfs.Internal.UserInformationProto userInfo = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *userinfo_);
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

void IpcConnectionContextProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Hdfs.Internal.IpcConnectionContextProto)
  GOOGLE_DCHECK_NE(&from, this);
  const IpcConnectionContextProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<IpcConnectionContextProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Hdfs.Internal.IpcConnectionContextProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Hdfs.Internal.IpcConnectionContextProto)
    MergeFrom(*source);
  }
}

void IpcConnectionContextProto::MergeFrom(const IpcConnectionContextProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Hdfs.Internal.IpcConnectionContextProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      protocol_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.protocol_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_userinfo()->::Hdfs::Internal::UserInformationProto::MergeFrom(from._internal_userinfo());
    }
  }
}

void IpcConnectionContextProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Hdfs.Internal.IpcConnectionContextProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IpcConnectionContextProto::CopyFrom(const IpcConnectionContextProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Hdfs.Internal.IpcConnectionContextProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IpcConnectionContextProto::IsInitialized() const {
  return true;
}

void IpcConnectionContextProto::InternalSwap(IpcConnectionContextProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  protocol_.Swap(&other->protocol_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(userinfo_, other->userinfo_);
}

::PROTOBUF_NAMESPACE_ID::Metadata IpcConnectionContextProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Internal
}  // namespace Hdfs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Hdfs::Internal::UserInformationProto* Arena::CreateMaybeMessage< ::Hdfs::Internal::UserInformationProto >(Arena* arena) {
  return Arena::CreateInternal< ::Hdfs::Internal::UserInformationProto >(arena);
}
template<> PROTOBUF_NOINLINE ::Hdfs::Internal::IpcConnectionContextProto* Arena::CreateMaybeMessage< ::Hdfs::Internal::IpcConnectionContextProto >(Arena* arena) {
  return Arena::CreateInternal< ::Hdfs::Internal::IpcConnectionContextProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
