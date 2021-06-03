// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDEPTHCAMERA_GRPCSERVER_H
#define IDEPTHCAMERA_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/input/devices/IDepthCamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDepthCameraService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDepthCamera {

class IDepthCamera_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDepthCamera_grpcServer();
    ~IDepthCamera_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDepthCamera"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDepthCameraServiceImpl:  public ::grpcIDepthCamera::grpcIDepthCameraService::Service
    {
      public:
        grpcIDepthCameraServiceImpl() = default;
        ::grpc::Status start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::stopResponse* response) override;
        ::grpc::Status getNextDepthFrame(::grpc::ServerContext* context, const ::grpcIDepthCamera::getNextDepthFrameRequest* request, ::grpcIDepthCamera::getNextDepthFrameResponse* response) override;
        ::grpc::Status getPointCloud(::grpc::ServerContext* context, const ::grpcIDepthCamera::getPointCloudRequest* request, ::grpcIDepthCamera::getPointCloudResponse* response) override;
        ::grpc::Status setDepthResolution(::grpc::ServerContext* context, const ::grpcIDepthCamera::setDepthResolutionRequest* request, ::grpcIDepthCamera::setDepthResolutionResponse* response) override;
        ::grpc::Status setIntrinsicDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::setIntrinsicDepthParametersRequest* request, ::grpcIDepthCamera::setIntrinsicDepthParametersResponse* response) override;
        ::grpc::Status setDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::setDistortionDepthParametersRequest* request, ::grpcIDepthCamera::setDistortionDepthParametersResponse* response) override;
        ::grpc::Status getDepthResolution(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getDepthResolutionResponse* response) override;
        ::grpc::Status getDepthMinDistance(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getDepthMinDistanceResponse* response) override;
        ::grpc::Status getIntrinsicsDepthParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getIntrinsicsDepthParametersResponse* response) override;
        ::grpc::Status getDistortionDepthParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getDistortionDepthParametersResponse* response) override;

        SRef<SolAR::api::input::devices::IDepthCamera> m_xpcfComponent;

    };


  private:
    grpcIDepthCameraServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer>
{
  static constexpr const char * UUID = "591667b1-e08e-4b1c-8317-ec173da4c36a";
  static constexpr const char * NAME = "IDepthCamera_grpcServer";
  static constexpr const char * DESCRIPTION = "IDepthCamera_grpcServer grpc server component";
};

#endif