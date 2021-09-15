// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IARDEVICE_GRPCPROXY_H
#define IARDEVICE_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IARDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIARDeviceService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIARDevice {

class IARDevice_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::IARDevice {
  public:
    IARDevice_grpcProxy();
    ~IARDevice_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode getData(std::vector<SRef<SolAR::datastructure::Image>>& images, std::vector<SolAR::datastructure::Transform3Df>& poses, std::chrono::system_clock::time_point& timestamp)     override;
    SolAR::datastructure::CameraRigParameters const& getCameraParameters()     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIARDevice::grpcIARDeviceService::Stub> m_grpcStub;
    mutable     SolAR::datastructure::CameraRigParameters m_getCameraParameters;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIARDevice::IARDevice_grpcProxy>
{
  static constexpr const char * UUID = "77c01b0e-0ba6-4d00-85d6-e95bc09f6436";
  static constexpr const char * NAME = "IARDevice_grpcProxy";
  static constexpr const char * DESCRIPTION = "IARDevice_grpcProxy grpc client proxy component";
};


#endif