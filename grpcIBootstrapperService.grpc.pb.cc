// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIBootstrapperService.proto

#include "grpcIBootstrapperService.pb.h"
#include "grpcIBootstrapperService.grpc.pb.h"

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
namespace grpcIBootstrapper {

static const char* grpcIBootstrapperService_method_names[] = {
  "/grpcIBootstrapper.grpcIBootstrapperService/process",
};

std::unique_ptr< grpcIBootstrapperService::Stub> grpcIBootstrapperService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIBootstrapperService::Stub> stub(new grpcIBootstrapperService::Stub(channel));
  return stub;
}

grpcIBootstrapperService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_process_(grpcIBootstrapperService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIBootstrapperService::Stub::process(::grpc::ClientContext* context, const ::grpcIBootstrapper::processRequest& request, ::grpcIBootstrapper::processResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIBootstrapper::processRequest, ::grpcIBootstrapper::processResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_process_, context, request, response);
}

void grpcIBootstrapperService::Stub::experimental_async::process(::grpc::ClientContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIBootstrapper::processRequest, ::grpcIBootstrapper::processResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_process_, context, request, response, std::move(f));
}

void grpcIBootstrapperService::Stub::experimental_async::process(::grpc::ClientContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_process_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIBootstrapper::processResponse>* grpcIBootstrapperService::Stub::PrepareAsyncprocessRaw(::grpc::ClientContext* context, const ::grpcIBootstrapper::processRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIBootstrapper::processResponse, ::grpcIBootstrapper::processRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_process_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIBootstrapper::processResponse>* grpcIBootstrapperService::Stub::AsyncprocessRaw(::grpc::ClientContext* context, const ::grpcIBootstrapper::processRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncprocessRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIBootstrapperService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIBootstrapperService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIBootstrapperService::Service, ::grpcIBootstrapper::processRequest, ::grpcIBootstrapper::processResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIBootstrapperService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIBootstrapper::processRequest* req,
             ::grpcIBootstrapper::processResponse* resp) {
               return service->process(ctx, req, resp);
             }, this)));
}

grpcIBootstrapperService::Service::~Service() {
}

::grpc::Status grpcIBootstrapperService::Service::process(::grpc::ServerContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIBootstrapper

