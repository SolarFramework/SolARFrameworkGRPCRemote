// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IARDEVICE_GRPCSERVER_H
#define IARDEVICE_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IARDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIARDeviceService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIARDevice {

class IARDevice_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IARDevice_grpcServer();
    ~IARDevice_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IARDevice"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIARDeviceServiceImpl:  public ::grpcIARDevice::grpcIARDeviceService::Service
    {
      public:
        grpcIARDeviceServiceImpl() = default;
        ::grpc::Status start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIARDevice::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIARDevice::stopResponse* response) override;
        ::grpc::Status getData(::grpc::ServerContext* context, const ::grpcIARDevice::getDataRequest* request, ::grpcIARDevice::getDataResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIARDevice::getCameraParametersResponse* response) override;

        SRef<SolAR::api::input::devices::IARDevice> m_xpcfComponent;

    };


  private:
    grpcIARDeviceServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIARDevice::IARDevice_grpcServer>
{
  static constexpr const char * UUID = "c8740911-72a5-4e64-b097-c0c36be70c4a";
  static constexpr const char * NAME = "IARDevice_grpcServer";
  static constexpr const char * DESCRIPTION = "IARDevice_grpcServer grpc server component";
};

#endif