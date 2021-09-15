// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMATCHESFILTER_GRPCSERVER_H
#define IMATCHESFILTER_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IMatchesFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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

    };


  private:
    grpcIMatchesFilterServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer>
{
  static constexpr const char * UUID = "2c03b13f-2316-41cf-9c42-bc91857dadcf";
  static constexpr const char * NAME = "IMatchesFilter_grpcServer";
  static constexpr const char * DESCRIPTION = "IMatchesFilter_grpcServer grpc server component";
};

#endif