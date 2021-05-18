// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICAMERA_GRPCPROXY_H
#define ICAMERA_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/ICamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcICameraService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyICamera {

class ICamera_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::ICamera {
  public:
    ICamera_grpcProxy();
    ~ICamera_grpcProxy() override = default;
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


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcICamera::grpcICameraService::Stub> m_grpcStub;
    mutable     SolAR::datastructure::CamDistortion m_getDistortionParameters;
    mutable     SolAR::datastructure::CamCalibration m_getIntrinsicsParameters;
    mutable     SolAR::datastructure::CameraParameters m_getParameters;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy>
{
  static constexpr const char * UUID = "d38a9dff-748d-4638-901d-a6c3b3333891";
  static constexpr const char * NAME = "ICamera_grpcProxy";
  static constexpr const char * DESCRIPTION = "ICamera_grpcProxy grpc client proxy component";
};


#endif