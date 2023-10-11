// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPOINTCLOUDEXPORTER_GRPCPROXY_H
#define IPOINTCLOUDEXPORTER_GRPCPROXY_H
#include "api/output/files/IPointCloudExporter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIPointCloudExporterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIPointCloudExporter {

class IPointCloudExporter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::output::files::IPointCloudExporter {
  public:
    IPointCloudExporter_grpcProxy();
    ~IPointCloudExporter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode exportPointCloud(SRef<SolAR::datastructure::PointCloud> const& pointCloud)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIPointCloudExporter::grpcIPointCloudExporterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPointCloudExporter::IPointCloudExporter_grpcProxy>
{
  static constexpr const char * UUID = "7d924b06-238c-11ed-861d-0242ac120002";
  static constexpr const char * NAME = "IPointCloudExporter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPointCloudExporter_grpcProxy grpc client proxy component";
};


#endif