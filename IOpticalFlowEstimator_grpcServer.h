// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IOPTICALFLOWESTIMATOR_GRPCSERVER_H
#define IOPTICALFLOWESTIMATOR_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/tracking/IOpticalFlowEstimator.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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

    };


  private:
    grpcIOpticalFlowEstimatorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer>
{
  static constexpr const char * UUID = "227d6e23-07a8-4483-8880-6a79d14e4880";
  static constexpr const char * NAME = "IOpticalFlowEstimator_grpcServer";
  static constexpr const char * DESCRIPTION = "IOpticalFlowEstimator_grpcServer grpc server component";
};

#endif