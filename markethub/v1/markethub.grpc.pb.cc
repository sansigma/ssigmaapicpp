// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ssigmaapi/markethub/v1/markethub.proto

#include "ssigmaapi/markethub/v1/markethub.pb.h"
#include "ssigmaapi/markethub/v1/markethub.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ssigmaapi {
namespace markethub {
namespace v1 {

static const char* MarketHubServiceV1_method_names[] = {
  "/ssigmaapi.markethub.v1.MarketHubServiceV1/GetTrades",
  "/ssigmaapi.markethub.v1.MarketHubServiceV1/GetOrderBooks",
  "/ssigmaapi.markethub.v1.MarketHubServiceV1/GetTradesAndOrderBooks",
};

std::unique_ptr< MarketHubServiceV1::Stub> MarketHubServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MarketHubServiceV1::Stub> stub(new MarketHubServiceV1::Stub(channel));
  return stub;
}

MarketHubServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetTrades_(MarketHubServiceV1_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetOrderBooks_(MarketHubServiceV1_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetTradesAndOrderBooks_(MarketHubServiceV1_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesResponse>* MarketHubServiceV1::Stub::GetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::ssigmaapi::markethub::v1::GetTradesResponse>::Create(channel_.get(), rpcmethod_GetTrades_, context, request);
}

::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>* MarketHubServiceV1::Stub::AsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ssigmaapi::markethub::v1::GetTradesResponse>::Create(channel_.get(), cq, rpcmethod_GetTrades_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesResponse>* MarketHubServiceV1::Stub::PrepareAsyncGetTradesRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ssigmaapi::markethub::v1::GetTradesResponse>::Create(channel_.get(), cq, rpcmethod_GetTrades_, context, request, false, nullptr);
}

::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* MarketHubServiceV1::Stub::GetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>::Create(channel_.get(), rpcmethod_GetOrderBooks_, context, request);
}

::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* MarketHubServiceV1::Stub::AsyncGetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>::Create(channel_.get(), cq, rpcmethod_GetOrderBooks_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* MarketHubServiceV1::Stub::PrepareAsyncGetOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>::Create(channel_.get(), cq, rpcmethod_GetOrderBooks_, context, request, false, nullptr);
}

::grpc::ClientReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* MarketHubServiceV1::Stub::GetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>::Create(channel_.get(), rpcmethod_GetTradesAndOrderBooks_, context, request);
}

::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* MarketHubServiceV1::Stub::AsyncGetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>::Create(channel_.get(), cq, rpcmethod_GetTradesAndOrderBooks_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* MarketHubServiceV1::Stub::PrepareAsyncGetTradesAndOrderBooksRaw(::grpc::ClientContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>::Create(channel_.get(), cq, rpcmethod_GetTradesAndOrderBooks_, context, request, false, nullptr);
}

MarketHubServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MarketHubServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MarketHubServiceV1::Service, ::ssigmaapi::markethub::v1::GetTradesRequest, ::ssigmaapi::markethub::v1::GetTradesResponse>(
          std::mem_fn(&MarketHubServiceV1::Service::GetTrades), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MarketHubServiceV1_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MarketHubServiceV1::Service, ::ssigmaapi::markethub::v1::GetOrderBooksRequest, ::ssigmaapi::markethub::v1::GetOrderBooksResponse>(
          std::mem_fn(&MarketHubServiceV1::Service::GetOrderBooks), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MarketHubServiceV1_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MarketHubServiceV1::Service, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest, ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>(
          std::mem_fn(&MarketHubServiceV1::Service::GetTradesAndOrderBooks), this)));
}

MarketHubServiceV1::Service::~Service() {
}

::grpc::Status MarketHubServiceV1::Service::GetTrades(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MarketHubServiceV1::Service::GetOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetOrderBooksResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MarketHubServiceV1::Service::GetTradesAndOrderBooks(::grpc::ServerContext* context, const ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksRequest* request, ::grpc::ServerWriter< ::ssigmaapi::markethub::v1::GetTradesAndOrderBooksResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ssigmaapi
}  // namespace markethub
}  // namespace v1
