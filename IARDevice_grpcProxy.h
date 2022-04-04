// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IARDEVICE_GRPCPROXY_H
#define IARDEVICE_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/input/devices/IARDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIARDeviceService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

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
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIARDevice::grpcIARDeviceService::Stub> m_grpcStub;
    mutable     SolAR::datastructure::CameraRigParameters m_getCameraParameters;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIARDevice::IARDevice_grpcProxy>
{
  static constexpr const char * UUID = "33dd6e3b-3fb5-449f-b90b-9fd97c59227c";
  static constexpr const char * NAME = "IARDevice_grpcProxy";
  static constexpr const char * DESCRIPTION = "IARDevice_grpcProxy grpc client proxy component";
};


#endif