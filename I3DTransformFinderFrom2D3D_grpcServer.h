// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DTRANSFORMFINDERFROM2D3D_GRPCSERVER_H
#define I3DTRANSFORMFINDERFROM2D3D_GRPCSERVER_H
#include "api/solver/pose/I3DTransformFinderFrom2D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI3DTransformFinderFrom2D3DService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D {

class I3DTransformFinderFrom2D3D_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DTransformFinderFrom2D3D_grpcServer();
    ~I3DTransformFinderFrom2D3D_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DTransformFinderFrom2D3D"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DTransformFinderFrom2D3DServiceImpl:  public ::grpcI3DTransformFinderFrom2D3D::grpcI3DTransformFinderFrom2D3DService::Service
    {
      public:
        grpcI3DTransformFinderFrom2D3DServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D3D::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom2D3D::estimateResponse* response) override;

        SRef<SolAR::api::solver::pose::I3DTransformFinderFrom2D3D> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI3DTransformFinderFrom2D3DServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer>
{
  static constexpr const char * UUID = "cf5a7828-f6e1-482a-bb0c-b8e44ac9a22d";
  static constexpr const char * NAME = "I3DTransformFinderFrom2D3D_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransformFinderFrom2D3D_grpcServer grpc server component";
};

#endif