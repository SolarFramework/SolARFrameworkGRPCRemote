// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DOVERLAY_GRPCPROXY_H
#define I2DOVERLAY_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/display/I2DOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2DOverlayService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI2DOverlay {

class I2DOverlay_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::display::I2DOverlay {
  public:
    I2DOverlay_grpcProxy();
    ~I2DOverlay_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void drawCircle(SolAR::datastructure::Point2Df const& point, SRef<SolAR::datastructure::Image> displayImage)     override;
    void drawCircles(std::vector<SolAR::datastructure::Point2Df> const& points, SRef<SolAR::datastructure::Image> displayImage)     override;
    void drawCircles(std::vector<SolAR::datastructure::Keypoint> const& keypoints, SRef<SolAR::datastructure::Image> displayImage)     override;
    void drawContour(SolAR::datastructure::Contour2Df const& contours, SRef<SolAR::datastructure::Image> displayImage)     override;
    void drawContours(std::vector<SolAR::datastructure::Contour2Df> const& contours, SRef<SolAR::datastructure::Image> displayImage)     override;
    void drawSBPattern(SolAR::datastructure::SquaredBinaryPattern const& pattern, SRef<SolAR::datastructure::Image> displayImage)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI2DOverlay::grpcI2DOverlayService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2DOverlay::I2DOverlay_grpcProxy>
{
  static constexpr const char * UUID = "c6ec77e6-a38b-4005-a6e7-17c214d3cb20";
  static constexpr const char * NAME = "I2DOverlay_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2DOverlay_grpcProxy grpc client proxy component";
};


#endif