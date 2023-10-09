// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISTEREOCAMERACALIBRATION_GRPCSERVER_H
#define ISTEREOCAMERACALIBRATION_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/input/devices/IStereoCameraCalibration.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIStereoCameraCalibrationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIStereoCameraCalibration {

class IStereoCameraCalibration_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IStereoCameraCalibration_grpcServer();
    ~IStereoCameraCalibration_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IStereoCameraCalibration"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIStereoCameraCalibrationServiceImpl:  public ::grpcIStereoCameraCalibration::grpcIStereoCameraCalibrationService::Service
    {
      public:
        grpcIStereoCameraCalibrationServiceImpl() = default;
        ::grpc::Status calibrate(::grpc::ServerContext* context, const ::grpcIStereoCameraCalibration::calibrateRequest* request, ::grpcIStereoCameraCalibration::calibrateResponse* response) override;

        SRef<SolAR::api::input::devices::IStereoCameraCalibration> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIStereoCameraCalibrationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer>
{
  static constexpr const char * UUID = "d8ac896d-772d-4ce1-b7be-a8f08020eeb6";
  static constexpr const char * NAME = "IStereoCameraCalibration_grpcServer";
  static constexpr const char * DESCRIPTION = "IStereoCameraCalibration_grpcServer grpc server component";
};

#endif