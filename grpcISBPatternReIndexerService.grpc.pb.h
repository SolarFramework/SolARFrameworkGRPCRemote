// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcISBPatternReIndexerService.proto
#ifndef GRPC_grpcISBPatternReIndexerService_2eproto__INCLUDED
#define GRPC_grpcISBPatternReIndexerService_2eproto__INCLUDED

#include "grpcISBPatternReIndexerService.pb.h"

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

namespace grpcISBPatternReIndexer {

class grpcISBPatternReIndexerService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcISBPatternReIndexer.grpcISBPatternReIndexerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status reindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpcISBPatternReIndexer::reindexResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcISBPatternReIndexer::reindexResponse>> Asyncreindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcISBPatternReIndexer::reindexResponse>>(AsyncreindexRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcISBPatternReIndexer::reindexResponse>> PrepareAsyncreindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcISBPatternReIndexer::reindexResponse>>(PrepareAsyncreindexRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void reindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void reindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcISBPatternReIndexer::reindexResponse>* AsyncreindexRaw(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcISBPatternReIndexer::reindexResponse>* PrepareAsyncreindexRaw(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status reindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpcISBPatternReIndexer::reindexResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcISBPatternReIndexer::reindexResponse>> Asyncreindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcISBPatternReIndexer::reindexResponse>>(AsyncreindexRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcISBPatternReIndexer::reindexResponse>> PrepareAsyncreindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcISBPatternReIndexer::reindexResponse>>(PrepareAsyncreindexRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void reindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response, std::function<void(::grpc::Status)>) override;
      void reindex(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcISBPatternReIndexer::reindexResponse>* AsyncreindexRaw(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcISBPatternReIndexer::reindexResponse>* PrepareAsyncreindexRaw(::grpc::ClientContext* context, const ::grpcISBPatternReIndexer::reindexRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_reindex_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status reindex(::grpc::ServerContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_reindex : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_reindex() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_reindex() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status reindex(::grpc::ServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestreindex(::grpc::ServerContext* context, ::grpcISBPatternReIndexer::reindexRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcISBPatternReIndexer::reindexResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_reindex<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_reindex : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_reindex() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcISBPatternReIndexer::reindexRequest, ::grpcISBPatternReIndexer::reindexResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response) { return this->reindex(context, request, response); }));}
    void SetMessageAllocatorFor_reindex(
        ::grpc::MessageAllocator< ::grpcISBPatternReIndexer::reindexRequest, ::grpcISBPatternReIndexer::reindexResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcISBPatternReIndexer::reindexRequest, ::grpcISBPatternReIndexer::reindexResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_reindex() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status reindex(::grpc::ServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* reindex(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_reindex<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_reindex : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_reindex() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_reindex() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status reindex(::grpc::ServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_reindex : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_reindex() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_reindex() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status reindex(::grpc::ServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestreindex(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_reindex : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_reindex() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->reindex(context, request, response); }));
    }
    ~WithRawCallbackMethod_reindex() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status reindex(::grpc::ServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* reindex(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_reindex : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_reindex() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcISBPatternReIndexer::reindexRequest, ::grpcISBPatternReIndexer::reindexResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcISBPatternReIndexer::reindexRequest, ::grpcISBPatternReIndexer::reindexResponse>* streamer) {
                       return this->Streamedreindex(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_reindex() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status reindex(::grpc::ServerContext* /*context*/, const ::grpcISBPatternReIndexer::reindexRequest* /*request*/, ::grpcISBPatternReIndexer::reindexResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedreindex(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcISBPatternReIndexer::reindexRequest,::grpcISBPatternReIndexer::reindexResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_reindex<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_reindex<Service > StreamedService;
};

}  // namespace grpcISBPatternReIndexer


#endif  // GRPC_grpcISBPatternReIndexerService_2eproto__INCLUDED
