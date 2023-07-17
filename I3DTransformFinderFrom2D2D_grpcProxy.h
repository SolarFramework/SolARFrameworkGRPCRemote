// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DTRANSFORMFINDERFROM2D2D_GRPCPROXY_H
#define I3DTRANSFORMFINDERFROM2D2D_GRPCPROXY_H
#include "api/solver/pose/I3DTransformFinderFrom2D2D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI3DTransformFinderFrom2D2DService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D {

class I3DTransformFinderFrom2D2D_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I3DTransformFinderFrom2D2D {
  public:
    I3DTransformFinderFrom2D2D_grpcProxy();
    ~I3DTransformFinderFrom2D2D_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode estimate(std::vector<SolAR::datastructure::Point2Df> const& pointsView1, std::vector<SolAR::datastructure::Point2Df> const& pointsView2, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df& poseView2, std::vector<SolAR::datastructure::DescriptorMatch>& inlierMatches)     override;
    SolAR::FrameworkReturnCode estimate(std::vector<SolAR::datastructure::Keypoint> const& pointsView1, std::vector<SolAR::datastructure::Keypoint> const& pointsView2, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df& poseView2, std::vector<SolAR::datastructure::DescriptorMatch>& inlierMatches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI3DTransformFinderFrom2D2D::grpcI3DTransformFinderFrom2D2DService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcProxy>
{
  static constexpr const char * UUID = "62f0a994-3ad4-4322-8059-7513153d074a";
  static constexpr const char * NAME = "I3DTransformFinderFrom2D2D_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DTransformFinderFrom2D2D_grpcProxy grpc client proxy component";
};


#endif