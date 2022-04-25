// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMULTITRACKABLESPOSE_GRPCSERVER_H
#define IMULTITRACKABLESPOSE_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/IMultiTrackablesPose.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMultiTrackablesPoseService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMultiTrackablesPose {

class IMultiTrackablesPose_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMultiTrackablesPose_grpcServer();
    ~IMultiTrackablesPose_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMultiTrackablesPose"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMultiTrackablesPoseServiceImpl:  public ::grpcIMultiTrackablesPose::grpcIMultiTrackablesPoseService::Service
    {
      public:
        grpcIMultiTrackablesPoseServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setTrackables(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response) override;
        ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response) override;

        SRef<SolAR::api::solver::pose::IMultiTrackablesPose> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMultiTrackablesPoseServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMultiTrackablesPose::IMultiTrackablesPose_grpcServer>
{
  static constexpr const char * UUID = "85daed2c-bd7d-4636-8321-b5f22e22ae11";
  static constexpr const char * NAME = "IMultiTrackablesPose_grpcServer";
  static constexpr const char * DESCRIPTION = "IMultiTrackablesPose_grpcServer grpc server component";
};

#endif