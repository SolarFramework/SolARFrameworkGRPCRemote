// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDEVICE_GRPCPROXY_H
#define IDEVICE_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDeviceService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcIDevice::grpcIDeviceService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDevice::IDevice_grpcProxy>
{
  static constexpr const char * UUID = "9eddb73e-f3cf-4da2-a024-7d1148357c33";
  static constexpr const char * NAME = "IDevice_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDevice_grpcProxy grpc client proxy component";
};


#endif