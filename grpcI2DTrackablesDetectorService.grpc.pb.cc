// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI2DTrackablesDetectorService.proto

#include "grpcI2DTrackablesDetectorService.pb.h"
#include "grpcI2DTrackablesDetectorService.grpc.pb.h"

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
namespace grpcI2DTrackablesDetector {

static const char* grpcI2DTrackablesDetectorService_method_names[] = {
  "/grpcI2DTrackablesDetector.grpcI2DTrackablesDetectorService/setTrackables",
  "/grpcI2DTrackablesDetector.grpcI2DTrackablesDetectorService/detect",
};

std::unique_ptr< grpcI2DTrackablesDetectorService::Stub> grpcI2DTrackablesDetectorService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI2DTrackablesDetectorService::Stub> stub(new grpcI2DTrackablesDetectorService::Stub(channel, options));
  return stub;
}

grpcI2DTrackablesDetectorService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_setTrackables_(grpcI2DTrackablesDetectorService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_detect_(grpcI2DTrackablesDetectorService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI2DTrackablesDetectorService::Stub::setTrackables(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest& request, ::grpcI2DTrackablesDetector::setTrackablesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI2DTrackablesDetector::setTrackablesRequest, ::grpcI2DTrackablesDetector::setTrackablesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_setTrackables_, context, request, response);
}

void grpcI2DTrackablesDetectorService::Stub::async::setTrackables(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest* request, ::grpcI2DTrackablesDetector::setTrackablesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI2DTrackablesDetector::setTrackablesRequest, ::grpcI2DTrackablesDetector::setTrackablesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setTrackables_, context, request, response, std::move(f));
}

void grpcI2DTrackablesDetectorService::Stub::async::setTrackables(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest* request, ::grpcI2DTrackablesDetector::setTrackablesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setTrackables_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI2DTrackablesDetector::setTrackablesResponse>* grpcI2DTrackablesDetectorService::Stub::PrepareAsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI2DTrackablesDetector::setTrackablesResponse, ::grpcI2DTrackablesDetector::setTrackablesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_setTrackables_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI2DTrackablesDetector::setTrackablesResponse>* grpcI2DTrackablesDetectorService::Stub::AsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsetTrackablesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcI2DTrackablesDetectorService::Stub::detect(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::detectRequest& request, ::grpcI2DTrackablesDetector::detectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI2DTrackablesDetector::detectRequest, ::grpcI2DTrackablesDetector::detectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_detect_, context, request, response);
}

void grpcI2DTrackablesDetectorService::Stub::async::detect(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::detectRequest* request, ::grpcI2DTrackablesDetector::detectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI2DTrackablesDetector::detectRequest, ::grpcI2DTrackablesDetector::detectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_, context, request, response, std::move(f));
}

void grpcI2DTrackablesDetectorService::Stub::async::detect(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::detectRequest* request, ::grpcI2DTrackablesDetector::detectResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI2DTrackablesDetector::detectResponse>* grpcI2DTrackablesDetectorService::Stub::PrepareAsyncdetectRaw(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::detectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI2DTrackablesDetector::detectResponse, ::grpcI2DTrackablesDetector::detectRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_detect_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI2DTrackablesDetector::detectResponse>* grpcI2DTrackablesDetectorService::Stub::AsyncdetectRaw(::grpc::ClientContext* context, const ::grpcI2DTrackablesDetector::detectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdetectRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI2DTrackablesDetectorService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI2DTrackablesDetectorService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI2DTrackablesDetectorService::Service, ::grpcI2DTrackablesDetector::setTrackablesRequest, ::grpcI2DTrackablesDetector::setTrackablesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI2DTrackablesDetectorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI2DTrackablesDetector::setTrackablesRequest* req,
             ::grpcI2DTrackablesDetector::setTrackablesResponse* resp) {
               return service->setTrackables(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI2DTrackablesDetectorService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI2DTrackablesDetectorService::Service, ::grpcI2DTrackablesDetector::detectRequest, ::grpcI2DTrackablesDetector::detectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI2DTrackablesDetectorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI2DTrackablesDetector::detectRequest* req,
             ::grpcI2DTrackablesDetector::detectResponse* resp) {
               return service->detect(ctx, req, resp);
             }, this)));
}

grpcI2DTrackablesDetectorService::Service::~Service() {
}

::grpc::Status grpcI2DTrackablesDetectorService::Service::setTrackables(::grpc::ServerContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest* request, ::grpcI2DTrackablesDetector::setTrackablesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcI2DTrackablesDetectorService::Service::detect(::grpc::ServerContext* context, const ::grpcI2DTrackablesDetector::detectRequest* request, ::grpcI2DTrackablesDetector::detectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI2DTrackablesDetector

