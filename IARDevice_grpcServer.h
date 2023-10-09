// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IARDEVICE_GRPCSERVER_H
#define IARDEVICE_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/input/devices/IARDevice.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIARDevice::startRequest* request, ::grpcIARDevice::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIARDevice::stopRequest* request, ::grpcIARDevice::stopResponse* response) override;
        ::grpc::Status getData(::grpc::ServerContext* context, const ::grpcIARDevice::getDataRequest* request, ::grpcIARDevice::getDataResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::grpcIARDevice::getCameraParametersRequest* request, ::grpcIARDevice::getCameraParametersResponse* response) override;

        SRef<SolAR::api::input::devices::IARDevice> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIARDeviceServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIARDevice::IARDevice_grpcServer>
{
  static constexpr const char * UUID = "98ce0f5b-a279-4eae-95a9-798bf8c54a33";
  static constexpr const char * NAME = "IARDevice_grpcServer";
  static constexpr const char * DESCRIPTION = "IARDevice_grpcServer grpc server component";
};

#endif