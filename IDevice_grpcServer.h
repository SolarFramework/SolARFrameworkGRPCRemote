// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDEVICE_GRPCSERVER_H
#define IDEVICE_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDeviceService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDevice {

class IDevice_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDevice_grpcServer();
    ~IDevice_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDevice"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDeviceServiceImpl:  public ::grpcIDevice::grpcIDeviceService::Service
    {
      public:
        grpcIDeviceServiceImpl() = default;
        ::grpc::Status start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDevice::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDevice::stopResponse* response) override;

        SRef<SolAR::api::input::devices::IDevice> m_xpcfComponent;

    };


  private:
    grpcIDeviceServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDevice::IDevice_grpcServer>
{
  static constexpr const char * UUID = "2c92678c-f2da-4800-b950-b3154c8fe744";
  static constexpr const char * NAME = "IDevice_grpcServer";
  static constexpr const char * DESCRIPTION = "IDevice_grpcServer grpc server component";
};

#endif