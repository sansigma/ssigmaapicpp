// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssigmaapi/type/trade.proto

#ifndef PROTOBUF_INCLUDED_ssigmaapi_2ftype_2ftrade_2eproto
#define PROTOBUF_INCLUDED_ssigmaapi_2ftype_2ftrade_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ssigmaapi_2ftype_2ftrade_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_ssigmaapi_2ftype_2ftrade_2eproto {
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
void AddDescriptors_ssigmaapi_2ftype_2ftrade_2eproto();
namespace ssigmaapi {
namespace type {
class Trade;
class TradeDefaultTypeInternal;
extern TradeDefaultTypeInternal _Trade_default_instance_;
class Trades;
class TradesDefaultTypeInternal;
extern TradesDefaultTypeInternal _Trades_default_instance_;
}  // namespace type
}  // namespace ssigmaapi
namespace google {
namespace protobuf {
template<> ::ssigmaapi::type::Trade* Arena::CreateMaybeMessage<::ssigmaapi::type::Trade>(Arena*);
template<> ::ssigmaapi::type::Trades* Arena::CreateMaybeMessage<::ssigmaapi::type::Trades>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssigmaapi {
namespace type {

// ===================================================================

class Trades final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssigmaapi.type.Trades) */ {
 public:
  Trades();
  virtual ~Trades();

  Trades(const Trades& from);

  inline Trades& operator=(const Trades& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Trades(Trades&& from) noexcept
    : Trades() {
    *this = ::std::move(from);
  }

  inline Trades& operator=(Trades&& from) noexcept {
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
  static const Trades& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Trades* internal_default_instance() {
    return reinterpret_cast<const Trades*>(
               &_Trades_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Trades* other);
  friend void swap(Trades& a, Trades& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Trades* New() const final {
    return CreateMaybeMessage<Trades>(nullptr);
  }

  Trades* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Trades>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Trades& from);
  void MergeFrom(const Trades& from);
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
  void InternalSwap(Trades* other);
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

  // repeated .ssigmaapi.type.Trade trades = 1;
  int trades_size() const;
  void clear_trades();
  static const int kTradesFieldNumber = 1;
  ::ssigmaapi::type::Trade* mutable_trades(int index);
  ::google::protobuf::RepeatedPtrField< ::ssigmaapi::type::Trade >*
      mutable_trades();
  const ::ssigmaapi::type::Trade& trades(int index) const;
  ::ssigmaapi::type::Trade* add_trades();
  const ::google::protobuf::RepeatedPtrField< ::ssigmaapi::type::Trade >&
      trades() const;

  // @@protoc_insertion_point(class_scope:ssigmaapi.type.Trades)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ssigmaapi::type::Trade > trades_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ssigmaapi_2ftype_2ftrade_2eproto;
};
// -------------------------------------------------------------------

class Trade final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssigmaapi.type.Trade) */ {
 public:
  Trade();
  virtual ~Trade();

  Trade(const Trade& from);

  inline Trade& operator=(const Trade& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Trade(Trade&& from) noexcept
    : Trade() {
    *this = ::std::move(from);
  }

  inline Trade& operator=(Trade&& from) noexcept {
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
  static const Trade& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Trade* internal_default_instance() {
    return reinterpret_cast<const Trade*>(
               &_Trade_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Trade* other);
  friend void swap(Trade& a, Trade& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Trade* New() const final {
    return CreateMaybeMessage<Trade>(nullptr);
  }

  Trade* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Trade>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Trade& from);
  void MergeFrom(const Trade& from);
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
  void InternalSwap(Trade* other);
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

  // string symbol = 1;
  void clear_symbol();
  static const int kSymbolFieldNumber = 1;
  const ::std::string& symbol() const;
  void set_symbol(const ::std::string& value);
  #if LANG_CXX11
  void set_symbol(::std::string&& value);
  #endif
  void set_symbol(const char* value);
  void set_symbol(const char* value, size_t size);
  ::std::string* mutable_symbol();
  ::std::string* release_symbol();
  void set_allocated_symbol(::std::string* symbol);

  // string trade_id = 2;
  void clear_trade_id();
  static const int kTradeIdFieldNumber = 2;
  const ::std::string& trade_id() const;
  void set_trade_id(const ::std::string& value);
  #if LANG_CXX11
  void set_trade_id(::std::string&& value);
  #endif
  void set_trade_id(const char* value);
  void set_trade_id(const char* value, size_t size);
  ::std::string* mutable_trade_id();
  ::std::string* release_trade_id();
  void set_allocated_trade_id(::std::string* trade_id);

  // string exchange = 3;
  void clear_exchange();
  static const int kExchangeFieldNumber = 3;
  const ::std::string& exchange() const;
  void set_exchange(const ::std::string& value);
  #if LANG_CXX11
  void set_exchange(::std::string&& value);
  #endif
  void set_exchange(const char* value);
  void set_exchange(const char* value, size_t size);
  ::std::string* mutable_exchange();
  ::std::string* release_exchange();
  void set_allocated_exchange(::std::string* exchange);

  // string base = 4;
  void clear_base();
  static const int kBaseFieldNumber = 4;
  const ::std::string& base() const;
  void set_base(const ::std::string& value);
  #if LANG_CXX11
  void set_base(::std::string&& value);
  #endif
  void set_base(const char* value);
  void set_base(const char* value, size_t size);
  ::std::string* mutable_base();
  ::std::string* release_base();
  void set_allocated_base(::std::string* base);

  // string quote = 5;
  void clear_quote();
  static const int kQuoteFieldNumber = 5;
  const ::std::string& quote() const;
  void set_quote(const ::std::string& value);
  #if LANG_CXX11
  void set_quote(::std::string&& value);
  #endif
  void set_quote(const char* value);
  void set_quote(const char* value, size_t size);
  ::std::string* mutable_quote();
  ::std::string* release_quote();
  void set_allocated_quote(::std::string* quote);

  // string side = 9;
  void clear_side();
  static const int kSideFieldNumber = 9;
  const ::std::string& side() const;
  void set_side(const ::std::string& value);
  #if LANG_CXX11
  void set_side(::std::string&& value);
  #endif
  void set_side(const char* value);
  void set_side(const char* value, size_t size);
  ::std::string* mutable_side();
  ::std::string* release_side();
  void set_allocated_side(::std::string* side);

  // double price = 6;
  void clear_price();
  static const int kPriceFieldNumber = 6;
  double price() const;
  void set_price(double value);

  // double amount = 7;
  void clear_amount();
  static const int kAmountFieldNumber = 7;
  double amount() const;
  void set_amount(double value);

  // int64 timestamp = 8;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 8;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:ssigmaapi.type.Trade)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr symbol_;
  ::google::protobuf::internal::ArenaStringPtr trade_id_;
  ::google::protobuf::internal::ArenaStringPtr exchange_;
  ::google::protobuf::internal::ArenaStringPtr base_;
  ::google::protobuf::internal::ArenaStringPtr quote_;
  ::google::protobuf::internal::ArenaStringPtr side_;
  double price_;
  double amount_;
  ::google::protobuf::int64 timestamp_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ssigmaapi_2ftype_2ftrade_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Trades

// repeated .ssigmaapi.type.Trade trades = 1;
inline int Trades::trades_size() const {
  return trades_.size();
}
inline void Trades::clear_trades() {
  trades_.Clear();
}
inline ::ssigmaapi::type::Trade* Trades::mutable_trades(int index) {
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trades.trades)
  return trades_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ssigmaapi::type::Trade >*
Trades::mutable_trades() {
  // @@protoc_insertion_point(field_mutable_list:ssigmaapi.type.Trades.trades)
  return &trades_;
}
inline const ::ssigmaapi::type::Trade& Trades::trades(int index) const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trades.trades)
  return trades_.Get(index);
}
inline ::ssigmaapi::type::Trade* Trades::add_trades() {
  // @@protoc_insertion_point(field_add:ssigmaapi.type.Trades.trades)
  return trades_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ssigmaapi::type::Trade >&
Trades::trades() const {
  // @@protoc_insertion_point(field_list:ssigmaapi.type.Trades.trades)
  return trades_;
}

// -------------------------------------------------------------------

// Trade

// string symbol = 1;
inline void Trade::clear_symbol() {
  symbol_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Trade::symbol() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.symbol)
  return symbol_.GetNoArena();
}
inline void Trade::set_symbol(const ::std::string& value) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.symbol)
}
#if LANG_CXX11
inline void Trade::set_symbol(::std::string&& value) {
  
  symbol_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Trade.symbol)
}
#endif
inline void Trade::set_symbol(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Trade.symbol)
}
inline void Trade::set_symbol(const char* value, size_t size) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Trade.symbol)
}
inline ::std::string* Trade::mutable_symbol() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trade.symbol)
  return symbol_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Trade::release_symbol() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Trade.symbol)
  
  return symbol_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Trade::set_allocated_symbol(::std::string* symbol) {
  if (symbol != nullptr) {
    
  } else {
    
  }
  symbol_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), symbol);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Trade.symbol)
}

// string trade_id = 2;
inline void Trade::clear_trade_id() {
  trade_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Trade::trade_id() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.trade_id)
  return trade_id_.GetNoArena();
}
inline void Trade::set_trade_id(const ::std::string& value) {
  
  trade_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.trade_id)
}
#if LANG_CXX11
inline void Trade::set_trade_id(::std::string&& value) {
  
  trade_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Trade.trade_id)
}
#endif
inline void Trade::set_trade_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  trade_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Trade.trade_id)
}
inline void Trade::set_trade_id(const char* value, size_t size) {
  
  trade_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Trade.trade_id)
}
inline ::std::string* Trade::mutable_trade_id() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trade.trade_id)
  return trade_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Trade::release_trade_id() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Trade.trade_id)
  
  return trade_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Trade::set_allocated_trade_id(::std::string* trade_id) {
  if (trade_id != nullptr) {
    
  } else {
    
  }
  trade_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), trade_id);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Trade.trade_id)
}

// string exchange = 3;
inline void Trade::clear_exchange() {
  exchange_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Trade::exchange() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.exchange)
  return exchange_.GetNoArena();
}
inline void Trade::set_exchange(const ::std::string& value) {
  
  exchange_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.exchange)
}
#if LANG_CXX11
inline void Trade::set_exchange(::std::string&& value) {
  
  exchange_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Trade.exchange)
}
#endif
inline void Trade::set_exchange(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  exchange_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Trade.exchange)
}
inline void Trade::set_exchange(const char* value, size_t size) {
  
  exchange_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Trade.exchange)
}
inline ::std::string* Trade::mutable_exchange() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trade.exchange)
  return exchange_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Trade::release_exchange() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Trade.exchange)
  
  return exchange_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Trade::set_allocated_exchange(::std::string* exchange) {
  if (exchange != nullptr) {
    
  } else {
    
  }
  exchange_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), exchange);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Trade.exchange)
}

// string base = 4;
inline void Trade::clear_base() {
  base_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Trade::base() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.base)
  return base_.GetNoArena();
}
inline void Trade::set_base(const ::std::string& value) {
  
  base_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.base)
}
#if LANG_CXX11
inline void Trade::set_base(::std::string&& value) {
  
  base_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Trade.base)
}
#endif
inline void Trade::set_base(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  base_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Trade.base)
}
inline void Trade::set_base(const char* value, size_t size) {
  
  base_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Trade.base)
}
inline ::std::string* Trade::mutable_base() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trade.base)
  return base_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Trade::release_base() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Trade.base)
  
  return base_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Trade::set_allocated_base(::std::string* base) {
  if (base != nullptr) {
    
  } else {
    
  }
  base_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), base);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Trade.base)
}

// string quote = 5;
inline void Trade::clear_quote() {
  quote_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Trade::quote() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.quote)
  return quote_.GetNoArena();
}
inline void Trade::set_quote(const ::std::string& value) {
  
  quote_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.quote)
}
#if LANG_CXX11
inline void Trade::set_quote(::std::string&& value) {
  
  quote_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Trade.quote)
}
#endif
inline void Trade::set_quote(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  quote_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Trade.quote)
}
inline void Trade::set_quote(const char* value, size_t size) {
  
  quote_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Trade.quote)
}
inline ::std::string* Trade::mutable_quote() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trade.quote)
  return quote_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Trade::release_quote() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Trade.quote)
  
  return quote_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Trade::set_allocated_quote(::std::string* quote) {
  if (quote != nullptr) {
    
  } else {
    
  }
  quote_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), quote);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Trade.quote)
}

// double price = 6;
inline void Trade::clear_price() {
  price_ = 0;
}
inline double Trade::price() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.price)
  return price_;
}
inline void Trade::set_price(double value) {
  
  price_ = value;
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.price)
}

// double amount = 7;
inline void Trade::clear_amount() {
  amount_ = 0;
}
inline double Trade::amount() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.amount)
  return amount_;
}
inline void Trade::set_amount(double value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.amount)
}

// int64 timestamp = 8;
inline void Trade::clear_timestamp() {
  timestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 Trade::timestamp() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.timestamp)
  return timestamp_;
}
inline void Trade::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.timestamp)
}

// string side = 9;
inline void Trade::clear_side() {
  side_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Trade::side() const {
  // @@protoc_insertion_point(field_get:ssigmaapi.type.Trade.side)
  return side_.GetNoArena();
}
inline void Trade::set_side(const ::std::string& value) {
  
  side_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssigmaapi.type.Trade.side)
}
#if LANG_CXX11
inline void Trade::set_side(::std::string&& value) {
  
  side_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssigmaapi.type.Trade.side)
}
#endif
inline void Trade::set_side(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  side_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssigmaapi.type.Trade.side)
}
inline void Trade::set_side(const char* value, size_t size) {
  
  side_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssigmaapi.type.Trade.side)
}
inline ::std::string* Trade::mutable_side() {
  
  // @@protoc_insertion_point(field_mutable:ssigmaapi.type.Trade.side)
  return side_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Trade::release_side() {
  // @@protoc_insertion_point(field_release:ssigmaapi.type.Trade.side)
  
  return side_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Trade::set_allocated_side(::std::string* side) {
  if (side != nullptr) {
    
  } else {
    
  }
  side_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), side);
  // @@protoc_insertion_point(field_set_allocated:ssigmaapi.type.Trade.side)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace ssigmaapi

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_ssigmaapi_2ftype_2ftrade_2eproto
