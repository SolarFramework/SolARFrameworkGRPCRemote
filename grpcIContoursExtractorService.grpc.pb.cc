// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIContoursExtractorService.proto

#include "grpcIContoursExtractorService.pb.h"
#include "grpcIContoursExtractorService.grpc.pb.h"

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
namespace grpcIContoursExtractor {

static const char* grpcIContoursExtractorService_method_names[] = {
  "/grpcIContoursExtractor.grpcIContoursExtractorService/extract",
};

std::unique_ptr< grpcIContoursExtractorService::Stub> grpcIContoursExtractorService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIContoursExtractorService::Stub> stub(new grpcIContoursExtractorService::Stub(channel, options));
  return stub;
}

grpcIContoursExtractorService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_extract_(grpcIContoursExtractorService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIContoursExtractorService::Stub::extract(::grpc::ClientContext* context, const ::grpcIContoursExtractor::extractRequest& request, ::grpcIContoursExtractor::extractResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIContoursExtractor::extractRequest, ::grpcIContoursExtractor::extractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_extract_, context, request, response);
}

void grpcIContoursExtractorService::Stub::async::extract(::grpc::ClientContext* context, const ::grpcIContoursExtractor::extractRequest* request, ::grpcIContoursExtractor::extractResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIContoursExtractor::extractRequest, ::grpcIContoursExtractor::extractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_, context, request, response, std::move(f));
}

void grpcIContoursExtractorService::Stub::async::extract(::grpc::ClientContext* context, const ::grpcIContoursExtractor::extractRequest* request, ::grpcIContoursExtractor::extractResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIContoursExtractor::extractResponse>* grpcIContoursExtractorService::Stub::PrepareAsyncextractRaw(::grpc::ClientContext* context, const ::grpcIContoursExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIContoursExtractor::extractResponse, ::grpcIContoursExtractor::extractRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_extract_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIContoursExtractor::extractResponse>* grpcIContoursExtractorService::Stub::AsyncextractRaw(::grpc::ClientContext* context, const ::grpcIContoursExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncextractRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIContoursExtractorService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIContoursExtractorService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIContoursExtractorService::Service, ::grpcIContoursExtractor::extractRequest, ::grpcIContoursExtractor::extractResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIContoursExtractorService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIContoursExtractor::extractRequest* req,
             ::grpcIContoursExtractor::extractResponse* resp) {
               return service->extract(ctx, req, resp);
             }, this)));
}

grpcIContoursExtractorService::Service::~Service() {
}

::grpc::Status grpcIContoursExtractorService::Service::extract(::grpc::ServerContext* context, const ::grpcIContoursExtractor::extractRequest* request, ::grpcIContoursExtractor::extractResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIContoursExtractor

