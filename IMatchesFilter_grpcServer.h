// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMATCHESFILTER_GRPCSERVER_H
#define IMATCHESFILTER_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IMatchesFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMatchesFilterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMatchesFilter {

class IMatchesFilter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMatchesFilter_grpcServer();
    ~IMatchesFilter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMatchesFilter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMatchesFilterServiceImpl:  public ::grpcIMatchesFilter::grpcIMatchesFilterService::Service
    {
      public:
        grpcIMatchesFilterServiceImpl() = default;
        ::grpc::Status filter(::grpc::ServerContext* context, const ::grpcIMatchesFilter::filterRequest* request, ::grpcIMatchesFilter::filterResponse* response) override;

        SRef<SolAR::api::features::IMatchesFilter> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMatchesFilterServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer>
{
  static constexpr const char * UUID = "04f5af9a-c533-4776-ad25-f7f0f80315ee";
  static constexpr const char * NAME = "IMatchesFilter_grpcServer";
  static constexpr const char * DESCRIPTION = "IMatchesFilter_grpcServer grpc server component";
};

#endif