// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPPINGPIPELINE_GRPCSERVER_H
#define IMAPPINGPIPELINE_GRPCSERVER_H
#include "api/pipeline/IMappingPipeline.h"
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
        ::grpc::Status init_grpc0(::grpc::ServerContext* context, const ::grpcIMappingPipeline::init_grpc0Request* request, ::grpcIMappingPipeline::init_grpc0Response* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIMappingPipeline::startRequest* request, ::grpcIMappingPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIMappingPipeline::stopRequest* request, ::grpcIMappingPipeline::stopResponse* response) override;
        ::grpc::Status init_grpc1(::grpc::ServerContext* context, const ::grpcIMappingPipeline::init_grpc1Request* request, ::grpcIMappingPipeline::init_grpc1Response* response) override;
        ::grpc::Status setCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParameters_grpc0Request* request, ::grpcIMappingPipeline::setCameraParameters_grpc0Response* response) override;
        ::grpc::Status setCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParameters_grpc1Request* request, ::grpcIMappingPipeline::setCameraParameters_grpc1Response* response) override;
        ::grpc::Status setRectificationParameters(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setRectificationParametersRequest* request, ::grpcIMappingPipeline::setRectificationParametersResponse* response) override;
        ::grpc::Status mappingProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequest_grpc0Request* request, ::grpcIMappingPipeline::mappingProcessRequest_grpc0Response* response) override;
        ::grpc::Status mappingProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequest_grpc1Request* request, ::grpcIMappingPipeline::mappingProcessRequest_grpc1Response* response) override;
        ::grpc::Status mappingProcessRequest_grpc2(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequest_grpc2Request* request, ::grpcIMappingPipeline::mappingProcessRequest_grpc2Response* response) override;
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
