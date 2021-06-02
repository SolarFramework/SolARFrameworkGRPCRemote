// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IKEYPOINTDETECTORREGION_GRPCPROXY_H
#define IKEYPOINTDETECTORREGION_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IKeypointDetectorRegion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIKeypointDetectorRegionService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion {

class IKeypointDetectorRegion_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IKeypointDetectorRegion {
  public:
    IKeypointDetectorRegion_grpcProxy();
    ~IKeypointDetectorRegion_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setType(SolAR::api::features::IKeypointDetector::KeypointDetectorType type)     override;
    SolAR::api::features::IKeypointDetector::KeypointDetectorType getType()     override;
    void detect(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Point2Df> const& contours, std::vector<SolAR::datastructure::Keypoint>& keypoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIKeypointDetectorRegion::grpcIKeypointDetectorRegionService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion::IKeypointDetectorRegion_grpcProxy>
{
  static constexpr const char * UUID = "2f76b442-78b1-41e5-957b-988a1c4a16a6";
  static constexpr const char * NAME = "IKeypointDetectorRegion_grpcProxy";
  static constexpr const char * DESCRIPTION = "IKeypointDetectorRegion_grpcProxy grpc client proxy component";
};


#endif