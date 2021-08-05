// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIKeypointDetectorRegionService.proto
#ifndef GRPC_grpcIKeypointDetectorRegionService_2eproto__INCLUDED
#define GRPC_grpcIKeypointDetectorRegionService_2eproto__INCLUDED

#include "grpcIKeypointDetectorRegionService.pb.h"

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

namespace grpcIKeypointDetectorRegion {

class grpcIKeypointDetectorRegionService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIKeypointDetectorRegion.grpcIKeypointDetectorRegionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status setType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncsetType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncsetTypeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncsetType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncsetTypeRaw(context, request, cq));
    }
    virtual ::grpc::Status getType(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIKeypointDetectorRegion::getTypeResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::getTypeResponse>> AsyncgetType(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::getTypeResponse>>(AsyncgetTypeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::getTypeResponse>> PrepareAsyncgetType(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::getTypeResponse>>(PrepareAsyncgetTypeRaw(context, request, cq));
    }
    virtual ::grpc::Status detect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpcIKeypointDetectorRegion::detectResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::detectResponse>> Asyncdetect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::detectResponse>>(AsyncdetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::detectResponse>> PrepareAsyncdetect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::detectResponse>>(PrepareAsyncdetectRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void setType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) = 0;
      virtual void setType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void getType(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void getType(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void detect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void detect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncsetTypeRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncsetTypeRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::getTypeResponse>* AsyncgetTypeRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::getTypeResponse>* PrepareAsyncgetTypeRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::detectResponse>* AsyncdetectRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIKeypointDetectorRegion::detectResponse>* PrepareAsyncdetectRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status setType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncsetType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncsetTypeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncsetType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncsetTypeRaw(context, request, cq));
    }
    ::grpc::Status getType(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIKeypointDetectorRegion::getTypeResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::getTypeResponse>> AsyncgetType(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::getTypeResponse>>(AsyncgetTypeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::getTypeResponse>> PrepareAsyncgetType(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::getTypeResponse>>(PrepareAsyncgetTypeRaw(context, request, cq));
    }
    ::grpc::Status detect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpcIKeypointDetectorRegion::detectResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::detectResponse>> Asyncdetect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::detectResponse>>(AsyncdetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::detectResponse>> PrepareAsyncdetect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::detectResponse>>(PrepareAsyncdetectRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void setType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) override;
      void setType(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) override;
      void getType(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response, std::function<void(::grpc::Status)>) override;
      void getType(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void detect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response, std::function<void(::grpc::Status)>) override;
      void detect(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncsetTypeRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncsetTypeRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::getTypeResponse>* AsyncgetTypeRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::getTypeResponse>* PrepareAsyncgetTypeRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::detectResponse>* AsyncdetectRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIKeypointDetectorRegion::detectResponse>* PrepareAsyncdetectRaw(::grpc::ClientContext* context, const ::grpcIKeypointDetectorRegion::detectRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_setType_;
    const ::grpc::internal::RpcMethod rpcmethod_getType_;
    const ::grpc::internal::RpcMethod rpcmethod_detect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status setType(::grpc::ServerContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response);
    virtual ::grpc::Status getType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response);
    virtual ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_setType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_setType() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_setType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setType(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetType(::grpc::ServerContext* context, ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_getType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_getType() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_getType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getType(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetType(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::grpcIKeypointDetectorRegion::getTypeResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_detect() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status detect(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdetect(::grpc::ServerContext* context, ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIKeypointDetectorRegion::detectResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_setType<WithAsyncMethod_getType<WithAsyncMethod_detect<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_setType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_setType() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIKeypointDetectorRegion::setTypeRequest, ::google::protobuf::Empty>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response) { return this->setType(context, request, response); }));}
    void SetMessageAllocatorFor_setType(
        ::grpc::MessageAllocator< ::grpcIKeypointDetectorRegion::setTypeRequest, ::google::protobuf::Empty>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIKeypointDetectorRegion::setTypeRequest, ::google::protobuf::Empty>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_setType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setType(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setType(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_getType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_getType() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::grpcIKeypointDetectorRegion::getTypeResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response) { return this->getType(context, request, response); }));}
    void SetMessageAllocatorFor_getType(
        ::grpc::MessageAllocator< ::google::protobuf::Empty, ::grpcIKeypointDetectorRegion::getTypeResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::grpcIKeypointDetectorRegion::getTypeResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_getType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getType(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* getType(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_detect() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIKeypointDetectorRegion::detectRequest, ::grpcIKeypointDetectorRegion::detectResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response) { return this->detect(context, request, response); }));}
    void SetMessageAllocatorFor_detect(
        ::grpc::MessageAllocator< ::grpcIKeypointDetectorRegion::detectRequest, ::grpcIKeypointDetectorRegion::detectResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIKeypointDetectorRegion::detectRequest, ::grpcIKeypointDetectorRegion::detectResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status detect(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* detect(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_setType<WithCallbackMethod_getType<WithCallbackMethod_detect<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_setType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_setType() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_setType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setType(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_getType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_getType() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_getType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getType(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_detect() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status detect(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_setType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_setType() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_setType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setType(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetType(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_getType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_getType() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_getType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getType(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetType(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_detect() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status detect(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdetect(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_setType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_setType() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->setType(context, request, response); }));
    }
    ~WithRawCallbackMethod_setType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setType(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* setType(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_getType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_getType() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->getType(context, request, response); }));
    }
    ~WithRawCallbackMethod_getType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getType(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* getType(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_detect() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->detect(context, request, response); }));
    }
    ~WithRawCallbackMethod_detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status detect(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* detect(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_setType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_setType() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIKeypointDetectorRegion::setTypeRequest, ::google::protobuf::Empty>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIKeypointDetectorRegion::setTypeRequest, ::google::protobuf::Empty>* streamer) {
                       return this->StreamedsetType(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_setType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status setType(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::setTypeRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsetType(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIKeypointDetectorRegion::setTypeRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_getType : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_getType() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::grpcIKeypointDetectorRegion::getTypeResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::grpcIKeypointDetectorRegion::getTypeResponse>* streamer) {
                       return this->StreamedgetType(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_getType() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status getType(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIKeypointDetectorRegion::getTypeResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedgetType(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::grpcIKeypointDetectorRegion::getTypeResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_detect() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIKeypointDetectorRegion::detectRequest, ::grpcIKeypointDetectorRegion::detectResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIKeypointDetectorRegion::detectRequest, ::grpcIKeypointDetectorRegion::detectResponse>* streamer) {
                       return this->Streameddetect(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status detect(::grpc::ServerContext* /*context*/, const ::grpcIKeypointDetectorRegion::detectRequest* /*request*/, ::grpcIKeypointDetectorRegion::detectResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streameddetect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIKeypointDetectorRegion::detectRequest,::grpcIKeypointDetectorRegion::detectResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_setType<WithStreamedUnaryMethod_getType<WithStreamedUnaryMethod_detect<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_setType<WithStreamedUnaryMethod_getType<WithStreamedUnaryMethod_detect<Service > > > StreamedService;
};

}  // namespace grpcIKeypointDetectorRegion


#endif  // GRPC_grpcIKeypointDetectorRegionService_2eproto__INCLUDED
