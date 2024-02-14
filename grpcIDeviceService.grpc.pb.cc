// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDeviceService.proto

#include "grpcIDeviceService.pb.h"
#include "grpcIDeviceService.grpc.pb.h"

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
namespace grpcIDevice {

static const char* grpcIDeviceService_method_names[] = {
  "/grpcIDevice.grpcIDeviceService/start",
  "/grpcIDevice.grpcIDeviceService/stop",
};

std::unique_ptr< grpcIDeviceService::Stub> grpcIDeviceService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIDeviceService::Stub> stub(new grpcIDeviceService::Stub(channel, options));
  return stub;
}

grpcIDeviceService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_start_(grpcIDeviceService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_stop_(grpcIDeviceService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIDeviceService::Stub::start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpcIDevice::startResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDevice::startRequest, ::grpcIDevice::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_start_, context, request, response);
}

void grpcIDeviceService::Stub::async::start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDevice::startRequest, ::grpcIDevice::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, std::move(f));
}

void grpcIDeviceService::Stub::async::start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>* grpcIDeviceService::Stub::PrepareAsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDevice::startResponse, ::grpcIDevice::startRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_start_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>* grpcIDeviceService::Stub::AsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstartRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDeviceService::Stub::stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpcIDevice::stopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_stop_, context, request, response);
}

void grpcIDeviceService::Stub::async::stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, std::move(f));
}

void grpcIDeviceService::Stub::async::stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>* grpcIDeviceService::Stub::PrepareAsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDevice::stopResponse, ::grpcIDevice::stopRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_stop_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>* grpcIDeviceService::Stub::AsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstopRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIDeviceService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDeviceService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDeviceService::Service, ::grpcIDevice::startRequest, ::grpcIDevice::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDeviceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDevice::startRequest* req,
             ::grpcIDevice::startResponse* resp) {
               return service->start(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDeviceService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDeviceService::Service, ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDeviceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDevice::stopRequest* req,
             ::grpcIDevice::stopResponse* resp) {
               return service->stop(ctx, req, resp);
             }, this)));
}

grpcIDeviceService::Service::~Service() {
}

::grpc::Status grpcIDeviceService::Service::start(::grpc::ServerContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDeviceService::Service::stop(::grpc::ServerContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIDevice

