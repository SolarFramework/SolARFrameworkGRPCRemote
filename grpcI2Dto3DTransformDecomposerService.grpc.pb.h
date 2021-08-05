// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI2Dto3DTransformDecomposerService.proto
#ifndef GRPC_grpcI2Dto3DTransformDecomposerService_2eproto__INCLUDED
#define GRPC_grpcI2Dto3DTransformDecomposerService_2eproto__INCLUDED

#include "grpcI2Dto3DTransformDecomposerService.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpcI2Dto3DTransformDecomposer {

class grpcI2Dto3DTransformDecomposerService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcI2Dto3DTransformDecomposer.grpcI2Dto3DTransformDecomposerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status setCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncsetCameraParametersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncsetCameraParametersRaw(context, request, cq));
    }
    virtual ::grpc::Status decompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>> Asyncdecompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>>(AsyncdecomposeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>> PrepareAsyncdecompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>>(PrepareAsyncdecomposeRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void setCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) = 0;
      virtual void setCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void decompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void decompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* AsyncdecomposeRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* PrepareAsyncdecomposeRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status setCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncsetCameraParametersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncsetCameraParametersRaw(context, request, cq));
    }
    ::grpc::Status decompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>> Asyncdecompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>>(AsyncdecomposeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>> PrepareAsyncdecompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>>(PrepareAsyncdecomposeRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void setCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) override;
      void setCameraParameters(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) override;
      void decompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response, std::function<void(::grpc::Status)>) override;
      void decompose(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* AsyncdecomposeRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* PrepareAsyncdecomposeRaw(::grpc::ClientContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_setCameraParameters_;
    const ::grpc::internal::RpcMethod rpcmethod_decompose_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response);
    virtual ::grpc::Status decompose(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetCameraParameters(::grpc::ServerContext* context, ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_decompose : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_decompose() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_decompose() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status decompose(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdecompose(::grpc::ServerContext* context, ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_setCameraParameters<WithAsyncMethod_decompose<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest, ::google::protobuf::Empty>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response) { return this->setCameraParameters(context, request, response); }));}
    void SetMessageAllocatorFor_setCameraParameters(
        ::grpc::MessageAllocator< ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest, ::google::protobuf::Empty>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest, ::google::protobuf::Empty>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setCameraParameters(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_decompose : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_decompose() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcI2Dto3DTransformDecomposer::decomposeRequest, ::grpcI2Dto3DTransformDecomposer::decomposeResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response) { return this->decompose(context, request, response); }));}
    void SetMessageAllocatorFor_decompose(
        ::grpc::MessageAllocator< ::grpcI2Dto3DTransformDecomposer::decomposeRequest, ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcI2Dto3DTransformDecomposer::decomposeRequest, ::grpcI2Dto3DTransformDecomposer::decomposeResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_decompose() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status decompose(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* decompose(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_setCameraParameters<WithCallbackMethod_decompose<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_decompose : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_decompose() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_decompose() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status decompose(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetCameraParameters(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_decompose : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_decompose() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_decompose() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status decompose(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdecompose(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->setCameraParameters(context, request, response); }));
    }
    ~WithRawCallbackMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setCameraParameters(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_decompose : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_decompose() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->decompose(context, request, response); }));
    }
    ~WithRawCallbackMethod_decompose() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status decompose(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* decompose(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest, ::google::protobuf::Empty>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest, ::google::protobuf::Empty>* streamer) {
                       return this->StreamedsetCameraParameters(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsetCameraParameters(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_decompose : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_decompose() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcI2Dto3DTransformDecomposer::decomposeRequest, ::grpcI2Dto3DTransformDecomposer::decomposeResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcI2Dto3DTransformDecomposer::decomposeRequest, ::grpcI2Dto3DTransformDecomposer::decomposeResponse>* streamer) {
                       return this->Streameddecompose(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_decompose() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status decompose(::grpc::ServerContext* /*context*/, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* /*request*/, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streameddecompose(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcI2Dto3DTransformDecomposer::decomposeRequest,::grpcI2Dto3DTransformDecomposer::decomposeResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_setCameraParameters<WithStreamedUnaryMethod_decompose<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_setCameraParameters<WithStreamedUnaryMethod_decompose<Service > > StreamedService;
};

}  // namespace grpcI2Dto3DTransformDecomposer


#endif  // GRPC_grpcI2Dto3DTransformDecomposerService_2eproto__INCLUDED
