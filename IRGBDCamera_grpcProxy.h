// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IRGBDCAMERA_GRPCPROXY_H
#define IRGBDCAMERA_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/input/devices/IRGBDCamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIRGBDCameraService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIRGBDCamera {

class IRGBDCamera_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::IRGBDCamera {
  public:
    IRGBDCamera_grpcProxy();
    ~IRGBDCamera_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode getNextImage(SRef<SolAR::datastructure::Image>& img)     override;
    void setResolution(SolAR::datastructure::Sizei const& resolution)     override;
    void setIntrinsicParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)     override;
    void setDistortionParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)     override;
    void setParameters(SolAR::datastructure::CameraParameters const& parameters)     override;
    SolAR::datastructure::Sizei getResolution()     const     override;
    SolAR::datastructure::CamCalibration const& getIntrinsicsParameters()     const     override;
    SolAR::datastructure::CameraParameters const& getParameters()     const     override;
    SolAR::datastructure::CamDistortion const& getDistortionParameters()     const     override;
    SolAR::FrameworkReturnCode getNextDepthFrame(SRef<SolAR::datastructure::Image>& img)     override;
    SolAR::FrameworkReturnCode getPointCloud(SRef<SolAR::datastructure::PointCloud>& pc)     override;
    SolAR::FrameworkReturnCode setDepthResolution(SolAR::datastructure::Sizei resolution)     override;
    SolAR::FrameworkReturnCode setIntrinsicDepthParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)     override;
    SolAR::FrameworkReturnCode setDistortionDepthParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)     override;
    SolAR::datastructure::Sizei getDepthResolution()     const     override;
    float getDepthMinDistance()     const     override;
    SolAR::datastructure::CamCalibration const& getIntrinsicsDepthParameters()     const     override;
    SolAR::datastructure::CamDistortion const& getDistortionDepthParameters()     const     override;
    SolAR::FrameworkReturnCode getNextRGBDFrame(SRef<SolAR::datastructure::Image>& colorImg, SRef<SolAR::datastructure::Image>& depthImg)     override;
    SolAR::FrameworkReturnCode alignDepthToColor(SRef<SolAR::datastructure::Image>& alignedDepthImg)     const     override;
    SolAR::FrameworkReturnCode alignColorToDepth(SRef<SolAR::datastructure::Image>& alignedColorImg)     const     override;
    SolAR::datastructure::Point3Df getPixelToWorld(SolAR::datastructure::Point2Di const& inPixel)     const     override;
    SolAR::datastructure::Point2Di getWorldToPixel(SolAR::datastructure::CloudPoint const& in3DPoint)     const     override;
    std::vector<SolAR::datastructure::Point2Df> getWorldToPixels(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& in3DPoints)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIRGBDCamera::grpcIRGBDCameraService::Stub> m_grpcStub;
    mutable     SolAR::datastructure::CamDistortion m_getDistortionDepthParameters;
    mutable     SolAR::datastructure::CamDistortion m_getDistortionParameters;
    mutable     SolAR::datastructure::CamCalibration m_getIntrinsicsDepthParameters;
    mutable     SolAR::datastructure::CamCalibration m_getIntrinsicsParameters;
    mutable     SolAR::datastructure::CameraParameters m_getParameters;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy>
{
  static constexpr const char * UUID = "1c8df185-f8d9-4899-8206-74d1f64a7ad9";
  static constexpr const char * NAME = "IRGBDCamera_grpcProxy";
  static constexpr const char * DESCRIPTION = "IRGBDCamera_grpcProxy grpc client proxy component";
};


#endif