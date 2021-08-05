// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORMATCHER_GRPCSERVER_H
#define IDESCRIPTORMATCHER_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorMatcher.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDescriptorMatcherService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcher {

class IDescriptorMatcher_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorMatcher_grpcServer();
    ~IDescriptorMatcher_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorMatcher"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorMatcherServiceImpl:  public ::grpcIDescriptorMatcher::grpcIDescriptorMatcherService::Service
    {
      public:
        grpcIDescriptorMatcherServiceImpl() = default;
        ::grpc::Status match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request* request, ::grpcIDescriptorMatcher::match_grpc0Response* response) override;
        ::grpc::Status match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request* request, ::grpcIDescriptorMatcher::match_grpc1Response* response) override;

        SRef<SolAR::api::features::IDescriptorMatcher> m_xpcfComponent;

    };


  private:
    grpcIDescriptorMatcherServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorMatcher::IDescriptorMatcher_grpcServer>
{
  static constexpr const char * UUID = "c406e2b5-f154-470e-b32e-74acdcafb6f6";
  static constexpr const char * NAME = "IDescriptorMatcher_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcher_grpcServer grpc server component";
};

#endif