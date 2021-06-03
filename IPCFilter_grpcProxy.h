// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPCFILTER_GRPCPROXY_H
#define IPCFILTER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/pointCloud/IPCFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIPCFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcIPCFilter::grpcIPCFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPCFilter::IPCFilter_grpcProxy>
{
  static constexpr const char * UUID = "5cb6e98f-f467-4240-a77b-91fff20ed0ca";
  static constexpr const char * NAME = "IPCFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPCFilter_grpcProxy grpc client proxy component";
};


#endif