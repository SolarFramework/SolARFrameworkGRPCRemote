// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISERVICEMANAGERPIPELINE_GRPCSERVER_H
#define ISERVICEMANAGERPIPELINE_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/pipeline/IServiceManagerPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIServiceManagerPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIServiceManagerPipeline {

class IServiceManagerPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IServiceManagerPipeline_grpcServer();
    ~IServiceManagerPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IServiceManagerPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIServiceManagerPipelineServiceImpl:  public ::grpcIServiceManagerPipeline::grpcIServiceManagerPipelineService::Service
    {
      public:
        grpcIServiceManagerPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::initRequest* request, ::grpcIServiceManagerPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::startRequest* request, ::grpcIServiceManagerPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::stopRequest* request, ::grpcIServiceManagerPipeline::stopResponse* response) override;
        ::grpc::Status registerService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest* request, ::grpcIServiceManagerPipeline::registerServiceResponse* response) override;
        ::grpc::Status unregisterService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest* request, ::grpcIServiceManagerPipeline::unregisterServiceResponse* response) override;
        ::grpc::Status getService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest* request, ::grpcIServiceManagerPipeline::getServiceResponse* response) override;
        ::grpc::Status getAndLockService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest* request, ::grpcIServiceManagerPipeline::getAndLockServiceResponse* response) override;
        ::grpc::Status unlockService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest* request, ::grpcIServiceManagerPipeline::unlockServiceResponse* response) override;

        SRef<SolAR::api::pipeline::IServiceManagerPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIServiceManagerPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIServiceManagerPipeline::IServiceManagerPipeline_grpcServer>
{
  static constexpr const char * UUID = "65c3a736-6432-11ed-81ce-0242ac120002";
  static constexpr const char * NAME = "IServiceManagerPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IServiceManagerPipeline_grpcServer grpc server component";
};

#endif