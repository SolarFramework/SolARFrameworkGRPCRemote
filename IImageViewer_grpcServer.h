// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGEVIEWER_GRPCSERVER_H
#define IIMAGEVIEWER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/display/IImageViewer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIImageViewerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageViewer {

class IImageViewer_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageViewer_grpcServer();
    ~IImageViewer_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageViewer"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageViewerServiceImpl:  public ::grpcIImageViewer::grpcIImageViewerService::Service
    {
      public:
        grpcIImageViewerServiceImpl() = default;
        ::grpc::Status display(::grpc::ServerContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response) override;
        ::grpc::Status displayKey(::grpc::ServerContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response) override;

        SRef<SolAR::api::display::IImageViewer> m_xpcfComponent;

    };


  private:
    grpcIImageViewerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageViewer::IImageViewer_grpcServer>
{
  static constexpr const char * UUID = "ba0272f1-2035-4d88-8fd2-409ad69a457d";
  static constexpr const char * NAME = "IImageViewer_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageViewer_grpcServer grpc server component";
};

#endif