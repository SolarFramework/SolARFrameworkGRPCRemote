// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IFRONTEND_GRPCSERVER_H
#define IFRONTEND_GRPCSERVER_H
#include "api/service/IFrontEnd.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIFrontEndService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIFrontEnd {

class IFrontEnd_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IFrontEnd_grpcServer();
    ~IFrontEnd_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IFrontEnd"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIFrontEndServiceImpl:  public ::grpcIFrontEnd::grpcIFrontEndService::Service
    {
      public:
        grpcIFrontEndServiceImpl() = default;
        ::grpc::Status registerClient(::grpc::ServerContext* context, const ::grpcIFrontEnd::registerClientRequest* request, ::grpcIFrontEnd::registerClientResponse* response) override;
        ::grpc::Status unregisterClient(::grpc::ServerContext* context, const ::grpcIFrontEnd::unregisterClientRequest* request, ::grpcIFrontEnd::unregisterClientResponse* response) override;
        ::grpc::Status getAllClientsUUID(::grpc::ServerContext* context, const ::grpcIFrontEnd::getAllClientsUUIDRequest* request, ::grpcIFrontEnd::getAllClientsUUIDResponse* response) override;
        ::grpc::Status getDeviceInfo(::grpc::ServerContext* context, const ::grpcIFrontEnd::getDeviceInfoRequest* request, ::grpcIFrontEnd::getDeviceInfoResponse* response) override;
        ::grpc::Status init_grpc0(::grpc::ServerContext* context, const ::grpcIFrontEnd::init_grpc0Request* request, ::grpcIFrontEnd::init_grpc0Response* response) override;
        ::grpc::Status init_grpc1(::grpc::ServerContext* context, const ::grpcIFrontEnd::init_grpc1Request* request, ::grpcIFrontEnd::init_grpc1Response* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIFrontEnd::startRequest* request, ::grpcIFrontEnd::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIFrontEnd::stopRequest* request, ::grpcIFrontEnd::stopResponse* response) override;
        ::grpc::Status getProcessingMode(::grpc::ServerContext* context, const ::grpcIFrontEnd::getProcessingModeRequest* request, ::grpcIFrontEnd::getProcessingModeResponse* response) override;
        ::grpc::Status setCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIFrontEnd::setCameraParameters_grpc0Request* request, ::grpcIFrontEnd::setCameraParameters_grpc0Response* response) override;
        ::grpc::Status setCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIFrontEnd::setCameraParameters_grpc1Request* request, ::grpcIFrontEnd::setCameraParameters_grpc1Response* response) override;
        ::grpc::Status setRectificationParameters(::grpc::ServerContext* context, const ::grpcIFrontEnd::setRectificationParametersRequest* request, ::grpcIFrontEnd::setRectificationParametersResponse* response) override;
        ::grpc::Status getCameraParameters(::grpc::ServerContext* context, const ::grpcIFrontEnd::getCameraParametersRequest* request, ::grpcIFrontEnd::getCameraParametersResponse* response) override;
        ::grpc::Status imageProcessRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::imageProcessRequestRequest* request, ::grpcIFrontEnd::imageProcessRequestResponse* response) override;
        ::grpc::Status getMappingDataRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMappingDataRequestRequest* request, ::grpcIFrontEnd::getMappingDataRequestResponse* response) override;
        ::grpc::Status getClientPose(::grpc::ServerContext* context, const ::grpcIFrontEnd::getClientPoseRequest* request, ::grpcIFrontEnd::getClientPoseResponse* response) override;
        ::grpc::Status imageSegmentationProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc0Request* request, ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc0Response* response) override;
        ::grpc::Status imageSegmentationProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc1Request* request, ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc1Response* response) override;
        ::grpc::Status getImageSegmentationProcessStatus(::grpc::ServerContext* context, const ::grpcIFrontEnd::getImageSegmentationProcessStatusRequest* request, ::grpcIFrontEnd::getImageSegmentationProcessStatusResponse* response) override;
        ::grpc::Status getImageSegmentationProcessOutputMasks(::grpc::ServerContext* context, const ::grpcIFrontEnd::getImageSegmentationProcessOutputMasksRequest* request, ::grpcIFrontEnd::getImageSegmentationProcessOutputMasksResponse* response) override;
        ::grpc::Status createMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::createMapRequest* request, ::grpcIFrontEnd::createMapResponse* response) override;
        ::grpc::Status deleteMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::deleteMapRequest* request, ::grpcIFrontEnd::deleteMapResponse* response) override;
        ::grpc::Status getAllMapsUUID(::grpc::ServerContext* context, const ::grpcIFrontEnd::getAllMapsUUIDRequest* request, ::grpcIFrontEnd::getAllMapsUUIDResponse* response) override;
        ::grpc::Status getClientMapUUID(::grpc::ServerContext* context, const ::grpcIFrontEnd::getClientMapUUIDRequest* request, ::grpcIFrontEnd::getClientMapUUIDResponse* response) override;
        ::grpc::Status getClientInfoForMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::getClientInfoForMapRequest* request, ::grpcIFrontEnd::getClientInfoForMapResponse* response) override;
        ::grpc::Status getMapRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapRequestRequest* request, ::grpcIFrontEnd::getMapRequestResponse* response) override;
        ::grpc::Status setMapRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::setMapRequestRequest* request, ::grpcIFrontEnd::setMapRequestResponse* response) override;
        ::grpc::Status getPointCloudRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::getPointCloudRequestRequest* request, ::grpcIFrontEnd::getPointCloudRequestResponse* response) override;
        ::grpc::Status getMapInfo(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapInfoRequest* request, ::grpcIFrontEnd::getMapInfoResponse* response) override;
        ::grpc::Status requestMapProcessing(::grpc::ServerContext* context, const ::grpcIFrontEnd::requestMapProcessingRequest* request, ::grpcIFrontEnd::requestMapProcessingResponse* response) override;
        ::grpc::Status getMapProcessingStatus(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapProcessingStatusRequest* request, ::grpcIFrontEnd::getMapProcessingStatusResponse* response) override;
        ::grpc::Status getMapProcessingData(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapProcessingDataRequest* request, ::grpcIFrontEnd::getMapProcessingDataResponse* response) override;

        SRef<SolAR::api::service::IFrontEnd> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIFrontEndServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIFrontEnd::IFrontEnd_grpcServer>
{
  static constexpr const char * UUID = "95913e8e-5695-11ec-bf63-0242ac130002";
  static constexpr const char * NAME = "IFrontEnd_grpcServer";
  static constexpr const char * DESCRIPTION = "IFrontEnd_grpcServer grpc server component";
};

#endif