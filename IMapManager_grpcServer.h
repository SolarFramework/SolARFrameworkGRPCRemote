// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPMANAGER_GRPCSERVER_H
#define IMAPMANAGER_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/storage/IMapManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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
        ::grpc::Status setMap(::grpc::ServerContext* context, const ::grpcIMapManager::setMapRequest* request, ::grpcIMapManager::setMapResponse* response) override;
        ::grpc::Status getMap(::grpc::ServerContext* context, const ::grpcIMapManager::getMapRequest* request, ::grpcIMapManager::getMapResponse* response) override;
        ::grpc::Status getLocalPointCloud(::grpc::ServerContext* context, const ::grpcIMapManager::getLocalPointCloudRequest* request, ::grpcIMapManager::getLocalPointCloudResponse* response) override;
        ::grpc::Status addCloudPoint(::grpc::ServerContext* context, const ::grpcIMapManager::addCloudPointRequest* request, ::grpcIMapManager::addCloudPointResponse* response) override;
        ::grpc::Status removeCloudPoint(::grpc::ServerContext* context, const ::grpcIMapManager::removeCloudPointRequest* request, ::grpcIMapManager::removeCloudPointResponse* response) override;
        ::grpc::Status addKeyframe(::grpc::ServerContext* context, const ::grpcIMapManager::addKeyframeRequest* request, ::grpcIMapManager::addKeyframeResponse* response) override;
        ::grpc::Status removeKeyframe(::grpc::ServerContext* context, const ::grpcIMapManager::removeKeyframeRequest* request, ::grpcIMapManager::removeKeyframeResponse* response) override;
        ::grpc::Status pointCloudPruning(::grpc::ServerContext* context, const ::grpcIMapManager::pointCloudPruningRequest* request, ::grpcIMapManager::pointCloudPruningResponse* response) override;
        ::grpc::Status keyframePruning(::grpc::ServerContext* context, const ::grpcIMapManager::keyframePruningRequest* request, ::grpcIMapManager::keyframePruningResponse* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapManager::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapManager::loadFromFileResponse* response) override;

        SRef<SolAR::api::storage::IMapManager> m_xpcfComponent;

    };


  private:
    grpcIMapManagerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer>
{
  static constexpr const char * UUID = "41cbf117-f6cd-4efa-a7d9-a3c92b3656e4";
  static constexpr const char * NAME = "IMapManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapManager_grpcServer grpc server component";
};

#endif