// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPFILTER_GRPCSERVER_H
#define IMAPFILTER_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/map/IMapFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMapFilterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapFilter {

class IMapFilter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapFilter_grpcServer();
    ~IMapFilter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapFilter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapFilterServiceImpl:  public ::grpcIMapFilter::grpcIMapFilterService::Service
    {
      public:
        grpcIMapFilterServiceImpl() = default;
        ::grpc::Status filter_grpc0(::grpc::ServerContext* context, const ::grpcIMapFilter::filter_grpc0Request* request, ::grpcIMapFilter::filter_grpc0Response* response) override;
        ::grpc::Status filter_grpc1(::grpc::ServerContext* context, const ::grpcIMapFilter::filter_grpc1Request* request, ::grpcIMapFilter::filter_grpc1Response* response) override;

        SRef<SolAR::api::solver::map::IMapFilter> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMapFilterServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer>
{
  static constexpr const char * UUID = "c9be934a-fbb6-43d6-ae21-c30898a7ea6b";
  static constexpr const char * NAME = "IMapFilter_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapFilter_grpcServer grpc server component";
};

#endif