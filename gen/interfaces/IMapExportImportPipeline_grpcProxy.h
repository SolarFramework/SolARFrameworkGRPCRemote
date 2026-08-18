// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPEXPORTIMPORTPIPELINE_GRPCPROXY_H
#define IMAPEXPORTIMPORTPIPELINE_GRPCPROXY_H
#include "api/pipeline/IMapExportImportPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMapExportImportPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMapExportImportPipeline {

class IMapExportImportPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IMapExportImportPipeline {
  public:
    IMapExportImportPipeline_grpcProxy();
    ~IMapExportImportPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode exportMap(std::string const& mapUUID, std::vector<unsigned char>& compressedZipExport)     override;
    SolAR::FrameworkReturnCode importMap(std::string const& mapUUID, std::vector<unsigned char> const& compressedZipImport)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMapExportImportPipeline::grpcIMapExportImportPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapExportImportPipeline::IMapExportImportPipeline_grpcProxy>
{
  static constexpr const char * UUID = "59bed21a-caeb-4144-86b0-a006f2e4ff01";
  static constexpr const char * NAME = "IMapExportImportPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapExportImportPipeline_grpcProxy grpc client proxy component";
};


#endif