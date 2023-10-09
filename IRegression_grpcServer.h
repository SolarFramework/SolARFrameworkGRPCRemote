// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IREGRESSION_GRPCSERVER_H
#define IREGRESSION_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/reloc/IRegression.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        ::grpc::Status loadModel(::grpc::ServerContext* context, const ::grpcIRegression::loadModelRequest* request, ::grpcIRegression::loadModelResponse* response) override;
        ::grpc::Status getTrainingStatus(::grpc::ServerContext* context, const ::grpcIRegression::getTrainingStatusRequest* request, ::grpcIRegression::getTrainingStatusResponse* response) override;
        ::grpc::Status getNumActiveLeaves(::grpc::ServerContext* context, const ::grpcIRegression::getNumActiveLeavesRequest* request, ::grpcIRegression::getNumActiveLeavesResponse* response) override;
        ::grpc::Status getNumPassiveLeaves(::grpc::ServerContext* context, const ::grpcIRegression::getNumPassiveLeavesRequest* request, ::grpcIRegression::getNumPassiveLeavesResponse* response) override;

        SRef<SolAR::api::reloc::IRegression> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIRegressionServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer>
{
  static constexpr const char * UUID = "d991baa9-3e57-4377-b244-7690091cea9e";
  static constexpr const char * NAME = "IRegression_grpcServer";
  static constexpr const char * DESCRIPTION = "IRegression_grpcServer grpc server component";
};

#endif