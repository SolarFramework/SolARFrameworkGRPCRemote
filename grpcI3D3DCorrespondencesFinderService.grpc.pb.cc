// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI3D3DCorrespondencesFinderService.proto

#include "grpcI3D3DCorrespondencesFinderService.pb.h"
#include "grpcI3D3DCorrespondencesFinderService.grpc.pb.h"

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
namespace grpcI3D3DCorrespondencesFinder {

static const char* grpcI3D3DCorrespondencesFinderService_method_names[] = {
  "/grpcI3D3DCorrespondencesFinder.grpcI3D3DCorrespondencesFinderService/find_grpc0",
  "/grpcI3D3DCorrespondencesFinder.grpcI3D3DCorrespondencesFinderService/find_grpc1",
};

std::unique_ptr< grpcI3D3DCorrespondencesFinderService::Stub> grpcI3D3DCorrespondencesFinderService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI3D3DCorrespondencesFinderService::Stub> stub(new grpcI3D3DCorrespondencesFinderService::Stub(channel));
  return stub;
}

grpcI3D3DCorrespondencesFinderService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_find_grpc0_(grpcI3D3DCorrespondencesFinderService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_find_grpc1_(grpcI3D3DCorrespondencesFinderService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI3D3DCorrespondencesFinderService::Stub::find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_find_grpc0_, context, request, response);
}

void grpcI3D3DCorrespondencesFinderService::Stub::experimental_async::find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_grpc0_, context, request, response, std::move(f));
}

void grpcI3D3DCorrespondencesFinderService::Stub::experimental_async::find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* grpcI3D3DCorrespondencesFinderService::Stub::PrepareAsyncfind_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response, ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_find_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* grpcI3D3DCorrespondencesFinderService::Stub::Asyncfind_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfind_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcI3D3DCorrespondencesFinderService::Stub::find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_find_grpc1_, context, request, response);
}

void grpcI3D3DCorrespondencesFinderService::Stub::experimental_async::find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_grpc1_, context, request, response, std::move(f));
}

void grpcI3D3DCorrespondencesFinderService::Stub::experimental_async::find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* grpcI3D3DCorrespondencesFinderService::Stub::PrepareAsyncfind_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response, ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_find_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* grpcI3D3DCorrespondencesFinderService::Stub::Asyncfind_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfind_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI3D3DCorrespondencesFinderService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3D3DCorrespondencesFinderService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3D3DCorrespondencesFinderService::Service, ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3D3DCorrespondencesFinderService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* req,
             ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* resp) {
               return service->find_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3D3DCorrespondencesFinderService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3D3DCorrespondencesFinderService::Service, ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3D3DCorrespondencesFinderService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* req,
             ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* resp) {
               return service->find_grpc1(ctx, req, resp);
             }, this)));
}

grpcI3D3DCorrespondencesFinderService::Service::~Service() {
}

::grpc::Status grpcI3D3DCorrespondencesFinderService::Service::find_grpc0(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcI3D3DCorrespondencesFinderService::Service::find_grpc1(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI3D3DCorrespondencesFinder

