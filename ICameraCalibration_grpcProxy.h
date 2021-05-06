// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICAMERACALIBRATION_GRPCPROXY_H
#define ICAMERACALIBRATION_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/ICameraCalibration.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcICameraCalibrationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyICameraCalibration {

class ICameraCalibration_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::ICameraCalibration {
  public:
    ICameraCalibration_grpcProxy();
    ~ICameraCalibration_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    bool calibrate(std::string const& inputVideo, std::string const& cailbrationFilePath)     override;
    bool calibrate(int const camera_id, std::string const& cailbrationFilePath)     override;
    bool setParameters(std::string const& config_file)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcICameraCalibration::grpcICameraCalibrationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyICameraCalibration::ICameraCalibration_grpcProxy>
{
  static constexpr const char * UUID = "2ab534cc-8a5a-4da6-9929-3edcf7de5d41";
  static constexpr const char * NAME = "ICameraCalibration_grpcProxy";
  static constexpr const char * DESCRIPTION = "ICameraCalibration_grpcProxy grpc client proxy component";
};


#endif