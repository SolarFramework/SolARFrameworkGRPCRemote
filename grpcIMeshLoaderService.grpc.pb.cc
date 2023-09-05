// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMeshLoaderService.proto

#include "grpcIMeshLoaderService.pb.h"
#include "grpcIMeshLoaderService.grpc.pb.h"

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
namespace grpcIMeshLoader {

static const char* grpcIMeshLoaderService_method_names[] = {
  "/grpcIMeshLoader.grpcIMeshLoaderService/load",
};

std::unique_ptr< grpcIMeshLoaderService::Stub> grpcIMeshLoaderService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMeshLoaderService::Stub> stub(new grpcIMeshLoaderService::Stub(channel));
  return stub;
}

grpcIMeshLoaderService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_load_(grpcIMeshLoaderService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMeshLoaderService::Stub::load(::grpc::ClientContext* context, const ::grpcIMeshLoader::loadRequest& request, ::grpcIMeshLoader::loadResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMeshLoader::loadRequest, ::grpcIMeshLoader::loadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_load_, context, request, response);
}

void grpcIMeshLoaderService::Stub::experimental_async::load(::grpc::ClientContext* context, const ::grpcIMeshLoader::loadRequest* request, ::grpcIMeshLoader::loadResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMeshLoader::loadRequest, ::grpcIMeshLoader::loadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_load_, context, request, response, std::move(f));
}

void grpcIMeshLoaderService::Stub::experimental_async::load(::grpc::ClientContext* context, const ::grpcIMeshLoader::loadRequest* request, ::grpcIMeshLoader::loadResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_load_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMeshLoader::loadResponse>* grpcIMeshLoaderService::Stub::PrepareAsyncloadRaw(::grpc::ClientContext* context, const ::grpcIMeshLoader::loadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMeshLoader::loadResponse, ::grpcIMeshLoader::loadRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_load_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMeshLoader::loadResponse>* grpcIMeshLoaderService::Stub::AsyncloadRaw(::grpc::ClientContext* context, const ::grpcIMeshLoader::loadRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncloadRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMeshLoaderService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMeshLoaderService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMeshLoaderService::Service, ::grpcIMeshLoader::loadRequest, ::grpcIMeshLoader::loadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMeshLoaderService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMeshLoader::loadRequest* req,
             ::grpcIMeshLoader::loadResponse* resp) {
               return service->load(ctx, req, resp);
             }, this)));
}

grpcIMeshLoaderService::Service::~Service() {
}

::grpc::Status grpcIMeshLoaderService::Service::load(::grpc::ServerContext* context, const ::grpcIMeshLoader::loadRequest* request, ::grpcIMeshLoader::loadResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMeshLoader

