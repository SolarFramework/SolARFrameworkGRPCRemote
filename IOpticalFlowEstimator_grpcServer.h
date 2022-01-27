// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IOPTICALFLOWESTIMATOR_GRPCSERVER_H
#define IOPTICALFLOWESTIMATOR_GRPCSERVER_H
#include "api/tracking/IOpticalFlowEstimator.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIOpticalFlowEstimatorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIOpticalFlowEstimator {

class IOpticalFlowEstimator_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IOpticalFlowEstimator_grpcServer();
    ~IOpticalFlowEstimator_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IOpticalFlowEstimator"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIOpticalFlowEstimatorServiceImpl:  public ::grpcIOpticalFlowEstimator::grpcIOpticalFlowEstimatorService::Service
    {
      public:
        grpcIOpticalFlowEstimatorServiceImpl() = default;
        ::grpc::Status estimate_grpc0(::grpc::ServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response) override;
        ::grpc::Status estimate_grpc1(::grpc::ServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response) override;

        SRef<SolAR::api::tracking::IOpticalFlowEstimator> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIOpticalFlowEstimatorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer>
{
  static constexpr const char * UUID = "af06b587-5be2-4d1a-87ed-ad900d47fe82";
  static constexpr const char * NAME = "IOpticalFlowEstimator_grpcServer";
  static constexpr const char * DESCRIPTION = "IOpticalFlowEstimator_grpcServer grpc server component";
};

#endif