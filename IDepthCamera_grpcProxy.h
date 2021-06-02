// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDEPTHCAMERA_GRPCPROXY_H
#define IDEPTHCAMERA_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IDepthCamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDepthCameraService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcIDepthCamera::grpcIDepthCameraService::Stub> m_grpcStub;
    mutable     SolAR::datastructure::CamDistortion m_getDistortionDepthParameters;
    mutable     SolAR::datastructure::CamCalibration m_getIntrinsicsDepthParameters;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDepthCamera::IDepthCamera_grpcProxy>
{
  static constexpr const char * UUID = "ec801ecd-7404-4607-ba37-f8ac415a83ca";
  static constexpr const char * NAME = "IDepthCamera_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDepthCamera_grpcProxy grpc client proxy component";
};


#endif