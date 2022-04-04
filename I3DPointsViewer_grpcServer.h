// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DPOINTSVIEWER_GRPCSERVER_H
#define I3DPOINTSVIEWER_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/display/I3DPointsViewer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI3DPointsViewerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DPointsViewer {

class I3DPointsViewer_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DPointsViewer_grpcServer();
    ~I3DPointsViewer_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DPointsViewer"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DPointsViewerServiceImpl:  public ::grpcI3DPointsViewer::grpcI3DPointsViewerService::Service
    {
      public:
        grpcI3DPointsViewerServiceImpl() = default;
        ::grpc::Status display_grpc0(::grpc::ServerContext* context, const ::grpcI3DPointsViewer::display_grpc0Request* request, ::grpcI3DPointsViewer::display_grpc0Response* response) override;
        ::grpc::Status display_grpc1(::grpc::ServerContext* context, const ::grpcI3DPointsViewer::display_grpc1Request* request, ::grpcI3DPointsViewer::display_grpc1Response* response) override;

        SRef<SolAR::api::display::I3DPointsViewer> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI3DPointsViewerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DPointsViewer::I3DPointsViewer_grpcServer>
{
  static constexpr const char * UUID = "15e7a40b-9269-40a1-b95d-7139cff7ee4c";
  static constexpr const char * NAME = "I3DPointsViewer_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DPointsViewer_grpcServer grpc server component";
};

#endif