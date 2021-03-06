// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ssigmaapi/markethub/v1/markethub.proto
#ifndef GRPC_ssigmaapi_2fmarkethub_2fv1_2fmarkethub_2eproto__INCLUDED
#define GRPC_ssigmaapi_2fmarkethub_2fv1_2fmarkethub_2eproto__INCLUDED

#include "ssigmaapi/markethub/v1/markethub.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace ssigmaapi {
namespace markethub {
namespace v1 {

class MarketHubServiceV1 final {
 public:
  static constexpr char const* service_full_name() {
    return "ssigmaapi.markethub.v1.MarketHubServiceV1";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>> GetTrades(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>>(GetTradesRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>> AsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>>(AsyncGetTradesRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>> PrepareAsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>>(PrepareAsyncGetTradesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>> GetOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>>(GetOrderBooksRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>> AsyncGetOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>>(AsyncGetOrderBooksRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>> PrepareAsyncGetOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>>(PrepareAsyncGetOrderBooksRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>> GetTradesAndOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>>(GetTradesAndOrderBooksRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>> AsyncGetTradesAndOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>>(AsyncGetTradesAndOrderBooksRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>> PrepareAsyncGetTradesAndOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>>(PrepareAsyncGetTradesAndOrderBooksRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetTrades(::grpc::ClientContext* context, ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::experimental::ClientReadReactor< ::ssigmaapi::markethub::v1::GetTradesResponse>* reactor) = 0;
      virtual void GetOrderBooks(::grpc::ClientContext* context, ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::experimental::ClientReadReactor< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* reactor) = 0;
      virtual void GetTradesAndOrderBooks(::grpc::ClientContext* context, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::experimental::ClientReadReactor< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>* GetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>* AsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesResponse>* PrepareAsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* GetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* AsyncGetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* PrepareAsyncGetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* GetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* AsyncGetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* PrepareAsyncGetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesResponse>> GetTrades(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesResponse>>(GetTradesRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>> AsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>>(AsyncGetTradesRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>> PrepareAsyncGetTrades(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>>(PrepareAsyncGetTradesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>> GetOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>>(GetOrderBooksRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>> AsyncGetOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>>(AsyncGetOrderBooksRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>> PrepareAsyncGetOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>>(PrepareAsyncGetOrderBooksRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>> GetTradesAndOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>>(GetTradesAndOrderBooksRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>> AsyncGetTradesAndOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>>(AsyncGetTradesAndOrderBooksRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>> PrepareAsyncGetTradesAndOrderBooks(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>>(PrepareAsyncGetTradesAndOrderBooksRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetTrades(::grpc::ClientContext* context, ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::experimental::ClientReadReactor< ::ssigmaapi::markethub::v1::GetTradesResponse>* reactor) override;
      void GetOrderBooks(::grpc::ClientContext* context, ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::experimental::ClientReadReactor< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* reactor) override;
      void GetTradesAndOrderBooks(::grpc::ClientContext* context, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::experimental::ClientReadReactor< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesResponse>* GetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>* AsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>* PrepareAsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* GetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* AsyncGetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* PrepareAsyncGetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* GetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* AsyncGetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* PrepareAsyncGetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetTrades_;
    const ::grpc::internal::RpcMethod rpcmethod_GetOrderBooks_;
    const ::grpc::internal::RpcMethod rpcmethod_GetTradesAndOrderBooks_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer);
    virtual ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer);
    virtual ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetTrades() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTrades(::grpc::ServerContext* context, ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerAsyncWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetOrderBooks() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetOrderBooks(::grpc::ServerContext* context, ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerAsyncWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTradesAndOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetTradesAndOrderBooks() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetTradesAndOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTradesAndOrderBooks(::grpc::ServerContext* context, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerAsyncWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetTrades<WithAsyncMethod_GetOrderBooks<WithAsyncMethod_GetTradesAndOrderBooks<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetTrades() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackServerStreamingHandler< ::ssigmaapi::markethub::v1::GetTradesRequest, ::ssigmaapi::markethub::v1::GetTradesResponse>(
          [this] { return this->GetTrades(); }));
    }
    ~ExperimentalWithCallbackMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::ssigmaapi::markethub::v1::GetTradesRequest, ::ssigmaapi::markethub::v1::GetTradesResponse>* GetTrades() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::ssigmaapi::markethub::v1::GetTradesRequest, ::ssigmaapi::markethub::v1::GetTradesResponse>;}
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetOrderBooks() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackServerStreamingHandler< ::ssigmaapi::markethub::v1::GetOrderBooksRequest, ::ssigmaapi::markethub::v1::GetOrderBooksResponse>(
          [this] { return this->GetOrderBooks(); }));
    }
    ~ExperimentalWithCallbackMethod_GetOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::ssigmaapi::markethub::v1::GetOrderBooksRequest, ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* GetOrderBooks() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::ssigmaapi::markethub::v1::GetOrderBooksRequest, ::ssigmaapi::markethub::v1::GetOrderBooksResponse>;}
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetTradesAndOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetTradesAndOrderBooks() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc::internal::CallbackServerStreamingHandler< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>(
          [this] { return this->GetTradesAndOrderBooks(); }));
    }
    ~ExperimentalWithCallbackMethod_GetTradesAndOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* GetTradesAndOrderBooks() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>;}
  };
  typedef ExperimentalWithCallbackMethod_GetTrades<ExperimentalWithCallbackMethod_GetOrderBooks<ExperimentalWithCallbackMethod_GetTradesAndOrderBooks<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetTrades() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetOrderBooks() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetTradesAndOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetTradesAndOrderBooks() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetTradesAndOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetTrades() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTrades(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetOrderBooks() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetOrderBooks(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetTradesAndOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetTradesAndOrderBooks() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_GetTradesAndOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTradesAndOrderBooks(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetTrades() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->GetTrades(); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* GetTrades() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetOrderBooks() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->GetOrderBooks(); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* GetOrderBooks() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetTradesAndOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetTradesAndOrderBooks() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->GetTradesAndOrderBooks(); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetTradesAndOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* GetTradesAndOrderBooks() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetTrades : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetTrades() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::ssigmaapi::markethub::v1::GetTradesRequest, ::ssigmaapi::markethub::v1::GetTradesResponse>(std::bind(&WithSplitStreamingMethod_GetTrades<BaseClass>::StreamedGetTrades, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetTrades() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetTrades(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::ssigmaapi::markethub::v1::GetTradesRequest,::ssigmaapi::markethub::v1::GetTradesResponse>* server_split_streamer) = 0;
  };
  template <class BaseClass>
  class WithSplitStreamingMethod_GetOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetOrderBooks() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler< ::ssigmaapi::markethub::v1::GetOrderBooksRequest, ::ssigmaapi::markethub::v1::GetOrderBooksResponse>(std::bind(&WithSplitStreamingMethod_GetOrderBooks<BaseClass>::StreamedGetOrderBooks, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetOrderBooks(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::ssigmaapi::markethub::v1::GetOrderBooksRequest,::ssigmaapi::markethub::v1::GetOrderBooksResponse>* server_split_streamer) = 0;
  };
  template <class BaseClass>
  class WithSplitStreamingMethod_GetTradesAndOrderBooks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetTradesAndOrderBooks() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::SplitServerStreamingHandler< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>(std::bind(&WithSplitStreamingMethod_GetTradesAndOrderBooks<BaseClass>::StreamedGetTradesAndOrderBooks, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetTradesAndOrderBooks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetTradesAndOrderBooks(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest,::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetTrades<WithSplitStreamingMethod_GetOrderBooks<WithSplitStreamingMethod_GetTradesAndOrderBooks<Service > > > SplitStreamedService;
  typedef WithSplitStreamingMethod_GetTrades<WithSplitStreamingMethod_GetOrderBooks<WithSplitStreamingMethod_GetTradesAndOrderBooks<Service > > > StreamedService;
};

}  // namespace v1
}  // namespace markethub
}  // namespace ssigmaapi


#endif  // GRPC_ssigmaapi_2fmarkethub_2fv1_2fmarkethub_2eproto__INCLUDED
