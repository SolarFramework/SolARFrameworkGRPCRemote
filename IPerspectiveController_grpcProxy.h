// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPERSPECTIVECONTROLLER_GRPCPROXY_H
#define IPERSPECTIVECONTROLLER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/image/IPerspectiveController.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIPerspectiveControllerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcIPerspectiveController::grpcIPerspectiveControllerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPerspectiveController::IPerspectiveController_grpcProxy>
{
  static constexpr const char * UUID = "46493b54-1b53-46a0-b236-815056d2484e";
  static constexpr const char * NAME = "IPerspectiveController_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPerspectiveController_grpcProxy grpc client proxy component";
};


#endif