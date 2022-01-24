// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IREPROJECTIONSTEREO_GRPCPROXY_H
#define IREPROJECTIONSTEREO_GRPCPROXY_H
#include "api/geom/IReprojectionStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIReprojectionStereoService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIReprojectionStereo {

class IReprojectionStereo_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IReprojectionStereo {
  public:
    IReprojectionStereo_grpcProxy();
    ~IReprojectionStereo_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode reprojectToUnrectification(std::vector<SolAR::datastructure::Keypoint> const& rectifiedKeypoints, SolAR::datastructure::RectificationParameters const& rectParams, std::vector<SolAR::datastructure::Keypoint>& unrectifiedKeypoints)     override;
    SolAR::FrameworkReturnCode reprojectToCloudPoints(std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors, SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CamCalibration const& intrinsicParams, std::vector<SRef<SolAR::datastructure::CloudPoint>>& cloudPoints)     override;
    SolAR::FrameworkReturnCode reprojectToCloudPoints(SRef<SolAR::datastructure::Frame> frame, SolAR::datastructure::CamCalibration const& intrinsicParams, std::vector<SRef<SolAR::datastructure::CloudPoint>>& cloudPoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIReprojectionStereo::grpcIReprojectionStereoService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIReprojectionStereo::IReprojectionStereo_grpcProxy>
{
  static constexpr const char * UUID = "6bb5443e-ffa3-47f1-9276-54577fcd5368";
  static constexpr const char * NAME = "IReprojectionStereo_grpcProxy";
  static constexpr const char * DESCRIPTION = "IReprojectionStereo_grpcProxy grpc client proxy component";
};


#endif