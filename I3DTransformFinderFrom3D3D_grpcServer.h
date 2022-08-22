// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DTRANSFORMFINDERFROM3D3D_GRPCSERVER_H
#define I3DTRANSFORMFINDERFROM3D3D_GRPCSERVER_H
#include "api/solver/pose/I3DTransformFinderFrom3D3D.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI3DTransformFinderFrom3D3DService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D {

class I3DTransformFinderFrom3D3D_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DTransformFinderFrom3D3D_grpcServer();
    ~I3DTransformFinderFrom3D3D_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DTransformFinderFrom3D3D"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DTransformFinderFrom3D3DServiceImpl:  public ::grpcI3DTransformFinderFrom3D3D::grpcI3DTransformFinderFrom3D3DService::Service
    {
      public:
        grpcI3DTransformFinderFrom3D3DServiceImpl() = default;
        ::grpc::Status estimate(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom3D3D::estimateResponse* response) override;

        SRef<SolAR::api::solver::pose::I3DTransformFinderFrom3D3D> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI3DTransformFinderFrom3D3DServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcServer>
{
  static constexpr const char * UUID = "51f343ee-9231-4a7a-af03-fe90e857d676";
  static constexpr const char * NAME = "I3DTransformFinderFrom3D3D_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransformFinderFrom3D3D_grpcServer grpc server component";
};

#endif