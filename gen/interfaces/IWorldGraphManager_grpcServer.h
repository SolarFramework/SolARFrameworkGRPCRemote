// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IWORLDGRAPHMANAGER_GRPCSERVER_H
#define IWORLDGRAPHMANAGER_GRPCSERVER_H
#include "api/storage/IWorldGraphManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIWorldGraphManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIWorldGraphManager {

class IWorldGraphManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IWorldGraphManager_grpcServer();
    ~IWorldGraphManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IWorldGraphManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIWorldGraphManagerServiceImpl:  public ::grpcIWorldGraphManager::grpcIWorldGraphManagerService::Service
    {
      public:
        grpcIWorldGraphManagerServiceImpl() = default;
        ::grpc::Status getRelocalizationInformation(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getRelocalizationInformationRequest* request, ::grpcIWorldGraphManager::getRelocalizationInformationResponse* response) override;
        ::grpc::Status getWorldElement(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementRequest* request, ::grpcIWorldGraphManager::getWorldElementResponse* response) override;
        ::grpc::Status getWorldElements(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementsRequest* request, ::grpcIWorldGraphManager::getWorldElementsResponse* response) override;
        ::grpc::Status getWorldElementByKeyValue(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementByKeyValueRequest* request, ::grpcIWorldGraphManager::getWorldElementByKeyValueResponse* response) override;
        ::grpc::Status getWorldElementByKey(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementByKeyRequest* request, ::grpcIWorldGraphManager::getWorldElementByKeyResponse* response) override;
        ::grpc::Status addTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::addTrackableRequest* request, ::grpcIWorldGraphManager::addTrackableResponse* response) override;
        ::grpc::Status getTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getTrackableRequest* request, ::grpcIWorldGraphManager::getTrackableResponse* response) override;
        ::grpc::Status removeTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeTrackableRequest* request, ::grpcIWorldGraphManager::removeTrackableResponse* response) override;
        ::grpc::Status getTrackables(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getTrackablesRequest* request, ::grpcIWorldGraphManager::getTrackablesResponse* response) override;
        ::grpc::Status modifyTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::modifyTrackableRequest* request, ::grpcIWorldGraphManager::modifyTrackableResponse* response) override;
        ::grpc::Status addWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::addWorldAnchorRequest* request, ::grpcIWorldGraphManager::addWorldAnchorResponse* response) override;
        ::grpc::Status getWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldAnchorRequest* request, ::grpcIWorldGraphManager::getWorldAnchorResponse* response) override;
        ::grpc::Status removeWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeWorldAnchorRequest* request, ::grpcIWorldGraphManager::removeWorldAnchorResponse* response) override;
        ::grpc::Status getWorldAnchors(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldAnchorsRequest* request, ::grpcIWorldGraphManager::getWorldAnchorsResponse* response) override;
        ::grpc::Status modifyWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::modifyWorldAnchorRequest* request, ::grpcIWorldGraphManager::modifyWorldAnchorResponse* response) override;
        ::grpc::Status addWorldLink(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::addWorldLinkRequest* request, ::grpcIWorldGraphManager::addWorldLinkResponse* response) override;
        ::grpc::Status getWorldLink_grpc0(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldLink_grpc0Request* request, ::grpcIWorldGraphManager::getWorldLink_grpc0Response* response) override;
        ::grpc::Status getWorldLink_grpc1(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldLink_grpc1Request* request, ::grpcIWorldGraphManager::getWorldLink_grpc1Response* response) override;
        ::grpc::Status removeWorldLink_grpc0(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeWorldLink_grpc0Request* request, ::grpcIWorldGraphManager::removeWorldLink_grpc0Response* response) override;
        ::grpc::Status removeWorldLink_grpc1(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeWorldLink_grpc1Request* request, ::grpcIWorldGraphManager::removeWorldLink_grpc1Response* response) override;
        ::grpc::Status getWorldLinks(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldLinksRequest* request, ::grpcIWorldGraphManager::getWorldLinksResponse* response) override;
        ::grpc::Status modifyWorldLink(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::modifyWorldLinkRequest* request, ::grpcIWorldGraphManager::modifyWorldLinkResponse* response) override;

        SRef<SolAR::api::storage::IWorldGraphManager> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIWorldGraphManagerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIWorldGraphManager::IWorldGraphManager_grpcServer>
{
  static constexpr const char * UUID = "611d0dcb-5c75-418a-b2e8-cc86ad67f035";
  static constexpr const char * NAME = "IWorldGraphManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IWorldGraphManager_grpcServer grpc server component";
};

#endif