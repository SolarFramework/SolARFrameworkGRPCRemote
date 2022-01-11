// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORMATCHERGEOMETRIC_GRPCPROXY_H
#define IDESCRIPTORMATCHERGEOMETRIC_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorMatcherGeometric.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDescriptorMatcherGeometricService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric {

class IDescriptorMatcherGeometric_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorMatcherGeometric {
  public:
    IDescriptorMatcherGeometric_grpcProxy();
    ~IDescriptorMatcherGeometric_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors2, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints1, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints2, SolAR::datastructure::Transform3Df const& pose1, SolAR::datastructure::Transform3Df const& pose2, SolAR::datastructure::CameraParameters const& camParams, std::vector<SolAR::datastructure::DescriptorMatch>& matches, std::vector<uint32_t> const& mask)     override;
    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::Frame> const frame1, SRef<SolAR::datastructure::Frame> const frame2, SolAR::datastructure::CameraParameters const& camParams, std::vector<SolAR::datastructure::DescriptorMatch>& matches, std::vector<uint32_t> const& mask)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIDescriptorMatcherGeometric::grpcIDescriptorMatcherGeometricService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcProxy>
{
  static constexpr const char * UUID = "1bd62a3f-3376-45c3-a980-94d042ae509f";
  static constexpr const char * NAME = "IDescriptorMatcherGeometric_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcherGeometric_grpcProxy grpc client proxy component";
};


#endif