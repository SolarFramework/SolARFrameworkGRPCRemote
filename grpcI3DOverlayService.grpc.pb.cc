// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI3DOverlayService.proto

#include "grpcI3DOverlayService.pb.h"
#include "grpcI3DOverlayService.grpc.pb.h"

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
namespace grpcI3DOverlay {

static const char* grpcI3DOverlayService_method_names[] = {
  "/grpcI3DOverlay.grpcI3DOverlayService/draw",
};

std::unique_ptr< grpcI3DOverlayService::Stub> grpcI3DOverlayService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI3DOverlayService::Stub> stub(new grpcI3DOverlayService::Stub(channel, options));
  return stub;
}

grpcI3DOverlayService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_draw_(grpcI3DOverlayService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI3DOverlayService::Stub::draw(::grpc::ClientContext* context, const ::grpcI3DOverlay::drawRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcI3DOverlay::drawRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_draw_, context, request, response);
}

void grpcI3DOverlayService::Stub::async::draw(::grpc::ClientContext* context, const ::grpcI3DOverlay::drawRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcI3DOverlay::drawRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_, context, request, response, std::move(f));
}

void grpcI3DOverlayService::Stub::async::draw(::grpc::ClientContext* context, const ::grpcI3DOverlay::drawRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_draw_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcI3DOverlayService::Stub::PrepareAsyncdrawRaw(::grpc::ClientContext* context, const ::grpcI3DOverlay::drawRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::grpcI3DOverlay::drawRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_draw_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcI3DOverlayService::Stub::AsyncdrawRaw(::grpc::ClientContext* context, const ::grpcI3DOverlay::drawRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdrawRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI3DOverlayService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI3DOverlayService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI3DOverlayService::Service, ::grpcI3DOverlay::drawRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI3DOverlayService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcI3DOverlay::drawRequest* req,
             ::google::protobuf::Empty* resp) {
               return service->draw(ctx, req, resp);
             }, this)));
}

grpcI3DOverlayService::Service::~Service() {
}

::grpc::Status grpcI3DOverlayService::Service::draw(::grpc::ServerContext* context, const ::grpcI3DOverlay::drawRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI3DOverlay

