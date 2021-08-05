// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IREGRESSION_GRPCSERVER_H
#define IREGRESSION_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/reloc/IRegression.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIRegressionService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIRegression {

class IRegression_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IRegression_grpcServer();
    ~IRegression_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IRegression"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIRegressionServiceImpl:  public ::grpcIRegression::grpcIRegressionService::Service
    {
      public:
        grpcIRegressionServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIRegression::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status add(::grpc::ServerContext* context, const ::grpcIRegression::addRequest* request, ::grpcIRegression::addResponse* response) override;
        ::grpc::Status regress(::grpc::ServerContext* context, const ::grpcIRegression::regressRequest* request, ::grpcIRegression::regressResponse* response) override;
        ::grpc::Status update(::grpc::ServerContext* context, const ::grpcIRegression::updateRequest* request, ::grpcIRegression::updateResponse* response) override;
        ::grpc::Status loadModel(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::loadModelResponse* response) override;
        ::grpc::Status getTrainingStatus(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::getTrainingStatusResponse* response) override;
        ::grpc::Status getNumActiveLeaves(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::getNumActiveLeavesResponse* response) override;
        ::grpc::Status getNumPassiveLeaves(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::getNumPassiveLeavesResponse* response) override;

        SRef<SolAR::api::reloc::IRegression> m_xpcfComponent;

    };


  private:
    grpcIRegressionServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer>
{
  static constexpr const char * UUID = "8da4d311-6117-417f-8301-196b97dc7421";
  static constexpr const char * NAME = "IRegression_grpcServer";
  static constexpr const char * DESCRIPTION = "IRegression_grpcServer grpc server component";
};

#endif