// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IRGBDCAMERA_GRPCSERVER_H
#define IRGBDCAMERA_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/input/devices/IRGBDCamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIRGBDCameraService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIRGBDCamera {

class IRGBDCamera_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IRGBDCamera_grpcServer();
    ~IRGBDCamera_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IRGBDCamera"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIRGBDCameraServiceImpl:  public ::grpcIRGBDCamera::grpcIRGBDCameraService::Service
    {
      public:
        grpcIRGBDCameraServiceImpl() = default;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIRGBDCamera::startRequest* request, ::grpcIRGBDCamera::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIRGBDCamera::stopRequest* request, ::grpcIRGBDCamera::stopResponse* response) override;
        ::grpc::Status getNextImage(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextImageRequest* request, ::grpcIRGBDCamera::getNextImageResponse* response) override;
        ::grpc::Status setResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setResolutionRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setIntrinsicParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setIntrinsicParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setDistortionParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDistortionParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status getResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getResolutionRequest* request, ::grpcIRGBDCamera::getResolutionResponse* response) override;
        ::grpc::Status getIntrinsicsParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getIntrinsicsParametersRequest* request, ::grpcIRGBDCamera::getIntrinsicsParametersResponse* response) override;
        ::grpc::Status getParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getParametersRequest* request, ::grpcIRGBDCamera::getParametersResponse* response) override;
        ::grpc::Status getDistortionParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDistortionParametersRequest* request, ::grpcIRGBDCamera::getDistortionParametersResponse* response) override;
        ::grpc::Status getNextDepthFrame(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextDepthFrameRequest* request, ::grpcIRGBDCamera::getNextDepthFrameResponse* response) override;
        ::grpc::Status getPointCloud(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getPointCloudRequest* request, ::grpcIRGBDCamera::getPointCloudResponse* response) override;
        ::grpc::Status setDepthResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDepthResolutionRequest* request, ::grpcIRGBDCamera::setDepthResolutionResponse* response) override;
        ::grpc::Status setIntrinsicDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setIntrinsicDepthParametersRequest* request, ::grpcIRGBDCamera::setIntrinsicDepthParametersResponse* response) override;
        ::grpc::Status setDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDistortionDepthParametersRequest* request, ::grpcIRGBDCamera::setDistortionDepthParametersResponse* response) override;
        ::grpc::Status getDepthResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDepthResolutionRequest* request, ::grpcIRGBDCamera::getDepthResolutionResponse* response) override;
        ::grpc::Status getDepthMinDistance(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDepthMinDistanceRequest* request, ::grpcIRGBDCamera::getDepthMinDistanceResponse* response) override;
        ::grpc::Status getIntrinsicsDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getIntrinsicsDepthParametersRequest* request, ::grpcIRGBDCamera::getIntrinsicsDepthParametersResponse* response) override;
        ::grpc::Status getDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDistortionDepthParametersRequest* request, ::grpcIRGBDCamera::getDistortionDepthParametersResponse* response) override;
        ::grpc::Status getNextRGBDFrame(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextRGBDFrameRequest* request, ::grpcIRGBDCamera::getNextRGBDFrameResponse* response) override;
        ::grpc::Status alignDepthToColor(::grpc::ServerContext* context, const ::grpcIRGBDCamera::alignDepthToColorRequest* request, ::grpcIRGBDCamera::alignDepthToColorResponse* response) override;
        ::grpc::Status alignColorToDepth(::grpc::ServerContext* context, const ::grpcIRGBDCamera::alignColorToDepthRequest* request, ::grpcIRGBDCamera::alignColorToDepthResponse* response) override;
        ::grpc::Status getPixelToWorld(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getPixelToWorldRequest* request, ::grpcIRGBDCamera::getPixelToWorldResponse* response) override;
        ::grpc::Status getWorldToPixel(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getWorldToPixelRequest* request, ::grpcIRGBDCamera::getWorldToPixelResponse* response) override;
        ::grpc::Status getWorldToPixels(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getWorldToPixelsRequest* request, ::grpcIRGBDCamera::getWorldToPixelsResponse* response) override;

        SRef<SolAR::api::input::devices::IRGBDCamera> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIRGBDCameraServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer>
{
  static constexpr const char * UUID = "01bb552a-9e6c-47fe-8b57-bce2a4c0ce42";
  static constexpr const char * NAME = "IRGBDCamera_grpcServer";
  static constexpr const char * DESCRIPTION = "IRGBDCamera_grpcServer grpc server component";
};

#endif