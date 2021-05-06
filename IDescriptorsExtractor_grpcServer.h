// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORSEXTRACTOR_GRPCSERVER_H
#define IDESCRIPTORSEXTRACTOR_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorsExtractor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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
        ::grpc::Status getTypeString(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response) override;
        ::grpc::Status extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response) override;

        SRef<SolAR::api::features::IDescriptorsExtractor> m_xpcfComponent;

    };


  private:
    grpcIDescriptorsExtractorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorsExtractor::IDescriptorsExtractor_grpcServer>
{
  static constexpr const char * UUID = "8b74675b-a246-43e0-94e7-6e7028e81f10";
  static constexpr const char * NAME = "IDescriptorsExtractor_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractor_grpcServer grpc server component";
};

#endif