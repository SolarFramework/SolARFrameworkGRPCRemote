// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDescriptorMatcherService.proto

#include "grpcIDescriptorMatcherService.pb.h"
#include "grpcIDescriptorMatcherService.grpc.pb.h"

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
namespace grpcIDescriptorMatcher {

static const char* grpcIDescriptorMatcherService_method_names[] = {
  "/grpcIDescriptorMatcher.grpcIDescriptorMatcherService/match_grpc0",
  "/grpcIDescriptorMatcher.grpcIDescriptorMatcherService/match_grpc1",
};

std::unique_ptr< grpcIDescriptorMatcherService::Stub> grpcIDescriptorMatcherService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIDescriptorMatcherService::Stub> stub(new grpcIDescriptorMatcherService::Stub(channel));
  return stub;
}

grpcIDescriptorMatcherService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_match_grpc0_(grpcIDescriptorMatcherService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_match_grpc1_(grpcIDescriptorMatcherService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIDescriptorMatcherService::Stub::match_grpc0(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request& request, ::grpcIDescriptorMatcher::match_grpc0Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDescriptorMatcher::match_grpc0Request, ::grpcIDescriptorMatcher::match_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_match_grpc0_, context, request, response);
}

void grpcIDescriptorMatcherService::Stub::experimental_async::match_grpc0(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request* request, ::grpcIDescriptorMatcher::match_grpc0Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDescriptorMatcher::match_grpc0Request, ::grpcIDescriptorMatcher::match_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_match_grpc0_, context, request, response, std::move(f));
}

void grpcIDescriptorMatcherService::Stub::experimental_async::match_grpc0(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request* request, ::grpcIDescriptorMatcher::match_grpc0Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_match_grpc0_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorMatcher::match_grpc0Response>* grpcIDescriptorMatcherService::Stub::PrepareAsyncmatch_grpc0Raw(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDescriptorMatcher::match_grpc0Response, ::grpcIDescriptorMatcher::match_grpc0Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_match_grpc0_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorMatcher::match_grpc0Response>* grpcIDescriptorMatcherService::Stub::Asyncmatch_grpc0Raw(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncmatch_grpc0Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status grpcIDescriptorMatcherService::Stub::match_grpc1(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request& request, ::grpcIDescriptorMatcher::match_grpc1Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIDescriptorMatcher::match_grpc1Request, ::grpcIDescriptorMatcher::match_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_match_grpc1_, context, request, response);
}

void grpcIDescriptorMatcherService::Stub::experimental_async::match_grpc1(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request* request, ::grpcIDescriptorMatcher::match_grpc1Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIDescriptorMatcher::match_grpc1Request, ::grpcIDescriptorMatcher::match_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_match_grpc1_, context, request, response, std::move(f));
}

void grpcIDescriptorMatcherService::Stub::experimental_async::match_grpc1(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request* request, ::grpcIDescriptorMatcher::match_grpc1Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_match_grpc1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorMatcher::match_grpc1Response>* grpcIDescriptorMatcherService::Stub::PrepareAsyncmatch_grpc1Raw(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIDescriptorMatcher::match_grpc1Response, ::grpcIDescriptorMatcher::match_grpc1Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_match_grpc1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIDescriptorMatcher::match_grpc1Response>* grpcIDescriptorMatcherService::Stub::Asyncmatch_grpc1Raw(::grpc::ClientContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncmatch_grpc1Raw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIDescriptorMatcherService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDescriptorMatcherService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDescriptorMatcherService::Service, ::grpcIDescriptorMatcher::match_grpc0Request, ::grpcIDescriptorMatcher::match_grpc0Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDescriptorMatcherService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDescriptorMatcher::match_grpc0Request* req,
             ::grpcIDescriptorMatcher::match_grpc0Response* resp) {
               return service->match_grpc0(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIDescriptorMatcherService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIDescriptorMatcherService::Service, ::grpcIDescriptorMatcher::match_grpc1Request, ::grpcIDescriptorMatcher::match_grpc1Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIDescriptorMatcherService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIDescriptorMatcher::match_grpc1Request* req,
             ::grpcIDescriptorMatcher::match_grpc1Response* resp) {
               return service->match_grpc1(ctx, req, resp);
             }, this)));
}

grpcIDescriptorMatcherService::Service::~Service() {
}

::grpc::Status grpcIDescriptorMatcherService::Service::match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request* request, ::grpcIDescriptorMatcher::match_grpc0Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status grpcIDescriptorMatcherService::Service::match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request* request, ::grpcIDescriptorMatcher::match_grpc1Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIDescriptorMatcher

