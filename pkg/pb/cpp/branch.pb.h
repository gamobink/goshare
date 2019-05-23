// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: branch.proto

#ifndef PROTOBUF_INCLUDED_branch_2eproto
#define PROTOBUF_INCLUDED_branch_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_branch_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_branch_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_branch_2eproto();
namespace pb {
class Branch;
class BranchDefaultTypeInternal;
extern BranchDefaultTypeInternal _Branch_default_instance_;
class BranchTreeNode;
class BranchTreeNodeDefaultTypeInternal;
extern BranchTreeNodeDefaultTypeInternal _BranchTreeNode_default_instance_;
}  // namespace pb
namespace google {
namespace protobuf {
template<> ::pb::Branch* Arena::CreateMaybeMessage<::pb::Branch>(Arena*);
template<> ::pb::BranchTreeNode* Arena::CreateMaybeMessage<::pb::BranchTreeNode>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace pb {

enum BranchStatus {
  BS_NORMAL = 0,
  BS_FROZEN = 1,
  BranchStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  BranchStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool BranchStatus_IsValid(int value);
const BranchStatus BranchStatus_MIN = BS_NORMAL;
const BranchStatus BranchStatus_MAX = BS_FROZEN;
const int BranchStatus_ARRAYSIZE = BranchStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* BranchStatus_descriptor();
inline const ::std::string& BranchStatus_Name(BranchStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    BranchStatus_descriptor(), value);
}
inline bool BranchStatus_Parse(
    const ::std::string& name, BranchStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BranchStatus>(
    BranchStatus_descriptor(), name, value);
}
// ===================================================================

class BranchTreeNode :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pb.BranchTreeNode) */ {
 public:
  BranchTreeNode();
  virtual ~BranchTreeNode();

  BranchTreeNode(const BranchTreeNode& from);

  inline BranchTreeNode& operator=(const BranchTreeNode& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BranchTreeNode(BranchTreeNode&& from) noexcept
    : BranchTreeNode() {
    *this = ::std::move(from);
  }

  inline BranchTreeNode& operator=(BranchTreeNode&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const BranchTreeNode& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BranchTreeNode* internal_default_instance() {
    return reinterpret_cast<const BranchTreeNode*>(
               &_BranchTreeNode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BranchTreeNode* other);
  friend void swap(BranchTreeNode& a, BranchTreeNode& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BranchTreeNode* New() const final {
    return CreateMaybeMessage<BranchTreeNode>(nullptr);
  }

  BranchTreeNode* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BranchTreeNode>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BranchTreeNode& from);
  void MergeFrom(const BranchTreeNode& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BranchTreeNode* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .pb.BranchTreeNode children = 2;
  int children_size() const;
  void clear_children();
  static const int kChildrenFieldNumber = 2;
  ::pb::BranchTreeNode* mutable_children(int index);
  ::google::protobuf::RepeatedPtrField< ::pb::BranchTreeNode >*
      mutable_children();
  const ::pb::BranchTreeNode& children(int index) const;
  ::pb::BranchTreeNode* add_children();
  const ::google::protobuf::RepeatedPtrField< ::pb::BranchTreeNode >&
      children() const;

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // @@protoc_insertion_point(class_scope:pb.BranchTreeNode)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::pb::BranchTreeNode > children_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_branch_2eproto;
};
// -------------------------------------------------------------------

class Branch :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pb.Branch) */ {
 public:
  Branch();
  virtual ~Branch();

  Branch(const Branch& from);

  inline Branch& operator=(const Branch& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Branch(Branch&& from) noexcept
    : Branch() {
    *this = ::std::move(from);
  }

  inline Branch& operator=(Branch&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Branch& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Branch* internal_default_instance() {
    return reinterpret_cast<const Branch*>(
               &_Branch_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Branch* other);
  friend void swap(Branch& a, Branch& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Branch* New() const final {
    return CreateMaybeMessage<Branch>(nullptr);
  }

  Branch* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Branch>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Branch& from);
  void MergeFrom(const Branch& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Branch* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string invite_code = 4;
  int invite_code_size() const;
  void clear_invite_code();
  static const int kInviteCodeFieldNumber = 4;
  const ::std::string& invite_code(int index) const;
  ::std::string* mutable_invite_code(int index);
  void set_invite_code(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_invite_code(int index, ::std::string&& value);
  #endif
  void set_invite_code(int index, const char* value);
  void set_invite_code(int index, const char* value, size_t size);
  ::std::string* add_invite_code();
  void add_invite_code(const ::std::string& value);
  #if LANG_CXX11
  void add_invite_code(::std::string&& value);
  #endif
  void add_invite_code(const char* value);
  void add_invite_code(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& invite_code() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_invite_code();

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string comment = 3;
  void clear_comment();
  static const int kCommentFieldNumber = 3;
  const ::std::string& comment() const;
  void set_comment(const ::std::string& value);
  #if LANG_CXX11
  void set_comment(::std::string&& value);
  #endif
  void set_comment(const char* value);
  void set_comment(const char* value, size_t size);
  ::std::string* mutable_comment();
  ::std::string* release_comment();
  void set_allocated_comment(::std::string* comment);

  // string parent = 5;
  void clear_parent();
  static const int kParentFieldNumber = 5;
  const ::std::string& parent() const;
  void set_parent(const ::std::string& value);
  #if LANG_CXX11
  void set_parent(::std::string&& value);
  #endif
  void set_parent(const char* value);
  void set_parent(const char* value, size_t size);
  ::std::string* mutable_parent();
  ::std::string* release_parent();
  void set_allocated_parent(::std::string* parent);

  // int64 create_time = 6;
  void clear_create_time();
  static const int kCreateTimeFieldNumber = 6;
  ::google::protobuf::int64 create_time() const;
  void set_create_time(::google::protobuf::int64 value);

  // .pb.BranchStatus status = 7;
  void clear_status();
  static const int kStatusFieldNumber = 7;
  ::pb::BranchStatus status() const;
  void set_status(::pb::BranchStatus value);

  // @@protoc_insertion_point(class_scope:pb.Branch)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> invite_code_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr comment_;
  ::google::protobuf::internal::ArenaStringPtr parent_;
  ::google::protobuf::int64 create_time_;
  int status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_branch_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BranchTreeNode

// string id = 1;
inline void BranchTreeNode::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BranchTreeNode::id() const {
  // @@protoc_insertion_point(field_get:pb.BranchTreeNode.id)
  return id_.GetNoArena();
}
inline void BranchTreeNode::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.BranchTreeNode.id)
}
#if LANG_CXX11
inline void BranchTreeNode::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.BranchTreeNode.id)
}
#endif
inline void BranchTreeNode::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.BranchTreeNode.id)
}
inline void BranchTreeNode::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.BranchTreeNode.id)
}
inline ::std::string* BranchTreeNode::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:pb.BranchTreeNode.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BranchTreeNode::release_id() {
  // @@protoc_insertion_point(field_release:pb.BranchTreeNode.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BranchTreeNode::set_allocated_id(::std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:pb.BranchTreeNode.id)
}

// repeated .pb.BranchTreeNode children = 2;
inline int BranchTreeNode::children_size() const {
  return children_.size();
}
inline void BranchTreeNode::clear_children() {
  children_.Clear();
}
inline ::pb::BranchTreeNode* BranchTreeNode::mutable_children(int index) {
  // @@protoc_insertion_point(field_mutable:pb.BranchTreeNode.children)
  return children_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::pb::BranchTreeNode >*
BranchTreeNode::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:pb.BranchTreeNode.children)
  return &children_;
}
inline const ::pb::BranchTreeNode& BranchTreeNode::children(int index) const {
  // @@protoc_insertion_point(field_get:pb.BranchTreeNode.children)
  return children_.Get(index);
}
inline ::pb::BranchTreeNode* BranchTreeNode::add_children() {
  // @@protoc_insertion_point(field_add:pb.BranchTreeNode.children)
  return children_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pb::BranchTreeNode >&
BranchTreeNode::children() const {
  // @@protoc_insertion_point(field_list:pb.BranchTreeNode.children)
  return children_;
}

// -------------------------------------------------------------------

// Branch

// string id = 1;
inline void Branch::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Branch::id() const {
  // @@protoc_insertion_point(field_get:pb.Branch.id)
  return id_.GetNoArena();
}
inline void Branch::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.Branch.id)
}
#if LANG_CXX11
inline void Branch::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.Branch.id)
}
#endif
inline void Branch::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.Branch.id)
}
inline void Branch::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.Branch.id)
}
inline ::std::string* Branch::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:pb.Branch.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Branch::release_id() {
  // @@protoc_insertion_point(field_release:pb.Branch.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Branch::set_allocated_id(::std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:pb.Branch.id)
}

// string name = 2;
inline void Branch::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Branch::name() const {
  // @@protoc_insertion_point(field_get:pb.Branch.name)
  return name_.GetNoArena();
}
inline void Branch::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.Branch.name)
}
#if LANG_CXX11
inline void Branch::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.Branch.name)
}
#endif
inline void Branch::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.Branch.name)
}
inline void Branch::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.Branch.name)
}
inline ::std::string* Branch::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:pb.Branch.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Branch::release_name() {
  // @@protoc_insertion_point(field_release:pb.Branch.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Branch::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pb.Branch.name)
}

// string comment = 3;
inline void Branch::clear_comment() {
  comment_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Branch::comment() const {
  // @@protoc_insertion_point(field_get:pb.Branch.comment)
  return comment_.GetNoArena();
}
inline void Branch::set_comment(const ::std::string& value) {
  
  comment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.Branch.comment)
}
#if LANG_CXX11
inline void Branch::set_comment(::std::string&& value) {
  
  comment_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.Branch.comment)
}
#endif
inline void Branch::set_comment(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  comment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.Branch.comment)
}
inline void Branch::set_comment(const char* value, size_t size) {
  
  comment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.Branch.comment)
}
inline ::std::string* Branch::mutable_comment() {
  
  // @@protoc_insertion_point(field_mutable:pb.Branch.comment)
  return comment_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Branch::release_comment() {
  // @@protoc_insertion_point(field_release:pb.Branch.comment)
  
  return comment_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Branch::set_allocated_comment(::std::string* comment) {
  if (comment != nullptr) {
    
  } else {
    
  }
  comment_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), comment);
  // @@protoc_insertion_point(field_set_allocated:pb.Branch.comment)
}

// repeated string invite_code = 4;
inline int Branch::invite_code_size() const {
  return invite_code_.size();
}
inline void Branch::clear_invite_code() {
  invite_code_.Clear();
}
inline const ::std::string& Branch::invite_code(int index) const {
  // @@protoc_insertion_point(field_get:pb.Branch.invite_code)
  return invite_code_.Get(index);
}
inline ::std::string* Branch::mutable_invite_code(int index) {
  // @@protoc_insertion_point(field_mutable:pb.Branch.invite_code)
  return invite_code_.Mutable(index);
}
inline void Branch::set_invite_code(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pb.Branch.invite_code)
  invite_code_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Branch::set_invite_code(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:pb.Branch.invite_code)
  invite_code_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Branch::set_invite_code(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  invite_code_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pb.Branch.invite_code)
}
inline void Branch::set_invite_code(int index, const char* value, size_t size) {
  invite_code_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pb.Branch.invite_code)
}
inline ::std::string* Branch::add_invite_code() {
  // @@protoc_insertion_point(field_add_mutable:pb.Branch.invite_code)
  return invite_code_.Add();
}
inline void Branch::add_invite_code(const ::std::string& value) {
  invite_code_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pb.Branch.invite_code)
}
#if LANG_CXX11
inline void Branch::add_invite_code(::std::string&& value) {
  invite_code_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pb.Branch.invite_code)
}
#endif
inline void Branch::add_invite_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  invite_code_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pb.Branch.invite_code)
}
inline void Branch::add_invite_code(const char* value, size_t size) {
  invite_code_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pb.Branch.invite_code)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
Branch::invite_code() const {
  // @@protoc_insertion_point(field_list:pb.Branch.invite_code)
  return invite_code_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
Branch::mutable_invite_code() {
  // @@protoc_insertion_point(field_mutable_list:pb.Branch.invite_code)
  return &invite_code_;
}

// string parent = 5;
inline void Branch::clear_parent() {
  parent_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Branch::parent() const {
  // @@protoc_insertion_point(field_get:pb.Branch.parent)
  return parent_.GetNoArena();
}
inline void Branch::set_parent(const ::std::string& value) {
  
  parent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.Branch.parent)
}
#if LANG_CXX11
inline void Branch::set_parent(::std::string&& value) {
  
  parent_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.Branch.parent)
}
#endif
inline void Branch::set_parent(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  parent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.Branch.parent)
}
inline void Branch::set_parent(const char* value, size_t size) {
  
  parent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.Branch.parent)
}
inline ::std::string* Branch::mutable_parent() {
  
  // @@protoc_insertion_point(field_mutable:pb.Branch.parent)
  return parent_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Branch::release_parent() {
  // @@protoc_insertion_point(field_release:pb.Branch.parent)
  
  return parent_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Branch::set_allocated_parent(::std::string* parent) {
  if (parent != nullptr) {
    
  } else {
    
  }
  parent_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parent);
  // @@protoc_insertion_point(field_set_allocated:pb.Branch.parent)
}

// int64 create_time = 6;
inline void Branch::clear_create_time() {
  create_time_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 Branch::create_time() const {
  // @@protoc_insertion_point(field_get:pb.Branch.create_time)
  return create_time_;
}
inline void Branch::set_create_time(::google::protobuf::int64 value) {
  
  create_time_ = value;
  // @@protoc_insertion_point(field_set:pb.Branch.create_time)
}

// .pb.BranchStatus status = 7;
inline void Branch::clear_status() {
  status_ = 0;
}
inline ::pb::BranchStatus Branch::status() const {
  // @@protoc_insertion_point(field_get:pb.Branch.status)
  return static_cast< ::pb::BranchStatus >(status_);
}
inline void Branch::set_status(::pb::BranchStatus value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:pb.Branch.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::pb::BranchStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pb::BranchStatus>() {
  return ::pb::BranchStatus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_branch_2eproto