// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMULTIVIEWSTEREO_GRPCPROXY_H
#define IMULTIVIEWSTEREO_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/sfm/IMultiViewStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMultiViewStereoService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMultiViewStereo {

class IMultiViewStereo_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::sfm::IMultiViewStereo {
  public:
    IMultiViewStereo_grpcProxy();
    ~IMultiViewStereo_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode createDenseMap(SRef<datastructure::Map> const& map, SRef<datastructure::Map>& densemap)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMultiViewStereo::grpcIMultiViewStereoService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMultiViewStereo::IMultiViewStereo_grpcProxy>
{
  static constexpr const char * UUID = "269323f2-7b13-451d-a52d-35ce13c1d73b";
  static constexpr const char * NAME = "IMultiViewStereo_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMultiViewStereo_grpcProxy grpc client proxy component";
};


#endif