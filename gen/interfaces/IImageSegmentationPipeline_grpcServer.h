// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGESEGMENTATIONPIPELINE_GRPCSERVER_H
#define IIMAGESEGMENTATIONPIPELINE_GRPCSERVER_H
#include "api/pipeline/IImageSegmentationPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIImageSegmentationPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageSegmentationPipeline {

class IImageSegmentationPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageSegmentationPipeline_grpcServer();
    ~IImageSegmentationPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageSegmentationPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageSegmentationPipelineServiceImpl:  public ::grpcIImageSegmentationPipeline::grpcIImageSegmentationPipelineService::Service
    {
      public:
        grpcIImageSegmentationPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::initRequest* request, ::grpcIImageSegmentationPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::startRequest* request, ::grpcIImageSegmentationPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::stopRequest* request, ::grpcIImageSegmentationPipeline::stopResponse* response) override;
        ::grpc::Status segment_grpc0(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::segment_grpc0Request* request, ::grpcIImageSegmentationPipeline::segment_grpc0Response* response) override;
        ::grpc::Status segment_grpc1(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::segment_grpc1Request* request, ::grpcIImageSegmentationPipeline::segment_grpc1Response* response) override;
        ::grpc::Status getStatus(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::getStatusRequest* request, ::grpcIImageSegmentationPipeline::getStatusResponse* response) override;
        ::grpc::Status getOutputMask(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::getOutputMaskRequest* request, ::grpcIImageSegmentationPipeline::getOutputMaskResponse* response) override;

        SRef<SolAR::api::pipeline::IImageSegmentationPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIImageSegmentationPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageSegmentationPipeline::IImageSegmentationPipeline_grpcServer>
{
  static constexpr const char * UUID = "40aede65-0170-4384-9623-6a9d320ae56d";
  static constexpr const char * NAME = "IImageSegmentationPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageSegmentationPipeline_grpcServer grpc server component";
};

#endif