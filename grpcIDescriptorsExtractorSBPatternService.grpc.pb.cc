// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDescriptorsExtractorSBPatternService.proto

#include "grpcIDescriptorsExtractorSBPatternService.pb.h"
#include "grpcIDescriptorsExtractorSBPatternService.grpc.pb.h"

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
namespace grpcIDescriptorsExtractorSBPattern {

static const char* grpcIDescriptorsExtractorSBPatternService_method_names[] = {
  "/grpcIDescriptorsExtractorSBPattern.grpcIDescriptorsExtractorSBPatternService/extract_grpc0",
  "/grpcIDescriptorsExtractorSBPattern.grpcIDescriptorsExtractorSBPatternService/extract_grpc1",
};

std::unique_ptr< grpcIDescriptorsExtractorSBPatternService::Stub> grpcIDescriptorsExtractorSBPatternService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIDescriptorsExtractorSBPatternService::Stub> stub(new grpcIDescriptorsExtractorSBPatternService::Stub(channel, options));
  return stub;
}

grpcIDescriptorsExtractorSBPatternService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_extract_grpc0_(grpcIDescriptorsExtractorSBPatternService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_extract_grpc1_(grpcIDescriptorsExtractorSBPatternService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIDescriptorsExtractorSBPatternService::Stub::extract_grpc0(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request& request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_extract_grpc0_, context, request, response);
}

void grpcIDescriptorsExtractorSBPatternService::Stub::async::extract_grpc0(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_grpc0_, context, request, response, std::move(f));
}

void grpcIDescriptorsExtractorSBPatternService::Stub::async::extract_grpc0(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response>* grpcIDescriptorsExtractorSBPatternService::Stub::PrepareAsyncextract_grpc0Raw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_extract_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response>* grpcIDescriptorsExtractorSBPatternService::Stub::Asyncextract_grpc0Raw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncextract_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDescriptorsExtractorSBPatternService::Stub::extract_grpc1(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request& request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_extract_grpc1_, context, request, response);
}

void grpcIDescriptorsExtractorSBPatternService::Stub::async::extract_grpc1(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_grpc1_, context, request, response, std::move(f));
}

void grpcIDescriptorsExtractorSBPatternService::Stub::async::extract_grpc1(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_extract_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response>* grpcIDescriptorsExtractorSBPatternService::Stub::PrepareAsyncextract_grpc1Raw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_extract_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response>* grpcIDescriptorsExtractorSBPatternService::Stub::Asyncextract_grpc1Raw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncextract_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIDescriptorsExtractorSBPatternService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDescriptorsExtractorSBPatternService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDescriptorsExtractorSBPatternService::Service, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDescriptorsExtractorSBPatternService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request* req,
             ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* resp) {
               return service->extract_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDescriptorsExtractorSBPatternService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDescriptorsExtractorSBPatternService::Service, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDescriptorsExtractorSBPatternService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request* req,
             ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* resp) {
               return service->extract_grpc1(ctx, req, resp);
             }, this)));
}

grpcIDescriptorsExtractorSBPatternService::Service::~Service() {
}

::grpc::Status grpcIDescriptorsExtractorSBPatternService::Service::extract_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDescriptorsExtractorSBPatternService::Service::extract_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIDescriptorsExtractorSBPattern

