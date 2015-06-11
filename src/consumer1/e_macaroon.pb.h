// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: e_macaroon.proto

#ifndef PROTOBUF_e_5fmacaroon_2eproto__INCLUDED
#define PROTOBUF_e_5fmacaroon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace macaroons {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_e_5fmacaroon_2eproto();
void protobuf_AssignDesc_e_5fmacaroon_2eproto();
void protobuf_ShutdownFile_e_5fmacaroon_2eproto();

class e_macaroon;
class e_macaroon_Endorsement;

// ===================================================================

class e_macaroon_Endorsement : public ::google::protobuf::Message {
 public:
  e_macaroon_Endorsement();
  virtual ~e_macaroon_Endorsement();

  e_macaroon_Endorsement(const e_macaroon_Endorsement& from);

  inline e_macaroon_Endorsement& operator=(const e_macaroon_Endorsement& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const e_macaroon_Endorsement& default_instance();

  void Swap(e_macaroon_Endorsement* other);

  // implements Message ----------------------------------------------

  e_macaroon_Endorsement* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const e_macaroon_Endorsement& from);
  void MergeFrom(const e_macaroon_Endorsement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string kind = 1;
  inline bool has_kind() const;
  inline void clear_kind();
  static const int kKindFieldNumber = 1;
  inline const ::std::string& kind() const;
  inline void set_kind(const ::std::string& value);
  inline void set_kind(const char* value);
  inline void set_kind(const char* value, size_t size);
  inline ::std::string* mutable_kind();
  inline ::std::string* release_kind();
  inline void set_allocated_kind(::std::string* kind);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string certname = 3;
  inline bool has_certname() const;
  inline void clear_certname();
  static const int kCertnameFieldNumber = 3;
  inline const ::std::string& certname() const;
  inline void set_certname(const ::std::string& value);
  inline void set_certname(const char* value);
  inline void set_certname(const char* value, size_t size);
  inline ::std::string* mutable_certname();
  inline ::std::string* release_certname();
  inline void set_allocated_certname(::std::string* certname);

  // required string hash = 4;
  inline bool has_hash() const;
  inline void clear_hash();
  static const int kHashFieldNumber = 4;
  inline const ::std::string& hash() const;
  inline void set_hash(const ::std::string& value);
  inline void set_hash(const char* value);
  inline void set_hash(const char* value, size_t size);
  inline ::std::string* mutable_hash();
  inline ::std::string* release_hash();
  inline void set_allocated_hash(::std::string* hash);

  // @@protoc_insertion_point(class_scope:macaroons.e_macaroon.Endorsement)
 private:
  inline void set_has_kind();
  inline void clear_has_kind();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_certname();
  inline void clear_has_certname();
  inline void set_has_hash();
  inline void clear_has_hash();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* kind_;
  ::std::string* name_;
  ::std::string* certname_;
  ::std::string* hash_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_e_5fmacaroon_2eproto();
  friend void protobuf_AssignDesc_e_5fmacaroon_2eproto();
  friend void protobuf_ShutdownFile_e_5fmacaroon_2eproto();

  void InitAsDefaultInstance();
  static e_macaroon_Endorsement* default_instance_;
};
// -------------------------------------------------------------------

class e_macaroon : public ::google::protobuf::Message {
 public:
  e_macaroon();
  virtual ~e_macaroon();

  e_macaroon(const e_macaroon& from);

  inline e_macaroon& operator=(const e_macaroon& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const e_macaroon& default_instance();

  void Swap(e_macaroon* other);

  // implements Message ----------------------------------------------

  e_macaroon* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const e_macaroon& from);
  void MergeFrom(const e_macaroon& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef e_macaroon_Endorsement Endorsement;

  // accessors -------------------------------------------------------

  // required string macaroon = 1;
  inline bool has_macaroon() const;
  inline void clear_macaroon();
  static const int kMacaroonFieldNumber = 1;
  inline const ::std::string& macaroon() const;
  inline void set_macaroon(const ::std::string& value);
  inline void set_macaroon(const char* value);
  inline void set_macaroon(const char* value, size_t size);
  inline ::std::string* mutable_macaroon();
  inline ::std::string* release_macaroon();
  inline void set_allocated_macaroon(::std::string* macaroon);

  // repeated .macaroons.e_macaroon.Endorsement endorsements = 2;
  inline int endorsements_size() const;
  inline void clear_endorsements();
  static const int kEndorsementsFieldNumber = 2;
  inline const ::macaroons::e_macaroon_Endorsement& endorsements(int index) const;
  inline ::macaroons::e_macaroon_Endorsement* mutable_endorsements(int index);
  inline ::macaroons::e_macaroon_Endorsement* add_endorsements();
  inline const ::google::protobuf::RepeatedPtrField< ::macaroons::e_macaroon_Endorsement >&
      endorsements() const;
  inline ::google::protobuf::RepeatedPtrField< ::macaroons::e_macaroon_Endorsement >*
      mutable_endorsements();

  // @@protoc_insertion_point(class_scope:macaroons.e_macaroon)
 private:
  inline void set_has_macaroon();
  inline void clear_has_macaroon();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* macaroon_;
  ::google::protobuf::RepeatedPtrField< ::macaroons::e_macaroon_Endorsement > endorsements_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_e_5fmacaroon_2eproto();
  friend void protobuf_AssignDesc_e_5fmacaroon_2eproto();
  friend void protobuf_ShutdownFile_e_5fmacaroon_2eproto();

  void InitAsDefaultInstance();
  static e_macaroon* default_instance_;
};
// ===================================================================


// ===================================================================

// e_macaroon_Endorsement

// required string kind = 1;
inline bool e_macaroon_Endorsement::has_kind() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void e_macaroon_Endorsement::set_has_kind() {
  _has_bits_[0] |= 0x00000001u;
}
inline void e_macaroon_Endorsement::clear_has_kind() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void e_macaroon_Endorsement::clear_kind() {
  if (kind_ != &::google::protobuf::internal::kEmptyString) {
    kind_->clear();
  }
  clear_has_kind();
}
inline const ::std::string& e_macaroon_Endorsement::kind() const {
  return *kind_;
}
inline void e_macaroon_Endorsement::set_kind(const ::std::string& value) {
  set_has_kind();
  if (kind_ == &::google::protobuf::internal::kEmptyString) {
    kind_ = new ::std::string;
  }
  kind_->assign(value);
}
inline void e_macaroon_Endorsement::set_kind(const char* value) {
  set_has_kind();
  if (kind_ == &::google::protobuf::internal::kEmptyString) {
    kind_ = new ::std::string;
  }
  kind_->assign(value);
}
inline void e_macaroon_Endorsement::set_kind(const char* value, size_t size) {
  set_has_kind();
  if (kind_ == &::google::protobuf::internal::kEmptyString) {
    kind_ = new ::std::string;
  }
  kind_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* e_macaroon_Endorsement::mutable_kind() {
  set_has_kind();
  if (kind_ == &::google::protobuf::internal::kEmptyString) {
    kind_ = new ::std::string;
  }
  return kind_;
}
inline ::std::string* e_macaroon_Endorsement::release_kind() {
  clear_has_kind();
  if (kind_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = kind_;
    kind_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void e_macaroon_Endorsement::set_allocated_kind(::std::string* kind) {
  if (kind_ != &::google::protobuf::internal::kEmptyString) {
    delete kind_;
  }
  if (kind) {
    set_has_kind();
    kind_ = kind;
  } else {
    clear_has_kind();
    kind_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string name = 2;
inline bool e_macaroon_Endorsement::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void e_macaroon_Endorsement::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void e_macaroon_Endorsement::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void e_macaroon_Endorsement::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& e_macaroon_Endorsement::name() const {
  return *name_;
}
inline void e_macaroon_Endorsement::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void e_macaroon_Endorsement::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void e_macaroon_Endorsement::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* e_macaroon_Endorsement::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* e_macaroon_Endorsement::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void e_macaroon_Endorsement::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string certname = 3;
inline bool e_macaroon_Endorsement::has_certname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void e_macaroon_Endorsement::set_has_certname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void e_macaroon_Endorsement::clear_has_certname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void e_macaroon_Endorsement::clear_certname() {
  if (certname_ != &::google::protobuf::internal::kEmptyString) {
    certname_->clear();
  }
  clear_has_certname();
}
inline const ::std::string& e_macaroon_Endorsement::certname() const {
  return *certname_;
}
inline void e_macaroon_Endorsement::set_certname(const ::std::string& value) {
  set_has_certname();
  if (certname_ == &::google::protobuf::internal::kEmptyString) {
    certname_ = new ::std::string;
  }
  certname_->assign(value);
}
inline void e_macaroon_Endorsement::set_certname(const char* value) {
  set_has_certname();
  if (certname_ == &::google::protobuf::internal::kEmptyString) {
    certname_ = new ::std::string;
  }
  certname_->assign(value);
}
inline void e_macaroon_Endorsement::set_certname(const char* value, size_t size) {
  set_has_certname();
  if (certname_ == &::google::protobuf::internal::kEmptyString) {
    certname_ = new ::std::string;
  }
  certname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* e_macaroon_Endorsement::mutable_certname() {
  set_has_certname();
  if (certname_ == &::google::protobuf::internal::kEmptyString) {
    certname_ = new ::std::string;
  }
  return certname_;
}
inline ::std::string* e_macaroon_Endorsement::release_certname() {
  clear_has_certname();
  if (certname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = certname_;
    certname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void e_macaroon_Endorsement::set_allocated_certname(::std::string* certname) {
  if (certname_ != &::google::protobuf::internal::kEmptyString) {
    delete certname_;
  }
  if (certname) {
    set_has_certname();
    certname_ = certname;
  } else {
    clear_has_certname();
    certname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string hash = 4;
inline bool e_macaroon_Endorsement::has_hash() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void e_macaroon_Endorsement::set_has_hash() {
  _has_bits_[0] |= 0x00000008u;
}
inline void e_macaroon_Endorsement::clear_has_hash() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void e_macaroon_Endorsement::clear_hash() {
  if (hash_ != &::google::protobuf::internal::kEmptyString) {
    hash_->clear();
  }
  clear_has_hash();
}
inline const ::std::string& e_macaroon_Endorsement::hash() const {
  return *hash_;
}
inline void e_macaroon_Endorsement::set_hash(const ::std::string& value) {
  set_has_hash();
  if (hash_ == &::google::protobuf::internal::kEmptyString) {
    hash_ = new ::std::string;
  }
  hash_->assign(value);
}
inline void e_macaroon_Endorsement::set_hash(const char* value) {
  set_has_hash();
  if (hash_ == &::google::protobuf::internal::kEmptyString) {
    hash_ = new ::std::string;
  }
  hash_->assign(value);
}
inline void e_macaroon_Endorsement::set_hash(const char* value, size_t size) {
  set_has_hash();
  if (hash_ == &::google::protobuf::internal::kEmptyString) {
    hash_ = new ::std::string;
  }
  hash_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* e_macaroon_Endorsement::mutable_hash() {
  set_has_hash();
  if (hash_ == &::google::protobuf::internal::kEmptyString) {
    hash_ = new ::std::string;
  }
  return hash_;
}
inline ::std::string* e_macaroon_Endorsement::release_hash() {
  clear_has_hash();
  if (hash_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hash_;
    hash_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void e_macaroon_Endorsement::set_allocated_hash(::std::string* hash) {
  if (hash_ != &::google::protobuf::internal::kEmptyString) {
    delete hash_;
  }
  if (hash) {
    set_has_hash();
    hash_ = hash;
  } else {
    clear_has_hash();
    hash_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// e_macaroon

// required string macaroon = 1;
inline bool e_macaroon::has_macaroon() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void e_macaroon::set_has_macaroon() {
  _has_bits_[0] |= 0x00000001u;
}
inline void e_macaroon::clear_has_macaroon() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void e_macaroon::clear_macaroon() {
  if (macaroon_ != &::google::protobuf::internal::kEmptyString) {
    macaroon_->clear();
  }
  clear_has_macaroon();
}
inline const ::std::string& e_macaroon::macaroon() const {
  return *macaroon_;
}
inline void e_macaroon::set_macaroon(const ::std::string& value) {
  set_has_macaroon();
  if (macaroon_ == &::google::protobuf::internal::kEmptyString) {
    macaroon_ = new ::std::string;
  }
  macaroon_->assign(value);
}
inline void e_macaroon::set_macaroon(const char* value) {
  set_has_macaroon();
  if (macaroon_ == &::google::protobuf::internal::kEmptyString) {
    macaroon_ = new ::std::string;
  }
  macaroon_->assign(value);
}
inline void e_macaroon::set_macaroon(const char* value, size_t size) {
  set_has_macaroon();
  if (macaroon_ == &::google::protobuf::internal::kEmptyString) {
    macaroon_ = new ::std::string;
  }
  macaroon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* e_macaroon::mutable_macaroon() {
  set_has_macaroon();
  if (macaroon_ == &::google::protobuf::internal::kEmptyString) {
    macaroon_ = new ::std::string;
  }
  return macaroon_;
}
inline ::std::string* e_macaroon::release_macaroon() {
  clear_has_macaroon();
  if (macaroon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = macaroon_;
    macaroon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void e_macaroon::set_allocated_macaroon(::std::string* macaroon) {
  if (macaroon_ != &::google::protobuf::internal::kEmptyString) {
    delete macaroon_;
  }
  if (macaroon) {
    set_has_macaroon();
    macaroon_ = macaroon;
  } else {
    clear_has_macaroon();
    macaroon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .macaroons.e_macaroon.Endorsement endorsements = 2;
inline int e_macaroon::endorsements_size() const {
  return endorsements_.size();
}
inline void e_macaroon::clear_endorsements() {
  endorsements_.Clear();
}
inline const ::macaroons::e_macaroon_Endorsement& e_macaroon::endorsements(int index) const {
  return endorsements_.Get(index);
}
inline ::macaroons::e_macaroon_Endorsement* e_macaroon::mutable_endorsements(int index) {
  return endorsements_.Mutable(index);
}
inline ::macaroons::e_macaroon_Endorsement* e_macaroon::add_endorsements() {
  return endorsements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::macaroons::e_macaroon_Endorsement >&
e_macaroon::endorsements() const {
  return endorsements_;
}
inline ::google::protobuf::RepeatedPtrField< ::macaroons::e_macaroon_Endorsement >*
e_macaroon::mutable_endorsements() {
  return &endorsements_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace macaroons

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_e_5fmacaroon_2eproto__INCLUDED
