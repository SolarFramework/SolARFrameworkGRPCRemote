// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPEXPORTIMPORTPIPELINE_GRPCSERVER_H
#define IMAPEXPORTIMPORTPIPELINE_GRPCSERVER_H
#include "api/pipeline/IMapExportImportPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapExportImportPipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapExportImportPipeline {

class IMapExportImportPipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapExportImportPipeline_grpcServer();
    ~IMapExportImportPipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapExportImportPipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapExportImportPipelineServiceImpl:  public ::grpcIMapExportImportPipeline::grpcIMapExportImportPipelineService::Service
    {
      public:
        grpcIMapExportImportPipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::initRequest* request, ::grpcIMapExportImportPipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::startRequest* request, ::grpcIMapExportImportPipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::stopRequest* request, ::grpcIMapExportImportPipeline::stopResponse* response) override;
        ::grpc::Status exportMap(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::exportMapRequest* request, ::grpcIMapExportImportPipeline::exportMapResponse* response) override;
        ::grpc::Status importMap(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::importMapRequest* request, ::grpcIMapExportImportPipeline::importMapResponse* response) override;

        SRef<SolAR::api::pipeline::IMapExportImportPipeline> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapExportImportPipelineServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapExportImportPipeline::IMapExportImportPipeline_grpcServer>
{
  static constexpr const char * UUID = "a72a8498-eaf8-483a-9c6f-423faaefb047";
  static constexpr const char * NAME = "IMapExportImportPipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapExportImportPipeline_grpcServer grpc server component";
};

#endif