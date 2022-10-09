// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMESHLOADER_GRPCSERVER_H
#define IMESHLOADER_GRPCSERVER_H
#include "api/input/files/IMeshLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMeshLoaderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMeshLoader {

class IMeshLoader_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMeshLoader_grpcServer();
    ~IMeshLoader_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMeshLoader"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMeshLoaderServiceImpl:  public ::grpcIMeshLoader::grpcIMeshLoaderService::Service
    {
      public:
        grpcIMeshLoaderServiceImpl() = default;
        ::grpc::Status load(::grpc::ServerContext* context, const ::grpcIMeshLoader::loadRequest* request, ::grpcIMeshLoader::loadResponse* response) override;

        SRef<SolAR::api::input::files::IMeshLoader> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMeshLoaderServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMeshLoader::IMeshLoader_grpcServer>
{
  static constexpr const char * UUID = "5973d118-462d-11ed-b878-0242ac120002";
  static constexpr const char * NAME = "IMeshLoader_grpcServer";
  static constexpr const char * DESCRIPTION = "IMeshLoader_grpcServer grpc server component";
};

#endif