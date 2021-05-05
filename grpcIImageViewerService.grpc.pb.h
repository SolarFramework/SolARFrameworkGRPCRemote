// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIImageViewerService.proto
#ifndef GRPC_grpcIImageViewerService_2eproto__INCLUDED
#define GRPC_grpcIImageViewerService_2eproto__INCLUDED

#include "grpcIImageViewerService.pb.h"

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

namespace grpcIImageViewer {

class grpcIImageViewerService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIImageViewer.grpcIImageViewerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpcIImageViewer::displayResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayResponse>> Asyncdisplay(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayResponse>>(AsyncdisplayRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayResponse>> PrepareAsyncdisplay(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayResponse>>(PrepareAsyncdisplayRaw(context, request, cq));
    }
    virtual ::grpc::Status displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpcIImageViewer::displayKeyResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayKeyResponse>> AsyncdisplayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayKeyResponse>>(AsyncdisplayKeyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayKeyResponse>> PrepareAsyncdisplayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayKeyResponse>>(PrepareAsyncdisplayKeyRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayResponse>* AsyncdisplayRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayResponse>* PrepareAsyncdisplayRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayKeyResponse>* AsyncdisplayKeyRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageViewer::displayKeyResponse>* PrepareAsyncdisplayKeyRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpcIImageViewer::displayResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>> Asyncdisplay(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>>(AsyncdisplayRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>> PrepareAsyncdisplay(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>>(PrepareAsyncdisplayRaw(context, request, cq));
    }
    ::grpc::Status displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpcIImageViewer::displayKeyResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>> AsyncdisplayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>>(AsyncdisplayKeyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>> PrepareAsyncdisplayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>>(PrepareAsyncdisplayKeyRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void display(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void displayKey(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>* AsyncdisplayRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayResponse>* PrepareAsyncdisplayRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>* AsyncdisplayKeyRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageViewer::displayKeyResponse>* PrepareAsyncdisplayKeyRaw(::grpc::ClientContext* context, const ::grpcIImageViewer::displayKeyRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_display_;
    const ::grpc::internal::RpcMethod rpcmethod_displayKey_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status display(::grpc::ServerContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response);
    virtual ::grpc::Status displayKey(::grpc::ServerContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_display : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_display() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_display() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status display(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdisplay(::grpc::ServerContext* context, ::grpcIImageViewer::displayRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIImageViewer::displayResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_displayKey : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_displayKey() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_displayKey() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status displayKey(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestdisplayKey(::grpc::ServerContext* context, ::grpcIImageViewer::displayKeyRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIImageViewer::displayKeyResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_display<WithAsyncMethod_displayKey<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_display : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_display() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response) { return this->display(context, request, response); }));}
    void SetMessageAllocatorFor_display(
        ::grpc::experimental::MessageAllocator< ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_display() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status display(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* display(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* display(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_displayKey : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_displayKey() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response) { return this->displayKey(context, request, response); }));}
    void SetMessageAllocatorFor_displayKey(
        ::grpc::experimental::MessageAllocator< ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_displayKey() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status displayKey(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* displayKey(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* displayKey(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_display<ExperimentalWithCallbackMethod_displayKey<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_display<ExperimentalWithCallbackMethod_displayKey<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_display : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_display() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_display() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status display(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_displayKey : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_displayKey() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_displayKey() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status displayKey(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_display : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_display() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_display() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status display(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdisplay(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_displayKey : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_displayKey() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_displayKey() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status displayKey(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestdisplayKey(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_display : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_display() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->display(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_display() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status display(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* display(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* display(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_displayKey : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_displayKey() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->displayKey(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_displayKey() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status displayKey(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* displayKey(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* displayKey(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_display : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_display() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIImageViewer::displayRequest, ::grpcIImageViewer::displayResponse>* streamer) {
                       return this->Streameddisplay(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_display() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status display(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayRequest* /*request*/, ::grpcIImageViewer::displayResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streameddisplay(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIImageViewer::displayRequest,::grpcIImageViewer::displayResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_displayKey : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_displayKey() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIImageViewer::displayKeyRequest, ::grpcIImageViewer::displayKeyResponse>* streamer) {
                       return this->StreameddisplayKey(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_displayKey() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status displayKey(::grpc::ServerContext* /*context*/, const ::grpcIImageViewer::displayKeyRequest* /*request*/, ::grpcIImageViewer::displayKeyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreameddisplayKey(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIImageViewer::displayKeyRequest,::grpcIImageViewer::displayKeyResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_display<WithStreamedUnaryMethod_displayKey<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_display<WithStreamedUnaryMethod_displayKey<Service > > StreamedService;
};

}  // namespace grpcIImageViewer


#endif  // GRPC_grpcIImageViewerService_2eproto__INCLUDED
