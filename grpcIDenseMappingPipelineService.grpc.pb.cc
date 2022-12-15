// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDenseMappingPipelineService.proto

#include "grpcIDenseMappingPipelineService.pb.h"
#include "grpcIDenseMappingPipelineService.grpc.pb.h"

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
namespace grpcIDenseMappingPipeline {

static const char* grpcIDenseMappingPipelineService_method_names[] = {
  "/grpcIDenseMappingPipeline.grpcIDenseMappingPipelineService/init",
  "/grpcIDenseMappingPipeline.grpcIDenseMappingPipelineService/start",
  "/grpcIDenseMappingPipeline.grpcIDenseMappingPipelineService/stop",
  "/grpcIDenseMappingPipeline.grpcIDenseMappingPipelineService/denseMappingProcessRequest",
  "/grpcIDenseMappingPipeline.grpcIDenseMappingPipelineService/getPointCloud",
  "/grpcIDenseMappingPipeline.grpcIDenseMappingPipelineService/getMesh",
};

std::unique_ptr< grpcIDenseMappingPipelineService::Stub> grpcIDenseMappingPipelineService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIDenseMappingPipelineService::Stub> stub(new grpcIDenseMappingPipelineService::Stub(channel));
  return stub;
}

grpcIDenseMappingPipelineService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_init_(grpcIDenseMappingPipelineService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_start_(grpcIDenseMappingPipelineService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_stop_(grpcIDenseMappingPipelineService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_denseMappingProcessRequest_(grpcIDenseMappingPipelineService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getPointCloud_(grpcIDenseMappingPipelineService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getMesh_(grpcIDenseMappingPipelineService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIDenseMappingPipelineService::Stub::init(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::initRequest& request, ::grpcIDenseMappingPipeline::initResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDenseMappingPipeline::initRequest, ::grpcIDenseMappingPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_init_, context, request, response);
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::init(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::initRequest* request, ::grpcIDenseMappingPipeline::initResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDenseMappingPipeline::initRequest, ::grpcIDenseMappingPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_init_, context, request, response, std::move(f));
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::init(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::initRequest* request, ::grpcIDenseMappingPipeline::initResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_init_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::initResponse>* grpcIDenseMappingPipelineService::Stub::PrepareAsyncinitRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::initRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDenseMappingPipeline::initResponse, ::grpcIDenseMappingPipeline::initRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_init_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::initResponse>* grpcIDenseMappingPipelineService::Stub::AsyncinitRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::initRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncinitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDenseMappingPipelineService::Stub::start(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::startRequest& request, ::grpcIDenseMappingPipeline::startResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDenseMappingPipeline::startRequest, ::grpcIDenseMappingPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_start_, context, request, response);
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::start(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::startRequest* request, ::grpcIDenseMappingPipeline::startResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDenseMappingPipeline::startRequest, ::grpcIDenseMappingPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, std::move(f));
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::start(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::startRequest* request, ::grpcIDenseMappingPipeline::startResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::startResponse>* grpcIDenseMappingPipelineService::Stub::PrepareAsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::startRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDenseMappingPipeline::startResponse, ::grpcIDenseMappingPipeline::startRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_start_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::startResponse>* grpcIDenseMappingPipelineService::Stub::AsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::startRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstartRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDenseMappingPipelineService::Stub::stop(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::stopRequest& request, ::grpcIDenseMappingPipeline::stopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDenseMappingPipeline::stopRequest, ::grpcIDenseMappingPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_stop_, context, request, response);
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::stop(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::stopRequest* request, ::grpcIDenseMappingPipeline::stopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDenseMappingPipeline::stopRequest, ::grpcIDenseMappingPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, std::move(f));
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::stop(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::stopRequest* request, ::grpcIDenseMappingPipeline::stopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::stopResponse>* grpcIDenseMappingPipelineService::Stub::PrepareAsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::stopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDenseMappingPipeline::stopResponse, ::grpcIDenseMappingPipeline::stopRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_stop_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::stopResponse>* grpcIDenseMappingPipelineService::Stub::AsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::stopRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstopRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDenseMappingPipelineService::Stub::denseMappingProcessRequest(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest& request, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_denseMappingProcessRequest_, context, request, response);
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::denseMappingProcessRequest(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest* request, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_denseMappingProcessRequest_, context, request, response, std::move(f));
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::denseMappingProcessRequest(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest* request, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_denseMappingProcessRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse>* grpcIDenseMappingPipelineService::Stub::PrepareAsyncdenseMappingProcessRequestRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse, ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_denseMappingProcessRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse>* grpcIDenseMappingPipelineService::Stub::AsyncdenseMappingProcessRequestRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdenseMappingProcessRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDenseMappingPipelineService::Stub::getPointCloud(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest& request, ::grpcIDenseMappingPipeline::getPointCloudResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDenseMappingPipeline::getPointCloudRequest, ::grpcIDenseMappingPipeline::getPointCloudResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getPointCloud_, context, request, response);
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::getPointCloud(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest* request, ::grpcIDenseMappingPipeline::getPointCloudResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDenseMappingPipeline::getPointCloudRequest, ::grpcIDenseMappingPipeline::getPointCloudResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getPointCloud_, context, request, response, std::move(f));
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::getPointCloud(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest* request, ::grpcIDenseMappingPipeline::getPointCloudResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getPointCloud_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::getPointCloudResponse>* grpcIDenseMappingPipelineService::Stub::PrepareAsyncgetPointCloudRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDenseMappingPipeline::getPointCloudResponse, ::grpcIDenseMappingPipeline::getPointCloudRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getPointCloud_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::getPointCloudResponse>* grpcIDenseMappingPipelineService::Stub::AsyncgetPointCloudRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetPointCloudRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDenseMappingPipelineService::Stub::getMesh(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest& request, ::grpcIDenseMappingPipeline::getMeshResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDenseMappingPipeline::getMeshRequest, ::grpcIDenseMappingPipeline::getMeshResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getMesh_, context, request, response);
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::getMesh(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest* request, ::grpcIDenseMappingPipeline::getMeshResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDenseMappingPipeline::getMeshRequest, ::grpcIDenseMappingPipeline::getMeshResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getMesh_, context, request, response, std::move(f));
}

void grpcIDenseMappingPipelineService::Stub::experimental_async::getMesh(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest* request, ::grpcIDenseMappingPipeline::getMeshResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getMesh_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::getMeshResponse>* grpcIDenseMappingPipelineService::Stub::PrepareAsyncgetMeshRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDenseMappingPipeline::getMeshResponse, ::grpcIDenseMappingPipeline::getMeshRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getMesh_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDenseMappingPipeline::getMeshResponse>* grpcIDenseMappingPipelineService::Stub::AsyncgetMeshRaw(::grpc::ClientContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetMeshRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIDenseMappingPipelineService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDenseMappingPipelineService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDenseMappingPipelineService::Service, ::grpcIDenseMappingPipeline::initRequest, ::grpcIDenseMappingPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDenseMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDenseMappingPipeline::initRequest* req,
             ::grpcIDenseMappingPipeline::initResponse* resp) {
               return service->init(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDenseMappingPipelineService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDenseMappingPipelineService::Service, ::grpcIDenseMappingPipeline::startRequest, ::grpcIDenseMappingPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDenseMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDenseMappingPipeline::startRequest* req,
             ::grpcIDenseMappingPipeline::startResponse* resp) {
               return service->start(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDenseMappingPipelineService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDenseMappingPipelineService::Service, ::grpcIDenseMappingPipeline::stopRequest, ::grpcIDenseMappingPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDenseMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDenseMappingPipeline::stopRequest* req,
             ::grpcIDenseMappingPipeline::stopResponse* resp) {
               return service->stop(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDenseMappingPipelineService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDenseMappingPipelineService::Service, ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDenseMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest* req,
             ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* resp) {
               return service->denseMappingProcessRequest(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDenseMappingPipelineService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDenseMappingPipelineService::Service, ::grpcIDenseMappingPipeline::getPointCloudRequest, ::grpcIDenseMappingPipeline::getPointCloudResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDenseMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDenseMappingPipeline::getPointCloudRequest* req,
             ::grpcIDenseMappingPipeline::getPointCloudResponse* resp) {
               return service->getPointCloud(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDenseMappingPipelineService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDenseMappingPipelineService::Service, ::grpcIDenseMappingPipeline::getMeshRequest, ::grpcIDenseMappingPipeline::getMeshResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDenseMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDenseMappingPipeline::getMeshRequest* req,
             ::grpcIDenseMappingPipeline::getMeshResponse* resp) {
               return service->getMesh(ctx, req, resp);
             }, this)));
}

grpcIDenseMappingPipelineService::Service::~Service() {
}

::grpc::Status grpcIDenseMappingPipelineService::Service::init(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::initRequest* request, ::grpcIDenseMappingPipeline::initResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDenseMappingPipelineService::Service::start(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::startRequest* request, ::grpcIDenseMappingPipeline::startResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDenseMappingPipelineService::Service::stop(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::stopRequest* request, ::grpcIDenseMappingPipeline::stopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDenseMappingPipelineService::Service::denseMappingProcessRequest(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest* request, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDenseMappingPipelineService::Service::getPointCloud(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest* request, ::grpcIDenseMappingPipeline::getPointCloudResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDenseMappingPipelineService::Service::getMesh(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest* request, ::grpcIDenseMappingPipeline::getMeshResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIDenseMappingPipeline

