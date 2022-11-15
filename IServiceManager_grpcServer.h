// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISERVICEMANAGER_GRPCSERVER_H
#define ISERVICEMANAGER_GRPCSERVER_H
#include "api/pipeline/IServiceManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIServiceManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIServiceManager {

class IServiceManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IServiceManager_grpcServer();
    ~IServiceManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IServiceManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIServiceManagerServiceImpl:  public ::grpcIServiceManager::grpcIServiceManagerService::Service
    {
      public:
        grpcIServiceManagerServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIServiceManager::initRequest* request, ::grpcIServiceManager::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIServiceManager::startRequest* request, ::grpcIServiceManager::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIServiceManager::stopRequest* request, ::grpcIServiceManager::stopResponse* response) override;
        ::grpc::Status test(::grpc::ServerContext* context, const ::grpcIServiceManager::testRequest* request, ::grpcIServiceManager::testResponse* response) override;

        SRef<SolAR::api::pipeline::IServiceManager> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIServiceManagerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIServiceManager::IServiceManager_grpcServer>
{
  static constexpr const char * UUID = "65c3a736-6432-11ed-81ce-0242ac120002";
  static constexpr const char * NAME = "IServiceManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IServiceManager_grpcServer grpc server component";
};

#endif
