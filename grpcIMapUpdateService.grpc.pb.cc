// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMapUpdateService.proto

#include "grpcIMapUpdateService.pb.h"
#include "grpcIMapUpdateService.grpc.pb.h"

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
namespace grpcIMapUpdate {

static const char* grpcIMapUpdateService_method_names[] = {
  "/grpcIMapUpdate.grpcIMapUpdateService/update",
};

std::unique_ptr< grpcIMapUpdateService::Stub> grpcIMapUpdateService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMapUpdateService::Stub> stub(new grpcIMapUpdateService::Stub(channel));
  return stub;
}

grpcIMapUpdateService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_update_(grpcIMapUpdateService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMapUpdateService::Stub::update(::grpc::ClientContext* context, const ::grpcIMapUpdate::updateRequest& request, ::grpcIMapUpdate::updateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMapUpdate::updateRequest, ::grpcIMapUpdate::updateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_update_, context, request, response);
}

void grpcIMapUpdateService::Stub::experimental_async::update(::grpc::ClientContext* context, const ::grpcIMapUpdate::updateRequest* request, ::grpcIMapUpdate::updateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMapUpdate::updateRequest, ::grpcIMapUpdate::updateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_update_, context, request, response, std::move(f));
}

void grpcIMapUpdateService::Stub::experimental_async::update(::grpc::ClientContext* context, const ::grpcIMapUpdate::updateRequest* request, ::grpcIMapUpdate::updateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_update_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMapUpdate::updateResponse>* grpcIMapUpdateService::Stub::PrepareAsyncupdateRaw(::grpc::ClientContext* context, const ::grpcIMapUpdate::updateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMapUpdate::updateResponse, ::grpcIMapUpdate::updateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_update_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMapUpdate::updateResponse>* grpcIMapUpdateService::Stub::AsyncupdateRaw(::grpc::ClientContext* context, const ::grpcIMapUpdate::updateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncupdateRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMapUpdateService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMapUpdateService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMapUpdateService::Service, ::grpcIMapUpdate::updateRequest, ::grpcIMapUpdate::updateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMapUpdateService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMapUpdate::updateRequest* req,
             ::grpcIMapUpdate::updateResponse* resp) {
               return service->update(ctx, req, resp);
             }, this)));
}

grpcIMapUpdateService::Service::~Service() {
}

::grpc::Status grpcIMapUpdateService::Service::update(::grpc::ServerContext* context, const ::grpcIMapUpdate::updateRequest* request, ::grpcIMapUpdate::updateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMapUpdate

