// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMaskOverlayService.proto

#include "grpcIMaskOverlayService.pb.h"
#include "grpcIMaskOverlayService.grpc.pb.h"

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
namespace grpcIMaskOverlay {

static const char* grpcIMaskOverlayService_method_names[] = {
  "/grpcIMaskOverlay.grpcIMaskOverlayService/draw_grpc0",
  "/grpcIMaskOverlay.grpcIMaskOverlayService/draw_grpc1",
};

std::unique_ptr< grpcIMaskOverlayService::Stub> grpcIMaskOverlayService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMaskOverlayService::Stub> stub(new grpcIMaskOverlayService::Stub(channel));
  return stub;
}

grpcIMaskOverlayService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_draw_grpc0_(grpcIMaskOverlayService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_draw_grpc1_(grpcIMaskOverlayService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMaskOverlayService::Stub::draw_grpc0(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc0Request& request, ::grpcIMaskOverlay::draw_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMaskOverlay::draw_grpc0Request, ::grpcIMaskOverlay::draw_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_grpc0_, context, request, response);
}

void grpcIMaskOverlayService::Stub::experimental_async::draw_grpc0(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc0Request* request, ::grpcIMaskOverlay::draw_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMaskOverlay::draw_grpc0Request, ::grpcIMaskOverlay::draw_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc0_, context, request, response, std::move(f));
}

void grpcIMaskOverlayService::Stub::experimental_async::draw_grpc0(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc0Request* request, ::grpcIMaskOverlay::draw_grpc0Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMaskOverlay::draw_grpc0Response>* grpcIMaskOverlayService::Stub::PrepareAsyncdraw_grpc0Raw(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMaskOverlay::draw_grpc0Response, ::grpcIMaskOverlay::draw_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMaskOverlay::draw_grpc0Response>* grpcIMaskOverlayService::Stub::Asyncdraw_grpc0Raw(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdraw_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMaskOverlayService::Stub::draw_grpc1(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc1Request& request, ::grpcIMaskOverlay::draw_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMaskOverlay::draw_grpc1Request, ::grpcIMaskOverlay::draw_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_grpc1_, context, request, response);
}

void grpcIMaskOverlayService::Stub::experimental_async::draw_grpc1(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc1Request* request, ::grpcIMaskOverlay::draw_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMaskOverlay::draw_grpc1Request, ::grpcIMaskOverlay::draw_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc1_, context, request, response, std::move(f));
}

void grpcIMaskOverlayService::Stub::experimental_async::draw_grpc1(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc1Request* request, ::grpcIMaskOverlay::draw_grpc1Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMaskOverlay::draw_grpc1Response>* grpcIMaskOverlayService::Stub::PrepareAsyncdraw_grpc1Raw(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMaskOverlay::draw_grpc1Response, ::grpcIMaskOverlay::draw_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMaskOverlay::draw_grpc1Response>* grpcIMaskOverlayService::Stub::Asyncdraw_grpc1Raw(::grpc::ClientContext* context, const ::grpcIMaskOverlay::draw_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdraw_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMaskOverlayService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMaskOverlayService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMaskOverlayService::Service, ::grpcIMaskOverlay::draw_grpc0Request, ::grpcIMaskOverlay::draw_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMaskOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMaskOverlay::draw_grpc0Request* req,
             ::grpcIMaskOverlay::draw_grpc0Response* resp) {
               return service->draw_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMaskOverlayService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMaskOverlayService::Service, ::grpcIMaskOverlay::draw_grpc1Request, ::grpcIMaskOverlay::draw_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMaskOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMaskOverlay::draw_grpc1Request* req,
             ::grpcIMaskOverlay::draw_grpc1Response* resp) {
               return service->draw_grpc1(ctx, req, resp);
             }, this)));
}

grpcIMaskOverlayService::Service::~Service() {
}

::grpc::Status grpcIMaskOverlayService::Service::draw_grpc0(::grpc::ServerContext* context, const ::grpcIMaskOverlay::draw_grpc0Request* request, ::grpcIMaskOverlay::draw_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMaskOverlayService::Service::draw_grpc1(::grpc::ServerContext* context, const ::grpcIMaskOverlay::draw_grpc1Request* request, ::grpcIMaskOverlay::draw_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMaskOverlay

