// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcIBootstrapperStereoService.proto
#ifndef GRPC_grpcIBootstrapperStereoService_2eproto__INCLUDED
#define GRPC_grpcIBootstrapperStereoService_2eproto__INCLUDED

#include "grpcIBootstrapperStereoService.pb.h"

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

namespace grpcIBootstrapperStereo {

class grpcIBootstrapperStereoService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcIBootstrapperStereo.grpcIBootstrapperStereoService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncsetCameraParametersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncsetCameraParametersRaw(context, request, cq));
    }
    virtual ::grpc::Status process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpcIBootstrapperStereo::processResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBootstrapperStereo::processResponse>> Asyncprocess(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBootstrapperStereo::processResponse>>(AsyncprocessRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBootstrapperStereo::processResponse>> PrepareAsyncprocess(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBootstrapperStereo::processResponse>>(PrepareAsyncprocessRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBootstrapperStereo::processResponse>* AsyncprocessRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcIBootstrapperStereo::processResponse>* PrepareAsyncprocessRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncsetCameraParametersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncsetCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncsetCameraParametersRaw(context, request, cq));
    }
    ::grpc::Status process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpcIBootstrapperStereo::processResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBootstrapperStereo::processResponse>> Asyncprocess(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBootstrapperStereo::processResponse>>(AsyncprocessRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBootstrapperStereo::processResponse>> PrepareAsyncprocess(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcIBootstrapperStereo::processResponse>>(PrepareAsyncprocessRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void setCameraParameters(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void process(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncsetCameraParametersRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIBootstrapperStereo::processResponse>* AsyncprocessRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcIBootstrapperStereo::processResponse>* PrepareAsyncprocessRaw(::grpc::ClientContext* context, const ::grpcIBootstrapperStereo::processRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_setCameraParameters_;
    const ::grpc::internal::RpcMethod rpcmethod_process_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response);
    virtual ::grpc::Status process(::grpc::ServerContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetCameraParameters(::grpc::ServerContext* context, ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_process() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_process() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestprocess(::grpc::ServerContext* context, ::grpcIBootstrapperStereo::processRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcIBootstrapperStereo::processResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_setCameraParameters<WithAsyncMethod_process<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_setCameraParameters() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIBootstrapperStereo::setCameraParametersRequest, ::google::protobuf::Empty>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response) { return this->setCameraParameters(context, request, response); }));}
    void SetMessageAllocatorFor_setCameraParameters(
        ::grpc::experimental::MessageAllocator< ::grpcIBootstrapperStereo::setCameraParametersRequest, ::google::protobuf::Empty>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIBootstrapperStereo::setCameraParametersRequest, ::google::protobuf::Empty>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* setCameraParameters(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* setCameraParameters(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_process() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcIBootstrapperStereo::processRequest, ::grpcIBootstrapperStereo::processResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response) { return this->process(context, request, response); }));}
    void SetMessageAllocatorFor_process(
        ::grpc::experimental::MessageAllocator< ::grpcIBootstrapperStereo::processRequest, ::grpcIBootstrapperStereo::processResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcIBootstrapperStereo::processRequest, ::grpcIBootstrapperStereo::processResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_process() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* process(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* process(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_setCameraParameters<ExperimentalWithCallbackMethod_process<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_setCameraParameters<ExperimentalWithCallbackMethod_process<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_process() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_process() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsetCameraParameters(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_process() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_process() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestprocess(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_setCameraParameters() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->setCameraParameters(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* setCameraParameters(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* setCameraParameters(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_process() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->process(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_process() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* process(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* process(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_setCameraParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_setCameraParameters() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIBootstrapperStereo::setCameraParametersRequest, ::google::protobuf::Empty>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIBootstrapperStereo::setCameraParametersRequest, ::google::protobuf::Empty>* streamer) {
                       return this->StreamedsetCameraParameters(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_setCameraParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status setCameraParameters(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::setCameraParametersRequest* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsetCameraParameters(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIBootstrapperStereo::setCameraParametersRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_process() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcIBootstrapperStereo::processRequest, ::grpcIBootstrapperStereo::processResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcIBootstrapperStereo::processRequest, ::grpcIBootstrapperStereo::processResponse>* streamer) {
                       return this->Streamedprocess(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_process() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status process(::grpc::ServerContext* /*context*/, const ::grpcIBootstrapperStereo::processRequest* /*request*/, ::grpcIBootstrapperStereo::processResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedprocess(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcIBootstrapperStereo::processRequest,::grpcIBootstrapperStereo::processResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_setCameraParameters<WithStreamedUnaryMethod_process<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_setCameraParameters<WithStreamedUnaryMethod_process<Service > > StreamedService;
};

}  // namespace grpcIBootstrapperStereo


#endif  // GRPC_grpcIBootstrapperStereoService_2eproto__INCLUDED
