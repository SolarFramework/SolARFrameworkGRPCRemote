// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DTRANSFORMSACFINDERFROM2D3D_GRPCSERVER_H
#define I3DTRANSFORMSACFINDERFROM2D3D_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/pose/I3DTransformSACFinderFrom2D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI3DTransformSACFinderFrom2D3DService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom2D3D {

class I3DTransformSACFinderFrom2D3D_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DTransformSACFinderFrom2D3D_grpcServer();
    ~I3DTransformSACFinderFrom2D3D_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DTransformSACFinderFrom2D3D"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DTransformSACFinderFrom2D3DServiceImpl:  public ::grpcI3DTransformSACFinderFrom2D3D::grpcI3DTransformSACFinderFrom2D3DService::Service
    {
      public:
        grpcI3DTransformSACFinderFrom2D3DServiceImpl() = default;
        ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom2D3D::estimateRequest* request, ::grpcI3DTransformSACFinderFrom2D3D::estimateResponse* response) override;

        SRef<SolAR::api::solver::pose::I3DTransformSACFinderFrom2D3D> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI3DTransformSACFinderFrom2D3DServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcServer>
{
  static constexpr const char * UUID = "beb7849c-b08d-4895-838a-4c6d1fa9d757";
  static constexpr const char * NAME = "I3DTransformSACFinderFrom2D3D_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransformSACFinderFrom2D3D_grpcServer grpc server component";
};

#endif