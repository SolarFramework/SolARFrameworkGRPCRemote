// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORMATCHERREGION_GRPCSERVER_H
#define IDESCRIPTORMATCHERREGION_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorMatcherRegion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDescriptorMatcherRegionService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion {

class IDescriptorMatcherRegion_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorMatcherRegion_grpcServer();
    ~IDescriptorMatcherRegion_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorMatcherRegion"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorMatcherRegionServiceImpl:  public ::grpcIDescriptorMatcherRegion::grpcIDescriptorMatcherRegionService::Service
    {
      public:
        grpcIDescriptorMatcherRegionServiceImpl() = default;
        ::grpc::Status match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc0Request* request, ::grpcIDescriptorMatcherRegion::match_grpc0Response* response) override;
        ::grpc::Status match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc1Request* request, ::grpcIDescriptorMatcherRegion::match_grpc1Response* response) override;
        ::grpc::Status match_grpc2(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc2Request* request, ::grpcIDescriptorMatcherRegion::match_grpc2Response* response) override;

        SRef<SolAR::api::features::IDescriptorMatcherRegion> m_xpcfComponent;

    };


  private:
    grpcIDescriptorMatcherRegionServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer>
{
  static constexpr const char * UUID = "deb77976-14a4-4b1b-b93e-f982661cbc65";
  static constexpr const char * NAME = "IDescriptorMatcherRegion_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcherRegion_grpcServer grpc server component";
};

#endif