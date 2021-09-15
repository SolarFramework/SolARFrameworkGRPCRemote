// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DPOINTSRECTIFICATION_GRPCPROXY_H
#define I2DPOINTSRECTIFICATION_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/geom/I2DPointsRectification.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2DPointsRectificationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI2DPointsRectification {

class I2DPointsRectification_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::I2DPointsRectification {
  public:
    I2DPointsRectification_grpcProxy();
    ~I2DPointsRectification_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode rectify(std::vector<SolAR::datastructure::Point2Df> const& points2D, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::RectificationParameters const& rectParams, std::vector<SolAR::datastructure::Point2Df>& rectifiedPoints2D)     override;
    SolAR::FrameworkReturnCode rectify(std::vector<SolAR::datastructure::Keypoint> const& keypoints, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::RectificationParameters const& rectParams, std::vector<SolAR::datastructure::Keypoint>& rectifiedKeypoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI2DPointsRectification::grpcI2DPointsRectificationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2DPointsRectification::I2DPointsRectification_grpcProxy>
{
  static constexpr const char * UUID = "15b309b0-677d-49f0-abc9-6816aaf98298";
  static constexpr const char * NAME = "I2DPointsRectification_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2DPointsRectification_grpcProxy grpc client proxy component";
};


#endif