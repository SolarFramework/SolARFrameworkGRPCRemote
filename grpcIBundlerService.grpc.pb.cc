// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIBundlerService.proto

#include "grpcIBundlerService.pb.h"
#include "grpcIBundlerService.grpc.pb.h"

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
namespace grpcIBundler {

static const char* grpcIBundlerService_method_names[] = {
  "/grpcIBundler.grpcIBundlerService/setMap",
  "/grpcIBundler.grpcIBundlerService/bundleAdjustment",
  "/grpcIBundler.grpcIBundlerService/optimizeSim3",
};

std::unique_ptr< grpcIBundlerService::Stub> grpcIBundlerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIBundlerService::Stub> stub(new grpcIBundlerService::Stub(channel));
  return stub;
}

grpcIBundlerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_setMap_(grpcIBundlerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_bundleAdjustment_(grpcIBundlerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_optimizeSim3_(grpcIBundlerService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIBundlerService::Stub::setMap(::grpc::ClientContext* context, const ::grpcIBundler::setMapRequest& request, ::grpcIBundler::setMapResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIBundler::setMapRequest, ::grpcIBundler::setMapResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_setMap_, context, request, response);
}

void grpcIBundlerService::Stub::experimental_async::setMap(::grpc::ClientContext* context, const ::grpcIBundler::setMapRequest* request, ::grpcIBundler::setMapResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIBundler::setMapRequest, ::grpcIBundler::setMapResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setMap_, context, request, response, std::move(f));
}

void grpcIBundlerService::Stub::experimental_async::setMap(::grpc::ClientContext* context, const ::grpcIBundler::setMapRequest* request, ::grpcIBundler::setMapResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setMap_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapResponse>* grpcIBundlerService::Stub::PrepareAsyncsetMapRaw(::grpc::ClientContext* context, const ::grpcIBundler::setMapRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIBundler::setMapResponse, ::grpcIBundler::setMapRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_setMap_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapResponse>* grpcIBundlerService::Stub::AsyncsetMapRaw(::grpc::ClientContext* context, const ::grpcIBundler::setMapRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsetMapRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIBundlerService::Stub::bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpcIBundler::bundleAdjustmentResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_bundleAdjustment_, context, request, response);
}

void grpcIBundlerService::Stub::experimental_async::bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_bundleAdjustment_, context, request, response, std::move(f));
}

void grpcIBundlerService::Stub::experimental_async::bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_bundleAdjustment_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>* grpcIBundlerService::Stub::PrepareAsyncbundleAdjustmentRaw(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIBundler::bundleAdjustmentResponse, ::grpcIBundler::bundleAdjustmentRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_bundleAdjustment_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>* grpcIBundlerService::Stub::AsyncbundleAdjustmentRaw(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncbundleAdjustmentRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIBundlerService::Stub::optimizeSim3(::grpc::ClientContext* context, const ::grpcIBundler::optimizeSim3Request& request, ::grpcIBundler::optimizeSim3Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIBundler::optimizeSim3Request, ::grpcIBundler::optimizeSim3Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_optimizeSim3_, context, request, response);
}

void grpcIBundlerService::Stub::experimental_async::optimizeSim3(::grpc::ClientContext* context, const ::grpcIBundler::optimizeSim3Request* request, ::grpcIBundler::optimizeSim3Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIBundler::optimizeSim3Request, ::grpcIBundler::optimizeSim3Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_optimizeSim3_, context, request, response, std::move(f));
}

void grpcIBundlerService::Stub::experimental_async::optimizeSim3(::grpc::ClientContext* context, const ::grpcIBundler::optimizeSim3Request* request, ::grpcIBundler::optimizeSim3Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_optimizeSim3_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIBundler::optimizeSim3Response>* grpcIBundlerService::Stub::PrepareAsyncoptimizeSim3Raw(::grpc::ClientContext* context, const ::grpcIBundler::optimizeSim3Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIBundler::optimizeSim3Response, ::grpcIBundler::optimizeSim3Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_optimizeSim3_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIBundler::optimizeSim3Response>* grpcIBundlerService::Stub::AsyncoptimizeSim3Raw(::grpc::ClientContext* context, const ::grpcIBundler::optimizeSim3Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncoptimizeSim3Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIBundlerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIBundlerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIBundlerService::Service, ::grpcIBundler::setMapRequest, ::grpcIBundler::setMapResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIBundlerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIBundler::setMapRequest* req,
             ::grpcIBundler::setMapResponse* resp) {
               return service->setMap(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIBundlerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIBundlerService::Service, ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIBundlerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIBundler::bundleAdjustmentRequest* req,
             ::grpcIBundler::bundleAdjustmentResponse* resp) {
               return service->bundleAdjustment(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIBundlerService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIBundlerService::Service, ::grpcIBundler::optimizeSim3Request, ::grpcIBundler::optimizeSim3Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIBundlerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIBundler::optimizeSim3Request* req,
             ::grpcIBundler::optimizeSim3Response* resp) {
               return service->optimizeSim3(ctx, req, resp);
             }, this)));
}

grpcIBundlerService::Service::~Service() {
}

::grpc::Status grpcIBundlerService::Service::setMap(::grpc::ServerContext* context, const ::grpcIBundler::setMapRequest* request, ::grpcIBundler::setMapResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIBundlerService::Service::bundleAdjustment(::grpc::ServerContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIBundlerService::Service::optimizeSim3(::grpc::ServerContext* context, const ::grpcIBundler::optimizeSim3Request* request, ::grpcIBundler::optimizeSim3Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIBundler

