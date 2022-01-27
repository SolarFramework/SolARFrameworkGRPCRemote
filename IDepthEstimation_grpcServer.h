// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IDEPTHESTIMATION_GRPCSERVER_H
#define IDEPTHESTIMATION_GRPCSERVER_H
#include "api/geom/IDepthEstimation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIDepthEstimationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIDepthEstimation {

class IDepthEstimation_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IDepthEstimation_grpcServer();
    ~IDepthEstimation_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IDepthEstimation"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIDepthEstimationServiceImpl:  public ::grpcIDepthEstimation::grpcIDepthEstimationService::Service
    {
      public:
        grpcIDepthEstimationServiceImpl() = default;
        ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcIDepthEstimation::estimateRequest* request, ::grpcIDepthEstimation::estimateResponse* response) override;

        SRef<SolAR::api::geom::IDepthEstimation> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIDepthEstimationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer>
{
  static constexpr const char * UUID = "d47a2503-e1c6-4db2-9bff-52a3259bcbe1";
  static constexpr const char * NAME = "IDepthEstimation_grpcServer";
  static constexpr const char * DESCRIPTION = "IDepthEstimation_grpcServer grpc server component";
};

#endif