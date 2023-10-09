// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPMANAGER_GRPCSERVER_H
#define IMAPMANAGER_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/storage/IMapManager.h"
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
        ::grpc::Status setMap(::grpc::ServerContext* context, const ::grpcIMapManager::setMapRequest* request, ::grpcIMapManager::setMapResponse* response) override;
        ::grpc::Status getMap(::grpc::ServerContext* context, const ::grpcIMapManager::getMapRequest* request, ::grpcIMapManager::getMapResponse* response) override;
        ::grpc::Status getSubmap(::grpc::ServerContext* context, const ::grpcIMapManager::getSubmapRequest* request, ::grpcIMapManager::getSubmapResponse* response) override;
        ::grpc::Status getLocalPointCloud_grpc0(::grpc::ServerContext* context, const ::grpcIMapManager::getLocalPointCloud_grpc0Request* request, ::grpcIMapManager::getLocalPointCloud_grpc0Response* response) override;
        ::grpc::Status getLocalPointCloud_grpc1(::grpc::ServerContext* context, const ::grpcIMapManager::getLocalPointCloud_grpc1Request* request, ::grpcIMapManager::getLocalPointCloud_grpc1Response* response) override;
        ::grpc::Status addCloudPoint(::grpc::ServerContext* context, const ::grpcIMapManager::addCloudPointRequest* request, ::grpcIMapManager::addCloudPointResponse* response) override;
        ::grpc::Status removeCloudPoint(::grpc::ServerContext* context, const ::grpcIMapManager::removeCloudPointRequest* request, ::grpcIMapManager::removeCloudPointResponse* response) override;
        ::grpc::Status addKeyframe(::grpc::ServerContext* context, const ::grpcIMapManager::addKeyframeRequest* request, ::grpcIMapManager::addKeyframeResponse* response) override;
        ::grpc::Status removeKeyframe(::grpc::ServerContext* context, const ::grpcIMapManager::removeKeyframeRequest* request, ::grpcIMapManager::removeKeyframeResponse* response) override;
        ::grpc::Status addCameraParameters(::grpc::ServerContext* context, const ::grpcIMapManager::addCameraParametersRequest* request, ::grpcIMapManager::addCameraParametersResponse* response) override;
        ::grpc::Status removeCameraParameters(::grpc::ServerContext* context, const ::grpcIMapManager::removeCameraParametersRequest* request, ::grpcIMapManager::removeCameraParametersResponse* response) override;
        ::grpc::Status getCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIMapManager::getCameraParameters_grpc0Request* request, ::grpcIMapManager::getCameraParameters_grpc0Response* response) override;
        ::grpc::Status getCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIMapManager::getCameraParameters_grpc1Request* request, ::grpcIMapManager::getCameraParameters_grpc1Response* response) override;
        ::grpc::Status pointCloudPruning(::grpc::ServerContext* context, const ::grpcIMapManager::pointCloudPruningRequest* request, ::grpcIMapManager::pointCloudPruningResponse* response) override;
        ::grpc::Status keyframePruning(::grpc::ServerContext* context, const ::grpcIMapManager::keyframePruningRequest* request, ::grpcIMapManager::keyframePruningResponse* response) override;
        ::grpc::Status visibilityPruning(::grpc::ServerContext* context, const ::grpcIMapManager::visibilityPruningRequest* request, ::grpcIMapManager::visibilityPruningResponse* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::grpcIMapManager::saveToFileRequest* request, ::grpcIMapManager::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::grpcIMapManager::loadFromFileRequest* request, ::grpcIMapManager::loadFromFileResponse* response) override;
        ::grpc::Status deleteFile(::grpc::ServerContext* context, const ::grpcIMapManager::deleteFileRequest* request, ::grpcIMapManager::deleteFileResponse* response) override;

        SRef<SolAR::api::storage::IMapManager> m_xpcfComponent;
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
  static constexpr const char * UUID = "41cbf117-f6cd-4efa-a7d9-a3c92b3656e4";
  static constexpr const char * NAME = "IMapManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapManager_grpcServer grpc server component";
};

#endif