// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcITrackingService.proto

#include "grpcITrackingService.pb.h"
#include "grpcITrackingService.grpc.pb.h"

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
namespace grpcITracking {

static const char* grpcITrackingService_method_names[] = {
  "/grpcITracking.grpcITrackingService/setNewKeyframe",
  "/grpcITracking.grpcITrackingService/checkNeedNewKeyframe",
  "/grpcITracking.grpcITrackingService/process",
};

std::unique_ptr< grpcITrackingService::Stub> grpcITrackingService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcITrackingService::Stub> stub(new grpcITrackingService::Stub(channel));
  return stub;
}

grpcITrackingService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_setNewKeyframe_(grpcITrackingService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_checkNeedNewKeyframe_(grpcITrackingService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_process_(grpcITrackingService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcITrackingService::Stub::setNewKeyframe(::grpc::ClientContext* context, const ::grpcITracking::setNewKeyframeRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcITracking::setNewKeyframeRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_setNewKeyframe_, context, request, response);
}

void grpcITrackingService::Stub::experimental_async::setNewKeyframe(::grpc::ClientContext* context, const ::grpcITracking::setNewKeyframeRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcITracking::setNewKeyframeRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setNewKeyframe_, context, request, response, std::move(f));
}

void grpcITrackingService::Stub::experimental_async::setNewKeyframe(::grpc::ClientContext* context, const ::grpcITracking::setNewKeyframeRequest* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setNewKeyframe_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcITrackingService::Stub::PrepareAsyncsetNewKeyframeRaw(::grpc::ClientContext* context, const ::grpcITracking::setNewKeyframeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::grpcITracking::setNewKeyframeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_setNewKeyframe_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcITrackingService::Stub::AsyncsetNewKeyframeRaw(::grpc::ClientContext* context, const ::grpcITracking::setNewKeyframeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsetNewKeyframeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcITrackingService::Stub::checkNeedNewKeyframe(::grpc::ClientContext* context, const ::grpcITracking::checkNeedNewKeyframeRequest& request, ::grpcITracking::checkNeedNewKeyframeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcITracking::checkNeedNewKeyframeRequest, ::grpcITracking::checkNeedNewKeyframeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_checkNeedNewKeyframe_, context, request, response);
}

void grpcITrackingService::Stub::experimental_async::checkNeedNewKeyframe(::grpc::ClientContext* context, const ::grpcITracking::checkNeedNewKeyframeRequest* request, ::grpcITracking::checkNeedNewKeyframeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcITracking::checkNeedNewKeyframeRequest, ::grpcITracking::checkNeedNewKeyframeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_checkNeedNewKeyframe_, context, request, response, std::move(f));
}

void grpcITrackingService::Stub::experimental_async::checkNeedNewKeyframe(::grpc::ClientContext* context, const ::grpcITracking::checkNeedNewKeyframeRequest* request, ::grpcITracking::checkNeedNewKeyframeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_checkNeedNewKeyframe_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcITracking::checkNeedNewKeyframeResponse>* grpcITrackingService::Stub::PrepareAsynccheckNeedNewKeyframeRaw(::grpc::ClientContext* context, const ::grpcITracking::checkNeedNewKeyframeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcITracking::checkNeedNewKeyframeResponse, ::grpcITracking::checkNeedNewKeyframeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_checkNeedNewKeyframe_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcITracking::checkNeedNewKeyframeResponse>* grpcITrackingService::Stub::AsynccheckNeedNewKeyframeRaw(::grpc::ClientContext* context, const ::grpcITracking::checkNeedNewKeyframeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynccheckNeedNewKeyframeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcITrackingService::Stub::process(::grpc::ClientContext* context, const ::grpcITracking::processRequest& request, ::grpcITracking::processResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcITracking::processRequest, ::grpcITracking::processResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_process_, context, request, response);
}

void grpcITrackingService::Stub::experimental_async::process(::grpc::ClientContext* context, const ::grpcITracking::processRequest* request, ::grpcITracking::processResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcITracking::processRequest, ::grpcITracking::processResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_process_, context, request, response, std::move(f));
}

void grpcITrackingService::Stub::experimental_async::process(::grpc::ClientContext* context, const ::grpcITracking::processRequest* request, ::grpcITracking::processResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_process_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcITracking::processResponse>* grpcITrackingService::Stub::PrepareAsyncprocessRaw(::grpc::ClientContext* context, const ::grpcITracking::processRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcITracking::processResponse, ::grpcITracking::processRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_process_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcITracking::processResponse>* grpcITrackingService::Stub::AsyncprocessRaw(::grpc::ClientContext* context, const ::grpcITracking::processRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncprocessRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcITrackingService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcITrackingService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcITrackingService::Service, ::grpcITracking::setNewKeyframeRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcITrackingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcITracking::setNewKeyframeRequest* req,
             ::google::protobuf::Empty* resp) {
               return service->setNewKeyframe(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcITrackingService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcITrackingService::Service, ::grpcITracking::checkNeedNewKeyframeRequest, ::grpcITracking::checkNeedNewKeyframeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcITrackingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcITracking::checkNeedNewKeyframeRequest* req,
             ::grpcITracking::checkNeedNewKeyframeResponse* resp) {
               return service->checkNeedNewKeyframe(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcITrackingService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcITrackingService::Service, ::grpcITracking::processRequest, ::grpcITracking::processResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcITrackingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcITracking::processRequest* req,
             ::grpcITracking::processResponse* resp) {
               return service->process(ctx, req, resp);
             }, this)));
}

grpcITrackingService::Service::~Service() {
}

::grpc::Status grpcITrackingService::Service::setNewKeyframe(::grpc::ServerContext* context, const ::grpcITracking::setNewKeyframeRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcITrackingService::Service::checkNeedNewKeyframe(::grpc::ServerContext* context, const ::grpcITracking::checkNeedNewKeyframeRequest* request, ::grpcITracking::checkNeedNewKeyframeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcITrackingService::Service::process(::grpc::ServerContext* context, const ::grpcITracking::processRequest* request, ::grpcITracking::processResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcITracking

