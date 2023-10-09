// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPCFILTER_GRPCPROXY_H
#define IPCFILTER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/pointCloud/IPCFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIPCFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIPCFilter {

class IPCFilter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pointCloud::IPCFilter {
  public:
    IPCFilter_grpcProxy();
    ~IPCFilter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode filter(SRef<SolAR::datastructure::PointCloud> const inPointCloud, SRef<SolAR::datastructure::PointCloud>& outPointCloud)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIPCFilter::grpcIPCFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPCFilter::IPCFilter_grpcProxy>
{
  static constexpr const char * UUID = "34192941-748e-4521-8d30-e12c06f5e226";
  static constexpr const char * NAME = "IPCFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPCFilter_grpcProxy grpc client proxy component";
};


#endif