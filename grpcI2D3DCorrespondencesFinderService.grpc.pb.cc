// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI2D3DCorrespondencesFinderService.proto

#include "grpcI2D3DCorrespondencesFinderService.pb.h"
#include "grpcI2D3DCorrespondencesFinderService.grpc.pb.h"

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
namespace grpcI2D3DCorrespondencesFinder {

static const char* grpcI2D3DCorrespondencesFinderService_method_names[] = {
  "/grpcI2D3DCorrespondencesFinder.grpcI2D3DCorrespondencesFinderService/find",
};

std::unique_ptr< grpcI2D3DCorrespondencesFinderService::Stub> grpcI2D3DCorrespondencesFinderService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI2D3DCorrespondencesFinderService::Stub> stub(new grpcI2D3DCorrespondencesFinderService::Stub(channel));
  return stub;
}

grpcI2D3DCorrespondencesFinderService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_find_(grpcI2D3DCorrespondencesFinderService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI2D3DCorrespondencesFinderService::Stub::find(::grpc::ClientContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest& request, ::grpcI2D3DCorrespondencesFinder::findResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI2D3DCorrespondencesFinder::findRequest, ::grpcI2D3DCorrespondencesFinder::findResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_find_, context, request, response);
}

void grpcI2D3DCorrespondencesFinderService::Stub::experimental_async::find(::grpc::ClientContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest* request, ::grpcI2D3DCorrespondencesFinder::findResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI2D3DCorrespondencesFinder::findRequest, ::grpcI2D3DCorrespondencesFinder::findResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_, context, request, response, std::move(f));
}

void grpcI2D3DCorrespondencesFinderService::Stub::experimental_async::find(::grpc::ClientContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest* request, ::grpcI2D3DCorrespondencesFinder::findResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI2D3DCorrespondencesFinder::findResponse>* grpcI2D3DCorrespondencesFinderService::Stub::PrepareAsyncfindRaw(::grpc::ClientContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI2D3DCorrespondencesFinder::findResponse, ::grpcI2D3DCorrespondencesFinder::findRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_find_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI2D3DCorrespondencesFinder::findResponse>* grpcI2D3DCorrespondencesFinderService::Stub::AsyncfindRaw(::grpc::ClientContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfindRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI2D3DCorrespondencesFinderService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI2D3DCorrespondencesFinderService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI2D3DCorrespondencesFinderService::Service, ::grpcI2D3DCorrespondencesFinder::findRequest, ::grpcI2D3DCorrespondencesFinder::findResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI2D3DCorrespondencesFinderService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI2D3DCorrespondencesFinder::findRequest* req,
             ::grpcI2D3DCorrespondencesFinder::findResponse* resp) {
               return service->find(ctx, req, resp);
             }, this)));
}

grpcI2D3DCorrespondencesFinderService::Service::~Service() {
}

::grpc::Status grpcI2D3DCorrespondencesFinderService::Service::find(::grpc::ServerContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest* request, ::grpcI2D3DCorrespondencesFinder::findResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI2D3DCorrespondencesFinder

