// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICONTOURSFILTER_GRPCSERVER_H
#define ICONTOURSFILTER_GRPCSERVER_H
#include "api/features/IContoursFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIContoursFilterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIContoursFilter {

class IContoursFilter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IContoursFilter_grpcServer();
    ~IContoursFilter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IContoursFilter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIContoursFilterServiceImpl:  public ::grpcIContoursFilter::grpcIContoursFilterService::Service
    {
      public:
        grpcIContoursFilterServiceImpl() = default;
        ::grpc::Status filter(::grpc::ServerContext* context, const ::grpcIContoursFilter::filterRequest* request, ::grpcIContoursFilter::filterResponse* response) override;

        SRef<SolAR::api::features::IContoursFilter> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIContoursFilterServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer>
{
  static constexpr const char * UUID = "571317b1-4fe5-44cc-bf86-4c4c079150c3";
  static constexpr const char * NAME = "IContoursFilter_grpcServer";
  static constexpr const char * DESCRIPTION = "IContoursFilter_grpcServer grpc server component";
};

#endif