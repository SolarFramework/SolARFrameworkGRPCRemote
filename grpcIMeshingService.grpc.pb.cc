// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMeshingService.proto

#include "grpcIMeshingService.pb.h"
#include "grpcIMeshingService.grpc.pb.h"

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
namespace grpcIMeshing {

static const char* grpcIMeshingService_method_names[] = {
  "/grpcIMeshing.grpcIMeshingService/createMesh",
};

std::unique_ptr< grpcIMeshingService::Stub> grpcIMeshingService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIMeshingService::Stub> stub(new grpcIMeshingService::Stub(channel));
  return stub;
}

grpcIMeshingService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_createMesh_(grpcIMeshingService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIMeshingService::Stub::createMesh(::grpc::ClientContext* context, const ::grpcIMeshing::createMeshRequest& request, ::grpcIMeshing::createMeshResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIMeshing::createMeshRequest, ::grpcIMeshing::createMeshResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_createMesh_, context, request, response);
}

void grpcIMeshingService::Stub::experimental_async::createMesh(::grpc::ClientContext* context, const ::grpcIMeshing::createMeshRequest* request, ::grpcIMeshing::createMeshResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIMeshing::createMeshRequest, ::grpcIMeshing::createMeshResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_createMesh_, context, request, response, std::move(f));
}

void grpcIMeshingService::Stub::experimental_async::createMesh(::grpc::ClientContext* context, const ::grpcIMeshing::createMeshRequest* request, ::grpcIMeshing::createMeshResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_createMesh_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIMeshing::createMeshResponse>* grpcIMeshingService::Stub::PrepareAsynccreateMeshRaw(::grpc::ClientContext* context, const ::grpcIMeshing::createMeshRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIMeshing::createMeshResponse, ::grpcIMeshing::createMeshRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_createMesh_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIMeshing::createMeshResponse>* grpcIMeshingService::Stub::AsynccreateMeshRaw(::grpc::ClientContext* context, const ::grpcIMeshing::createMeshRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynccreateMeshRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIMeshingService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIMeshingService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIMeshingService::Service, ::grpcIMeshing::createMeshRequest, ::grpcIMeshing::createMeshResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIMeshingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIMeshing::createMeshRequest* req,
             ::grpcIMeshing::createMeshResponse* resp) {
               return service->createMesh(ctx, req, resp);
             }, this)));
}

grpcIMeshingService::Service::~Service() {
}

::grpc::Status grpcIMeshingService::Service::createMesh(::grpc::ServerContext* context, const ::grpcIMeshing::createMeshRequest* request, ::grpcIMeshing::createMeshResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIMeshing
