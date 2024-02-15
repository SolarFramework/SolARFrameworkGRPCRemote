// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI2Dto3DTransformDecomposerValidationService.proto

#include "grpcI2Dto3DTransformDecomposerValidationService.pb.h"
#include "grpcI2Dto3DTransformDecomposerValidationService.grpc.pb.h"

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
namespace grpcI2Dto3DTransformDecomposerValidation {

static const char* grpcI2Dto3DTransformDecomposerValidationService_method_names[] = {
  "/grpcI2Dto3DTransformDecomposerValidation.grpcI2Dto3DTransformDecomposerValidationService/testMethod",
};

std::unique_ptr< grpcI2Dto3DTransformDecomposerValidationService::Stub> grpcI2Dto3DTransformDecomposerValidationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcI2Dto3DTransformDecomposerValidationService::Stub> stub(new grpcI2Dto3DTransformDecomposerValidationService::Stub(channel, options));
  return stub;
}

grpcI2Dto3DTransformDecomposerValidationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_testMethod_(grpcI2Dto3DTransformDecomposerValidationService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcI2Dto3DTransformDecomposerValidationService::Stub::testMethod(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_testMethod_, context, request, response);
}

void grpcI2Dto3DTransformDecomposerValidationService::Stub::async::testMethod(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_testMethod_, context, request, response, std::move(f));
}

void grpcI2Dto3DTransformDecomposerValidationService::Stub::async::testMethod(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_testMethod_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcI2Dto3DTransformDecomposerValidationService::Stub::PrepareAsynctestMethodRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_testMethod_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* grpcI2Dto3DTransformDecomposerValidationService::Stub::AsynctestMethodRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynctestMethodRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcI2Dto3DTransformDecomposerValidationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcI2Dto3DTransformDecomposerValidationService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcI2Dto3DTransformDecomposerValidationService::Service, ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcI2Dto3DTransformDecomposerValidationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::google::protobuf::Empty* resp) {
               return service->testMethod(ctx, req, resp);
             }, this)));
}

grpcI2Dto3DTransformDecomposerValidationService::Service::~Service() {
}

::grpc::Status grpcI2Dto3DTransformDecomposerValidationService::Service::testMethod(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcI2Dto3DTransformDecomposerValidation

