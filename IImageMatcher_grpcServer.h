// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGEMATCHER_GRPCSERVER_H
#define IIMAGEMATCHER_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IImageMatcher.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIImageMatcherService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageMatcher {

class IImageMatcher_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageMatcher_grpcServer();
    ~IImageMatcher_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageMatcher"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageMatcherServiceImpl:  public ::grpcIImageMatcher::grpcIImageMatcherService::Service
    {
      public:
        grpcIImageMatcherServiceImpl() = default;
        ::grpc::Status match(::grpc::ServerContext* context, const ::grpcIImageMatcher::matchRequest* request, ::grpcIImageMatcher::matchResponse* response) override;

        SRef<SolAR::api::features::IImageMatcher> m_xpcfComponent;

    };


  private:
    grpcIImageMatcherServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageMatcher::IImageMatcher_grpcServer>
{
  static constexpr const char * UUID = "8924467d-22a9-41f3-9cc6-6bcb44b8ce79";
  static constexpr const char * NAME = "IImageMatcher_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageMatcher_grpcServer grpc server component";
};

#endif