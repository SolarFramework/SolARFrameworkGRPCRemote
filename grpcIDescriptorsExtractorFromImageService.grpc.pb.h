// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIDescriptorsExtractorFromImageService.proto
#ifndef GRPC_grpcIDescriptorsExtractorFromImageService_2eproto__INCLUDED
#define GRPC_grpcIDescriptorsExtractorFromImageService_2eproto__INCLUDED

#include "grpcIDescriptorsExtractorFromImageService.pb.h"

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

namespace grpcIDescriptorsExtractorFromImage {

class grpcIDescriptorsExtractorFromImageService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIDescriptorsExtractorFromImage.grpcIDescriptorsExtractorFromImageService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>> AsyncgetTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>>(AsyncgetTypeStringRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>> PrepareAsyncgetTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>>(PrepareAsyncgetTypeStringRaw(context, request, cq));
    }
    virtual ::grpc::Status extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::extractResponse>> Asyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::extractResponse>>(AsyncextractRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::extractResponse>> PrepareAsyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::extractResponse>>(PrepareAsyncextractRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* AsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* PrepareAsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::extractResponse>* AsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIDescriptorsExtractorFromImage::extractResponse>* PrepareAsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>> AsyncgetTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>>(AsyncgetTypeStringRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>> PrepareAsyncgetTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>>(PrepareAsyncgetTypeStringRaw(context, request, cq));
    }
    ::grpc::Status extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>> Asyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>>(AsyncextractRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>> PrepareAsyncextract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>>(PrepareAsyncextractRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void getTypeString(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void extract(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* AsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* PrepareAsyncgetTypeStringRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>* AsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIDescriptorsExtractorFromImage::extractResponse>* PrepareAsyncextractRaw(::grpc::ClientContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_getTypeString_;
    const ::grpc::internal::RpcMethod rpcmethod_extract_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status getTypeString(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response);
    virtual ::grpc::Status extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response);
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
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestgetTypeString(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
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
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestextract(::grpc::ServerContext* context, ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIDescriptorsExtractorFromImage::extractResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_getTypeString<WithAsyncMethod_extract<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_getTypeString() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response) { return this->getTypeString(context, request, response); }));}
    void SetMessageAllocatorFor_getTypeString(
        ::grpc::experimental::MessageAllocator< ::google::protobuf::Empty, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* getTypeString(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* getTypeString(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_extract() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response) { return this->extract(context, request, response); }));}
    void SetMessageAllocatorFor_extract(
        ::grpc::experimental::MessageAllocator< ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* extract(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* extract(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_getTypeString<ExperimentalWithCallbackMethod_extract<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_getTypeString<ExperimentalWithCallbackMethod_extract<Service > > ExperimentalCallbackService;
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
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/) override {
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
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/) override {
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
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/) override {
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
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestextract(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_getTypeString() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->getTypeString(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* getTypeString(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* getTypeString(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_extract() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->extract(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* extract(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* extract(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_getTypeString : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_getTypeString() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* streamer) {
                       return this->StreamedgetTypeString(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_getTypeString() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status getTypeString(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedgetTypeString(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::grpcIDescriptorsExtractorFromImage::getTypeStringResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_extract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_extract() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIDescriptorsExtractorFromImage::extractRequest, ::grpcIDescriptorsExtractorFromImage::extractResponse>* streamer) {
                       return this->Streamedextract(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_extract() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status extract(::grpc::ServerContext* /*context*/, const ::grpcIDescriptorsExtractorFromImage::extractRequest* /*request*/, ::grpcIDescriptorsExtractorFromImage::extractResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedextract(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIDescriptorsExtractorFromImage::extractRequest,::grpcIDescriptorsExtractorFromImage::extractResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_getTypeString<WithStreamedUnaryMethod_extract<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_getTypeString<WithStreamedUnaryMethod_extract<Service > > StreamedService;
};

}  // namespace grpcIDescriptorsExtractorFromImage


#endif  // GRPC_grpcIDescriptorsExtractorFromImageService_2eproto__INCLUDED
