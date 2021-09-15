// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISTEREOCAMERACALIBRATION_GRPCSERVER_H
#define ISTEREOCAMERACALIBRATION_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IStereoCameraCalibration.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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

    };


  private:
    grpcIStereoCameraCalibrationServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer>
{
  static constexpr const char * UUID = "250c8362-c70c-4a4c-9a24-dd361a270a29";
  static constexpr const char * NAME = "IStereoCameraCalibration_grpcServer";
  static constexpr const char * DESCRIPTION = "IStereoCameraCalibration_grpcServer grpc server component";
};

#endif