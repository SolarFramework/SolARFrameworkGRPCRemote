// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IUNPROJECT_GRPCSERVER_H
#define IUNPROJECT_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IUnproject.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIUnprojectService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIUnproject {

class IUnproject_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IUnproject_grpcServer();
    ~IUnproject_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IUnproject"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIUnprojectServiceImpl:  public ::grpcIUnproject::grpcIUnprojectService::Service
    {
      public:
        grpcIUnprojectServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIUnproject::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status unproject_grpc0(::grpc::ServerContext* context, const ::grpcIUnproject::unproject_grpc0Request* request, ::grpcIUnproject::unproject_grpc0Response* response) override;
        ::grpc::Status unproject_grpc1(::grpc::ServerContext* context, const ::grpcIUnproject::unproject_grpc1Request* request, ::grpcIUnproject::unproject_grpc1Response* response) override;

        SRef<SolAR::api::geom::IUnproject> m_xpcfComponent;

    };


  private:
    grpcIUnprojectServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIUnproject::IUnproject_grpcServer>
{
  static constexpr const char * UUID = "1a3da266-9a11-42d9-bd84-59f6141cc501";
  static constexpr const char * NAME = "IUnproject_grpcServer";
  static constexpr const char * DESCRIPTION = "IUnproject_grpcServer grpc server component";
};

#endif