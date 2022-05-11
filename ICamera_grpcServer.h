// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICAMERA_GRPCSERVER_H
#define ICAMERA_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/input/devices/ICamera.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcICameraService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverICamera {

class ICamera_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ICamera_grpcServer();
    ~ICamera_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ICamera"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcICameraServiceImpl:  public ::grpcICamera::grpcICameraService::Service
    {
      public:
        grpcICameraServiceImpl() = default;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcICamera::startRequest* request, ::grpcICamera::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcICamera::stopRequest* request, ::grpcICamera::stopResponse* response) override;
        ::grpc::Status getNextImage(::grpc::ServerContext* context, const ::grpcICamera::getNextImageRequest* request, ::grpcICamera::getNextImageResponse* response) override;
        ::grpc::Status setResolution(::grpc::ServerContext* context, const ::grpcICamera::setResolutionRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setIntrinsicParameters(::grpc::ServerContext* context, const ::grpcICamera::setIntrinsicParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setDistortionParameters(::grpc::ServerContext* context, const ::grpcICamera::setDistortionParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setParameters(::grpc::ServerContext* context, const ::grpcICamera::setParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status getResolution(::grpc::ServerContext* context, const ::grpcICamera::getResolutionRequest* request, ::grpcICamera::getResolutionResponse* response) override;
        ::grpc::Status getIntrinsicsParameters(::grpc::ServerContext* context, const ::grpcICamera::getIntrinsicsParametersRequest* request, ::grpcICamera::getIntrinsicsParametersResponse* response) override;
        ::grpc::Status getParameters(::grpc::ServerContext* context, const ::grpcICamera::getParametersRequest* request, ::grpcICamera::getParametersResponse* response) override;
        ::grpc::Status getDistortionParameters(::grpc::ServerContext* context, const ::grpcICamera::getDistortionParametersRequest* request, ::grpcICamera::getDistortionParametersResponse* response) override;

        SRef<SolAR::api::input::devices::ICamera> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcICameraServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverICamera::ICamera_grpcServer>
{
  static constexpr const char * UUID = "84cf5434-d8bb-4aa5-a518-a4d369161e0b";
  static constexpr const char * NAME = "ICamera_grpcServer";
  static constexpr const char * DESCRIPTION = "ICamera_grpcServer grpc server component";
};

#endif