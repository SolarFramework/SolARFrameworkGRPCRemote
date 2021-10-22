// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPROJECT_GRPCSERVER_H
#define IPROJECT_GRPCSERVER_H
#include "api/geom/IProject.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIProjectService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIProject {

class IProject_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IProject_grpcServer();
    ~IProject_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IProject"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIProjectServiceImpl:  public ::grpcIProject::grpcIProjectService::Service
    {
      public:
        grpcIProjectServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIProject::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status project_grpc0(::grpc::ServerContext* context, const ::grpcIProject::project_grpc0Request* request, ::grpcIProject::project_grpc0Response* response) override;
        ::grpc::Status project_grpc1(::grpc::ServerContext* context, const ::grpcIProject::project_grpc1Request* request, ::grpcIProject::project_grpc1Response* response) override;

        SRef<SolAR::api::geom::IProject> m_xpcfComponent;

    };


  private:
    grpcIProjectServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIProject::IProject_grpcServer>
{
  static constexpr const char * UUID = "8edec0aa-8547-49b0-a1a5-0eb148e44386";
  static constexpr const char * NAME = "IProject_grpcServer";
  static constexpr const char * DESCRIPTION = "IProject_grpcServer grpc server component";
};

#endif