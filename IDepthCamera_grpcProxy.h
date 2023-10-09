// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDEPTHCAMERA_GRPCPROXY_H
#define IDEPTHCAMERA_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/input/devices/IDepthCamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIDepthCameraService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIDepthCamera {

class IDepthCamera_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::IDepthCamera {
  public:
    IDepthCamera_grpcProxy();
    ~IDepthCamera_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode getNextDepthFrame(SRef<SolAR::datastructure::Image>& img)     override;
    SolAR::FrameworkReturnCode getPointCloud(SRef<SolAR::datastructure::PointCloud>& pc)     override;
    SolAR::FrameworkReturnCode setDepthResolution(SolAR::datastructure::Sizei resolution)     override;
    SolAR::FrameworkReturnCode setIntrinsicDepthParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)     override;
    SolAR::FrameworkReturnCode setDistortionDepthParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)     override;
    SolAR::datastructure::Sizei getDepthResolution()     const     override;
    float getDepthMinDistance()     const     override;
    SolAR::datastructure::CamCalibration const& getIntrinsicsDepthParameters()     const     override;
    SolAR::datastructure::CamDistortion const& getDistortionDepthParameters()     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIDepthCamera::grpcIDepthCameraService::Stub> m_grpcStub;
    mutable     SolAR::datastructure::CamDistortion m_getDistortionDepthParameters;
    mutable     SolAR::datastructure::CamCalibration m_getIntrinsicsDepthParameters;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDepthCamera::IDepthCamera_grpcProxy>
{
  static constexpr const char * UUID = "d1c62c3a-6d98-4bf7-b2f8-5eba94979a9d";
  static constexpr const char * NAME = "IDepthCamera_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDepthCamera_grpcProxy grpc client proxy component";
};


#endif