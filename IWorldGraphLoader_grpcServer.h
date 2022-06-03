// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IWORLDGRAPHLOADER_GRPCSERVER_H
#define IWORLDGRAPHLOADER_GRPCSERVER_H
#include "api/input/files/IWorldGraphLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIWorldGraphLoaderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIWorldGraphLoader {

class IWorldGraphLoader_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IWorldGraphLoader_grpcServer();
    ~IWorldGraphLoader_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IWorldGraphLoader"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIWorldGraphLoaderServiceImpl:  public ::grpcIWorldGraphLoader::grpcIWorldGraphLoaderService::Service
    {
      public:
        grpcIWorldGraphLoaderServiceImpl() = default;
        ::grpc::Status load(::grpc::ServerContext* context, const ::grpcIWorldGraphLoader::loadRequest* request, ::grpcIWorldGraphLoader::loadResponse* response) override;

        SRef<SolAR::api::input::files::IWorldGraphLoader> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIWorldGraphLoaderServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer>
{
  static constexpr const char * UUID = "15716f60-7688-44cb-867c-a8a49d4b9a80";
  static constexpr const char * NAME = "IWorldGraphLoader_grpcServer";
  static constexpr const char * DESCRIPTION = "IWorldGraphLoader_grpcServer grpc server component";
};

#endif