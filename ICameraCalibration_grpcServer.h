// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICAMERACALIBRATION_GRPCSERVER_H
#define ICAMERACALIBRATION_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/ICameraCalibration.h"
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
        ::grpc::Status calibrate_grpc0(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrate_grpc0Request* request, ::grpcICameraCalibration::calibrate_grpc0Response* response) override;
        ::grpc::Status calibrate_grpc1(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrate_grpc1Request* request, ::grpcICameraCalibration::calibrate_grpc1Response* response) override;
        ::grpc::Status setParameters(::grpc::ServerContext* context, const ::grpcICameraCalibration::setParametersRequest* request, ::grpcICameraCalibration::setParametersResponse* response) override;

        SRef<SolAR::api::input::devices::ICameraCalibration> m_xpcfComponent;

    };


  private:
    grpcICameraCalibrationServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer>
{
  static constexpr const char * UUID = "4a9b2ea6-0418-4183-8349-f95e19e02cc0";
  static constexpr const char * NAME = "ICameraCalibration_grpcServer";
  static constexpr const char * DESCRIPTION = "ICameraCalibration_grpcServer grpc server component";
};

#endif