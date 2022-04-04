// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIInstanceSegmentationService.proto

#include "grpcIInstanceSegmentationService.pb.h"
#include "grpcIInstanceSegmentationService.grpc.pb.h"

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
namespace grpcIInstanceSegmentation {

static const char* grpcIInstanceSegmentationService_method_names[] = {
  "/grpcIInstanceSegmentation.grpcIInstanceSegmentationService/segment",
};

std::unique_ptr< grpcIInstanceSegmentationService::Stub> grpcIInstanceSegmentationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< grpcIInstanceSegmentationService::Stub> stub(new grpcIInstanceSegmentationService::Stub(channel));
  return stub;
}

grpcIInstanceSegmentationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_segment_(grpcIInstanceSegmentationService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status grpcIInstanceSegmentationService::Stub::segment(::grpc::ClientContext* context, const ::grpcIInstanceSegmentation::segmentRequest& request, ::grpcIInstanceSegmentation::segmentResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::grpcIInstanceSegmentation::segmentRequest, ::grpcIInstanceSegmentation::segmentResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_segment_, context, request, response);
}

void grpcIInstanceSegmentationService::Stub::experimental_async::segment(::grpc::ClientContext* context, const ::grpcIInstanceSegmentation::segmentRequest* request, ::grpcIInstanceSegmentation::segmentResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::grpcIInstanceSegmentation::segmentRequest, ::grpcIInstanceSegmentation::segmentResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_segment_, context, request, response, std::move(f));
}

void grpcIInstanceSegmentationService::Stub::experimental_async::segment(::grpc::ClientContext* context, const ::grpcIInstanceSegmentation::segmentRequest* request, ::grpcIInstanceSegmentation::segmentResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_segment_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::grpcIInstanceSegmentation::segmentResponse>* grpcIInstanceSegmentationService::Stub::PrepareAsyncsegmentRaw(::grpc::ClientContext* context, const ::grpcIInstanceSegmentation::segmentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::grpcIInstanceSegmentation::segmentResponse, ::grpcIInstanceSegmentation::segmentRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_segment_, context, request);
}

::grpc::ClientAsyncResponseReader< ::grpcIInstanceSegmentation::segmentResponse>* grpcIInstanceSegmentationService::Stub::AsyncsegmentRaw(::grpc::ClientContext* context, const ::grpcIInstanceSegmentation::segmentRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsegmentRaw(context, request, cq);
  result->StartCall();
  return result;
}

grpcIInstanceSegmentationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      grpcIInstanceSegmentationService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< grpcIInstanceSegmentationService::Service, ::grpcIInstanceSegmentation::segmentRequest, ::grpcIInstanceSegmentation::segmentResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](grpcIInstanceSegmentationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::grpcIInstanceSegmentation::segmentRequest* req,
             ::grpcIInstanceSegmentation::segmentResponse* resp) {
               return service->segment(ctx, req, resp);
             }, this)));
}

grpcIInstanceSegmentationService::Service::~Service() {
}

::grpc::Status grpcIInstanceSegmentationService::Service::segment(::grpc::ServerContext* context, const ::grpcIInstanceSegmentation::segmentRequest* request, ::grpcIInstanceSegmentation::segmentResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace grpcIInstanceSegmentation

