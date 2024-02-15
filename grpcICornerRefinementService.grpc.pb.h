// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcICornerRefinementService.proto
#ifndef GRPC_grpcICornerRefinementService_2eproto__INCLUDED
#define GRPC_grpcICornerRefinementService_2eproto__INCLUDED

#include "grpcICornerRefinementService.pb.h"

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

namespace grpcICornerRefinement {

class grpcICornerRefinementService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcICornerRefinement.grpcICornerRefinementService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status refine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpcICornerRefinement::refineResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcICornerRefinement::refineResponse>> Asyncrefine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcICornerRefinement::refineResponse>>(AsyncrefineRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcICornerRefinement::refineResponse>> PrepareAsyncrefine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcICornerRefinement::refineResponse>>(PrepareAsyncrefineRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void refine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void refine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcICornerRefinement::refineResponse>* AsyncrefineRaw(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcICornerRefinement::refineResponse>* PrepareAsyncrefineRaw(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status refine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpcICornerRefinement::refineResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcICornerRefinement::refineResponse>> Asyncrefine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcICornerRefinement::refineResponse>>(AsyncrefineRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcICornerRefinement::refineResponse>> PrepareAsyncrefine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcICornerRefinement::refineResponse>>(PrepareAsyncrefineRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void refine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response, std::function<void(::grpc::Status)>) override;
      void refine(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcICornerRefinement::refineResponse>* AsyncrefineRaw(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcICornerRefinement::refineResponse>* PrepareAsyncrefineRaw(::grpc::ClientContext* context, const ::grpcICornerRefinement::refineRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_refine_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status refine(::grpc::ServerContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_refine : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_refine() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_refine() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status refine(::grpc::ServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestrefine(::grpc::ServerContext* context, ::grpcICornerRefinement::refineRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcICornerRefinement::refineResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_refine<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_refine : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_refine() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcICornerRefinement::refineRequest, ::grpcICornerRefinement::refineResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response) { return this->refine(context, request, response); }));}
    void SetMessageAllocatorFor_refine(
        ::grpc::MessageAllocator< ::grpcICornerRefinement::refineRequest, ::grpcICornerRefinement::refineResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcICornerRefinement::refineRequest, ::grpcICornerRefinement::refineResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_refine() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status refine(::grpc::ServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* refine(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_refine<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_refine : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_refine() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_refine() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status refine(::grpc::ServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_refine : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_refine() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_refine() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status refine(::grpc::ServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestrefine(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_refine : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_refine() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->refine(context, request, response); }));
    }
    ~WithRawCallbackMethod_refine() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status refine(::grpc::ServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* refine(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_refine : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_refine() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcICornerRefinement::refineRequest, ::grpcICornerRefinement::refineResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcICornerRefinement::refineRequest, ::grpcICornerRefinement::refineResponse>* streamer) {
                       return this->Streamedrefine(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_refine() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status refine(::grpc::ServerContext* /*context*/, const ::grpcICornerRefinement::refineRequest* /*request*/, ::grpcICornerRefinement::refineResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedrefine(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcICornerRefinement::refineRequest,::grpcICornerRefinement::refineResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_refine<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_refine<Service > StreamedService;
};

}  // namespace grpcICornerRefinement


#endif  // GRPC_grpcICornerRefinementService_2eproto__INCLUDED
