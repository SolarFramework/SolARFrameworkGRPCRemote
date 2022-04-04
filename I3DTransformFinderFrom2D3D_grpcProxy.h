// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DTRANSFORMFINDERFROM2D3D_GRPCPROXY_H
#define I3DTRANSFORMFINDERFROM2D3D_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/I3DTransformFinderFrom2D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI3DTransformFinderFrom2D3DService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D3D {

class I3DTransformFinderFrom2D3D_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I3DTransformFinderFrom2D3D {
  public:
    I3DTransformFinderFrom2D3D_grpcProxy();
    ~I3DTransformFinderFrom2D3D_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode estimate(std::vector<SolAR::datastructure::Point2Df> const& imagePoints, std::vector<SolAR::datastructure::Point3Df> const& worldPoints, SolAR::datastructure::Transform3Df& pose, SolAR::datastructure::Transform3Df const initialPose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI3DTransformFinderFrom2D3D::grpcI3DTransformFinderFrom2D3DService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcProxy>
{
  static constexpr const char * UUID = "201fb9e7-9452-42e2-a587-9e9b3e49c889";
  static constexpr const char * NAME = "I3DTransformFinderFrom2D3D_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DTransformFinderFrom2D3D_grpcProxy grpc client proxy component";
};


#endif