// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcI2DTransformFinderService.proto
#ifndef GRPC_grpcI2DTransformFinderService_2eproto__INCLUDED
#define GRPC_grpcI2DTransformFinderService_2eproto__INCLUDED

#include "grpcI2DTransformFinderService.pb.h"

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

namespace grpcI2DTransformFinder {

class grpcI2DTransformFinderService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcI2DTransformFinder.grpcI2DTransformFinderService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status find(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpcI2DTransformFinder::findTransform2DResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2DTransformFinder::findTransform2DResponse>> Asyncfind(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2DTransformFinder::findTransform2DResponse>>(AsyncfindRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2DTransformFinder::findTransform2DResponse>> PrepareAsyncfind(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2DTransformFinder::findTransform2DResponse>>(PrepareAsyncfindRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void find(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void find(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2DTransformFinder::findTransform2DResponse>* AsyncfindRaw(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcI2DTransformFinder::findTransform2DResponse>* PrepareAsyncfindRaw(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status find(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpcI2DTransformFinder::findTransform2DResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2DTransformFinder::findTransform2DResponse>> Asyncfind(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2DTransformFinder::findTransform2DResponse>>(AsyncfindRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2DTransformFinder::findTransform2DResponse>> PrepareAsyncfind(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcI2DTransformFinder::findTransform2DResponse>>(PrepareAsyncfindRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void find(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response, std::function<void(::grpc::Status)>) override;
      void find(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcI2DTransformFinder::findTransform2DResponse>* AsyncfindRaw(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcI2DTransformFinder::findTransform2DResponse>* PrepareAsyncfindRaw(::grpc::ClientContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_find_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status find(::grpc::ServerContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_find() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_find() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind(::grpc::ServerContext* context, ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcI2DTransformFinder::findTransform2DResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_find<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_find() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcI2DTransformFinder::findTransform2DRequest, ::grpcI2DTransformFinder::findTransform2DResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response) { return this->find(context, request, response); }));}
    void SetMessageAllocatorFor_find(
        ::grpc::MessageAllocator< ::grpcI2DTransformFinder::findTransform2DRequest, ::grpcI2DTransformFinder::findTransform2DResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcI2DTransformFinder::findTransform2DRequest, ::grpcI2DTransformFinder::findTransform2DResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_find() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* find(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_find<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_find() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_find() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_find() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_find() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestfind(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_find() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->find(context, request, response); }));
    }
    ~WithRawCallbackMethod_find() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status find(::grpc::ServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* find(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_find : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_find() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcI2DTransformFinder::findTransform2DRequest, ::grpcI2DTransformFinder::findTransform2DResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcI2DTransformFinder::findTransform2DRequest, ::grpcI2DTransformFinder::findTransform2DResponse>* streamer) {
                       return this->Streamedfind(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_find() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status find(::grpc::ServerContext* /*context*/, const ::grpcI2DTransformFinder::findTransform2DRequest* /*request*/, ::grpcI2DTransformFinder::findTransform2DResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedfind(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcI2DTransformFinder::findTransform2DRequest,::grpcI2DTransformFinder::findTransform2DResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_find<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_find<Service > StreamedService;
};

}  // namespace grpcI2DTransformFinder


#endif  // GRPC_grpcI2DTransformFinderService_2eproto__INCLUDED
