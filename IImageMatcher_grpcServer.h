// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGEMATCHER_GRPCSERVER_H
#define IIMAGEMATCHER_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IImageMatcher.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIImageMatcherServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageMatcher::IImageMatcher_grpcServer>
{
  static constexpr const char * UUID = "6b8f3e75-1745-45aa-a3bc-ac9c76c4d7db";
  static constexpr const char * NAME = "IImageMatcher_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageMatcher_grpcServer grpc server component";
};

#endif