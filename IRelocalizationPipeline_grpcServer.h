// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IRELOCALIZATIONPIPELINE_GRPCSERVER_H
#define IRELOCALIZATIONPIPELINE_GRPCSERVER_H
#include "api/pipeline/IRelocalizationPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIRelocalizationPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIRelocalizationPipeline {

class IRelocalizationPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IRelocalizationPipeline_grpcServer();
    ~IRelocalizationPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IRelocalizationPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIRelocalizationPipelineServiceImpl:  public ::grpcIRelocalizationPipeline::grpcIRelocalizationPipelineService::Service
    {
      public:
        grpcIRelocalizationPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::initRequest* request, ::grpcIRelocalizationPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::startRequest* request, ::grpcIRelocalizationPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::stopRequest* request, ::grpcIRelocalizationPipeline::stopResponse* response) override;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::setCameraParametersRequest* request, ::grpcIRelocalizationPipeline::setCameraParametersResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::getCameraParametersRequest* request, ::grpcIRelocalizationPipeline::getCameraParametersResponse* response) override;
        ::grpc::Status relocalizeProcessRequest(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::relocalizeProcessRequestRequest* request, ::grpcIRelocalizationPipeline::relocalizeProcessRequestResponse* response) override;
        ::grpc::Status getMapRequest(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::getMapRequestRequest* request, ::grpcIRelocalizationPipeline::getMapRequestResponse* response) override;

        SRef<SolAR::api::pipeline::IRelocalizationPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIRelocalizationPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRelocalizationPipeline::IRelocalizationPipeline_grpcServer>
{
  static constexpr const char * UUID = "234bb765-ac3b-4755-8825-5cd92145b7a8";
  static constexpr const char * NAME = "IRelocalizationPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IRelocalizationPipeline_grpcServer grpc server component";
};

#endif
