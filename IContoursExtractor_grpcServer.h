// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICONTOURSEXTRACTOR_GRPCSERVER_H
#define ICONTOURSEXTRACTOR_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IContoursExtractor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIContoursExtractorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIContoursExtractor {

class IContoursExtractor_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IContoursExtractor_grpcServer();
    ~IContoursExtractor_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IContoursExtractor"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIContoursExtractorServiceImpl:  public ::grpcIContoursExtractor::grpcIContoursExtractorService::Service
    {
      public:
        grpcIContoursExtractorServiceImpl() = default;
        ::grpc::Status extract(::grpc::ServerContext* context, const ::grpcIContoursExtractor::extractRequest* request, ::grpcIContoursExtractor::extractResponse* response) override;

        SRef<SolAR::api::features::IContoursExtractor> m_xpcfComponent;

    };


  private:
    grpcIContoursExtractorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer>
{
  static constexpr const char * UUID = "2a0de369-850d-46db-abe4-43d6c294d77a";
  static constexpr const char * NAME = "IContoursExtractor_grpcServer";
  static constexpr const char * DESCRIPTION = "IContoursExtractor_grpcServer grpc server component";
};

#endif