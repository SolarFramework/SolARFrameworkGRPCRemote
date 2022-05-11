// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDEPTHESTIMATION_GRPCPROXY_H
#define IDEPTHESTIMATION_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/geom/IDepthEstimation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIDepthEstimationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIDepthEstimation {

class IDepthEstimation_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IDepthEstimation {
  public:
    IDepthEstimation_grpcProxy();
    ~IDepthEstimation_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode estimate(std::vector<SolAR::datastructure::Keypoint>& rectKeypoints1, std::vector<SolAR::datastructure::Keypoint>& rectKeypoints2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, float focal, float baseline, SolAR::datastructure::StereoType type)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIDepthEstimation::grpcIDepthEstimationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy>
{
  static constexpr const char * UUID = "a0d958fd-53ed-490b-aec4-2a5a93a60d98";
  static constexpr const char * NAME = "IDepthEstimation_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDepthEstimation_grpcProxy grpc client proxy component";
};


#endif