// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IASYNCRELOCALIZATIONPIPELINE_GRPCSERVER_H
#define IASYNCRELOCALIZATIONPIPELINE_GRPCSERVER_H
#include "api/pipeline/IAsyncRelocalizationPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIAsyncRelocalizationPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline {

class IAsyncRelocalizationPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IAsyncRelocalizationPipeline_grpcServer();
    ~IAsyncRelocalizationPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IAsyncRelocalizationPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIAsyncRelocalizationPipelineServiceImpl:  public ::grpcIAsyncRelocalizationPipeline::grpcIAsyncRelocalizationPipelineService::Service
    {
      public:
        grpcIAsyncRelocalizationPipelineServiceImpl() = default;
        ::grpc::Status init_grpc0(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::init_grpc0Request* request, ::grpcIAsyncRelocalizationPipeline::init_grpc0Response* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::startRequest* request, ::grpcIAsyncRelocalizationPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::stopRequest* request, ::grpcIAsyncRelocalizationPipeline::stopResponse* response) override;
        ::grpc::Status init_grpc1(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::init_grpc1Request* request, ::grpcIAsyncRelocalizationPipeline::init_grpc1Response* response) override;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::setCameraParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::setCameraParametersResponse* response) override;
        ::grpc::Status setRectificationParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::setRectificationParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::setRectificationParametersResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::getCameraParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::getCameraParametersResponse* response) override;
        ::grpc::Status relocalizeProcessRequest(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestRequest* request, ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestResponse* response) override;
        ::grpc::Status get3DTransformRequest(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestRequest* request, ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestResponse* response) override;
        ::grpc::Status getLastPose(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::getLastPoseRequest* request, ::grpcIAsyncRelocalizationPipeline::getLastPoseResponse* response) override;
        ::grpc::Status resetMap(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::resetMapRequest* request, ::grpcIAsyncRelocalizationPipeline::resetMapResponse* response) override;

        SRef<SolAR::api::pipeline::IAsyncRelocalizationPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIAsyncRelocalizationPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer>
{
  static constexpr const char * UUID = "95913e8e-5695-11ec-bf63-0242ac130002";
  static constexpr const char * NAME = "IAsyncRelocalizationPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IAsyncRelocalizationPipeline_grpcServer grpc server component";
};

#endif
