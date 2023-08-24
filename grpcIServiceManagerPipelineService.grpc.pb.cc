// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIServiceManagerPipelineService.proto

#include "grpcIServiceManagerPipelineService.pb.h"
#include "grpcIServiceManagerPipelineService.grpc.pb.h"

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
namespace grpcIServiceManagerPipeline {

static const char* grpcIServiceManagerPipelineService_method_names[] = {
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/init",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/start",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/stop",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/registerService",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/unregisterService",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/getService",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/getAndLockService",
  "/grpcIServiceManagerPipeline.grpcIServiceManagerPipelineService/unlockService",
};

std::unique_ptr< grpcIServiceManagerPipelineService::Stub> grpcIServiceManagerPipelineService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIServiceManagerPipelineService::Stub> stub(new grpcIServiceManagerPipelineService::Stub(channel, options));
  return stub;
}

grpcIServiceManagerPipelineService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_init_(grpcIServiceManagerPipelineService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_start_(grpcIServiceManagerPipelineService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_stop_(grpcIServiceManagerPipelineService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_registerService_(grpcIServiceManagerPipelineService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_unregisterService_(grpcIServiceManagerPipelineService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getService_(grpcIServiceManagerPipelineService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getAndLockService_(grpcIServiceManagerPipelineService_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_unlockService_(grpcIServiceManagerPipelineService_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIServiceManagerPipelineService::Stub::init(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::initRequest& request, ::grpcIServiceManagerPipeline::initResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::initRequest, ::grpcIServiceManagerPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_init_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::init(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::initRequest* request, ::grpcIServiceManagerPipeline::initResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::initRequest, ::grpcIServiceManagerPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_init_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::init(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::initRequest* request, ::grpcIServiceManagerPipeline::initResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_init_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::initResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncinitRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::initRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::initResponse, ::grpcIServiceManagerPipeline::initRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_init_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::initResponse>* grpcIServiceManagerPipelineService::Stub::AsyncinitRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::initRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncinitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::start(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::startRequest& request, ::grpcIServiceManagerPipeline::startResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::startRequest, ::grpcIServiceManagerPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_start_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::start(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::startRequest* request, ::grpcIServiceManagerPipeline::startResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::startRequest, ::grpcIServiceManagerPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::start(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::startRequest* request, ::grpcIServiceManagerPipeline::startResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::startResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncstartRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::startRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::startResponse, ::grpcIServiceManagerPipeline::startRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_start_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::startResponse>* grpcIServiceManagerPipelineService::Stub::AsyncstartRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::startRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstartRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::stop(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::stopRequest& request, ::grpcIServiceManagerPipeline::stopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::stopRequest, ::grpcIServiceManagerPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_stop_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::stop(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::stopRequest* request, ::grpcIServiceManagerPipeline::stopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::stopRequest, ::grpcIServiceManagerPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::stop(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::stopRequest* request, ::grpcIServiceManagerPipeline::stopResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::stopResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncstopRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::stopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::stopResponse, ::grpcIServiceManagerPipeline::stopRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_stop_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::stopResponse>* grpcIServiceManagerPipelineService::Stub::AsyncstopRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::stopRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstopRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::registerService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest& request, ::grpcIServiceManagerPipeline::registerServiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::registerServiceRequest, ::grpcIServiceManagerPipeline::registerServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_registerService_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::registerService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest* request, ::grpcIServiceManagerPipeline::registerServiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::registerServiceRequest, ::grpcIServiceManagerPipeline::registerServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_registerService_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::registerService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest* request, ::grpcIServiceManagerPipeline::registerServiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_registerService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::registerServiceResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncregisterServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::registerServiceResponse, ::grpcIServiceManagerPipeline::registerServiceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_registerService_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::registerServiceResponse>* grpcIServiceManagerPipelineService::Stub::AsyncregisterServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncregisterServiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::unregisterService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest& request, ::grpcIServiceManagerPipeline::unregisterServiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::unregisterServiceRequest, ::grpcIServiceManagerPipeline::unregisterServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_unregisterService_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::unregisterService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest* request, ::grpcIServiceManagerPipeline::unregisterServiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::unregisterServiceRequest, ::grpcIServiceManagerPipeline::unregisterServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_unregisterService_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::unregisterService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest* request, ::grpcIServiceManagerPipeline::unregisterServiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_unregisterService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::unregisterServiceResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncunregisterServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::unregisterServiceResponse, ::grpcIServiceManagerPipeline::unregisterServiceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_unregisterService_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::unregisterServiceResponse>* grpcIServiceManagerPipelineService::Stub::AsyncunregisterServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncunregisterServiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::getService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest& request, ::grpcIServiceManagerPipeline::getServiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::getServiceRequest, ::grpcIServiceManagerPipeline::getServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getService_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::getService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest* request, ::grpcIServiceManagerPipeline::getServiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::getServiceRequest, ::grpcIServiceManagerPipeline::getServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getService_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::getService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest* request, ::grpcIServiceManagerPipeline::getServiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::getServiceResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncgetServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::getServiceResponse, ::grpcIServiceManagerPipeline::getServiceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getService_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::getServiceResponse>* grpcIServiceManagerPipelineService::Stub::AsyncgetServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetServiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::getAndLockService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest& request, ::grpcIServiceManagerPipeline::getAndLockServiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::getAndLockServiceRequest, ::grpcIServiceManagerPipeline::getAndLockServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getAndLockService_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::getAndLockService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest* request, ::grpcIServiceManagerPipeline::getAndLockServiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::getAndLockServiceRequest, ::grpcIServiceManagerPipeline::getAndLockServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getAndLockService_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::getAndLockService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest* request, ::grpcIServiceManagerPipeline::getAndLockServiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getAndLockService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::getAndLockServiceResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncgetAndLockServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::getAndLockServiceResponse, ::grpcIServiceManagerPipeline::getAndLockServiceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getAndLockService_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::getAndLockServiceResponse>* grpcIServiceManagerPipelineService::Stub::AsyncgetAndLockServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetAndLockServiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIServiceManagerPipelineService::Stub::unlockService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest& request, ::grpcIServiceManagerPipeline::unlockServiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIServiceManagerPipeline::unlockServiceRequest, ::grpcIServiceManagerPipeline::unlockServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_unlockService_, context, request, response);
}

void grpcIServiceManagerPipelineService::Stub::async::unlockService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest* request, ::grpcIServiceManagerPipeline::unlockServiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIServiceManagerPipeline::unlockServiceRequest, ::grpcIServiceManagerPipeline::unlockServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_unlockService_, context, request, response, std::move(f));
}

void grpcIServiceManagerPipelineService::Stub::async::unlockService(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest* request, ::grpcIServiceManagerPipeline::unlockServiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_unlockService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::unlockServiceResponse>* grpcIServiceManagerPipelineService::Stub::PrepareAsyncunlockServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIServiceManagerPipeline::unlockServiceResponse, ::grpcIServiceManagerPipeline::unlockServiceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_unlockService_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIServiceManagerPipeline::unlockServiceResponse>* grpcIServiceManagerPipelineService::Stub::AsyncunlockServiceRaw(::grpc::ClientContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncunlockServiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIServiceManagerPipelineService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::initRequest, ::grpcIServiceManagerPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::initRequest* req,
             ::grpcIServiceManagerPipeline::initResponse* resp) {
               return service->init(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::startRequest, ::grpcIServiceManagerPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::startRequest* req,
             ::grpcIServiceManagerPipeline::startResponse* resp) {
               return service->start(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::stopRequest, ::grpcIServiceManagerPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::stopRequest* req,
             ::grpcIServiceManagerPipeline::stopResponse* resp) {
               return service->stop(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::registerServiceRequest, ::grpcIServiceManagerPipeline::registerServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::registerServiceRequest* req,
             ::grpcIServiceManagerPipeline::registerServiceResponse* resp) {
               return service->registerService(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::unregisterServiceRequest, ::grpcIServiceManagerPipeline::unregisterServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::unregisterServiceRequest* req,
             ::grpcIServiceManagerPipeline::unregisterServiceResponse* resp) {
               return service->unregisterService(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::getServiceRequest, ::grpcIServiceManagerPipeline::getServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::getServiceRequest* req,
             ::grpcIServiceManagerPipeline::getServiceResponse* resp) {
               return service->getService(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::getAndLockServiceRequest, ::grpcIServiceManagerPipeline::getAndLockServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::getAndLockServiceRequest* req,
             ::grpcIServiceManagerPipeline::getAndLockServiceResponse* resp) {
               return service->getAndLockService(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIServiceManagerPipelineService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIServiceManagerPipelineService::Service, ::grpcIServiceManagerPipeline::unlockServiceRequest, ::grpcIServiceManagerPipeline::unlockServiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIServiceManagerPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIServiceManagerPipeline::unlockServiceRequest* req,
             ::grpcIServiceManagerPipeline::unlockServiceResponse* resp) {
               return service->unlockService(ctx, req, resp);
             }, this)));
}

grpcIServiceManagerPipelineService::Service::~Service() {
}

::grpc::Status grpcIServiceManagerPipelineService::Service::init(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::initRequest* request, ::grpcIServiceManagerPipeline::initResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::start(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::startRequest* request, ::grpcIServiceManagerPipeline::startResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::stop(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::stopRequest* request, ::grpcIServiceManagerPipeline::stopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::registerService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest* request, ::grpcIServiceManagerPipeline::registerServiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::unregisterService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest* request, ::grpcIServiceManagerPipeline::unregisterServiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::getService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest* request, ::grpcIServiceManagerPipeline::getServiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::getAndLockService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest* request, ::grpcIServiceManagerPipeline::getAndLockServiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIServiceManagerPipelineService::Service::unlockService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest* request, ::grpcIServiceManagerPipeline::unlockServiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIServiceManagerPipeline

