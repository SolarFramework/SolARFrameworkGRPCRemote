// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIOpticalFlowEstimatorService.proto
#ifndef GRPC_grpcIOpticalFlowEstimatorService_2eproto__INCLUDED
#define GRPC_grpcIOpticalFlowEstimatorService_2eproto__INCLUDED

#include "grpcIOpticalFlowEstimatorService.pb.h"

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

namespace grpcIOpticalFlowEstimator {

class grpcIOpticalFlowEstimatorService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIOpticalFlowEstimator.grpcIOpticalFlowEstimatorService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status estimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>> Asyncestimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>>(Asyncestimate_grpc0Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>> PrepareAsyncestimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>>(PrepareAsyncestimate_grpc0Raw(context, request, cq));
    }
    virtual ::grpc::Status estimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>> Asyncestimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>>(Asyncestimate_grpc1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>> PrepareAsyncestimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>>(PrepareAsyncestimate_grpc1Raw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void estimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response, std::function<void(::grpc::Status)>) = 0;
      virtual void estimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void estimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response, std::function<void(::grpc::Status)>) = 0;
      virtual void estimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* Asyncestimate_grpc0Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* PrepareAsyncestimate_grpc0Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* Asyncestimate_grpc1Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* PrepareAsyncestimate_grpc1Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status estimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>> Asyncestimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>>(Asyncestimate_grpc0Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>> PrepareAsyncestimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>>(PrepareAsyncestimate_grpc0Raw(context, request, cq));
    }
    ::grpc::Status estimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>> Asyncestimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>>(Asyncestimate_grpc1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>> PrepareAsyncestimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>>(PrepareAsyncestimate_grpc1Raw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void estimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response, std::function<void(::grpc::Status)>) override;
      void estimate_grpc0(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) override;
      void estimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response, std::function<void(::grpc::Status)>) override;
      void estimate_grpc1(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* Asyncestimate_grpc0Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* PrepareAsyncestimate_grpc0Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* Asyncestimate_grpc1Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* PrepareAsyncestimate_grpc1Raw(::grpc::ClientContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_estimate_grpc0_;
    const ::grpc::internal::RpcMethod rpcmethod_estimate_grpc1_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status estimate_grpc0(::grpc::ServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response);
    virtual ::grpc::Status estimate_grpc1(::grpc::ServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_estimate_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_estimate_grpc0() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_estimate_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate_grpc0(::grpc::ServerContext* context, ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpc::ServerAsyncResponseWriter< ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_estimate_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_estimate_grpc1() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_estimate_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate_grpc1(::grpc::ServerContext* context, ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpc::ServerAsyncResponseWriter< ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_estimate_grpc0<WithAsyncMethod_estimate_grpc1<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_estimate_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_estimate_grpc0() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIOpticalFlowEstimator::estimate_grpc0Request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response) { return this->estimate_grpc0(context, request, response); }));}
    void SetMessageAllocatorFor_estimate_grpc0(
        ::grpc::MessageAllocator< ::grpcIOpticalFlowEstimator::estimate_grpc0Request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIOpticalFlowEstimator::estimate_grpc0Request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_estimate_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate_grpc0(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_estimate_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_estimate_grpc1() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIOpticalFlowEstimator::estimate_grpc1Request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response) { return this->estimate_grpc1(context, request, response); }));}
    void SetMessageAllocatorFor_estimate_grpc1(
        ::grpc::MessageAllocator< ::grpcIOpticalFlowEstimator::estimate_grpc1Request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIOpticalFlowEstimator::estimate_grpc1Request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_estimate_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate_grpc1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_estimate_grpc0<WithCallbackMethod_estimate_grpc1<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_estimate_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_estimate_grpc0() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_estimate_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_estimate_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_estimate_grpc1() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_estimate_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_estimate_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_estimate_grpc0() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_estimate_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate_grpc0(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_estimate_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_estimate_grpc1() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_estimate_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestestimate_grpc1(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_estimate_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_estimate_grpc0() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->estimate_grpc0(context, request, response); }));
    }
    ~WithRawCallbackMethod_estimate_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate_grpc0(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_estimate_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_estimate_grpc1() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->estimate_grpc1(context, request, response); }));
    }
    ~WithRawCallbackMethod_estimate_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status estimate_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* estimate_grpc1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_estimate_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_estimate_grpc0() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIOpticalFlowEstimator::estimate_grpc0Request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIOpticalFlowEstimator::estimate_grpc0Request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response>* streamer) {
                       return this->Streamedestimate_grpc0(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_estimate_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status estimate_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedestimate_grpc0(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIOpticalFlowEstimator::estimate_grpc0Request,::grpcIOpticalFlowEstimator::estimate_grpc0Response>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_estimate_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_estimate_grpc1() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIOpticalFlowEstimator::estimate_grpc1Request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIOpticalFlowEstimator::estimate_grpc1Request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response>* streamer) {
                       return this->Streamedestimate_grpc1(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_estimate_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status estimate_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* /*request*/, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedestimate_grpc1(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIOpticalFlowEstimator::estimate_grpc1Request,::grpcIOpticalFlowEstimator::estimate_grpc1Response>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_estimate_grpc0<WithStreamedUnaryMethod_estimate_grpc1<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_estimate_grpc0<WithStreamedUnaryMethod_estimate_grpc1<Service > > StreamedService;
};

}  // namespace grpcIOpticalFlowEstimator


#endif  // GRPC_grpcIOpticalFlowEstimatorService_2eproto__INCLUDED
