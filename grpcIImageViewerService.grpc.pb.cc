// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIImageViewerService.proto

#include "grpcIImageViewerService.pb.h"
#include "grpcIImageViewerService.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace grpcIImageViewer {

static const char* grpcIImageViewerService_method_names[] = {
  "/grpcIImageViewer.grpcIImageViewerService/display",
  "/grpcIImageViewer.grpcIImageViewerService/displayKey",
};

std::unique_ptr< grpcIImageViewerService::Stub> grpcIImageViewerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIImageViewerService::Stub> stub(new grpcIImageViewerService::Stub(channel, options));
  return stub;
}

grpcIImageViewerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_display_(grpcIImageViewerService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_displayKey_(grpcIImageViewerService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIImageViewerService::Stub::display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpcIImageViewer::displayResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_display_, context, request, response);
}

void grpcIImageViewerService::Stub::async::display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_display_, context, request, response, std::move(f));
}

void grpcIImageViewerService::Stub::async::display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_display_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>* grpcIImageViewerService::Stub::PrepareAsyncdisplayRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIImageViewer::displayResponse, ::grpcIImageViewer::displayRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_display_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>* grpcIImageViewerService::Stub::AsyncdisplayRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdisplayRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIImageViewerService::Stub::displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpcIImageViewer::displayKeyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_displayKey_, context, request, response);
}

void grpcIImageViewerService::Stub::async::displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_displayKey_, context, request, response, std::move(f));
}

void grpcIImageViewerService::Stub::async::displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_displayKey_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>* grpcIImageViewerService::Stub::PrepareAsyncdisplayKeyRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIImageViewer::displayKeyResponse, ::grpcIImageViewer::displayKeyRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_displayKey_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>* grpcIImageViewerService::Stub::AsyncdisplayKeyRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdisplayKeyRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIImageViewerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIImageViewerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIImageViewerService::Service, ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIImageViewerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIImageViewer::displayRequest* req,
             ::grpcIImageViewer::displayResponse* resp) {
               return service->display(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIImageViewerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIImageViewerService::Service, ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIImageViewerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIImageViewer::displayKeyRequest* req,
             ::grpcIImageViewer::displayKeyResponse* resp) {
               return service->displayKey(ctx, req, resp);
             }, this)));
}

grpcIImageViewerService::Service::~Service() {
}

::grpc::Status grpcIImageViewerService::Service::display(::grpc::ServerContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIImageViewerService::Service::displayKey(::grpc::ServerContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIImageViewer

