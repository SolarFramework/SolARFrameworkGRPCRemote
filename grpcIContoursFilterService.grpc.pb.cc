// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIContoursFilterService.proto

#include "grpcIContoursFilterService.pb.h"
#include "grpcIContoursFilterService.grpc.pb.h"

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
namespace grpcIContoursFilter {

static const char* grpcIContoursFilterService_method_names[] = {
  "/grpcIContoursFilter.grpcIContoursFilterService/filter",
};

std::unique_ptr< grpcIContoursFilterService::Stub> grpcIContoursFilterService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIContoursFilterService::Stub> stub(new grpcIContoursFilterService::Stub(channel));
  return stub;
}

grpcIContoursFilterService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_filter_(grpcIContoursFilterService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIContoursFilterService::Stub::filter(::grpc::ClientContext* context, const ::grpcIContoursFilter::filterRequest& request, ::grpcIContoursFilter::filterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIContoursFilter::filterRequest, ::grpcIContoursFilter::filterResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_filter_, context, request, response);
}

void grpcIContoursFilterService::Stub::experimental_async::filter(::grpc::ClientContext* context, const ::grpcIContoursFilter::filterRequest* request, ::grpcIContoursFilter::filterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIContoursFilter::filterRequest, ::grpcIContoursFilter::filterResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_filter_, context, request, response, std::move(f));
}

void grpcIContoursFilterService::Stub::experimental_async::filter(::grpc::ClientContext* context, const ::grpcIContoursFilter::filterRequest* request, ::grpcIContoursFilter::filterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_filter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIContoursFilter::filterResponse>* grpcIContoursFilterService::Stub::PrepareAsyncfilterRaw(::grpc::ClientContext* context, const ::grpcIContoursFilter::filterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIContoursFilter::filterResponse, ::grpcIContoursFilter::filterRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_filter_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIContoursFilter::filterResponse>* grpcIContoursFilterService::Stub::AsyncfilterRaw(::grpc::ClientContext* context, const ::grpcIContoursFilter::filterRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfilterRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIContoursFilterService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIContoursFilterService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIContoursFilterService::Service, ::grpcIContoursFilter::filterRequest, ::grpcIContoursFilter::filterResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIContoursFilterService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIContoursFilter::filterRequest* req,
             ::grpcIContoursFilter::filterResponse* resp) {
               return service->filter(ctx, req, resp);
             }, this)));
}

grpcIContoursFilterService::Service::~Service() {
}

::grpc::Status grpcIContoursFilterService::Service::filter(::grpc::ServerContext* context, const ::grpcIContoursFilter::filterRequest* request, ::grpcIContoursFilter::filterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIContoursFilter

