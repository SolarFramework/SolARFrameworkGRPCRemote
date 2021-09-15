// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGECONVERTOR_GRPCSERVER_H
#define IIMAGECONVERTOR_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageConvertor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIImageConvertorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageConvertor {

class IImageConvertor_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageConvertor_grpcServer();
    ~IImageConvertor_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageConvertor"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageConvertorServiceImpl:  public ::grpcIImageConvertor::grpcIImageConvertorService::Service
    {
      public:
        grpcIImageConvertorServiceImpl() = default;
        ::grpc::Status convert_grpc0(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response) override;
        ::grpc::Status convert_grpc1(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response) override;
        ::grpc::Status convertLookUpTable(::grpc::ServerContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response) override;

        SRef<SolAR::api::image::IImageConvertor> m_xpcfComponent;

    };


  private:
    grpcIImageConvertorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer>
{
  static constexpr const char * UUID = "c5ec40b5-6b13-4696-9e6b-58adde767bb6";
  static constexpr const char * NAME = "IImageConvertor_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageConvertor_grpcServer grpc server component";
};

#endif