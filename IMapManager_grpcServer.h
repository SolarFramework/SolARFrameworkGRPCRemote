// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPMANAGER_GRPCSERVER_H
#define IMAPMANAGER_GRPCSERVER_H
#include "api/service/IMapManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapManager {

class IMapManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapManager_grpcServer();
    ~IMapManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapManagerServiceImpl:  public ::grpcIMapManager::grpcIMapManagerService::Service
    {
      public:
        grpcIMapManagerServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIMapManager::initRequest* request, ::grpcIMapManager::initResponse* response) override;
        ::grpc::Status createMap(::grpc::ServerContext* context, const ::grpcIMapManager::createMapRequest* request, ::grpcIMapManager::createMapResponse* response) override;
        ::grpc::Status deleteMap(::grpc::ServerContext* context, const ::grpcIMapManager::deleteMapRequest* request, ::grpcIMapManager::deleteMapResponse* response) override;
        ::grpc::Status getAllMaps(::grpc::ServerContext* context, const ::grpcIMapManager::getAllMapsRequest* request, ::grpcIMapManager::getAllMapsResponse* response) override;
        ::grpc::Status registerMapUpdateService(::grpc::ServerContext* context, const ::grpcIMapManager::registerMapUpdateServiceRequest* request, ::grpcIMapManager::registerMapUpdateServiceResponse* response) override;
        ::grpc::Status unregisterMapUpdateService(::grpc::ServerContext* context, const ::grpcIMapManager::unregisterMapUpdateServiceRequest* request, ::grpcIMapManager::unregisterMapUpdateServiceResponse* response) override;
        ::grpc::Status increaseMapClients(::grpc::ServerContext* context, const ::grpcIMapManager::increaseMapClientsRequest* request, ::grpcIMapManager::increaseMapClientsResponse* response) override;
        ::grpc::Status decreaseMapClients(::grpc::ServerContext* context, const ::grpcIMapManager::decreaseMapClientsRequest* request, ::grpcIMapManager::decreaseMapClientsResponse* response) override;

        SRef<SolAR::api::service::IMapManager> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapManagerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer>
{
  static constexpr const char * UUID = "2bc10e03-8a2d-44a1-b53e-d72d09f99b9b";
  static constexpr const char * NAME = "IMapManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapManager_grpcServer grpc server component";
};

#endif