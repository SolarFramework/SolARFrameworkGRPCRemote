// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIImageLoaderService.proto

#include "grpcIImageLoaderService.pb.h"
#include "grpcIImageLoaderService.grpc.pb.h"

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
namespace grpcIImageLoader {

static const char* grpcIImageLoaderService_method_names[] = {
  "/grpcIImageLoader.grpcIImageLoaderService/getImage",
  "/grpcIImageLoader.grpcIImageLoaderService/reloadImage",
};

std::unique_ptr< grpcIImageLoaderService::Stub> grpcIImageLoaderService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIImageLoaderService::Stub> stub(new grpcIImageLoaderService::Stub(channel, options));
  return stub;
}

grpcIImageLoaderService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_getImage_(grpcIImageLoaderService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_reloadImage_(grpcIImageLoaderService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIImageLoaderService::Stub::getImage(::grpc::ClientContext* context, const ::grpcIImageLoader::getImageRequest& request, ::grpcIImageLoader::getImageResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIImageLoader::getImageRequest, ::grpcIImageLoader::getImageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getImage_, context, request, response);
}

void grpcIImageLoaderService::Stub::async::getImage(::grpc::ClientContext* context, const ::grpcIImageLoader::getImageRequest* request, ::grpcIImageLoader::getImageResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIImageLoader::getImageRequest, ::grpcIImageLoader::getImageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getImage_, context, request, response, std::move(f));
}

void grpcIImageLoaderService::Stub::async::getImage(::grpc::ClientContext* context, const ::grpcIImageLoader::getImageRequest* request, ::grpcIImageLoader::getImageResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getImage_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageLoader::getImageResponse>* grpcIImageLoaderService::Stub::PrepareAsyncgetImageRaw(::grpc::ClientContext* context, const ::grpcIImageLoader::getImageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIImageLoader::getImageResponse, ::grpcIImageLoader::getImageRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getImage_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageLoader::getImageResponse>* grpcIImageLoaderService::Stub::AsyncgetImageRaw(::grpc::ClientContext* context, const ::grpcIImageLoader::getImageRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetImageRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIImageLoaderService::Stub::reloadImage(::grpc::ClientContext* context, const ::grpcIImageLoader::reloadImageRequest& request, ::grpcIImageLoader::reloadImageResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIImageLoader::reloadImageRequest, ::grpcIImageLoader::reloadImageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_reloadImage_, context, request, response);
}

void grpcIImageLoaderService::Stub::async::reloadImage(::grpc::ClientContext* context, const ::grpcIImageLoader::reloadImageRequest* request, ::grpcIImageLoader::reloadImageResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIImageLoader::reloadImageRequest, ::grpcIImageLoader::reloadImageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_reloadImage_, context, request, response, std::move(f));
}

void grpcIImageLoaderService::Stub::async::reloadImage(::grpc::ClientContext* context, const ::grpcIImageLoader::reloadImageRequest* request, ::grpcIImageLoader::reloadImageResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_reloadImage_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageLoader::reloadImageResponse>* grpcIImageLoaderService::Stub::PrepareAsyncreloadImageRaw(::grpc::ClientContext* context, const ::grpcIImageLoader::reloadImageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIImageLoader::reloadImageResponse, ::grpcIImageLoader::reloadImageRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_reloadImage_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIImageLoader::reloadImageResponse>* grpcIImageLoaderService::Stub::AsyncreloadImageRaw(::grpc::ClientContext* context, const ::grpcIImageLoader::reloadImageRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncreloadImageRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIImageLoaderService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIImageLoaderService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIImageLoaderService::Service, ::grpcIImageLoader::getImageRequest, ::grpcIImageLoader::getImageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIImageLoaderService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIImageLoader::getImageRequest* req,
             ::grpcIImageLoader::getImageResponse* resp) {
               return service->getImage(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIImageLoaderService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIImageLoaderService::Service, ::grpcIImageLoader::reloadImageRequest, ::grpcIImageLoader::reloadImageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIImageLoaderService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIImageLoader::reloadImageRequest* req,
             ::grpcIImageLoader::reloadImageResponse* resp) {
               return service->reloadImage(ctx, req, resp);
             }, this)));
}

grpcIImageLoaderService::Service::~Service() {
}

::grpc::Status grpcIImageLoaderService::Service::getImage(::grpc::ServerContext* context, const ::grpcIImageLoader::getImageRequest* request, ::grpcIImageLoader::getImageResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIImageLoaderService::Service::reloadImage(::grpc::ServerContext* context, const ::grpcIImageLoader::reloadImageRequest* request, ::grpcIImageLoader::reloadImageResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIImageLoader

