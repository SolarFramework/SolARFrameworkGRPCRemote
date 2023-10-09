// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIImageConvertorService.proto
#ifndef GRPC_grpcIImageConvertorService_2eproto__INCLUDED
#define GRPC_grpcIImageConvertorService_2eproto__INCLUDED

#include "grpcIImageConvertorService.pb.h"

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

namespace grpcIImageConvertor {

class grpcIImageConvertorService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIImageConvertor.grpcIImageConvertorService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status convert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpcIImageConvertor::convert_grpc0Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc0Response>> Asyncconvert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc0Response>>(Asyncconvert_grpc0Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc0Response>> PrepareAsyncconvert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc0Response>>(PrepareAsyncconvert_grpc0Raw(context, request, cq));
    }
    virtual ::grpc::Status convert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpcIImageConvertor::convert_grpc1Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc1Response>> Asyncconvert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc1Response>>(Asyncconvert_grpc1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc1Response>> PrepareAsyncconvert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc1Response>>(PrepareAsyncconvert_grpc1Raw(context, request, cq));
    }
    virtual ::grpc::Status convertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpcIImageConvertor::convertLookUpTableResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convertLookUpTableResponse>> AsyncconvertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convertLookUpTableResponse>>(AsyncconvertLookUpTableRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convertLookUpTableResponse>> PrepareAsyncconvertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convertLookUpTableResponse>>(PrepareAsyncconvertLookUpTableRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void convert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response, std::function<void(::grpc::Status)>) = 0;
      virtual void convert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void convert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response, std::function<void(::grpc::Status)>) = 0;
      virtual void convert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void convertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void convertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc0Response>* Asyncconvert_grpc0Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc0Response>* PrepareAsyncconvert_grpc0Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc1Response>* Asyncconvert_grpc1Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convert_grpc1Response>* PrepareAsyncconvert_grpc1Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convertLookUpTableResponse>* AsyncconvertLookUpTableRaw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIImageConvertor::convertLookUpTableResponse>* PrepareAsyncconvertLookUpTableRaw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status convert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpcIImageConvertor::convert_grpc0Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc0Response>> Asyncconvert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc0Response>>(Asyncconvert_grpc0Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc0Response>> PrepareAsyncconvert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc0Response>>(PrepareAsyncconvert_grpc0Raw(context, request, cq));
    }
    ::grpc::Status convert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpcIImageConvertor::convert_grpc1Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc1Response>> Asyncconvert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc1Response>>(Asyncconvert_grpc1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc1Response>> PrepareAsyncconvert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc1Response>>(PrepareAsyncconvert_grpc1Raw(context, request, cq));
    }
    ::grpc::Status convertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpcIImageConvertor::convertLookUpTableResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convertLookUpTableResponse>> AsyncconvertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convertLookUpTableResponse>>(AsyncconvertLookUpTableRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convertLookUpTableResponse>> PrepareAsyncconvertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convertLookUpTableResponse>>(PrepareAsyncconvertLookUpTableRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void convert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response, std::function<void(::grpc::Status)>) override;
      void convert_grpc0(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response, ::grpc::ClientUnaryReactor* reactor) override;
      void convert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response, std::function<void(::grpc::Status)>) override;
      void convert_grpc1(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response, ::grpc::ClientUnaryReactor* reactor) override;
      void convertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response, std::function<void(::grpc::Status)>) override;
      void convertLookUpTable(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc0Response>* Asyncconvert_grpc0Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc0Response>* PrepareAsyncconvert_grpc0Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc0Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc1Response>* Asyncconvert_grpc1Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convert_grpc1Response>* PrepareAsyncconvert_grpc1Raw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convert_grpc1Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convertLookUpTableResponse>* AsyncconvertLookUpTableRaw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIImageConvertor::convertLookUpTableResponse>* PrepareAsyncconvertLookUpTableRaw(::grpc::ClientContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_convert_grpc0_;
    const ::grpc::internal::RpcMethod rpcmethod_convert_grpc1_;
    const ::grpc::internal::RpcMethod rpcmethod_convertLookUpTable_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status convert_grpc0(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response);
    virtual ::grpc::Status convert_grpc1(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response);
    virtual ::grpc::Status convertLookUpTable(::grpc::ServerContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_convert_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_convert_grpc0() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_convert_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestconvert_grpc0(::grpc::ServerContext* context, ::grpcIImageConvertor::convert_grpc0Request* request, ::grpc::ServerAsyncResponseWriter< ::grpcIImageConvertor::convert_grpc0Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_convert_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_convert_grpc1() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_convert_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestconvert_grpc1(::grpc::ServerContext* context, ::grpcIImageConvertor::convert_grpc1Request* request, ::grpc::ServerAsyncResponseWriter< ::grpcIImageConvertor::convert_grpc1Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_convertLookUpTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_convertLookUpTable() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_convertLookUpTable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertLookUpTable(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestconvertLookUpTable(::grpc::ServerContext* context, ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIImageConvertor::convertLookUpTableResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_convert_grpc0<WithAsyncMethod_convert_grpc1<WithAsyncMethod_convertLookUpTable<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_convert_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_convert_grpc0() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIImageConvertor::convert_grpc0Request, ::grpcIImageConvertor::convert_grpc0Response>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response) { return this->convert_grpc0(context, request, response); }));}
    void SetMessageAllocatorFor_convert_grpc0(
        ::grpc::MessageAllocator< ::grpcIImageConvertor::convert_grpc0Request, ::grpcIImageConvertor::convert_grpc0Response>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIImageConvertor::convert_grpc0Request, ::grpcIImageConvertor::convert_grpc0Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_convert_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* convert_grpc0(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_convert_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_convert_grpc1() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIImageConvertor::convert_grpc1Request, ::grpcIImageConvertor::convert_grpc1Response>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response) { return this->convert_grpc1(context, request, response); }));}
    void SetMessageAllocatorFor_convert_grpc1(
        ::grpc::MessageAllocator< ::grpcIImageConvertor::convert_grpc1Request, ::grpcIImageConvertor::convert_grpc1Response>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIImageConvertor::convert_grpc1Request, ::grpcIImageConvertor::convert_grpc1Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_convert_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* convert_grpc1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_convertLookUpTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_convertLookUpTable() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIImageConvertor::convertLookUpTableRequest, ::grpcIImageConvertor::convertLookUpTableResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response) { return this->convertLookUpTable(context, request, response); }));}
    void SetMessageAllocatorFor_convertLookUpTable(
        ::grpc::MessageAllocator< ::grpcIImageConvertor::convertLookUpTableRequest, ::grpcIImageConvertor::convertLookUpTableResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIImageConvertor::convertLookUpTableRequest, ::grpcIImageConvertor::convertLookUpTableResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_convertLookUpTable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertLookUpTable(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* convertLookUpTable(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_convert_grpc0<WithCallbackMethod_convert_grpc1<WithCallbackMethod_convertLookUpTable<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_convert_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_convert_grpc0() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_convert_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_convert_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_convert_grpc1() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_convert_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_convertLookUpTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_convertLookUpTable() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_convertLookUpTable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertLookUpTable(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_convert_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_convert_grpc0() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_convert_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestconvert_grpc0(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_convert_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_convert_grpc1() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_convert_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestconvert_grpc1(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_convertLookUpTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_convertLookUpTable() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_convertLookUpTable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertLookUpTable(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestconvertLookUpTable(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_convert_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_convert_grpc0() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->convert_grpc0(context, request, response); }));
    }
    ~WithRawCallbackMethod_convert_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* convert_grpc0(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_convert_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_convert_grpc1() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->convert_grpc1(context, request, response); }));
    }
    ~WithRawCallbackMethod_convert_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convert_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* convert_grpc1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_convertLookUpTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_convertLookUpTable() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->convertLookUpTable(context, request, response); }));
    }
    ~WithRawCallbackMethod_convertLookUpTable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertLookUpTable(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* convertLookUpTable(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_convert_grpc0 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_convert_grpc0() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIImageConvertor::convert_grpc0Request, ::grpcIImageConvertor::convert_grpc0Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIImageConvertor::convert_grpc0Request, ::grpcIImageConvertor::convert_grpc0Response>* streamer) {
                       return this->Streamedconvert_grpc0(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_convert_grpc0() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status convert_grpc0(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc0Request* /*request*/, ::grpcIImageConvertor::convert_grpc0Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedconvert_grpc0(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIImageConvertor::convert_grpc0Request,::grpcIImageConvertor::convert_grpc0Response>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_convert_grpc1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_convert_grpc1() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIImageConvertor::convert_grpc1Request, ::grpcIImageConvertor::convert_grpc1Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIImageConvertor::convert_grpc1Request, ::grpcIImageConvertor::convert_grpc1Response>* streamer) {
                       return this->Streamedconvert_grpc1(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_convert_grpc1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status convert_grpc1(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convert_grpc1Request* /*request*/, ::grpcIImageConvertor::convert_grpc1Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedconvert_grpc1(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIImageConvertor::convert_grpc1Request,::grpcIImageConvertor::convert_grpc1Response>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_convertLookUpTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_convertLookUpTable() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIImageConvertor::convertLookUpTableRequest, ::grpcIImageConvertor::convertLookUpTableResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIImageConvertor::convertLookUpTableRequest, ::grpcIImageConvertor::convertLookUpTableResponse>* streamer) {
                       return this->StreamedconvertLookUpTable(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_convertLookUpTable() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status convertLookUpTable(::grpc::ServerContext* /*context*/, const ::grpcIImageConvertor::convertLookUpTableRequest* /*request*/, ::grpcIImageConvertor::convertLookUpTableResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedconvertLookUpTable(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIImageConvertor::convertLookUpTableRequest,::grpcIImageConvertor::convertLookUpTableResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_convert_grpc0<WithStreamedUnaryMethod_convert_grpc1<WithStreamedUnaryMethod_convertLookUpTable<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_convert_grpc0<WithStreamedUnaryMethod_convert_grpc1<WithStreamedUnaryMethod_convertLookUpTable<Service > > > StreamedService;
};

}  // namespace grpcIImageConvertor


#endif  // GRPC_grpcIImageConvertorService_2eproto__INCLUDED
