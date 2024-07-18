// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IRELOCALIZATIONTRACKABLEPIPELINE_GRPCSERVER_H
#define IRELOCALIZATIONTRACKABLEPIPELINE_GRPCSERVER_H
#include "api/pipeline/IRelocalizationTrackablePipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIRelocalizationTrackablePipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIRelocalizationTrackablePipeline {

class IRelocalizationTrackablePipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IRelocalizationTrackablePipeline_grpcServer();
    ~IRelocalizationTrackablePipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IRelocalizationTrackablePipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIRelocalizationTrackablePipelineServiceImpl:  public ::grpcIRelocalizationTrackablePipeline::grpcIRelocalizationTrackablePipelineService::Service
    {
      public:
        grpcIRelocalizationTrackablePipelineServiceImpl() = default;
        ::grpc::Status init_grpc0(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc0Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc0Response* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::startRequest* request, ::grpcIRelocalizationTrackablePipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::stopRequest* request, ::grpcIRelocalizationTrackablePipeline::stopResponse* response) override;
        ::grpc::Status init_grpc1(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc1Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc1Response* response) override;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::setCameraParametersRequest* request, ::grpcIRelocalizationTrackablePipeline::setCameraParametersResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::getCameraParametersRequest* request, ::grpcIRelocalizationTrackablePipeline::getCameraParametersResponse* response) override;
        ::grpc::Status relocalizeProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc0Request* request, ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc0Response* response) override;
        ::grpc::Status relocalizeProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc1Request* request, ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc1Response* response) override;
        ::grpc::Status relocalizeProcessRequest_grpc2(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc2Request* request, ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc2Response* response) override;
        ::grpc::Status getMapRequest(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::getMapRequestRequest* request, ::grpcIRelocalizationTrackablePipeline::getMapRequestResponse* response) override;
        ::grpc::Status init_grpc2(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc2Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc2Response* response) override;

        SRef<SolAR::api::pipeline::IRelocalizationTrackablePipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIRelocalizationTrackablePipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRelocalizationTrackablePipeline::IRelocalizationTrackablePipeline_grpcServer>
{
  static constexpr const char * UUID = "7dbb07bb-afe0-4ed0-add8-653d46243466";
  static constexpr const char * NAME = "IRelocalizationTrackablePipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IRelocalizationTrackablePipeline_grpcServer grpc server component";
};

#endif
