// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPCFILTERCENTROID_GRPCPROXY_H
#define IPCFILTERCENTROID_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/pointCloud/IPCFilterCentroid.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIPCFilterCentroidService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIPCFilterCentroid {

class IPCFilterCentroid_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pointCloud::IPCFilterCentroid {
  public:
    IPCFilterCentroid_grpcProxy();
    ~IPCFilterCentroid_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode filter(SRef<SolAR::datastructure::PointCloud> const inPointCloud, SRef<SolAR::datastructure::Point3Df> const centroid, SRef<SolAR::datastructure::PointCloud>& outPointCloud)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIPCFilterCentroid::grpcIPCFilterCentroidService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPCFilterCentroid::IPCFilterCentroid_grpcProxy>
{
  static constexpr const char * UUID = "1c9544b4-5b79-44fa-a9fe-82d1d94a00c8";
  static constexpr const char * NAME = "IPCFilterCentroid_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPCFilterCentroid_grpcProxy grpc client proxy component";
};


#endif