// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI3DTransformFinderFrom3D3DService.proto

#include "grpcI3DTransformFinderFrom3D3DService.pb.h"
#include "grpcI3DTransformFinderFrom3D3DService.grpc.pb.h"

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
namespace grpcI3DTransformFinderFrom3D3D {

static const char* grpcI3DTransformFinderFrom3D3DService_method_names[] = {
  "/grpcI3DTransformFinderFrom3D3D.grpcI3DTransformFinderFrom3D3DService/estimate",
};

std::unique_ptr< grpcI3DTransformFinderFrom3D3DService::Stub> grpcI3DTransformFinderFrom3D3DService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI3DTransformFinderFrom3D3DService::Stub> stub(new grpcI3DTransformFinderFrom3D3DService::Stub(channel, options));
  return stub;
}

grpcI3DTransformFinderFrom3D3DService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_estimate_(grpcI3DTransformFinderFrom3D3DService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI3DTransformFinderFrom3D3DService::Stub::estimate(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest& request, ::grpcI3DTransformFinderFrom3D3D::estimateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3DTransformFinderFrom3D3D::estimateRequest, ::grpcI3DTransformFinderFrom3D3D::estimateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_estimate_, context, request, response);
}

void grpcI3DTransformFinderFrom3D3DService::Stub::async::estimate(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom3D3D::estimateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3DTransformFinderFrom3D3D::estimateRequest, ::grpcI3DTransformFinderFrom3D3D::estimateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_, context, request, response, std::move(f));
}

void grpcI3DTransformFinderFrom3D3DService::Stub::async::estimate(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom3D3D::estimateResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DTransformFinderFrom3D3D::estimateResponse>* grpcI3DTransformFinderFrom3D3DService::Stub::PrepareAsyncestimateRaw(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3DTransformFinderFrom3D3D::estimateResponse, ::grpcI3DTransformFinderFrom3D3D::estimateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_estimate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DTransformFinderFrom3D3D::estimateResponse>* grpcI3DTransformFinderFrom3D3DService::Stub::AsyncestimateRaw(::grpc::ClientContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncestimateRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI3DTransformFinderFrom3D3DService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3DTransformFinderFrom3D3DService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3DTransformFinderFrom3D3DService::Service, ::grpcI3DTransformFinderFrom3D3D::estimateRequest, ::grpcI3DTransformFinderFrom3D3D::estimateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3DTransformFinderFrom3D3DService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3DTransformFinderFrom3D3D::estimateRequest* req,
             ::grpcI3DTransformFinderFrom3D3D::estimateResponse* resp) {
               return service->estimate(ctx, req, resp);
             }, this)));
}

grpcI3DTransformFinderFrom3D3DService::Service::~Service() {
}

::grpc::Status grpcI3DTransformFinderFrom3D3DService::Service::estimate(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom3D3D::estimateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI3DTransformFinderFrom3D3D

