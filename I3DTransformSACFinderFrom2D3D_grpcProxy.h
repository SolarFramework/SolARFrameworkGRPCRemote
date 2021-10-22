// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DTRANSFORMSACFINDERFROM2D3D_GRPCPROXY_H
#define I3DTRANSFORMSACFINDERFROM2D3D_GRPCPROXY_H
#include "api/solver/pose/I3DTransformSACFinderFrom2D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI3DTransformSACFinderFrom2D3DService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D {

class I3DTransformSACFinderFrom2D3D_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I3DTransformSACFinderFrom2D3D {
  public:
    I3DTransformSACFinderFrom2D3D_grpcProxy();
    ~I3DTransformSACFinderFrom2D3D_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode estimate(std::vector<SolAR::datastructure::Point2Df> const& imagePoints, std::vector<SolAR::datastructure::Point3Df> const& worldPoints, std::vector<uint32_t>& inliers, SolAR::datastructure::Transform3Df& pose, SolAR::datastructure::Transform3Df const initialPose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI3DTransformSACFinderFrom2D3D::grpcI3DTransformSACFinderFrom2D3DService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcProxy>
{
  static constexpr const char * UUID = "502c323f-1063-4efc-8ac6-c45469632546";
  static constexpr const char * NAME = "I3DTransformSACFinderFrom2D3D_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DTransformSACFinderFrom2D3D_grpcProxy grpc client proxy component";
};


#endif