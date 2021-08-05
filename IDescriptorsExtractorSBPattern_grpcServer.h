// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORSEXTRACTORSBPATTERN_GRPCSERVER_H
#define IDESCRIPTORSEXTRACTORSBPATTERN_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorsExtractorSBPattern.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDescriptorsExtractorSBPatternService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern {

class IDescriptorsExtractorSBPattern_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorsExtractorSBPattern_grpcServer();
    ~IDescriptorsExtractorSBPattern_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorsExtractorSBPattern"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorsExtractorSBPatternServiceImpl:  public ::grpcIDescriptorsExtractorSBPattern::grpcIDescriptorsExtractorSBPatternService::Service
    {
      public:
        grpcIDescriptorsExtractorSBPatternServiceImpl() = default;
        ::grpc::Status extract_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* response) override;
        ::grpc::Status extract_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* response) override;

        SRef<SolAR::api::features::IDescriptorsExtractorSBPattern> m_xpcfComponent;

    };


  private:
    grpcIDescriptorsExtractorSBPatternServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcServer>
{
  static constexpr const char * UUID = "d100d5a7-5843-4d51-a355-f4cd11175f9e";
  static constexpr const char * NAME = "IDescriptorsExtractorSBPattern_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractorSBPattern_grpcServer grpc server component";
};

#endif