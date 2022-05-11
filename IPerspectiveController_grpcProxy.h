// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPERSPECTIVECONTROLLER_GRPCPROXY_H
#define IPERSPECTIVECONTROLLER_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/image/IPerspectiveController.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIPerspectiveControllerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIPerspectiveController {

class IPerspectiveController_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::image::IPerspectiveController {
  public:
    IPerspectiveController_grpcProxy();
    ~IPerspectiveController_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode correct(SRef<SolAR::datastructure::Image> const inputImg, std::vector<SolAR::datastructure::Contour2Df> const& contours, std::vector<SRef<SolAR::datastructure::Image>>& patches)     override;
    SolAR::FrameworkReturnCode correct(SRef<SolAR::datastructure::Image> const inputImg, SolAR::datastructure::Contour2Df const& contour, SRef<SolAR::datastructure::Image>& patch)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIPerspectiveController::grpcIPerspectiveControllerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPerspectiveController::IPerspectiveController_grpcProxy>
{
  static constexpr const char * UUID = "de8ab6b1-73c1-4954-8839-f37c63a5ac18";
  static constexpr const char * NAME = "IPerspectiveController_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPerspectiveController_grpcProxy grpc client proxy component";
};


#endif