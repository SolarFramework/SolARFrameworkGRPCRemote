// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMU_GRPCPROXY_H
#define IIMU_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IIMU.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIIMUService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIIMU {

class IIMU_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::devices::IIMU {
  public:
    IIMU_grpcProxy();
    ~IIMU_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode getGyroscopeData(SolAR::datastructure::Vector3f& gyroData)     override;
    SolAR::FrameworkReturnCode getAccelerometerData(SolAR::datastructure::Vector3f& accelData)     override;
    SolAR::FrameworkReturnCode getMagnetometerData(SolAR::datastructure::Vector3f& magData)     override;
    SolAR::FrameworkReturnCode getAllSensorsData(SolAR::datastructure::Vector3f& gyroData, SolAR::datastructure::Vector3f& accelData, SolAR::datastructure::Vector3f& magData)     override;
    bool isGyroscopeAvailable()     override;
    bool isAccelerometerAvailable()     override;
    bool isMagnetometerAvailable()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIIMU::grpcIIMUService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy>
{
  static constexpr const char * UUID = "62cb1384-973a-4ce1-ab8d-f20cae41507e";
  static constexpr const char * NAME = "IIMU_grpcProxy";
  static constexpr const char * DESCRIPTION = "IIMU_grpcProxy grpc client proxy component";
};


#endif