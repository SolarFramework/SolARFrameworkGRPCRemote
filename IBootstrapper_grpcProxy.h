// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IBOOTSTRAPPER_GRPCPROXY_H
#define IBOOTSTRAPPER_GRPCPROXY_H
#include "api/slam/IBootstrapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIBootstrapperService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIBootstrapper {

class IBootstrapper_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::slam::IBootstrapper {
  public:
    IBootstrapper_grpcProxy();
    ~IBootstrapper_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode process(SRef<SolAR::datastructure::Frame> const& frame, SRef<SolAR::datastructure::Image>& view)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIBootstrapper::grpcIBootstrapperService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIBootstrapper::IBootstrapper_grpcProxy>
{
  static constexpr const char * UUID = "d593b615-efcf-4b4c-82eb-148065f85008";
  static constexpr const char * NAME = "IBootstrapper_grpcProxy";
  static constexpr const char * DESCRIPTION = "IBootstrapper_grpcProxy grpc client proxy component";
};


#endif