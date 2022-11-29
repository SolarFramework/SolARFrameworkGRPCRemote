// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDENSEMAPPINGPIPELINE_GRPCSERVER_H
#define IDENSEMAPPINGPIPELINE_GRPCSERVER_H
#include "api/pipeline/IDenseMappingPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIDenseMappingPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDenseMappingPipeline {

class IDenseMappingPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDenseMappingPipeline_grpcServer();
    ~IDenseMappingPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDenseMappingPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDenseMappingPipelineServiceImpl:  public ::grpcIDenseMappingPipeline::grpcIDenseMappingPipelineService::Service
    {
      public:
        grpcIDenseMappingPipelineServiceImpl() = default;
        ::grpc::Status isAlive(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::isAliveRequest* request, ::grpcIDenseMappingPipeline::isAliveResponse* response) override;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::initRequest* request, ::grpcIDenseMappingPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::startRequest* request, ::grpcIDenseMappingPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::stopRequest* request, ::grpcIDenseMappingPipeline::stopResponse* response) override;
        ::grpc::Status denseMappingProcessRequest(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest* request, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* response) override;
        ::grpc::Status getPointCloud(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest* request, ::grpcIDenseMappingPipeline::getPointCloudResponse* response) override;
        ::grpc::Status getMesh(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest* request, ::grpcIDenseMappingPipeline::getMeshResponse* response) override;

        SRef<SolAR::api::pipeline::IDenseMappingPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIDenseMappingPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDenseMappingPipeline::IDenseMappingPipeline_grpcServer>
{
  static constexpr const char * UUID = "5ac9298e-480b-11ed-b878-0242ac120002";
  static constexpr const char * NAME = "IDenseMappingPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IDenseMappingPipeline_grpcServer grpc server component";
};

#endif
