// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3D3DCORRESPONDENCESFINDER_GRPCSERVER_H
#define I3D3DCORRESPONDENCESFINDER_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/I3D3DCorrespondencesFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI3D3DCorrespondencesFinderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder {

class I3D3DCorrespondencesFinder_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3D3DCorrespondencesFinder_grpcServer();
    ~I3D3DCorrespondencesFinder_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3D3DCorrespondencesFinder"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3D3DCorrespondencesFinderServiceImpl:  public ::grpcI3D3DCorrespondencesFinder::grpcI3D3DCorrespondencesFinderService::Service
    {
      public:
        grpcI3D3DCorrespondencesFinderServiceImpl() = default;
        ::grpc::Status find_grpc0(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response) override;
        ::grpc::Status find_grpc1(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response) override;

        SRef<SolAR::api::solver::pose::I3D3DCorrespondencesFinder> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI3D3DCorrespondencesFinderServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcServer>
{
  static constexpr const char * UUID = "c758fd66-bd9e-4aae-9580-008afe3a37c0";
  static constexpr const char * NAME = "I3D3DCorrespondencesFinder_grpcServer";
  static constexpr const char * DESCRIPTION = "I3D3DCorrespondencesFinder_grpcServer grpc server component";
};

#endif