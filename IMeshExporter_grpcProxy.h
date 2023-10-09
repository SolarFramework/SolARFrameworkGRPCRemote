// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMESHEXPORTER_GRPCPROXY_H
#define IMESHEXPORTER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/output/files/IMeshExporter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMeshExporterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMeshExporter {

class IMeshExporter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::output::files::IMeshExporter {
  public:
    IMeshExporter_grpcProxy();
    ~IMeshExporter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode exportMesh(SRef<SolAR::datastructure::Mesh> const& mesh)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMeshExporter::grpcIMeshExporterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMeshExporter::IMeshExporter_grpcProxy>
{
  static constexpr const char * UUID = "0e1263d8-462d-11ed-b878-0242ac120002";
  static constexpr const char * NAME = "IMeshExporter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMeshExporter_grpcProxy grpc client proxy component";
};


#endif