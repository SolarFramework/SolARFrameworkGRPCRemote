// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMASKOVERLAY_GRPCPROXY_H
#define IMASKOVERLAY_GRPCPROXY_H
#include "api/display/IMaskOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMaskOverlayService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMaskOverlay {

class IMaskOverlay_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::display::IMaskOverlay {
  public:
    IMaskOverlay_grpcProxy();
    ~IMaskOverlay_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode draw(SRef<SolAR::datastructure::Image> image, std::vector<SolAR::datastructure::Rectanglei> const& boxes, std::vector<SRef<SolAR::datastructure::Image>> const& masks, std::vector<uint32_t> const& classIds, std::vector<float> const& scores)     override;
    SolAR::FrameworkReturnCode draw(SRef<SolAR::datastructure::Image> image, SRef<SolAR::datastructure::Image> const mask)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMaskOverlay::grpcIMaskOverlayService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMaskOverlay::IMaskOverlay_grpcProxy>
{
  static constexpr const char * UUID = "10d2d826-714e-4eb9-91d4-9c577585ddfe";
  static constexpr const char * NAME = "IMaskOverlay_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMaskOverlay_grpcProxy grpc client proxy component";
};


#endif