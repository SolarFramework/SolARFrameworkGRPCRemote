// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPUPDATEPIPELINE_GRPCSERVER_H
#define IMAPUPDATEPIPELINE_GRPCSERVER_H
#include "api/pipeline/IMapUpdatePipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapUpdatePipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapUpdatePipeline {

class IMapUpdatePipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapUpdatePipeline_grpcServer();
    ~IMapUpdatePipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapUpdatePipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapUpdatePipelineServiceImpl:  public ::grpcIMapUpdatePipeline::grpcIMapUpdatePipelineService::Service
    {
      public:
        grpcIMapUpdatePipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::initRequest* request, ::grpcIMapUpdatePipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::startRequest* request, ::grpcIMapUpdatePipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::stopRequest* request, ::grpcIMapUpdatePipeline::stopResponse* response) override;
        ::grpc::Status setMap(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::setMapRequest* request, ::grpcIMapUpdatePipeline::setMapResponse* response) override;
        ::grpc::Status getMap(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::getMapRequest* request, ::grpcIMapUpdatePipeline::getMapResponse* response) override;
        ::grpc::Status resetMap(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::resetMapRequest* request, ::grpcIMapUpdatePipeline::resetMapResponse* response) override;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::setCameraParametersRequest* request, ::grpcIMapUpdatePipeline::setCameraParametersResponse* response) override;
        ::grpc::Status mapUpdateRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::mapUpdateRequestRequest* request, ::grpcIMapUpdatePipeline::mapUpdateRequestResponse* response) override;
        ::grpc::Status getMapRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::getMapRequestRequest* request, ::grpcIMapUpdatePipeline::getMapRequestResponse* response) override;
        ::grpc::Status getSubmapRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::getSubmapRequestRequest* request, ::grpcIMapUpdatePipeline::getSubmapRequestResponse* response) override;
        ::grpc::Status getPointCloudRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::getPointCloudRequestRequest* request, ::grpcIMapUpdatePipeline::getPointCloudRequestResponse* response) override;

        SRef<SolAR::api::pipeline::IMapUpdatePipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapUpdatePipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapUpdatePipeline::IMapUpdatePipeline_grpcServer>
{
  static constexpr const char * UUID = "82f9fdff-06ee-471f-a260-b7f4ac414627";
  static constexpr const char * NAME = "IMapUpdatePipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapUpdatePipeline_grpcServer grpc server component";
};

#endif