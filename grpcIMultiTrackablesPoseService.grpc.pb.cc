// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMultiTrackablesPoseService.proto

#include "grpcIMultiTrackablesPoseService.pb.h"
#include "grpcIMultiTrackablesPoseService.grpc.pb.h"

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
namespace grpcIMultiTrackablesPose {

static const char* grpcIMultiTrackablesPoseService_method_names[] = {
  "/grpcIMultiTrackablesPose.grpcIMultiTrackablesPoseService/setTrackables",
  "/grpcIMultiTrackablesPose.grpcIMultiTrackablesPoseService/estimate",
};

std::unique_ptr< grpcIMultiTrackablesPoseService::Stub> grpcIMultiTrackablesPoseService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMultiTrackablesPoseService::Stub> stub(new grpcIMultiTrackablesPoseService::Stub(channel));
  return stub;
}

grpcIMultiTrackablesPoseService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_setTrackables_(grpcIMultiTrackablesPoseService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_estimate_(grpcIMultiTrackablesPoseService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMultiTrackablesPoseService::Stub::setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_setTrackables_, context, request, response);
}

void grpcIMultiTrackablesPoseService::Stub::experimental_async::setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setTrackables_, context, request, response, std::move(f));
}

void grpcIMultiTrackablesPoseService::Stub::experimental_async::setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setTrackables_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>* grpcIMultiTrackablesPoseService::Stub::PrepareAsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMultiTrackablesPose::setTrackablesResponse, ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_setTrackables_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>* grpcIMultiTrackablesPoseService::Stub::AsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsetTrackablesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMultiTrackablesPoseService::Stub::estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpcIMultiTrackablesPose::estimateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_estimate_, context, request, response);
}

void grpcIMultiTrackablesPoseService::Stub::experimental_async::estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_, context, request, response, std::move(f));
}

void grpcIMultiTrackablesPoseService::Stub::experimental_async::estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_estimate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>* grpcIMultiTrackablesPoseService::Stub::PrepareAsyncestimateRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMultiTrackablesPose::estimateResponse, ::grpcIMultiTrackablesPose::estimateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_estimate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>* grpcIMultiTrackablesPoseService::Stub::AsyncestimateRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncestimateRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMultiTrackablesPoseService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMultiTrackablesPoseService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMultiTrackablesPoseService::Service, ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMultiTrackablesPoseService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMultiTrackablesPose::setTrackablesRequest* req,
             ::grpcIMultiTrackablesPose::setTrackablesResponse* resp) {
               return service->setTrackables(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMultiTrackablesPoseService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMultiTrackablesPoseService::Service, ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMultiTrackablesPoseService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMultiTrackablesPose::estimateRequest* req,
             ::grpcIMultiTrackablesPose::estimateResponse* resp) {
               return service->estimate(ctx, req, resp);
             }, this)));
}

grpcIMultiTrackablesPoseService::Service::~Service() {
}

::grpc::Status grpcIMultiTrackablesPoseService::Service::setTrackables(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMultiTrackablesPoseService::Service::estimate(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMultiTrackablesPose

