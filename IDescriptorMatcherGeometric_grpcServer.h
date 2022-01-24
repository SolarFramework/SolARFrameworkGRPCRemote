// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDESCRIPTORMATCHERGEOMETRIC_GRPCSERVER_H
#define IDESCRIPTORMATCHERGEOMETRIC_GRPCSERVER_H
#include "api/features/IDescriptorMatcherGeometric.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIDescriptorMatcherGeometricService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric {

class IDescriptorMatcherGeometric_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDescriptorMatcherGeometric_grpcServer();
    ~IDescriptorMatcherGeometric_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDescriptorMatcherGeometric"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDescriptorMatcherGeometricServiceImpl:  public ::grpcIDescriptorMatcherGeometric::grpcIDescriptorMatcherGeometricService::Service
    {
      public:
        grpcIDescriptorMatcherGeometricServiceImpl() = default;
        ::grpc::Status match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherGeometric::match_grpc0Request* request, ::grpcIDescriptorMatcherGeometric::match_grpc0Response* response) override;
        ::grpc::Status match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherGeometric::match_grpc1Request* request, ::grpcIDescriptorMatcherGeometric::match_grpc1Response* response) override;

        SRef<SolAR::api::features::IDescriptorMatcherGeometric> m_xpcfComponent;

    };


  private:
    grpcIDescriptorMatcherGeometricServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcServer>
{
  static constexpr const char * UUID = "75930efc-a96e-4d07-86b0-2ab2d9ea0102";
  static constexpr const char * NAME = "IDescriptorMatcherGeometric_grpcServer";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcherGeometric_grpcServer grpc server component";
};

#endif