// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMappingPipelineService.proto

#include "grpcIMappingPipelineService.pb.h"
#include "grpcIMappingPipelineService.grpc.pb.h"

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
namespace grpcIMappingPipeline {

static const char* grpcIMappingPipelineService_method_names[] = {
  "/grpcIMappingPipeline.grpcIMappingPipelineService/init",
  "/grpcIMappingPipeline.grpcIMappingPipelineService/start",
  "/grpcIMappingPipeline.grpcIMappingPipelineService/stop",
  "/grpcIMappingPipeline.grpcIMappingPipelineService/setCameraParameters",
  "/grpcIMappingPipeline.grpcIMappingPipelineService/mappingProcessRequest",
  "/grpcIMappingPipeline.grpcIMappingPipelineService/getDataForVisualization",
};

std::unique_ptr< grpcIMappingPipelineService::Stub> grpcIMappingPipelineService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMappingPipelineService::Stub> stub(new grpcIMappingPipelineService::Stub(channel));
  return stub;
}

grpcIMappingPipelineService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_init_(grpcIMappingPipelineService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_start_(grpcIMappingPipelineService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_stop_(grpcIMappingPipelineService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_setCameraParameters_(grpcIMappingPipelineService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_mappingProcessRequest_(grpcIMappingPipelineService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_getDataForVisualization_(grpcIMappingPipelineService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMappingPipelineService::Stub::init(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIMappingPipeline::initResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::grpcIMappingPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_init_, context, request, response);
}

void grpcIMappingPipelineService::Stub::experimental_async::init(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::initResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::grpcIMappingPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_init_, context, request, response, std::move(f));
}

void grpcIMappingPipelineService::Stub::experimental_async::init(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::initResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_init_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::initResponse>* grpcIMappingPipelineService::Stub::PrepareAsyncinitRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMappingPipeline::initResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_init_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::initResponse>* grpcIMappingPipelineService::Stub::AsyncinitRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncinitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMappingPipelineService::Stub::start(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIMappingPipeline::startResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::grpcIMappingPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_start_, context, request, response);
}

void grpcIMappingPipelineService::Stub::experimental_async::start(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::startResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::grpcIMappingPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, std::move(f));
}

void grpcIMappingPipelineService::Stub::experimental_async::start(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::startResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_start_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::startResponse>* grpcIMappingPipelineService::Stub::PrepareAsyncstartRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMappingPipeline::startResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_start_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::startResponse>* grpcIMappingPipelineService::Stub::AsyncstartRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstartRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMappingPipelineService::Stub::stop(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIMappingPipeline::stopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::grpcIMappingPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_stop_, context, request, response);
}

void grpcIMappingPipelineService::Stub::experimental_async::stop(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::stopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::grpcIMappingPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, std::move(f));
}

void grpcIMappingPipelineService::Stub::experimental_async::stop(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::stopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::stopResponse>* grpcIMappingPipelineService::Stub::PrepareAsyncstopRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMappingPipeline::stopResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_stop_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::stopResponse>* grpcIMappingPipelineService::Stub::AsyncstopRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstopRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMappingPipelineService::Stub::setCameraParameters(::grpc::ClientContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest& request, ::grpcIMappingPipeline::setCameraParametersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMappingPipeline::setCameraParametersRequest, ::grpcIMappingPipeline::setCameraParametersResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_setCameraParameters_, context, request, response);
}

void grpcIMappingPipelineService::Stub::experimental_async::setCameraParameters(::grpc::ClientContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest* request, ::grpcIMappingPipeline::setCameraParametersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMappingPipeline::setCameraParametersRequest, ::grpcIMappingPipeline::setCameraParametersResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setCameraParameters_, context, request, response, std::move(f));
}

void grpcIMappingPipelineService::Stub::experimental_async::setCameraParameters(::grpc::ClientContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest* request, ::grpcIMappingPipeline::setCameraParametersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_setCameraParameters_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::setCameraParametersResponse>* grpcIMappingPipelineService::Stub::PrepareAsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMappingPipeline::setCameraParametersResponse, ::grpcIMappingPipeline::setCameraParametersRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_setCameraParameters_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::setCameraParametersResponse>* grpcIMappingPipelineService::Stub::AsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsetCameraParametersRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMappingPipelineService::Stub::mappingProcessRequest(::grpc::ClientContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest& request, ::grpcIMappingPipeline::mappingProcessRequestResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMappingPipeline::mappingProcessRequestRequest, ::grpcIMappingPipeline::mappingProcessRequestResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_mappingProcessRequest_, context, request, response);
}

void grpcIMappingPipelineService::Stub::experimental_async::mappingProcessRequest(::grpc::ClientContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest* request, ::grpcIMappingPipeline::mappingProcessRequestResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMappingPipeline::mappingProcessRequestRequest, ::grpcIMappingPipeline::mappingProcessRequestResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_mappingProcessRequest_, context, request, response, std::move(f));
}

void grpcIMappingPipelineService::Stub::experimental_async::mappingProcessRequest(::grpc::ClientContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest* request, ::grpcIMappingPipeline::mappingProcessRequestResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_mappingProcessRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::mappingProcessRequestResponse>* grpcIMappingPipelineService::Stub::PrepareAsyncmappingProcessRequestRaw(::grpc::ClientContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMappingPipeline::mappingProcessRequestResponse, ::grpcIMappingPipeline::mappingProcessRequestRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_mappingProcessRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::mappingProcessRequestResponse>* grpcIMappingPipelineService::Stub::AsyncmappingProcessRequestRaw(::grpc::ClientContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncmappingProcessRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIMappingPipelineService::Stub::getDataForVisualization(::grpc::ClientContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest& request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMappingPipeline::getDataForVisualizationRequest, ::grpcIMappingPipeline::getDataForVisualizationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getDataForVisualization_, context, request, response);
}

void grpcIMappingPipelineService::Stub::experimental_async::getDataForVisualization(::grpc::ClientContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest* request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMappingPipeline::getDataForVisualizationRequest, ::grpcIMappingPipeline::getDataForVisualizationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getDataForVisualization_, context, request, response, std::move(f));
}

void grpcIMappingPipelineService::Stub::experimental_async::getDataForVisualization(::grpc::ClientContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest* request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getDataForVisualization_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::getDataForVisualizationResponse>* grpcIMappingPipelineService::Stub::PrepareAsyncgetDataForVisualizationRaw(::grpc::ClientContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMappingPipeline::getDataForVisualizationResponse, ::grpcIMappingPipeline::getDataForVisualizationRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getDataForVisualization_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMappingPipeline::getDataForVisualizationResponse>* grpcIMappingPipelineService::Stub::AsyncgetDataForVisualizationRaw(::grpc::ClientContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetDataForVisualizationRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMappingPipelineService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMappingPipelineService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMappingPipelineService::Service, ::google::protobuf::Empty, ::grpcIMappingPipeline::initResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::grpcIMappingPipeline::initResponse* resp) {
               return service->init(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMappingPipelineService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMappingPipelineService::Service, ::google::protobuf::Empty, ::grpcIMappingPipeline::startResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::grpcIMappingPipeline::startResponse* resp) {
               return service->start(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMappingPipelineService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMappingPipelineService::Service, ::google::protobuf::Empty, ::grpcIMappingPipeline::stopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::grpcIMappingPipeline::stopResponse* resp) {
               return service->stop(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMappingPipelineService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMappingPipelineService::Service, ::grpcIMappingPipeline::setCameraParametersRequest, ::grpcIMappingPipeline::setCameraParametersResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMappingPipeline::setCameraParametersRequest* req,
             ::grpcIMappingPipeline::setCameraParametersResponse* resp) {
               return service->setCameraParameters(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMappingPipelineService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMappingPipelineService::Service, ::grpcIMappingPipeline::mappingProcessRequestRequest, ::grpcIMappingPipeline::mappingProcessRequestResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMappingPipeline::mappingProcessRequestRequest* req,
             ::grpcIMappingPipeline::mappingProcessRequestResponse* resp) {
               return service->mappingProcessRequest(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMappingPipelineService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMappingPipelineService::Service, ::grpcIMappingPipeline::getDataForVisualizationRequest, ::grpcIMappingPipeline::getDataForVisualizationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMappingPipelineService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMappingPipeline::getDataForVisualizationRequest* req,
             ::grpcIMappingPipeline::getDataForVisualizationResponse* resp) {
               return service->getDataForVisualization(ctx, req, resp);
             }, this)));
}

grpcIMappingPipelineService::Service::~Service() {
}

::grpc::Status grpcIMappingPipelineService::Service::init(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::initResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMappingPipelineService::Service::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::startResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMappingPipelineService::Service::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::stopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMappingPipelineService::Service::setCameraParameters(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest* request, ::grpcIMappingPipeline::setCameraParametersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMappingPipelineService::Service::mappingProcessRequest(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest* request, ::grpcIMappingPipeline::mappingProcessRequestResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIMappingPipelineService::Service::getDataForVisualization(::grpc::ServerContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest* request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMappingPipeline

