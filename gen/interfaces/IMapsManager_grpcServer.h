// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPSMANAGER_GRPCSERVER_H
#define IMAPSMANAGER_GRPCSERVER_H
#include "api/service/IMapsManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapsManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapsManager {

class IMapsManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapsManager_grpcServer();
    ~IMapsManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapsManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapsManagerServiceImpl:  public ::grpcIMapsManager::grpcIMapsManagerService::Service
    {
      public:
        grpcIMapsManagerServiceImpl() = default;
        ::grpc::Status createMap(::grpc::ServerContext* context, const ::grpcIMapsManager::createMapRequest* request, ::grpcIMapsManager::createMapResponse* response) override;
        ::grpc::Status deleteMap(::grpc::ServerContext* context, const ::grpcIMapsManager::deleteMapRequest* request, ::grpcIMapsManager::deleteMapResponse* response) override;
        ::grpc::Status getAllMaps(::grpc::ServerContext* context, const ::grpcIMapsManager::getAllMapsRequest* request, ::grpcIMapsManager::getAllMapsResponse* response) override;
        ::grpc::Status registerMapUpdateService(::grpc::ServerContext* context, const ::grpcIMapsManager::registerMapUpdateServiceRequest* request, ::grpcIMapsManager::registerMapUpdateServiceResponse* response) override;
        ::grpc::Status unregisterMapUpdateService(::grpc::ServerContext* context, const ::grpcIMapsManager::unregisterMapUpdateServiceRequest* request, ::grpcIMapsManager::unregisterMapUpdateServiceResponse* response) override;
        ::grpc::Status increaseMapClients(::grpc::ServerContext* context, const ::grpcIMapsManager::increaseMapClientsRequest* request, ::grpcIMapsManager::increaseMapClientsResponse* response) override;
        ::grpc::Status decreaseMapClients(::grpc::ServerContext* context, const ::grpcIMapsManager::decreaseMapClientsRequest* request, ::grpcIMapsManager::decreaseMapClientsResponse* response) override;
        ::grpc::Status getMapRequest(::grpc::ServerContext* context, const ::grpcIMapsManager::getMapRequestRequest* request, ::grpcIMapsManager::getMapRequestResponse* response) override;
        ::grpc::Status setMapRequest(::grpc::ServerContext* context, const ::grpcIMapsManager::setMapRequestRequest* request, ::grpcIMapsManager::setMapRequestResponse* response) override;
        ::grpc::Status getPointCloudRequest(::grpc::ServerContext* context, const ::grpcIMapsManager::getPointCloudRequestRequest* request, ::grpcIMapsManager::getPointCloudRequestResponse* response) override;
        ::grpc::Status requestForMapProcessing(::grpc::ServerContext* context, const ::grpcIMapsManager::requestForMapProcessingRequest* request, ::grpcIMapsManager::requestForMapProcessingResponse* response) override;

        SRef<SolAR::api::service::IMapsManager> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapsManagerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapsManager::IMapsManager_grpcServer>
{
  static constexpr const char * UUID = "2bc10e03-8a2d-44a1-b53e-d72d09f99b9b";
  static constexpr const char * NAME = "IMapsManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapsManager_grpcServer grpc server component";
};

#endif