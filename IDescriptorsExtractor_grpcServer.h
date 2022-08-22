// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORSEXTRACTOR_GRPCSERVER_H
#define IDESCRIPTORSEXTRACTOR_GRPCSERVER_H
#include "api/features/IDescriptorsExtractor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIDescriptorsExtractorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractor {

class IDescriptorsExtractor_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorsExtractor_grpcServer();
    ~IDescriptorsExtractor_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorsExtractor"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorsExtractorServiceImpl:  public ::grpcIDescriptorsExtractor::grpcIDescriptorsExtractorService::Service
    {
      public:
        grpcIDescriptorsExtractorServiceImpl() = default;
        ::grpc::Status getTypeString(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractor::getTypeStringRequest* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response) override;
        ::grpc::Status extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response) override;

        SRef<SolAR::api::features::IDescriptorsExtractor> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIDescriptorsExtractorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorsExtractor::IDescriptorsExtractor_grpcServer>
{
  static constexpr const char * UUID = "a5bcfadd-4a12-45b3-a90f-0f1a82d51d12";
  static constexpr const char * NAME = "IDescriptorsExtractor_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractor_grpcServer grpc server component";
};

#endif