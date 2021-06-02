// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DTRANSFORMSACFINDERFROM3D3D_GRPCSERVER_H
#define I3DTRANSFORMSACFINDERFROM3D3D_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I3DTransformSACFinderFrom3D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI3DTransformSACFinderFrom3D3DService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D {

class I3DTransformSACFinderFrom3D3D_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DTransformSACFinderFrom3D3D_grpcServer();
    ~I3DTransformSACFinderFrom3D3D_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DTransformSACFinderFrom3D3D"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DTransformSACFinderFrom3D3DServiceImpl:  public ::grpcI3DTransformSACFinderFrom3D3D::grpcI3DTransformSACFinderFrom3D3DService::Service
    {
      public:
        grpcI3DTransformSACFinderFrom3D3DServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Request* request, ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Response* response) override;
        ::grpc::Status estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Request* request, ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Response* response) override;

        SRef<SolAR::api::solver::pose::I3DTransformSACFinderFrom3D3D> m_xpcfComponent;

    };


  private:
    grpcI3DTransformSACFinderFrom3D3DServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer>
{
  static constexpr const char * UUID = "591eda6f-1154-40c4-a321-5b7c7fdc31d4";
  static constexpr const char * NAME = "I3DTransformSACFinderFrom3D3D_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransformSACFinderFrom3D3D_grpcServer grpc server component";
};

#endif