// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DTRANSFORMSACFINDERFROM3D3D_GRPCPROXY_H
#define I3DTRANSFORMSACFINDERFROM3D3D_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/pose/I3DTransformSACFinderFrom3D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI3DTransformSACFinderFrom3D3DService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D {

class I3DTransformSACFinderFrom3D3D_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I3DTransformSACFinderFrom3D3D {
  public:
    I3DTransformSACFinderFrom3D3D_grpcProxy();
    ~I3DTransformSACFinderFrom3D3D_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode estimate(std::vector<SolAR::datastructure::Point3Df> const& firstPoints3D, std::vector<SolAR::datastructure::Point3Df> const& secondPoints3D, SolAR::datastructure::Transform3Df& pose, std::vector<int>& inliers)     override;
    SolAR::FrameworkReturnCode estimate(SRef<SolAR::datastructure::Keyframe> const firstKeyframe, SRef<SolAR::datastructure::Keyframe> const secondKeyframe, SolAR::datastructure::CameraParameters const& firstCameraParameters, SolAR::datastructure::CameraParameters const& secondCameraParameters, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point3Df> const& firstPoints3D, std::vector<SolAR::datastructure::Point3Df> const& secondPoints3D, SolAR::datastructure::Transform3Df& pose, std::vector<int>& inliers)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI3DTransformSACFinderFrom3D3D::grpcI3DTransformSACFinderFrom3D3DService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcProxy>
{
  static constexpr const char * UUID = "c5d93531-de0c-4424-b48f-00709822dd4a";
  static constexpr const char * NAME = "I3DTransformSACFinderFrom3D3D_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DTransformSACFinderFrom3D3D_grpcProxy grpc client proxy component";
};


#endif