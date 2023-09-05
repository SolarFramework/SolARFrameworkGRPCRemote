// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI3D3DCorrespondencesFinderService.proto
#ifndef GRPC_grpcI3D3DCorrespondencesFinderService_2eproto__INCLUDED
#define GRPC_grpcI3D3DCorrespondencesFinderService_2eproto__INCLUDED

#include "grpcI3D3DCorrespondencesFinderService.pb.h"

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

namespace grpcI3D3DCorrespondencesFinder {

class grpcI3D3DCorrespondencesFinderService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcI3D3DCorrespondencesFinder.grpcI3D3DCorrespondencesFinderService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>> Asyncfind_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>>(Asyncfind_grpc0Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>> PrepareAsyncfind_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>>(PrepareAsyncfind_grpc0Raw(context, request, cq));
    }
    virtual ::grpc::Status find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>> Asyncfind_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>>(Asyncfind_grpc1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>> PrepareAsyncfind_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>>(PrepareAsyncfind_grpc1Raw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* Asyncfind_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* PrepareAsyncfind_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* Asyncfind_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* PrepareAsyncfind_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>> Asyncfind_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>>(Asyncfind_grpc0Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>> PrepareAsyncfind_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>>(PrepareAsyncfind_grpc0Raw(context, request, cq));
    }
    ::grpc::Status find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>> Asyncfind_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>>(Asyncfind_grpc1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>> PrepareAsyncfind_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>>(PrepareAsyncfind_grpc1Raw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void find_grpc0(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void find_grpc1(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* Asyncfind_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* PrepareAsyncfind_grpc0Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* Asyncfind_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* PrepareAsyncfind_grpc1Raw(::grpc::ClientContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_find_grpc0_;
    const ::grpc::internal::RpcMethod rpcmethod_find_grpc1_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status find_grpc0(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response);
    virtual ::grpc::Status find_grpc1(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_find_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_find_grpc0() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_find_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc0(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind_grpc0(::grpc::ServerContext* context, ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpc::ServerAsyncResponseWriter< ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_find_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_find_grpc1() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_find_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc1(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind_grpc1(::grpc::ServerContext* context, ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpc::ServerAsyncResponseWriter< ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_find_grpc0<WithAsyncMethod_find_grpc1<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_find_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_find_grpc0() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response) { return this->find_grpc0(context, request, response); }));}
    void SetMessageAllocatorFor_find_grpc0(
        ::grpc::experimental::MessageAllocator< ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_find_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc0(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* find_grpc0(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* find_grpc0(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_find_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_find_grpc1() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response) { return this->find_grpc1(context, request, response); }));}
    void SetMessageAllocatorFor_find_grpc1(
        ::grpc::experimental::MessageAllocator< ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_find_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc1(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* find_grpc1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* find_grpc1(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_find_grpc0<ExperimentalWithCallbackMethod_find_grpc1<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_find_grpc0<ExperimentalWithCallbackMethod_find_grpc1<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_find_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_find_grpc0() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_find_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc0(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_find_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_find_grpc1() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_find_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc1(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_find_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_find_grpc0() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_find_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc0(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind_grpc0(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_find_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_find_grpc1() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_find_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc1(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind_grpc1(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_find_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_find_grpc0() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->find_grpc0(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_find_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc0(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* find_grpc0(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* find_grpc0(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_find_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_find_grpc1() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->find_grpc1(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_find_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find_grpc1(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* find_grpc1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* find_grpc1(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_find_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_find_grpc0() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcI3D3DCorrespondencesFinder::find_grpc0Request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* streamer) {
                       return this->Streamedfind_grpc0(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_find_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status find_grpc0(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedfind_grpc0(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcI3D3DCorrespondencesFinder::find_grpc0Request,::grpcI3D3DCorrespondencesFinder::find_grpc0Response>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_find_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_find_grpc1() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcI3D3DCorrespondencesFinder::find_grpc1Request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* streamer) {
                       return this->Streamedfind_grpc1(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_find_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status find_grpc1(::grpc::ServerContext* /*context*/, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* /*request*/, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedfind_grpc1(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcI3D3DCorrespondencesFinder::find_grpc1Request,::grpcI3D3DCorrespondencesFinder::find_grpc1Response>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_find_grpc0<WithStreamedUnaryMethod_find_grpc1<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_find_grpc0<WithStreamedUnaryMethod_find_grpc1<Service > > StreamedService;
};

}  // namespace grpcI3D3DCorrespondencesFinder


#endif  // GRPC_grpcI3D3DCorrespondencesFinderService_2eproto__INCLUDED
