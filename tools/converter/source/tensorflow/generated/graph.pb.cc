// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: graph.proto

#include "graph.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace tensorflow {
constexpr GraphDef::GraphDef(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : node_()
  , library_(nullptr)
  , versions_(nullptr)
  , version_(0){}
struct GraphDefDefaultTypeInternal {
  constexpr GraphDefDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GraphDefDefaultTypeInternal() {}
  union {
    GraphDef _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GraphDefDefaultTypeInternal _GraphDef_default_instance_;
}  // namespace tensorflow
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_graph_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_graph_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_graph_2eproto = nullptr;

const uint32_t TableStruct_graph_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::GraphDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::tensorflow::GraphDef, node_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::GraphDef, versions_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::GraphDef, version_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::GraphDef, library_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::tensorflow::GraphDef)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_GraphDef_default_instance_),
};

const char descriptor_table_protodef_graph_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013graph.proto\022\ntensorflow\032\016node_def.prot"
  "o\032\016function.proto\032\016versions.proto\"\235\001\n\010Gr"
  "aphDef\022!\n\004node\030\001 \003(\0132\023.tensorflow.NodeDe"
  "f\022(\n\010versions\030\004 \001(\0132\026.tensorflow.Version"
  "Def\022\023\n\007version\030\003 \001(\005B\002\030\001\022/\n\007library\030\002 \001("
  "\0132\036.tensorflow.FunctionDefLibraryB,\n\030org"
  ".tensorflow.frameworkB\013GraphProtosP\001\370\001\001b"
  "\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_graph_2eproto_deps[3] = {
  &::descriptor_table_function_2eproto,
  &::descriptor_table_node_5fdef_2eproto,
  &::descriptor_table_versions_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_graph_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_graph_2eproto = {
  false, false, 287, descriptor_table_protodef_graph_2eproto, "graph.proto", 
  &descriptor_table_graph_2eproto_once, descriptor_table_graph_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_graph_2eproto::offsets,
  file_level_metadata_graph_2eproto, file_level_enum_descriptors_graph_2eproto, file_level_service_descriptors_graph_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_graph_2eproto_getter() {
  return &descriptor_table_graph_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_graph_2eproto(&descriptor_table_graph_2eproto);
namespace tensorflow {

// ===================================================================

class GraphDef::_Internal {
 public:
  static const ::tensorflow::VersionDef& versions(const GraphDef* msg);
  static const ::tensorflow::FunctionDefLibrary& library(const GraphDef* msg);
};

const ::tensorflow::VersionDef&
GraphDef::_Internal::versions(const GraphDef* msg) {
  return *msg->versions_;
}
const ::tensorflow::FunctionDefLibrary&
GraphDef::_Internal::library(const GraphDef* msg) {
  return *msg->library_;
}
void GraphDef::clear_node() {
  node_.Clear();
}
void GraphDef::clear_versions() {
  if (GetArenaForAllocation() == nullptr && versions_ != nullptr) {
    delete versions_;
  }
  versions_ = nullptr;
}
void GraphDef::clear_library() {
  if (GetArenaForAllocation() == nullptr && library_ != nullptr) {
    delete library_;
  }
  library_ = nullptr;
}
GraphDef::GraphDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  node_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:tensorflow.GraphDef)
}
GraphDef::GraphDef(const GraphDef& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      node_(from.node_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_library()) {
    library_ = new ::tensorflow::FunctionDefLibrary(*from.library_);
  } else {
    library_ = nullptr;
  }
  if (from._internal_has_versions()) {
    versions_ = new ::tensorflow::VersionDef(*from.versions_);
  } else {
    versions_ = nullptr;
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.GraphDef)
}

inline void GraphDef::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&library_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&version_) -
    reinterpret_cast<char*>(&library_)) + sizeof(version_));
}

GraphDef::~GraphDef() {
  // @@protoc_insertion_point(destructor:tensorflow.GraphDef)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GraphDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete library_;
  if (this != internal_default_instance()) delete versions_;
}

void GraphDef::ArenaDtor(void* object) {
  GraphDef* _this = reinterpret_cast< GraphDef* >(object);
  (void)_this;
}
void GraphDef::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GraphDef::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GraphDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.GraphDef)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  node_.Clear();
  if (GetArenaForAllocation() == nullptr && library_ != nullptr) {
    delete library_;
  }
  library_ = nullptr;
  if (GetArenaForAllocation() == nullptr && versions_ != nullptr) {
    delete versions_;
  }
  versions_ = nullptr;
  version_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GraphDef::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .tensorflow.NodeDef node = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_node(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.FunctionDefLibrary library = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_library(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 version = 3 [deprecated = true];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.VersionDef versions = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_versions(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GraphDef::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.GraphDef)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorflow.NodeDef node = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_node_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_node(i), target, stream);
  }

  // .tensorflow.FunctionDefLibrary library = 2;
  if (this->_internal_has_library()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::library(this), target, stream);
  }

  // int32 version = 3 [deprecated = true];
  if (this->_internal_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_version(), target);
  }

  // .tensorflow.VersionDef versions = 4;
  if (this->_internal_has_versions()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::versions(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.GraphDef)
  return target;
}

size_t GraphDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.GraphDef)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.NodeDef node = 1;
  total_size += 1UL * this->_internal_node_size();
  for (const auto& msg : this->node_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .tensorflow.FunctionDefLibrary library = 2;
  if (this->_internal_has_library()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *library_);
  }

  // .tensorflow.VersionDef versions = 4;
  if (this->_internal_has_versions()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *versions_);
  }

  // int32 version = 3 [deprecated = true];
  if (this->_internal_version() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_version());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GraphDef::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GraphDef::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GraphDef::GetClassData() const { return &_class_data_; }

void GraphDef::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<GraphDef *>(to)->MergeFrom(
      static_cast<const GraphDef &>(from));
}


void GraphDef::MergeFrom(const GraphDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.GraphDef)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  node_.MergeFrom(from.node_);
  if (from._internal_has_library()) {
    _internal_mutable_library()->::tensorflow::FunctionDefLibrary::MergeFrom(from._internal_library());
  }
  if (from._internal_has_versions()) {
    _internal_mutable_versions()->::tensorflow::VersionDef::MergeFrom(from._internal_versions());
  }
  if (from._internal_version() != 0) {
    _internal_set_version(from._internal_version());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GraphDef::CopyFrom(const GraphDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.GraphDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraphDef::IsInitialized() const {
  return true;
}

void GraphDef::InternalSwap(GraphDef* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  node_.InternalSwap(&other->node_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GraphDef, version_)
      + sizeof(GraphDef::version_)
      - PROTOBUF_FIELD_OFFSET(GraphDef, library_)>(
          reinterpret_cast<char*>(&library_),
          reinterpret_cast<char*>(&other->library_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GraphDef::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_graph_2eproto_getter, &descriptor_table_graph_2eproto_once,
      file_level_metadata_graph_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::GraphDef* Arena::CreateMaybeMessage< ::tensorflow::GraphDef >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::GraphDef >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>