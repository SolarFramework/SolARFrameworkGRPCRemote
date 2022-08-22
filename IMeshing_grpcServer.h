// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMESHING_GRPCSERVER_H
#define IMESHING_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/sfm/IMeshing.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMeshingService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMeshing {

class IMeshing_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMeshing_grpcServer();
    ~IMeshing_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMeshing"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMeshingServiceImpl:  public ::grpcIMeshing::grpcIMeshingService::Service
    {
      public:
        grpcIMeshingServiceImpl() = default;
        ::grpc::Status createMesh(::grpc::ServerContext* context, const ::grpcIMeshing::createMeshRequest* request, ::grpcIMeshing::createMeshResponse* response) override;

        SRef<SolAR::api::sfm::IMeshing> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMeshingServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMeshing::IMeshing_grpcServer>
{
  static constexpr const char * UUID = "72eb7d50-e214-4c2d-9451-a324afddaf42";
  static constexpr const char * NAME = "IMeshing_grpcServer";
  static constexpr const char * DESCRIPTION = "IMeshing_grpcServer grpc server component";
};

#endif