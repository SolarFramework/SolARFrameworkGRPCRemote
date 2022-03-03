// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPPINGPIPELINE_GRPCSERVER_H
#define IMAPPINGPIPELINE_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/pipeline/IMappingPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMappingPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMappingPipeline {

class IMappingPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMappingPipeline_grpcServer();
    ~IMappingPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMappingPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMappingPipelineServiceImpl:  public ::grpcIMappingPipeline::grpcIMappingPipelineService::Service
    {
      public:
        grpcIMappingPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIMappingPipeline::initRequest* request, ::grpcIMappingPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIMappingPipeline::startRequest* request, ::grpcIMappingPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIMappingPipeline::stopRequest* request, ::grpcIMappingPipeline::stopResponse* response) override;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest* request, ::grpcIMappingPipeline::setCameraParametersResponse* response) override;
        ::grpc::Status mappingProcessRequest(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest* request, ::grpcIMappingPipeline::mappingProcessRequestResponse* response) override;
        ::grpc::Status getDataForVisualization(::grpc::ServerContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest* request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response) override;

        SRef<SolAR::api::pipeline::IMappingPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMappingPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer>
{
  static constexpr const char * UUID = "aced265d-832c-44e3-9356-dab531fa153a";
  static constexpr const char * NAME = "IMappingPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IMappingPipeline_grpcServer grpc server component";
};

#endif
