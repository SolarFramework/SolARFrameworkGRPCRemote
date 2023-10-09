// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI3DPointsViewerService.proto

#include "grpcI3DPointsViewerService.pb.h"
#include "grpcI3DPointsViewerService.grpc.pb.h"

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
namespace grpcI3DPointsViewer {

static const char* grpcI3DPointsViewerService_method_names[] = {
  "/grpcI3DPointsViewer.grpcI3DPointsViewerService/display_grpc0",
  "/grpcI3DPointsViewer.grpcI3DPointsViewerService/display_grpc1",
};

std::unique_ptr< grpcI3DPointsViewerService::Stub> grpcI3DPointsViewerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI3DPointsViewerService::Stub> stub(new grpcI3DPointsViewerService::Stub(channel, options));
  return stub;
}

grpcI3DPointsViewerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_display_grpc0_(grpcI3DPointsViewerService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_display_grpc1_(grpcI3DPointsViewerService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI3DPointsViewerService::Stub::display_grpc0(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc0Request& request, ::grpcI3DPointsViewer::display_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3DPointsViewer::display_grpc0Request, ::grpcI3DPointsViewer::display_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_display_grpc0_, context, request, response);
}

void grpcI3DPointsViewerService::Stub::async::display_grpc0(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc0Request* request, ::grpcI3DPointsViewer::display_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3DPointsViewer::display_grpc0Request, ::grpcI3DPointsViewer::display_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_display_grpc0_, context, request, response, std::move(f));
}

void grpcI3DPointsViewerService::Stub::async::display_grpc0(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc0Request* request, ::grpcI3DPointsViewer::display_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_display_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DPointsViewer::display_grpc0Response>* grpcI3DPointsViewerService::Stub::PrepareAsyncdisplay_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3DPointsViewer::display_grpc0Response, ::grpcI3DPointsViewer::display_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_display_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DPointsViewer::display_grpc0Response>* grpcI3DPointsViewerService::Stub::Asyncdisplay_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdisplay_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcI3DPointsViewerService::Stub::display_grpc1(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc1Request& request, ::grpcI3DPointsViewer::display_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3DPointsViewer::display_grpc1Request, ::grpcI3DPointsViewer::display_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_display_grpc1_, context, request, response);
}

void grpcI3DPointsViewerService::Stub::async::display_grpc1(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc1Request* request, ::grpcI3DPointsViewer::display_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3DPointsViewer::display_grpc1Request, ::grpcI3DPointsViewer::display_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_display_grpc1_, context, request, response, std::move(f));
}

void grpcI3DPointsViewerService::Stub::async::display_grpc1(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc1Request* request, ::grpcI3DPointsViewer::display_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_display_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DPointsViewer::display_grpc1Response>* grpcI3DPointsViewerService::Stub::PrepareAsyncdisplay_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcI3DPointsViewer::display_grpc1Response, ::grpcI3DPointsViewer::display_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_display_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcI3DPointsViewer::display_grpc1Response>* grpcI3DPointsViewerService::Stub::Asyncdisplay_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3DPointsViewer::display_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdisplay_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI3DPointsViewerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3DPointsViewerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3DPointsViewerService::Service, ::grpcI3DPointsViewer::display_grpc0Request, ::grpcI3DPointsViewer::display_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3DPointsViewerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3DPointsViewer::display_grpc0Request* req,
             ::grpcI3DPointsViewer::display_grpc0Response* resp) {
               return service->display_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3DPointsViewerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3DPointsViewerService::Service, ::grpcI3DPointsViewer::display_grpc1Request, ::grpcI3DPointsViewer::display_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3DPointsViewerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3DPointsViewer::display_grpc1Request* req,
             ::grpcI3DPointsViewer::display_grpc1Response* resp) {
               return service->display_grpc1(ctx, req, resp);
             }, this)));
}

grpcI3DPointsViewerService::Service::~Service() {
}

::grpc::Status grpcI3DPointsViewerService::Service::display_grpc0(::grpc::ServerContext* context, const ::grpcI3DPointsViewer::display_grpc0Request* request, ::grpcI3DPointsViewer::display_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcI3DPointsViewerService::Service::display_grpc1(::grpc::ServerContext* context, const ::grpcI3DPointsViewer::display_grpc1Request* request, ::grpcI3DPointsViewer::display_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI3DPointsViewer

