// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICLIENTCONTEXTMANAGER_GRPCSERVER_H
#define ICLIENTCONTEXTMANAGER_GRPCSERVER_H
#include "api/service/IClientContextManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIClientContextManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIClientContextManager {

class IClientContextManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IClientContextManager_grpcServer();
    ~IClientContextManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IClientContextManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIClientContextManagerServiceImpl:  public ::grpcIClientContextManager::grpcIClientContextManagerService::Service
    {
      public:
        grpcIClientContextManagerServiceImpl() = default;
        ::grpc::Status registerClient(::grpc::ServerContext* context, const ::grpcIClientContextManager::registerClientRequest* request, ::grpcIClientContextManager::registerClientResponse* response) override;
        ::grpc::Status unregisterClient(::grpc::ServerContext* context, const ::grpcIClientContextManager::unregisterClientRequest* request, ::grpcIClientContextManager::unregisterClientResponse* response) override;
        ::grpc::Status getAllClientsUUID(::grpc::ServerContext* context, const ::grpcIClientContextManager::getAllClientsUUIDRequest* request, ::grpcIClientContextManager::getAllClientsUUIDResponse* response) override;
        ::grpc::Status getDeviceInfo(::grpc::ServerContext* context, const ::grpcIClientContextManager::getDeviceInfoRequest* request, ::grpcIClientContextManager::getDeviceInfoResponse* response) override;
        ::grpc::Status init_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::init_grpc0Request* request, ::grpcIClientContextManager::init_grpc0Response* response) override;
        ::grpc::Status init_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::init_grpc1Request* request, ::grpcIClientContextManager::init_grpc1Response* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIClientContextManager::startRequest* request, ::grpcIClientContextManager::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIClientContextManager::stopRequest* request, ::grpcIClientContextManager::stopResponse* response) override;
        ::grpc::Status getProcessingMode(::grpc::ServerContext* context, const ::grpcIClientContextManager::getProcessingModeRequest* request, ::grpcIClientContextManager::getProcessingModeResponse* response) override;
        ::grpc::Status setCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::setCameraParameters_grpc0Request* request, ::grpcIClientContextManager::setCameraParameters_grpc0Response* response) override;
        ::grpc::Status setCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::setCameraParameters_grpc1Request* request, ::grpcIClientContextManager::setCameraParameters_grpc1Response* response) override;
        ::grpc::Status setRectificationParameters(::grpc::ServerContext* context, const ::grpcIClientContextManager::setRectificationParametersRequest* request, ::grpcIClientContextManager::setRectificationParametersResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::grpcIClientContextManager::getCameraParametersRequest* request, ::grpcIClientContextManager::getCameraParametersResponse* response) override;
        ::grpc::Status relocalizeProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::relocalizeProcessRequest_grpc0Request* request, ::grpcIClientContextManager::relocalizeProcessRequest_grpc0Response* response) override;
        ::grpc::Status relocalizeProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::relocalizeProcessRequest_grpc1Request* request, ::grpcIClientContextManager::relocalizeProcessRequest_grpc1Response* response) override;
        ::grpc::Status get3DTransformRequest(::grpc::ServerContext* context, const ::grpcIClientContextManager::get3DTransformRequestRequest* request, ::grpcIClientContextManager::get3DTransformRequestResponse* response) override;
        ::grpc::Status getMappingDataRequest(::grpc::ServerContext* context, const ::grpcIClientContextManager::getMappingDataRequestRequest* request, ::grpcIClientContextManager::getMappingDataRequestResponse* response) override;
        ::grpc::Status getLastPose(::grpc::ServerContext* context, const ::grpcIClientContextManager::getLastPoseRequest* request, ::grpcIClientContextManager::getLastPoseResponse* response) override;
        ::grpc::Status getClientMapUUID(::grpc::ServerContext* context, const ::grpcIClientContextManager::getClientMapUUIDRequest* request, ::grpcIClientContextManager::getClientMapUUIDResponse* response) override;
        ::grpc::Status imageSegmentationProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc0Request* request, ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc0Response* response) override;
        ::grpc::Status imageSegmentationProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc1Request* request, ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc1Response* response) override;
        ::grpc::Status getImageSegmentationProcessStatus(::grpc::ServerContext* context, const ::grpcIClientContextManager::getImageSegmentationProcessStatusRequest* request, ::grpcIClientContextManager::getImageSegmentationProcessStatusResponse* response) override;
        ::grpc::Status getImageSegmentationProcessOutputMasks(::grpc::ServerContext* context, const ::grpcIClientContextManager::getImageSegmentationProcessOutputMasksRequest* request, ::grpcIClientContextManager::getImageSegmentationProcessOutputMasksResponse* response) override;

        SRef<SolAR::api::service::IClientContextManager> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIClientContextManagerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIClientContextManager::IClientContextManager_grpcServer>
{
  static constexpr const char * UUID = "4303e7b0-66d6-4b35-9988-1edda751ecc6";
  static constexpr const char * NAME = "IClientContextManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IClientContextManager_grpcServer grpc server component";
};

#endif