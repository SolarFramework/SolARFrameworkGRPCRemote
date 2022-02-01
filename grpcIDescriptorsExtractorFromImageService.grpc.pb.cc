// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDescriptorsExtractorFromImageService.proto

#include "grpcIDescriptorsExtractorFromImageService.pb.h"
#include "grpcIDescriptorsExtractorFromImageService.grpc.pb.h"

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
namespace grpcIDescriptorsExtractorFromImage {

static const char* grpcIDescriptorsExtractorFromImageService_method_names[] = {
  "/grpcIDescriptorsExtractorFromImage.grpcIDescriptorsExtractorFromImageService/getTypeString",
  "/grpcIDescriptorsExtractorFromImage.grpcIDescriptorsExtractorFromImageService/extract",
};

std::unique_ptr< grpcIDescriptorsExtractorFromImageService::Stub> grpcIDescriptorsExtractorFromImageService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIDescriptorsExtractorFromImageService::Stub> stub(new grpcIDescriptorsExtractorFromImageService::Stub(channel));
  return stub;
}

grpcIDescriptorsExtractorFromImageService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_getTypeString_(grpcIDescriptorsExtractorFromImageService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_extract_(grpcIDescriptorsExtractorFromImageService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIDescriptorsExtractorFromImageService::Stub::getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest& request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getTypeString_, context, request, response);
}

void grpcIDescriptorsExtractorFromImageService::Stub::experimental_async::getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getTypeString_, context, request, response, std::move(f));
}

void grpcIDescriptorsExtractorFromImageService::Stub::experimental_async::getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getTypeString_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* grpcIDescriptorsExtractorFromImageService::Stub::PrepareAsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse, ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getTypeString_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* grpcIDescriptorsExtractorFromImageService::Stub::AsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetTypeStringRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDescriptorsExtractorFromImageService::Stub::extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_extract_, context, request, response);
}

void grpcIDescriptorsExtractorFromImageService::Stub::experimental_async::extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_, context, request, response, std::move(f));
}

void grpcIDescriptorsExtractorFromImageService::Stub::experimental_async::extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>* grpcIDescriptorsExtractorFromImageService::Stub::PrepareAsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDescriptorsExtractorFromImage::extractResponse, ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_extract_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>* grpcIDescriptorsExtractorFromImageService::Stub::AsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncextractRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIDescriptorsExtractorFromImageService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDescriptorsExtractorFromImageService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDescriptorsExtractorFromImageService::Service, ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDescriptorsExtractorFromImageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest* req,
             ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* resp) {
               return service->getTypeString(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDescriptorsExtractorFromImageService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDescriptorsExtractorFromImageService::Service, ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDescriptorsExtractorFromImageService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDescriptorsExtractorFromImage::extractRequest* req,
             ::grpcIDescriptorsExtractorFromImage::extractResponse* resp) {
               return service->extract(ctx, req, resp);
             }, this)));
}

grpcIDescriptorsExtractorFromImageService::Service::~Service() {
}

::grpc::Status grpcIDescriptorsExtractorFromImageService::Service::getTypeString(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDescriptorsExtractorFromImageService::Service::extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIDescriptorsExtractorFromImage

