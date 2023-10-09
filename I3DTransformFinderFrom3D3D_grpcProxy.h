// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DTRANSFORMFINDERFROM3D3D_GRPCPROXY_H
#define I3DTRANSFORMFINDERFROM3D3D_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/pose/I3DTransformFinderFrom3D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI3DTransformFinderFrom3D3DService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D {

class I3DTransformFinderFrom3D3D_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I3DTransformFinderFrom3D3D {
  public:
    I3DTransformFinderFrom3D3D_grpcProxy();
    ~I3DTransformFinderFrom3D3D_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode estimate(SRef<SolAR::datastructure::PointCloud> const sourcePointCloud, SRef<SolAR::datastructure::PointCloud> const targetPointCloud, SolAR::datastructure::Transform3Df& pose, SolAR::datastructure::Transform3Df const& initialPose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI3DTransformFinderFrom3D3D::grpcI3DTransformFinderFrom3D3DService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy>
{
  static constexpr const char * UUID = "894e87bc-c3a1-4728-844f-a8c565d06522";
  static constexpr const char * NAME = "I3DTransformFinderFrom3D3D_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DTransformFinderFrom3D3D_grpcProxy grpc client proxy component";
};


#endif