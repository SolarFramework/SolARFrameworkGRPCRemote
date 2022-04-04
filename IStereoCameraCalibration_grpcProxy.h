// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISTEREOCAMERACALIBRATION_GRPCPROXY_H
#define ISTEREOCAMERACALIBRATION_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/input/devices/IStereoCameraCalibration.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIStereoCameraCalibrationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIStereoCameraCalibration {

class IStereoCameraCalibration_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::IStereoCameraCalibration {
  public:
    IStereoCameraCalibration_grpcProxy();
    ~IStereoCameraCalibration_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode calibrate(std::vector<SRef<SolAR::datastructure::Image>> const& images1, std::vector<SRef<SolAR::datastructure::Image>> const& images2, SolAR::datastructure::CameraParameters const& camParams1, SolAR::datastructure::CameraParameters const& camParams2, SolAR::datastructure::Transform3Df& transformation, SolAR::datastructure::RectificationParameters& rectParams1, SolAR::datastructure::RectificationParameters& rectParams2)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIStereoCameraCalibration::grpcIStereoCameraCalibrationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy>
{
  static constexpr const char * UUID = "f2cec917-6793-4aef-90cb-fd3f843fb43e";
  static constexpr const char * NAME = "IStereoCameraCalibration_grpcProxy";
  static constexpr const char * DESCRIPTION = "IStereoCameraCalibration_grpcProxy grpc client proxy component";
};


#endif