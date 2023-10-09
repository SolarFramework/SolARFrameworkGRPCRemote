// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIMultiTrackablesPoseService.proto
#ifndef GRPC_grpcIMultiTrackablesPoseService_2eproto__INCLUDED
#define GRPC_grpcIMultiTrackablesPoseService_2eproto__INCLUDED

#include "grpcIMultiTrackablesPoseService.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
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

namespace grpcIMultiTrackablesPose {

class grpcIMultiTrackablesPoseService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIMultiTrackablesPose.grpcIMultiTrackablesPoseService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::setTrackablesResponse>> AsyncsetTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::setTrackablesResponse>>(AsyncsetTrackablesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::setTrackablesResponse>> PrepareAsyncsetTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::setTrackablesResponse>>(PrepareAsyncsetTrackablesRaw(context, request, cq));
    }
    virtual ::grpc::Status estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpcIMultiTrackablesPose::estimateResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::estimateResponse>> Asyncestimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::estimateResponse>>(AsyncestimateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::estimateResponse>> PrepareAsyncestimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::estimateResponse>>(PrepareAsyncestimateRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::setTrackablesResponse>* AsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::setTrackablesResponse>* PrepareAsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::estimateResponse>* AsyncestimateRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIMultiTrackablesPose::estimateResponse>* PrepareAsyncestimateRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>> AsyncsetTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>>(AsyncsetTrackablesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>> PrepareAsyncsetTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>>(PrepareAsyncsetTrackablesRaw(context, request, cq));
    }
    ::grpc::Status estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpcIMultiTrackablesPose::estimateResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>> Asyncestimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>>(AsyncestimateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>> PrepareAsyncestimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>>(PrepareAsyncestimateRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response, std::function<void(::grpc::Status)>) override;
      void setTrackables(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response, std::function<void(::grpc::Status)>) override;
      void estimate(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>* AsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::setTrackablesResponse>* PrepareAsyncsetTrackablesRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>* AsyncestimateRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIMultiTrackablesPose::estimateResponse>* PrepareAsyncestimateRaw(::grpc::ClientContext* context, const ::grpcIMultiTrackablesPose::estimateRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_setTrackables_;
    const ::grpc::internal::RpcMethod rpcmethod_estimate_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status setTrackables(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response);
    virtual ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_setTrackables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_setTrackables() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_setTrackables() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackables(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetTrackables(::grpc::ServerContext* context, ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIMultiTrackablesPose::setTrackablesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
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
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate(::grpc::ServerContext* context, ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIMultiTrackablesPose::estimateResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_setTrackables<WithAsyncMethod_estimate<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_setTrackables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_setTrackables() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response) { return this->setTrackables(context, request, response); }));}
    void SetMessageAllocatorFor_setTrackables(
        ::grpc::MessageAllocator< ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_setTrackables() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackables(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setTrackables(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_estimate() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response) { return this->estimate(context, request, response); }));}
    void SetMessageAllocatorFor_estimate(
        ::grpc::MessageAllocator< ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_setTrackables<WithCallbackMethod_estimate<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_setTrackables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_setTrackables() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_setTrackables() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackables(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/) override {
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
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_setTrackables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_setTrackables() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_setTrackables() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackables(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetTrackables(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
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
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_setTrackables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_setTrackables() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->setTrackables(context, request, response); }));
    }
    ~WithRawCallbackMethod_setTrackables() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setTrackables(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setTrackables(
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
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_setTrackables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_setTrackables() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIMultiTrackablesPose::setTrackablesRequest, ::grpcIMultiTrackablesPose::setTrackablesResponse>* streamer) {
                       return this->StreamedsetTrackables(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_setTrackables() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status setTrackables(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::setTrackablesRequest* /*request*/, ::grpcIMultiTrackablesPose::setTrackablesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsetTrackables(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIMultiTrackablesPose::setTrackablesRequest,::grpcIMultiTrackablesPose::setTrackablesResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_estimate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_estimate() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIMultiTrackablesPose::estimateRequest, ::grpcIMultiTrackablesPose::estimateResponse>* streamer) {
                       return this->Streamedestimate(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_estimate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status estimate(::grpc::ServerContext* /*context*/, const ::grpcIMultiTrackablesPose::estimateRequest* /*request*/, ::grpcIMultiTrackablesPose::estimateResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedestimate(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIMultiTrackablesPose::estimateRequest,::grpcIMultiTrackablesPose::estimateResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_setTrackables<WithStreamedUnaryMethod_estimate<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_setTrackables<WithStreamedUnaryMethod_estimate<Service > > StreamedService;
};

}  // namespace grpcIMultiTrackablesPose


#endif  // GRPC_grpcIMultiTrackablesPoseService_2eproto__INCLUDED
