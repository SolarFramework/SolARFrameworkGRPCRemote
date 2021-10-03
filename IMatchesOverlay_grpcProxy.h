// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMATCHESOVERLAY_GRPCPROXY_H
#define IMATCHESOVERLAY_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/display/IMatchesOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMatchesOverlayService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIMatchesOverlay {

class IMatchesOverlay_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::display::IMatchesOverlay {
  public:
    IMatchesOverlay_grpcProxy();
    ~IMatchesOverlay_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void draw(SRef<SolAR::datastructure::Image> const image1, SRef<SolAR::datastructure::Image> const image2, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Point2Df> const& points_image1, std::vector<SolAR::datastructure::Point2Df> const& points_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)     override;
    void draw(SRef<SolAR::datastructure::Image> const image1, SRef<SolAR::datastructure::Image> const image2, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image1, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)     override;
    void draw(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Point2Df> const& points_image1, std::vector<SolAR::datastructure::Point2Df> const& points_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)     override;
    void draw(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image1, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIMatchesOverlay::grpcIMatchesOverlayService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMatchesOverlay::IMatchesOverlay_grpcProxy>
{
  static constexpr const char * UUID = "a35aa6c7-ce39-4158-866d-5b0210267c12";
  static constexpr const char * NAME = "IMatchesOverlay_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMatchesOverlay_grpcProxy grpc client proxy component";
};


#endif