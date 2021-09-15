// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DTRANSFORMFINDERFROM2D2D_GRPCSERVER_H
#define I3DTRANSFORMFINDERFROM2D2D_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I3DTransformFinderFrom2D2D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI3DTransformFinderFrom2D2DService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D {

class I3DTransformFinderFrom2D2D_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DTransformFinderFrom2D2D_grpcServer();
    ~I3DTransformFinderFrom2D2D_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DTransformFinderFrom2D2D"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DTransformFinderFrom2D2DServiceImpl:  public ::grpcI3DTransformFinderFrom2D2D::grpcI3DTransformFinderFrom2D2DService::Service
    {
      public:
        grpcI3DTransformFinderFrom2D2DServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response) override;
        ::grpc::Status estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response) override;

        SRef<SolAR::api::solver::pose::I3DTransformFinderFrom2D2D> m_xpcfComponent;

    };


  private:
    grpcI3DTransformFinderFrom2D2DServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer>
{
  static constexpr const char * UUID = "073d40e6-9a84-4702-9ef9-ac99fa1c4805";
  static constexpr const char * NAME = "I3DTransformFinderFrom2D2D_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransformFinderFrom2D2D_grpcServer grpc server component";
};

#endif