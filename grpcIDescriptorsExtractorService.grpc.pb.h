// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDescriptorsExtractorService.proto
#ifndef GRPC_grpcIDescriptorsExtractorService_2eproto__INCLUDED
#define GRPC_grpcIDescriptorsExtractorService_2eproto__INCLUDED

#include "grpcIDescriptorsExtractorService.pb.h"

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

namespace grpcIDescriptorsExtractor {

class grpcIDescriptorsExtractorService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIDescriptorsExtractor.grpcIDescriptorsExtractorService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::getTypeStringResponse>> AsyncgetTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::getTypeStringResponse>>(AsyncgetTypeStringRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::getTypeStringResponse>> PrepareAsyncgetTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::getTypeStringResponse>>(PrepareAsyncgetTypeStringRaw(context, request, cq));
    }
    virtual ::grpc::Status extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpcIDescriptorsExtractor::extractResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::extractResponse>> Asyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::extractResponse>>(AsyncextractRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::extractResponse>> PrepareAsyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::extractResponse>>(PrepareAsyncextractRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::getTypeStringResponse>* AsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::getTypeStringResponse>* PrepareAsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::extractResponse>* AsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractor::extractResponse>* PrepareAsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::getTypeStringResponse>> AsyncgetTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::getTypeStringResponse>>(AsyncgetTypeStringRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::getTypeStringResponse>> PrepareAsyncgetTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::getTypeStringResponse>>(PrepareAsyncgetTypeStringRaw(context, request, cq));
    }
    ::grpc::Status extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpcIDescriptorsExtractor::extractResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::extractResponse>> Asyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::extractResponse>>(AsyncextractRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::extractResponse>> PrepareAsyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::extractResponse>>(PrepareAsyncextractRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response, std::function<void(::grpc::Status)>) override;
      void getTypeString(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response, std::function<void(::grpc::Status)>) override;
      void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::getTypeStringResponse>* AsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::getTypeStringResponse>* PrepareAsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::extractResponse>* AsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractor::extractResponse>* PrepareAsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractor::extractRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_getTypeString_;
    const ::grpc::internal::RpcMethod rpcmethod_extract_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status getTypeString(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response);
    virtual ::grpc::Status extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_getTypeString() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetTypeString(::grpc::ServerContext* context, ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIDescriptorsExtractor::getTypeStringResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_extract() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestextract(::grpc::ServerContext* context, ::grpcIDescriptorsExtractor::extractRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIDescriptorsExtractor::extractResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_getTypeString<WithAsyncMethod_extract<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_getTypeString() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIDescriptorsExtractor::getTypeStringRequest, ::grpcIDescriptorsExtractor::getTypeStringResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response) { return this->getTypeString(context, request, response); }));}
    void SetMessageAllocatorFor_getTypeString(
        ::grpc::MessageAllocator< ::grpcIDescriptorsExtractor::getTypeStringRequest, ::grpcIDescriptorsExtractor::getTypeStringResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIDescriptorsExtractor::getTypeStringRequest, ::grpcIDescriptorsExtractor::getTypeStringResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* getTypeString(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_extract() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIDescriptorsExtractor::extractRequest, ::grpcIDescriptorsExtractor::extractResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response) { return this->extract(context, request, response); }));}
    void SetMessageAllocatorFor_extract(
        ::grpc::MessageAllocator< ::grpcIDescriptorsExtractor::extractRequest, ::grpcIDescriptorsExtractor::extractResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIDescriptorsExtractor::extractRequest, ::grpcIDescriptorsExtractor::extractResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* extract(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_getTypeString<WithCallbackMethod_extract<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_getTypeString() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_extract() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_getTypeString() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetTypeString(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_extract() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestextract(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_getTypeString() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->getTypeString(context, request, response); }));
    }
    ~WithRawCallbackMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* getTypeString(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_extract() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->extract(context, request, response); }));
    }
    ~WithRawCallbackMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* extract(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_getTypeString() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIDescriptorsExtractor::getTypeStringRequest, ::grpcIDescriptorsExtractor::getTypeStringResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIDescriptorsExtractor::getTypeStringRequest, ::grpcIDescriptorsExtractor::getTypeStringResponse>* streamer) {
                       return this->StreamedgetTypeString(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::getTypeStringRequest* /*request*/, ::grpcIDescriptorsExtractor::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedgetTypeString(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIDescriptorsExtractor::getTypeStringRequest,::grpcIDescriptorsExtractor::getTypeStringResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_extract() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIDescriptorsExtractor::extractRequest, ::grpcIDescriptorsExtractor::extractResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIDescriptorsExtractor::extractRequest, ::grpcIDescriptorsExtractor::extractResponse>* streamer) {
                       return this->Streamedextract(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractor::extractRequest* /*request*/, ::grpcIDescriptorsExtractor::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedextract(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIDescriptorsExtractor::extractRequest,::grpcIDescriptorsExtractor::extractResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_getTypeString<WithStreamedUnaryMethod_extract<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_getTypeString<WithStreamedUnaryMethod_extract<Service > > StreamedService;
};

}  // namespace grpcIDescriptorsExtractor


#endif  // GRPC_grpcIDescriptorsExtractorService_2eproto__INCLUDED
