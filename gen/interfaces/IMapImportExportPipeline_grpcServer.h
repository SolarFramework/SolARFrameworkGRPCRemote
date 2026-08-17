// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPIMPORTEXPORTPIPELINE_GRPCSERVER_H
#define IMAPIMPORTEXPORTPIPELINE_GRPCSERVER_H
#include "api/pipeline/IMapImportExportPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapImportExportPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapImportExportPipeline {

class IMapImportExportPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapImportExportPipeline_grpcServer();
    ~IMapImportExportPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapImportExportPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapImportExportPipelineServiceImpl:  public ::grpcIMapImportExportPipeline::grpcIMapImportExportPipelineService::Service
    {
      public:
        grpcIMapImportExportPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIMapImportExportPipeline::initRequest* request, ::grpcIMapImportExportPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIMapImportExportPipeline::startRequest* request, ::grpcIMapImportExportPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIMapImportExportPipeline::stopRequest* request, ::grpcIMapImportExportPipeline::stopResponse* response) override;
        ::grpc::Status exportMap(::grpc::ServerContext* context, const ::grpcIMapImportExportPipeline::exportMapRequest* request, ::grpcIMapImportExportPipeline::exportMapResponse* response) override;
        ::grpc::Status importMap(::grpc::ServerContext* context, const ::grpcIMapImportExportPipeline::importMapRequest* request, ::grpcIMapImportExportPipeline::importMapResponse* response) override;

        SRef<SolAR::api::pipeline::IMapImportExportPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapImportExportPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapImportExportPipeline::IMapImportExportPipeline_grpcServer>
{
  static constexpr const char * UUID = "a72a8498-eaf8-483a-9c6f-423faaefb047";
  static constexpr const char * NAME = "IMapImportExportPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapImportExportPipeline_grpcServer grpc server component";
};

#endif