// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGELOADER_GRPCSERVER_H
#define IIMAGELOADER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIImageLoaderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageLoader {

class IImageLoader_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageLoader_grpcServer();
    ~IImageLoader_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageLoader"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageLoaderServiceImpl:  public ::grpcIImageLoader::grpcIImageLoaderService::Service
    {
      public:
        grpcIImageLoaderServiceImpl() = default;
        ::grpc::Status getImage(::grpc::ServerContext* context, const ::grpcIImageLoader::getImageRequest* request, ::grpcIImageLoader::getImageResponse* response) override;
        ::grpc::Status reloadImage(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIImageLoader::reloadImageResponse* response) override;

        SRef<SolAR::api::image::IImageLoader> m_xpcfComponent;

    };


  private:
    grpcIImageLoaderServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageLoader::IImageLoader_grpcServer>
{
  static constexpr const char * UUID = "3f117a69-4aae-4424-8334-f69dc17969a4";
  static constexpr const char * NAME = "IImageLoader_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageLoader_grpcServer grpc server component";
};

#endif