// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDEVICE_GRPCPROXY_H
#define IDEVICE_GRPCPROXY_H
#include "api/input/devices/IDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIDeviceService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIDevice {

class IDevice_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::IDevice {
  public:
    IDevice_grpcProxy();
    ~IDevice_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIDevice::grpcIDeviceService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDevice::IDevice_grpcProxy>
{
  static constexpr const char * UUID = "abd028ed-44a2-4ac0-831b-e0e9b939031c";
  static constexpr const char * NAME = "IDevice_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDevice_grpcProxy grpc client proxy component";
};


#endif