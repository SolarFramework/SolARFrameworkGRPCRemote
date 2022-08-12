// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIOverlapDetectorService.proto

#include "grpcIOverlapDetectorService.pb.h"
#include "grpcIOverlapDetectorService.grpc.pb.h"

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
namespace grpcIOverlapDetector {

static const char* grpcIOverlapDetectorService_method_names[] = {
  "/grpcIOverlapDetector.grpcIOverlapDetectorService/detect_grpc0",
  "/grpcIOverlapDetector.grpcIOverlapDetectorService/detect_grpc1",
};

std::unique_ptr< grpcIOverlapDetectorService::Stub> grpcIOverlapDetectorService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIOverlapDetectorService::Stub> stub(new grpcIOverlapDetectorService::Stub(channel));
  return stub;
}

grpcIOverlapDetectorService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_detect_grpc0_(grpcIOverlapDetectorService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_detect_grpc1_(grpcIOverlapDetectorService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIOverlapDetectorService::Stub::detect_grpc0(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc0Request& request, ::grpcIOverlapDetector::detect_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIOverlapDetector::detect_grpc0Request, ::grpcIOverlapDetector::detect_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_detect_grpc0_, context, request, response);
}

void grpcIOverlapDetectorService::Stub::experimental_async::detect_grpc0(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc0Request* request, ::grpcIOverlapDetector::detect_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIOverlapDetector::detect_grpc0Request, ::grpcIOverlapDetector::detect_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_grpc0_, context, request, response, std::move(f));
}

void grpcIOverlapDetectorService::Stub::experimental_async::detect_grpc0(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc0Request* request, ::grpcIOverlapDetector::detect_grpc0Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIOverlapDetector::detect_grpc0Response>* grpcIOverlapDetectorService::Stub::PrepareAsyncdetect_grpc0Raw(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIOverlapDetector::detect_grpc0Response, ::grpcIOverlapDetector::detect_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_detect_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIOverlapDetector::detect_grpc0Response>* grpcIOverlapDetectorService::Stub::Asyncdetect_grpc0Raw(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdetect_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIOverlapDetectorService::Stub::detect_grpc1(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc1Request& request, ::grpcIOverlapDetector::detect_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIOverlapDetector::detect_grpc1Request, ::grpcIOverlapDetector::detect_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_detect_grpc1_, context, request, response);
}

void grpcIOverlapDetectorService::Stub::experimental_async::detect_grpc1(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc1Request* request, ::grpcIOverlapDetector::detect_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIOverlapDetector::detect_grpc1Request, ::grpcIOverlapDetector::detect_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_grpc1_, context, request, response, std::move(f));
}

void grpcIOverlapDetectorService::Stub::experimental_async::detect_grpc1(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc1Request* request, ::grpcIOverlapDetector::detect_grpc1Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_detect_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIOverlapDetector::detect_grpc1Response>* grpcIOverlapDetectorService::Stub::PrepareAsyncdetect_grpc1Raw(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIOverlapDetector::detect_grpc1Response, ::grpcIOverlapDetector::detect_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_detect_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIOverlapDetector::detect_grpc1Response>* grpcIOverlapDetectorService::Stub::Asyncdetect_grpc1Raw(::grpc::ClientContext* context, const ::grpcIOverlapDetector::detect_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdetect_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIOverlapDetectorService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIOverlapDetectorService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIOverlapDetectorService::Service, ::grpcIOverlapDetector::detect_grpc0Request, ::grpcIOverlapDetector::detect_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIOverlapDetectorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIOverlapDetector::detect_grpc0Request* req,
             ::grpcIOverlapDetector::detect_grpc0Response* resp) {
               return service->detect_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIOverlapDetectorService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIOverlapDetectorService::Service, ::grpcIOverlapDetector::detect_grpc1Request, ::grpcIOverlapDetector::detect_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIOverlapDetectorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIOverlapDetector::detect_grpc1Request* req,
             ::grpcIOverlapDetector::detect_grpc1Response* resp) {
               return service->detect_grpc1(ctx, req, resp);
             }, this)));
}

grpcIOverlapDetectorService::Service::~Service() {
}

::grpc::Status grpcIOverlapDetectorService::Service::detect_grpc0(::grpc::ServerContext* context, const ::grpcIOverlapDetector::detect_grpc0Request* request, ::grpcIOverlapDetector::detect_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIOverlapDetectorService::Service::detect_grpc1(::grpc::ServerContext* context, const ::grpcIOverlapDetector::detect_grpc1Request* request, ::grpcIOverlapDetector::detect_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIOverlapDetector

