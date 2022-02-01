// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDeviceService.proto
#ifndef GRPC_grpcIDeviceService_2eproto__INCLUDED
#define GRPC_grpcIDeviceService_2eproto__INCLUDED

#include "grpcIDeviceService.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
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

namespace grpcIDevice {

class grpcIDeviceService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIDevice.grpcIDeviceService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpcIDevice::startResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::startResponse>> Asyncstart(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::startResponse>>(AsyncstartRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::startResponse>> PrepareAsyncstart(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::startResponse>>(PrepareAsyncstartRaw(context, request, cq));
    }
    virtual ::grpc::Status stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpcIDevice::stopResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::stopResponse>> Asyncstop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::stopResponse>>(AsyncstopRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::stopResponse>> PrepareAsyncstop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::stopResponse>>(PrepareAsyncstopRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::startResponse>* AsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::startResponse>* PrepareAsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::stopResponse>* AsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDevice::stopResponse>* PrepareAsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpcIDevice::startResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>> Asyncstart(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>>(AsyncstartRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>> PrepareAsyncstart(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>>(PrepareAsyncstartRaw(context, request, cq));
    }
    ::grpc::Status stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpcIDevice::stopResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>> Asyncstop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>>(AsyncstopRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>> PrepareAsyncstop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>>(PrepareAsyncstopRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void start(::grpc::ClientContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void stop(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>* AsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDevice::startResponse>* PrepareAsyncstartRaw(::grpc::ClientContext* context, const ::grpcIDevice::startRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>* AsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDevice::stopResponse>* PrepareAsyncstopRaw(::grpc::ClientContext* context, const ::grpcIDevice::stopRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_start_;
    const ::grpc::internal::RpcMethod rpcmethod_stop_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response);
    virtual ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_start : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_start() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_start() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status start(::grpc::ServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requeststart(::grpc::ServerContext* context, ::grpcIDevice::startRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIDevice::startResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_stop : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_stop() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_stop() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status stop(::grpc::ServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requeststop(::grpc::ServerContext* context, ::grpcIDevice::stopRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIDevice::stopResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_start<WithAsyncMethod_stop<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_start : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_start() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIDevice::startRequest, ::grpcIDevice::startResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIDevice::startRequest* request, ::grpcIDevice::startResponse* response) { return this->start(context, request, response); }));}
    void SetMessageAllocatorFor_start(
        ::grpc::experimental::MessageAllocator< ::grpcIDevice::startRequest, ::grpcIDevice::startResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIDevice::startRequest, ::grpcIDevice::startResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_start() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status start(::grpc::ServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* start(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* start(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_stop : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_stop() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIDevice::stopRequest* request, ::grpcIDevice::stopResponse* response) { return this->stop(context, request, response); }));}
    void SetMessageAllocatorFor_stop(
        ::grpc::experimental::MessageAllocator< ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_stop() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status stop(::grpc::ServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* stop(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* stop(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_start<ExperimentalWithCallbackMethod_stop<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_start<ExperimentalWithCallbackMethod_stop<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_start : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_start() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_start() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status start(::grpc::ServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_stop : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_stop() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_stop() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status stop(::grpc::ServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_start : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_start() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_start() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status start(::grpc::ServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requeststart(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_stop : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_stop() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_stop() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status stop(::grpc::ServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requeststop(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_start : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_start() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->start(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_start() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status start(::grpc::ServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* start(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* start(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_stop : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_stop() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->stop(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_stop() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status stop(::grpc::ServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* stop(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* stop(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_start : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_start() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIDevice::startRequest, ::grpcIDevice::startResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIDevice::startRequest, ::grpcIDevice::startResponse>* streamer) {
                       return this->Streamedstart(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_start() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status start(::grpc::ServerContext* /*context*/, const ::grpcIDevice::startRequest* /*request*/, ::grpcIDevice::startResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedstart(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIDevice::startRequest,::grpcIDevice::startResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_stop : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_stop() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIDevice::stopRequest, ::grpcIDevice::stopResponse>* streamer) {
                       return this->Streamedstop(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_stop() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status stop(::grpc::ServerContext* /*context*/, const ::grpcIDevice::stopRequest* /*request*/, ::grpcIDevice::stopResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedstop(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIDevice::stopRequest,::grpcIDevice::stopResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_start<WithStreamedUnaryMethod_stop<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_start<WithStreamedUnaryMethod_stop<Service > > StreamedService;
};

}  // namespace grpcIDevice


#endif  // GRPC_grpcIDeviceService_2eproto__INCLUDED
