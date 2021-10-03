// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORMATCHERSTEREO_GRPCSERVER_H
#define IDESCRIPTORMATCHERSTEREO_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorMatcherStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDescriptorMatcherStereoService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo {

class IDescriptorMatcherStereo_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorMatcherStereo_grpcServer();
    ~IDescriptorMatcherStereo_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorMatcherStereo"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorMatcherStereoServiceImpl:  public ::grpcIDescriptorMatcherStereo::grpcIDescriptorMatcherStereoService::Service
    {
      public:
        grpcIDescriptorMatcherStereoServiceImpl() = default;
        ::grpc::Status match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherStereo::match_grpc0Request* request, ::grpcIDescriptorMatcherStereo::match_grpc0Response* response) override;
        ::grpc::Status match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherStereo::match_grpc1Request* request, ::grpcIDescriptorMatcherStereo::match_grpc1Response* response) override;

        SRef<SolAR::api::features::IDescriptorMatcherStereo> m_xpcfComponent;

    };


  private:
    grpcIDescriptorMatcherStereoServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcServer>
{
  static constexpr const char * UUID = "9f72e88e-ca7a-4ac9-af81-cf08382dda03";
  static constexpr const char * NAME = "IDescriptorMatcherStereo_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcherStereo_grpcServer grpc server component";
};

#endif