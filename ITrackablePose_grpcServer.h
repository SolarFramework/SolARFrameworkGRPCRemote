// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ITRACKABLEPOSE_GRPCSERVER_H
#define ITRACKABLEPOSE_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/ITrackablePose.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcITrackablePoseService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverITrackablePose {

class ITrackablePose_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ITrackablePose_grpcServer();
    ~ITrackablePose_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ITrackablePose"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcITrackablePoseServiceImpl:  public ::grpcITrackablePose::grpcITrackablePoseService::Service
    {
      public:
        grpcITrackablePoseServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcITrackablePose::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status setTrackable(::grpc::ServerContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response) override;
        ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response) override;

        SRef<SolAR::api::solver::pose::ITrackablePose> m_xpcfComponent;

    };


  private:
    grpcITrackablePoseServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer>
{
  static constexpr const char * UUID = "5b8b8e75-f839-4c72-84a7-3e3f3e9ce04c";
  static constexpr const char * NAME = "ITrackablePose_grpcServer";
  static constexpr const char * DESCRIPTION = "ITrackablePose_grpcServer grpc server component";
};

#endif