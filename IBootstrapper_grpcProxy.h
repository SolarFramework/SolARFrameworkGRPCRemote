// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IBOOTSTRAPPER_GRPCPROXY_H
#define IBOOTSTRAPPER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/slam/IBootstrapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIBootstrapperService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIBootstrapper {

class IBootstrapper_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::slam::IBootstrapper {
  public:
    IBootstrapper_grpcProxy();
    ~IBootstrapper_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode process(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& view, SolAR::datastructure::Transform3Df const& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIBootstrapper::grpcIBootstrapperService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIBootstrapper::IBootstrapper_grpcProxy>
{
  static constexpr const char * UUID = "540dbc60-6b01-4586-ad81-bd375ef24692";
  static constexpr const char * NAME = "IBootstrapper_grpcProxy";
  static constexpr const char * DESCRIPTION = "IBootstrapper_grpcProxy grpc client proxy component";
};


#endif