// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISERVICEMANAGER_GRPCSERVER_H
#define ISERVICEMANAGER_GRPCSERVER_H
#include "/home/jroyan/Dev/SolAR-bcom/core/SolARFramework/interfaces/api/service/IServiceManager.h"
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
        ::grpc::Status registerService(::grpc::ServerContext* context, const ::grpcIServiceManager::registerServiceRequest* request, ::grpcIServiceManager::registerServiceResponse* response) override;
        ::grpc::Status unregisterService(::grpc::ServerContext* context, const ::grpcIServiceManager::unregisterServiceRequest* request, ::grpcIServiceManager::unregisterServiceResponse* response) override;
        ::grpc::Status getService(::grpc::ServerContext* context, const ::grpcIServiceManager::getServiceRequest* request, ::grpcIServiceManager::getServiceResponse* response) override;
        ::grpc::Status getAndLockService(::grpc::ServerContext* context, const ::grpcIServiceManager::getAndLockServiceRequest* request, ::grpcIServiceManager::getAndLockServiceResponse* response) override;
        ::grpc::Status unlockService(::grpc::ServerContext* context, const ::grpcIServiceManager::unlockServiceRequest* request, ::grpcIServiceManager::unlockServiceResponse* response) override;

        SRef<SolAR::api::service::IServiceManager> m_xpcfComponent;
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