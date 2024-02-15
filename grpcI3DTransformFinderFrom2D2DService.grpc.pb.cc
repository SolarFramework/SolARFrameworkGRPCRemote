// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI3DTransformFinderFrom2D2DService.proto

#include "grpcI3DTransformFinderFrom2D2DService.pb.h"
#include "grpcI3DTransformFinderFrom2D2DService.grpc.pb.h"

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
namespace grpcI3DTransformFinderFrom2D2D {

static const char* grpcI3DTransformFinderFrom2D2DService_method_names[] = {
  "/grpcI3DTransformFinderFrom2D2D.grpcI3DTransformFinderFrom2D2DService/estimate_grpc0",
  "/grpcI3DTransformFinderFrom2D2D.grpcI3DTransformFinderFrom2D2DService/estimate_grpc1",
};

std::unique_ptr< grpcI3DTransformFinderFrom2D2DService::Stub> grpcI3DTransformFinderFrom2D2DService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI3DTransformFinderFrom2D2DService::Stub> stub(new grpcI3DTransformFinderFrom2D2DService::Stub(channel, options));
  return stub;
}

grpcI3DTransformFinderFrom2D2DService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_estimate_grpc0_(grpcI3DTransformFinderFrom2D2DService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_estimate_grpc1_(grpcI3DTransformFinderFrom2D2DService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI3DTransformFinderFrom2D2DService::Stub::estimate_grpc0(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request& request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_estimate_grpc0_, context, request, response);
}

void grpcI3DTransformFinderFrom2D2DService::Stub::async::estimate_grpc0(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_grpc0_, context, request, response, std::move(f));
}

void grpcI3DTransformFinderFrom2D2DService::Stub::async::estimate_grpc0(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response>* grpcI3DTransformFinderFrom2D2DService::Stub::PrepareAsyncestimate_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_estimate_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response>* grpcI3DTransformFinderFrom2D2DService::Stub::Asyncestimate_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncestimate_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcI3DTransformFinderFrom2D2DService::Stub::estimate_grpc1(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request& request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_estimate_grpc1_, context, request, response);
}

void grpcI3DTransformFinderFrom2D2DService::Stub::async::estimate_grpc1(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_grpc1_, context, request, response, std::move(f));
}

void grpcI3DTransformFinderFrom2D2DService::Stub::async::estimate_grpc1(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response>* grpcI3DTransformFinderFrom2D2DService::Stub::PrepareAsyncestimate_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_estimate_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response>* grpcI3DTransformFinderFrom2D2DService::Stub::Asyncestimate_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncestimate_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI3DTransformFinderFrom2D2DService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3DTransformFinderFrom2D2DService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3DTransformFinderFrom2D2DService::Service, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3DTransformFinderFrom2D2DService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* req,
             ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* resp) {
               return service->estimate_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3DTransformFinderFrom2D2DService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3DTransformFinderFrom2D2DService::Service, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3DTransformFinderFrom2D2DService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* req,
             ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* resp) {
               return service->estimate_grpc1(ctx, req, resp);
             }, this)));
}

grpcI3DTransformFinderFrom2D2DService::Service::~Service() {
}

::grpc::Status grpcI3DTransformFinderFrom2D2DService::Service::estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcI3DTransformFinderFrom2D2DService::Service::estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI3DTransformFinderFrom2D2D

