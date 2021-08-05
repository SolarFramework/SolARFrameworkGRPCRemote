// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcILoopClosureDetectorService.proto

#include "grpcILoopClosureDetectorService.pb.h"
#include "grpcILoopClosureDetectorService.grpc.pb.h"

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
namespace grpcILoopClosureDetector {

static const char* grpcILoopClosureDetectorService_method_names[] = {
  "/grpcILoopClosureDetector.grpcILoopClosureDetectorService/setCameraParameters",
  "/grpcILoopClosureDetector.grpcILoopClosureDetectorService/detect",
};

std::unique_ptr< grpcILoopClosureDetectorService::Stub> grpcILoopClosureDetectorService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcILoopClosureDetectorService::Stub> stub(new grpcILoopClosureDetectorService::Stub(channel, options));
  return stub;
}

grpcILoopClosureDetectorService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_setCameraParameters_(grpcILoopClosureDetectorService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_detect_(grpcILoopClosureDetectorService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcILoopClosureDetectorService::Stub::setCameraParameters(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcILoopClosureDetector::setCameraParametersRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_setCameraParameters_, context, request, response);
}

void grpcILoopClosureDetectorService::Stub::async::setCameraParameters(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcILoopClosureDetector::setCameraParametersRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setCameraParameters_, context, request, response, std::move(f));
}

void grpcILoopClosureDetectorService::Stub::async::setCameraParameters(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setCameraParameters_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcILoopClosureDetectorService::Stub::PrepareAsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::grpcILoopClosureDetector::setCameraParametersRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_setCameraParameters_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcILoopClosureDetectorService::Stub::AsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsetCameraParametersRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcILoopClosureDetectorService::Stub::detect(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::detectRequest& request, ::grpcILoopClosureDetector::detectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcILoopClosureDetector::detectRequest, ::grpcILoopClosureDetector::detectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_detect_, context, request, response);
}

void grpcILoopClosureDetectorService::Stub::async::detect(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcILoopClosureDetector::detectRequest, ::grpcILoopClosureDetector::detectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_, context, request, response, std::move(f));
}

void grpcILoopClosureDetectorService::Stub::async::detect(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcILoopClosureDetector::detectResponse>* grpcILoopClosureDetectorService::Stub::PrepareAsyncdetectRaw(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::detectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcILoopClosureDetector::detectResponse, ::grpcILoopClosureDetector::detectRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_detect_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcILoopClosureDetector::detectResponse>* grpcILoopClosureDetectorService::Stub::AsyncdetectRaw(::grpc::ClientContext* context, const ::grpcILoopClosureDetector::detectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdetectRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcILoopClosureDetectorService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcILoopClosureDetectorService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcILoopClosureDetectorService::Service, ::grpcILoopClosureDetector::setCameraParametersRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcILoopClosureDetectorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcILoopClosureDetector::setCameraParametersRequest* req,
             ::google::protobuf::Empty* resp) {
               return service->setCameraParameters(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcILoopClosureDetectorService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcILoopClosureDetectorService::Service, ::grpcILoopClosureDetector::detectRequest, ::grpcILoopClosureDetector::detectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcILoopClosureDetectorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcILoopClosureDetector::detectRequest* req,
             ::grpcILoopClosureDetector::detectResponse* resp) {
               return service->detect(ctx, req, resp);
             }, this)));
}

grpcILoopClosureDetectorService::Service::~Service() {
}

::grpc::Status grpcILoopClosureDetectorService::Service::setCameraParameters(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcILoopClosureDetectorService::Service::detect(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcILoopClosureDetector

