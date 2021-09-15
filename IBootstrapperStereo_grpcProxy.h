// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IBOOTSTRAPPERSTEREO_GRPCPROXY_H
#define IBOOTSTRAPPERSTEREO_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/slam/IBootstrapperStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIBootstrapperStereoService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIBootstrapperStereo {

class IBootstrapperStereo_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::slam::IBootstrapperStereo {
  public:
    IBootstrapperStereo_grpcProxy();
    ~IBootstrapperStereo_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams)     override;
    SolAR::FrameworkReturnCode process(SRef<SolAR::datastructure::Frame> const& frame, SRef<SolAR::datastructure::Image>& view)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIBootstrapperStereo::grpcIBootstrapperStereoService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIBootstrapperStereo::IBootstrapperStereo_grpcProxy>
{
  static constexpr const char * UUID = "501f103f-80f5-4c3a-97d2-4903414b9c7f";
  static constexpr const char * NAME = "IBootstrapperStereo_grpcProxy";
  static constexpr const char * DESCRIPTION = "IBootstrapperStereo_grpcProxy grpc client proxy component";
};


#endif