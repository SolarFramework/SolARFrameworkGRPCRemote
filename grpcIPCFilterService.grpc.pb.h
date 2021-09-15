// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIPCFilterService.proto
#ifndef GRPC_grpcIPCFilterService_2eproto__INCLUDED
#define GRPC_grpcIPCFilterService_2eproto__INCLUDED

#include "grpcIPCFilterService.pb.h"

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

namespace grpcIPCFilter {

class grpcIPCFilterService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIPCFilter.grpcIPCFilterService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpcIPCFilter::filterResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIPCFilter::filterResponse>> Asyncfilter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIPCFilter::filterResponse>>(AsyncfilterRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIPCFilter::filterResponse>> PrepareAsyncfilter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIPCFilter::filterResponse>>(PrepareAsyncfilterRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIPCFilter::filterResponse>* AsyncfilterRaw(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIPCFilter::filterResponse>* PrepareAsyncfilterRaw(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpcIPCFilter::filterResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIPCFilter::filterResponse>> Asyncfilter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIPCFilter::filterResponse>>(AsyncfilterRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIPCFilter::filterResponse>> PrepareAsyncfilter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIPCFilter::filterResponse>>(PrepareAsyncfilterRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void filter(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIPCFilter::filterResponse>* AsyncfilterRaw(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIPCFilter::filterResponse>* PrepareAsyncfilterRaw(::grpc::ClientContext* context, const ::grpcIPCFilter::filterRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_filter_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status filter(::grpc::ServerContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_filter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_filter() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_filter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status filter(::grpc::ServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfilter(::grpc::ServerContext* context, ::grpcIPCFilter::filterRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIPCFilter::filterResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_filter<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_filter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_filter() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIPCFilter::filterRequest, ::grpcIPCFilter::filterResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response) { return this->filter(context, request, response); }));}
    void SetMessageAllocatorFor_filter(
        ::grpc::experimental::MessageAllocator< ::grpcIPCFilter::filterRequest, ::grpcIPCFilter::filterResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIPCFilter::filterRequest, ::grpcIPCFilter::filterResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_filter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status filter(::grpc::ServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* filter(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* filter(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_filter<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_filter<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_filter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_filter() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_filter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status filter(::grpc::ServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_filter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_filter() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_filter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status filter(::grpc::ServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfilter(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_filter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_filter() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->filter(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_filter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status filter(::grpc::ServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* filter(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* filter(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_filter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_filter() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIPCFilter::filterRequest, ::grpcIPCFilter::filterResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIPCFilter::filterRequest, ::grpcIPCFilter::filterResponse>* streamer) {
                       return this->Streamedfilter(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_filter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status filter(::grpc::ServerContext* /*context*/, const ::grpcIPCFilter::filterRequest* /*request*/, ::grpcIPCFilter::filterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedfilter(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIPCFilter::filterRequest,::grpcIPCFilter::filterResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_filter<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_filter<Service > StreamedService;
};

}  // namespace grpcIPCFilter


#endif  // GRPC_grpcIPCFilterService_2eproto__INCLUDED
