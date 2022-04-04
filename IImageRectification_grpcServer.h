// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGERECTIFICATION_GRPCSERVER_H
#define IIMAGERECTIFICATION_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/image/IImageRectification.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIImageRectificationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageRectification {

class IImageRectification_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageRectification_grpcServer();
    ~IImageRectification_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageRectification"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageRectificationServiceImpl:  public ::grpcIImageRectification::grpcIImageRectificationService::Service
    {
      public:
        grpcIImageRectificationServiceImpl() = default;
        ::grpc::Status rectify(::grpc::ServerContext* context, const ::grpcIImageRectification::rectifyRequest* request, ::grpcIImageRectification::rectifyResponse* response) override;

        SRef<SolAR::api::image::IImageRectification> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIImageRectificationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer>
{
  static constexpr const char * UUID = "f74f803c-4ea2-4420-962f-4803bc200da5";
  static constexpr const char * NAME = "IImageRectification_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageRectification_grpcServer grpc server component";
};

#endif