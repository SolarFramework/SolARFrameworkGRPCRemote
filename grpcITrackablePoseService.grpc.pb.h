// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcITrackablePoseService.proto
#ifndef GRPC_grpcITrackablePoseService_2eproto__INCLUDED
#define GRPC_grpcITrackablePoseService_2eproto__INCLUDED

#include "grpcITrackablePoseService.pb.h"

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

namespace grpcITrackablePose {

class grpcITrackablePoseService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcITrackablePose.grpcITrackablePoseService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status setTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpcITrackablePose::setTrackableResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::setTrackableResponse>> AsyncsetTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::setTrackableResponse>>(AsyncsetTrackableRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::setTrackableResponse>> PrepareAsyncsetTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::setTrackableResponse>>(PrepareAsyncsetTrackableRaw(context, request, cq));
    }
    virtual ::grpc::Status estimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpcITrackablePose::estimateResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::estimateResponse>> Asyncestimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::estimateResponse>>(AsyncestimateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::estimateResponse>> PrepareAsyncestimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::estimateResponse>>(PrepareAsyncestimateRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void setTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void setTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void estimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void estimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::setTrackableResponse>* AsyncsetTrackableRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::setTrackableResponse>* PrepareAsyncsetTrackableRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::estimateResponse>* AsyncestimateRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcITrackablePose::estimateResponse>* PrepareAsyncestimateRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status setTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpcITrackablePose::setTrackableResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::setTrackableResponse>> AsyncsetTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::setTrackableResponse>>(AsyncsetTrackableRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::setTrackableResponse>> PrepareAsyncsetTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::setTrackableResponse>>(PrepareAsyncsetTrackableRaw(context, request, cq));
    }
    ::grpc::Status estimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpcITrackablePose::estimateResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::estimateResponse>> Asyncestimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::estimateResponse>>(AsyncestimateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::estimateResponse>> PrepareAsyncestimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::estimateResponse>>(PrepareAsyncestimateRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void setTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response, std::function<void(::grpc::Status)>) override;
      void setTrackable(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void estimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response, std::function<void(::grpc::Status)>) override;
      void estimate(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::setTrackableResponse>* AsyncsetTrackableRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::setTrackableResponse>* PrepareAsyncsetTrackableRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::setTrackableRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::estimateResponse>* AsyncestimateRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcITrackablePose::estimateResponse>* PrepareAsyncestimateRaw(::grpc::ClientContext* context, const ::grpcITrackablePose::estimateRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_setTrackable_;
    const ::grpc::internal::RpcMethod rpcmethod_estimate_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status setTrackable(::grpc::ServerContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response);
    virtual ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_setTrackable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_setTrackable() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_setTrackable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackable(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetTrackable(::grpc::ServerContext* context, ::grpcITrackablePose::setTrackableRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcITrackablePose::setTrackableResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_estimate() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate(::grpc::ServerContext* context, ::grpcITrackablePose::estimateRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcITrackablePose::estimateResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_setTrackable<WithAsyncMethod_estimate<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_setTrackable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_setTrackable() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcITrackablePose::setTrackableRequest, ::grpcITrackablePose::setTrackableResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response) { return this->setTrackable(context, request, response); }));}
    void SetMessageAllocatorFor_setTrackable(
        ::grpc::MessageAllocator< ::grpcITrackablePose::setTrackableRequest, ::grpcITrackablePose::setTrackableResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcITrackablePose::setTrackableRequest, ::grpcITrackablePose::setTrackableResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_setTrackable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackable(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setTrackable(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_estimate() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcITrackablePose::estimateRequest, ::grpcITrackablePose::estimateResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response) { return this->estimate(context, request, response); }));}
    void SetMessageAllocatorFor_estimate(
        ::grpc::MessageAllocator< ::grpcITrackablePose::estimateRequest, ::grpcITrackablePose::estimateResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcITrackablePose::estimateRequest, ::grpcITrackablePose::estimateResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_setTrackable<WithCallbackMethod_estimate<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_setTrackable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_setTrackable() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_setTrackable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackable(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_estimate() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_setTrackable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_setTrackable() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_setTrackable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackable(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetTrackable(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_estimate() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_setTrackable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_setTrackable() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->setTrackable(context, request, response); }));
    }
    ~WithRawCallbackMethod_setTrackable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackable(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setTrackable(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_estimate() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->estimate(context, request, response); }));
    }
    ~WithRawCallbackMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_setTrackable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_setTrackable() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcITrackablePose::setTrackableRequest, ::grpcITrackablePose::setTrackableResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcITrackablePose::setTrackableRequest, ::grpcITrackablePose::setTrackableResponse>* streamer) {
                       return this->StreamedsetTrackable(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_setTrackable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status setTrackable(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::setTrackableRequest* /*request*/, ::grpcITrackablePose::setTrackableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsetTrackable(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcITrackablePose::setTrackableRequest,::grpcITrackablePose::setTrackableResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_estimate() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcITrackablePose::estimateRequest, ::grpcITrackablePose::estimateResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcITrackablePose::estimateRequest, ::grpcITrackablePose::estimateResponse>* streamer) {
                       return this->Streamedestimate(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcITrackablePose::estimateRequest* /*request*/, ::grpcITrackablePose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedestimate(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcITrackablePose::estimateRequest,::grpcITrackablePose::estimateResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_setTrackable<WithStreamedUnaryMethod_estimate<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_setTrackable<WithStreamedUnaryMethod_estimate<Service > > StreamedService;
};

}  // namespace grpcITrackablePose


#endif  // GRPC_grpcITrackablePoseService_2eproto__INCLUDED
