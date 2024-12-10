// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPPROCESSINGPIPELINE_GRPCSERVER_H
#define IMAPPROCESSINGPIPELINE_GRPCSERVER_H
#include "api/pipeline/IMapProcessingPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapProcessingPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapProcessingPipeline {

class IMapProcessingPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapProcessingPipeline_grpcServer();
    ~IMapProcessingPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapProcessingPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapProcessingPipelineServiceImpl:  public ::grpcIMapProcessingPipeline::grpcIMapProcessingPipelineService::Service
    {
      public:
        grpcIMapProcessingPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::initRequest* request, ::grpcIMapProcessingPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::startRequest* request, ::grpcIMapProcessingPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::stopRequest* request, ::grpcIMapProcessingPipeline::stopResponse* response) override;
        ::grpc::Status setMapToProcess(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::setMapToProcessRequest* request, ::grpcIMapProcessingPipeline::setMapToProcessResponse* response) override;
        ::grpc::Status getStatus(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::getStatusRequest* request, ::grpcIMapProcessingPipeline::getStatusResponse* response) override;
        ::grpc::Status getDataForVisualization(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::getDataForVisualizationRequest* request, ::grpcIMapProcessingPipeline::getDataForVisualizationResponse* response) override;
        ::grpc::Status getProcessedMap(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::getProcessedMapRequest* request, ::grpcIMapProcessingPipeline::getProcessedMapResponse* response) override;

        SRef<SolAR::api::pipeline::IMapProcessingPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapProcessingPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapProcessingPipeline::IMapProcessingPipeline_grpcServer>
{
  static constexpr const char * UUID = "2dffb653-4d96-41bc-a2f9-1cc850c7498b";
  static constexpr const char * NAME = "IMapProcessingPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapProcessingPipeline_grpcServer grpc server component";
};

#endif