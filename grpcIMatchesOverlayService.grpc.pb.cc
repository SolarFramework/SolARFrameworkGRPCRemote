// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMatchesOverlayService.proto

#include "grpcIMatchesOverlayService.pb.h"
#include "grpcIMatchesOverlayService.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
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
namespace grpcIMatchesOverlay {

static const char* grpcIMatchesOverlayService_method_names[] = {
  "/grpcIMatchesOverlay.grpcIMatchesOverlayService/draw_grpc0",
  "/grpcIMatchesOverlay.grpcIMatchesOverlayService/draw_grpc1",
  "/grpcIMatchesOverlay.grpcIMatchesOverlayService/draw_grpc2",
  "/grpcIMatchesOverlay.grpcIMatchesOverlayService/draw_grpc3",
};

std::unique_ptr< grpcIMatchesOverlayService::Stub> grpcIMatchesOverlayService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMatchesOverlayService::Stub> stub(new grpcIMatchesOverlayService::Stub(channel, options));
  return stub;
}

grpcIMatchesOverlayService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_draw_grpc0_(grpcIMatchesOverlayService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_draw_grpc1_(grpcIMatchesOverlayService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_draw_grpc2_(grpcIMatchesOverlayService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_draw_grpc3_(grpcIMatchesOverlayService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMatchesOverlayService::Stub::draw_grpc0(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request& request, ::grpcIMatchesOverlay::draw_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMatchesOverlay::draw_grpc0Request, ::grpcIMatchesOverlay::draw_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_grpc0_, context, request, response);
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc0(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request* request, ::grpcIMatchesOverlay::draw_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMatchesOverlay::draw_grpc0Request, ::grpcIMatchesOverlay::draw_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc0_, context, request, response, std::move(f));
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc0(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request* request, ::grpcIMatchesOverlay::draw_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc0Response>* grpcIMatchesOverlayService::Stub::PrepareAsyncdraw_grpc0Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMatchesOverlay::draw_grpc0Response, ::grpcIMatchesOverlay::draw_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc0Response>* grpcIMatchesOverlayService::Stub::Asyncdraw_grpc0Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdraw_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMatchesOverlayService::Stub::draw_grpc1(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request& request, ::grpcIMatchesOverlay::draw_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMatchesOverlay::draw_grpc1Request, ::grpcIMatchesOverlay::draw_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_grpc1_, context, request, response);
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc1(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request* request, ::grpcIMatchesOverlay::draw_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMatchesOverlay::draw_grpc1Request, ::grpcIMatchesOverlay::draw_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc1_, context, request, response, std::move(f));
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc1(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request* request, ::grpcIMatchesOverlay::draw_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc1Response>* grpcIMatchesOverlayService::Stub::PrepareAsyncdraw_grpc1Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMatchesOverlay::draw_grpc1Response, ::grpcIMatchesOverlay::draw_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc1Response>* grpcIMatchesOverlayService::Stub::Asyncdraw_grpc1Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdraw_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMatchesOverlayService::Stub::draw_grpc2(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request& request, ::grpcIMatchesOverlay::draw_grpc2Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMatchesOverlay::draw_grpc2Request, ::grpcIMatchesOverlay::draw_grpc2Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_grpc2_, context, request, response);
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc2(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request* request, ::grpcIMatchesOverlay::draw_grpc2Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMatchesOverlay::draw_grpc2Request, ::grpcIMatchesOverlay::draw_grpc2Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc2_, context, request, response, std::move(f));
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc2(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request* request, ::grpcIMatchesOverlay::draw_grpc2Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc2_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc2Response>* grpcIMatchesOverlayService::Stub::PrepareAsyncdraw_grpc2Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMatchesOverlay::draw_grpc2Response, ::grpcIMatchesOverlay::draw_grpc2Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_grpc2_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc2Response>* grpcIMatchesOverlayService::Stub::Asyncdraw_grpc2Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdraw_grpc2Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMatchesOverlayService::Stub::draw_grpc3(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request& request, ::grpcIMatchesOverlay::draw_grpc3Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMatchesOverlay::draw_grpc3Request, ::grpcIMatchesOverlay::draw_grpc3Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_grpc3_, context, request, response);
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc3(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request* request, ::grpcIMatchesOverlay::draw_grpc3Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMatchesOverlay::draw_grpc3Request, ::grpcIMatchesOverlay::draw_grpc3Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc3_, context, request, response, std::move(f));
}

void grpcIMatchesOverlayService::Stub::async::draw_grpc3(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request* request, ::grpcIMatchesOverlay::draw_grpc3Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_grpc3_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc3Response>* grpcIMatchesOverlayService::Stub::PrepareAsyncdraw_grpc3Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMatchesOverlay::draw_grpc3Response, ::grpcIMatchesOverlay::draw_grpc3Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_grpc3_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMatchesOverlay::draw_grpc3Response>* grpcIMatchesOverlayService::Stub::Asyncdraw_grpc3Raw(::grpc::ClientContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdraw_grpc3Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMatchesOverlayService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMatchesOverlayService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMatchesOverlayService::Service, ::grpcIMatchesOverlay::draw_grpc0Request, ::grpcIMatchesOverlay::draw_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMatchesOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMatchesOverlay::draw_grpc0Request* req,
             ::grpcIMatchesOverlay::draw_grpc0Response* resp) {
               return service->draw_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMatchesOverlayService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMatchesOverlayService::Service, ::grpcIMatchesOverlay::draw_grpc1Request, ::grpcIMatchesOverlay::draw_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMatchesOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMatchesOverlay::draw_grpc1Request* req,
             ::grpcIMatchesOverlay::draw_grpc1Response* resp) {
               return service->draw_grpc1(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMatchesOverlayService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMatchesOverlayService::Service, ::grpcIMatchesOverlay::draw_grpc2Request, ::grpcIMatchesOverlay::draw_grpc2Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMatchesOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMatchesOverlay::draw_grpc2Request* req,
             ::grpcIMatchesOverlay::draw_grpc2Response* resp) {
               return service->draw_grpc2(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMatchesOverlayService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMatchesOverlayService::Service, ::grpcIMatchesOverlay::draw_grpc3Request, ::grpcIMatchesOverlay::draw_grpc3Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMatchesOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMatchesOverlay::draw_grpc3Request* req,
             ::grpcIMatchesOverlay::draw_grpc3Response* resp) {
               return service->draw_grpc3(ctx, req, resp);
             }, this)));
}

grpcIMatchesOverlayService::Service::~Service() {
}

::grpc::Status grpcIMatchesOverlayService::Service::draw_grpc0(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request* request, ::grpcIMatchesOverlay::draw_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMatchesOverlayService::Service::draw_grpc1(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request* request, ::grpcIMatchesOverlay::draw_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMatchesOverlayService::Service::draw_grpc2(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request* request, ::grpcIMatchesOverlay::draw_grpc2Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMatchesOverlayService::Service::draw_grpc3(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request* request, ::grpcIMatchesOverlay::draw_grpc3Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMatchesOverlay

