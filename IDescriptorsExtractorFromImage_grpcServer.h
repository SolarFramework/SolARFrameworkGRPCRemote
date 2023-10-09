// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORSEXTRACTORFROMIMAGE_GRPCSERVER_H
#define IDESCRIPTORSEXTRACTORFROMIMAGE_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IDescriptorsExtractorFromImage.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIDescriptorsExtractorFromImageService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage {

class IDescriptorsExtractorFromImage_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorsExtractorFromImage_grpcServer();
    ~IDescriptorsExtractorFromImage_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorsExtractorFromImage"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorsExtractorFromImageServiceImpl:  public ::grpcIDescriptorsExtractorFromImage::grpcIDescriptorsExtractorFromImageService::Service
    {
      public:
        grpcIDescriptorsExtractorFromImageServiceImpl() = default;
        ::grpc::Status getTypeString(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response) override;
        ::grpc::Status extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response) override;

        SRef<SolAR::api::features::IDescriptorsExtractorFromImage> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIDescriptorsExtractorFromImageServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer>
{
  static constexpr const char * UUID = "1df6caec-4032-48ae-9a46-72e40aadf0a5";
  static constexpr const char * NAME = "IDescriptorsExtractorFromImage_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractorFromImage_grpcServer grpc server component";
};

#endif