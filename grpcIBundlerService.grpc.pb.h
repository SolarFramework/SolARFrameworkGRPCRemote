// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIBundlerService.proto
#ifndef GRPC_grpcIBundlerService_2eproto__INCLUDED
#define GRPC_grpcIBundlerService_2eproto__INCLUDED

#include "grpcIBundlerService.pb.h"

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

namespace grpcIBundler {

class grpcIBundlerService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIBundler.grpcIBundlerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpcIBundler::setMapperResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::setMapperResponse>> AsyncsetMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::setMapperResponse>>(AsyncsetMapperRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::setMapperResponse>> PrepareAsyncsetMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::setMapperResponse>>(PrepareAsyncsetMapperRaw(context, request, cq));
    }
    virtual ::grpc::Status bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpcIBundler::bundleAdjustmentResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::bundleAdjustmentResponse>> AsyncbundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::bundleAdjustmentResponse>>(AsyncbundleAdjustmentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::bundleAdjustmentResponse>> PrepareAsyncbundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::bundleAdjustmentResponse>>(PrepareAsyncbundleAdjustmentRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::setMapperResponse>* AsyncsetMapperRaw(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::setMapperResponse>* PrepareAsyncsetMapperRaw(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::bundleAdjustmentResponse>* AsyncbundleAdjustmentRaw(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBundler::bundleAdjustmentResponse>* PrepareAsyncbundleAdjustmentRaw(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpcIBundler::setMapperResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapperResponse>> AsyncsetMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapperResponse>>(AsyncsetMapperRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapperResponse>> PrepareAsyncsetMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapperResponse>>(PrepareAsyncsetMapperRaw(context, request, cq));
    }
    ::grpc::Status bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpcIBundler::bundleAdjustmentResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>> AsyncbundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>>(AsyncbundleAdjustmentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>> PrepareAsyncbundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>>(PrepareAsyncbundleAdjustmentRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void setMapper(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void bundleAdjustment(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapperResponse>* AsyncsetMapperRaw(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIBundler::setMapperResponse>* PrepareAsyncsetMapperRaw(::grpc::ClientContext* context, const ::grpcIBundler::setMapperRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>* AsyncbundleAdjustmentRaw(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIBundler::bundleAdjustmentResponse>* PrepareAsyncbundleAdjustmentRaw(::grpc::ClientContext* context, const ::grpcIBundler::bundleAdjustmentRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_setMapper_;
    const ::grpc::internal::RpcMethod rpcmethod_bundleAdjustment_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status setMapper(::grpc::ServerContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response);
    virtual ::grpc::Status bundleAdjustment(::grpc::ServerContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_setMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_setMapper() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_setMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setMapper(::grpc::ServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetMapper(::grpc::ServerContext* context, ::grpcIBundler::setMapperRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIBundler::setMapperResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_bundleAdjustment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_bundleAdjustment() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_bundleAdjustment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bundleAdjustment(::grpc::ServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestbundleAdjustment(::grpc::ServerContext* context, ::grpcIBundler::bundleAdjustmentRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIBundler::bundleAdjustmentResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_setMapper<WithAsyncMethod_bundleAdjustment<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_setMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_setMapper() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIBundler::setMapperRequest, ::grpcIBundler::setMapperResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response) { return this->setMapper(context, request, response); }));}
    void SetMessageAllocatorFor_setMapper(
        ::grpc::experimental::MessageAllocator< ::grpcIBundler::setMapperRequest, ::grpcIBundler::setMapperResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIBundler::setMapperRequest, ::grpcIBundler::setMapperResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_setMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setMapper(::grpc::ServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* setMapper(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* setMapper(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_bundleAdjustment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_bundleAdjustment() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response) { return this->bundleAdjustment(context, request, response); }));}
    void SetMessageAllocatorFor_bundleAdjustment(
        ::grpc::experimental::MessageAllocator< ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_bundleAdjustment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bundleAdjustment(::grpc::ServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* bundleAdjustment(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* bundleAdjustment(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_setMapper<ExperimentalWithCallbackMethod_bundleAdjustment<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_setMapper<ExperimentalWithCallbackMethod_bundleAdjustment<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_setMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_setMapper() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_setMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setMapper(::grpc::ServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_bundleAdjustment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_bundleAdjustment() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_bundleAdjustment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bundleAdjustment(::grpc::ServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_setMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_setMapper() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_setMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setMapper(::grpc::ServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetMapper(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_bundleAdjustment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_bundleAdjustment() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_bundleAdjustment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bundleAdjustment(::grpc::ServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestbundleAdjustment(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_setMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_setMapper() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->setMapper(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_setMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setMapper(::grpc::ServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* setMapper(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* setMapper(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_bundleAdjustment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_bundleAdjustment() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->bundleAdjustment(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_bundleAdjustment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bundleAdjustment(::grpc::ServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* bundleAdjustment(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* bundleAdjustment(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_setMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_setMapper() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIBundler::setMapperRequest, ::grpcIBundler::setMapperResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIBundler::setMapperRequest, ::grpcIBundler::setMapperResponse>* streamer) {
                       return this->StreamedsetMapper(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_setMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status setMapper(::grpc::ServerContext* /*context*/, const ::grpcIBundler::setMapperRequest* /*request*/, ::grpcIBundler::setMapperResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsetMapper(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIBundler::setMapperRequest,::grpcIBundler::setMapperResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_bundleAdjustment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_bundleAdjustment() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIBundler::bundleAdjustmentRequest, ::grpcIBundler::bundleAdjustmentResponse>* streamer) {
                       return this->StreamedbundleAdjustment(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_bundleAdjustment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status bundleAdjustment(::grpc::ServerContext* /*context*/, const ::grpcIBundler::bundleAdjustmentRequest* /*request*/, ::grpcIBundler::bundleAdjustmentResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedbundleAdjustment(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIBundler::bundleAdjustmentRequest,::grpcIBundler::bundleAdjustmentResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_setMapper<WithStreamedUnaryMethod_bundleAdjustment<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_setMapper<WithStreamedUnaryMethod_bundleAdjustment<Service > > StreamedService;
};

}  // namespace grpcIBundler


#endif  // GRPC_grpcIBundlerService_2eproto__INCLUDED
