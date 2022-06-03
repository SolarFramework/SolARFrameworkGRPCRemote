// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DOVERLAY_GRPCPROXY_H
#define I3DOVERLAY_GRPCPROXY_H
#include "api/display/I3DOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI3DOverlayService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI3DOverlay {

class I3DOverlay_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::display::I3DOverlay {
  public:
    I3DOverlay_grpcProxy();
    ~I3DOverlay_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters, SolAR::datastructure::CamDistortion const& distorsion_parameters)     override;
    void draw(SolAR::datastructure::Transform3Df const& pose, SRef<SolAR::datastructure::Image> displayImage)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI3DOverlay::grpcI3DOverlayService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy>
{
  static constexpr const char * UUID = "ce48f688-bb48-4d61-800c-e504c0d060a8";
  static constexpr const char * NAME = "I3DOverlay_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DOverlay_grpcProxy grpc client proxy component";
};


#endif