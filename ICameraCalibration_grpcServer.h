// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICAMERACALIBRATION_GRPCSERVER_H
#define ICAMERACALIBRATION_GRPCSERVER_H
#include "api/input/devices/ICameraCalibration.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcICameraCalibrationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverICameraCalibration {

class ICameraCalibration_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ICameraCalibration_grpcServer();
    ~ICameraCalibration_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ICameraCalibration"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcICameraCalibrationServiceImpl:  public ::grpcICameraCalibration::grpcICameraCalibrationService::Service
    {
      public:
        grpcICameraCalibrationServiceImpl() = default;
        ::grpc::Status calibrate(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrateRequest* request, ::grpcICameraCalibration::calibrateResponse* response) override;

        SRef<SolAR::api::input::devices::ICameraCalibration> m_xpcfComponent;

    };


  private:
    grpcICameraCalibrationServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer>
{
  static constexpr const char * UUID = "ee5fc0d6-281e-4185-9898-c41606a7a0fc";
  static constexpr const char * NAME = "ICameraCalibration_grpcServer";
  static constexpr const char * DESCRIPTION = "ICameraCalibration_grpcServer grpc server component";
};

#endif