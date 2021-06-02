// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMU_GRPCSERVER_H
#define IIMU_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IIMU.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIIMUService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIIMU {

class IIMU_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IIMU_grpcServer();
    ~IIMU_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IIMU"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIIMUServiceImpl:  public ::grpcIIMU::grpcIIMUService::Service
    {
      public:
        grpcIIMUServiceImpl() = default;
        ::grpc::Status start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::stopResponse* response) override;
        ::grpc::Status getGyroscopeData(::grpc::ServerContext* context, const ::grpcIIMU::getGyroscopeDataRequest* request, ::grpcIIMU::getGyroscopeDataResponse* response) override;
        ::grpc::Status getAccelerometerData(::grpc::ServerContext* context, const ::grpcIIMU::getAccelerometerDataRequest* request, ::grpcIIMU::getAccelerometerDataResponse* response) override;
        ::grpc::Status getMagnetometerData(::grpc::ServerContext* context, const ::grpcIIMU::getMagnetometerDataRequest* request, ::grpcIIMU::getMagnetometerDataResponse* response) override;
        ::grpc::Status getAllSensorsData(::grpc::ServerContext* context, const ::grpcIIMU::getAllSensorsDataRequest* request, ::grpcIIMU::getAllSensorsDataResponse* response) override;
        ::grpc::Status isGyroscopeAvailable(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::isGyroscopeAvailableResponse* response) override;
        ::grpc::Status isAccelerometerAvailable(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::isAccelerometerAvailableResponse* response) override;
        ::grpc::Status isMagnetometerAvailable(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::isMagnetometerAvailableResponse* response) override;

        SRef<SolAR::api::input::devices::IIMU> m_xpcfComponent;

    };


  private:
    grpcIIMUServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer>
{
  static constexpr const char * UUID = "de8eb409-d455-4d34-a605-0d787c6bd332";
  static constexpr const char * NAME = "IIMU_grpcServer";
  static constexpr const char * DESCRIPTION = "IIMU_grpcServer grpc server component";
};

#endif