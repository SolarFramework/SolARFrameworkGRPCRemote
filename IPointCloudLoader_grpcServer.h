// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPOINTCLOUDLOADER_GRPCSERVER_H
#define IPOINTCLOUDLOADER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/files/IPointCloudLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIPointCloudLoaderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPointCloudLoader {

class IPointCloudLoader_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPointCloudLoader_grpcServer();
    ~IPointCloudLoader_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPointCloudLoader"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPointCloudLoaderServiceImpl:  public ::grpcIPointCloudLoader::grpcIPointCloudLoaderService::Service
    {
      public:
        grpcIPointCloudLoaderServiceImpl() = default;
        ::grpc::Status load(::grpc::ServerContext* context, const ::grpcIPointCloudLoader::loadRequest* request, ::grpcIPointCloudLoader::loadResponse* response) override;

        SRef<SolAR::api::input::files::IPointCloudLoader> m_xpcfComponent;

    };


  private:
    grpcIPointCloudLoaderServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPointCloudLoader::IPointCloudLoader_grpcServer>
{
  static constexpr const char * UUID = "98ded2b9-d75b-4bd5-bc6f-9f63dcc7f44b";
  static constexpr const char * NAME = "IPointCloudLoader_grpcServer";
  static constexpr const char * DESCRIPTION = "IPointCloudLoader_grpcServer grpc server component";
};

#endif