// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICAMERACALIBRATION_GRPCPROXY_H
#define ICAMERACALIBRATION_GRPCPROXY_H
#include "api/input/devices/ICameraCalibration.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcICameraCalibrationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyICameraCalibration {

class ICameraCalibration_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::ICameraCalibration {
  public:
    ICameraCalibration_grpcProxy();
    ~ICameraCalibration_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode calibrate(std::vector<SRef<SolAR::datastructure::Image>> const& images, SolAR::datastructure::CameraParameters& camParams)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcICameraCalibration::grpcICameraCalibrationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyICameraCalibration::ICameraCalibration_grpcProxy>
{
  static constexpr const char * UUID = "b3774427-f712-483b-bbed-060d2ce6134a";
  static constexpr const char * NAME = "ICameraCalibration_grpcProxy";
  static constexpr const char * DESCRIPTION = "ICameraCalibration_grpcProxy grpc client proxy component";
};


#endif