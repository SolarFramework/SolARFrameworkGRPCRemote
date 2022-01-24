// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORMATCHERSTEREO_GRPCPROXY_H
#define IDESCRIPTORMATCHERSTEREO_GRPCPROXY_H
#include "api/features/IDescriptorMatcherStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDescriptorMatcherStereoService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo {

class IDescriptorMatcherStereo_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorMatcherStereo {
  public:
    IDescriptorMatcherStereo_grpcProxy();
    ~IDescriptorMatcherStereo_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::DescriptorBuffer> const& descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const& descriptors2, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints1, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints2, SolAR::datastructure::StereoType type, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;
    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::Frame> const frame1, SRef<SolAR::datastructure::Frame> const frame2, SolAR::datastructure::StereoType type, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIDescriptorMatcherStereo::grpcIDescriptorMatcherStereoService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcProxy>
{
  static constexpr const char * UUID = "06bc0b35-6240-4bb9-ae8a-1de2c5f77a13";
  static constexpr const char * NAME = "IDescriptorMatcherStereo_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcherStereo_grpcProxy grpc client proxy component";
};


#endif