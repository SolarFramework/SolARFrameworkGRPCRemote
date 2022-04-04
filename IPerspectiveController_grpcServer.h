// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPERSPECTIVECONTROLLER_GRPCSERVER_H
#define IPERSPECTIVECONTROLLER_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/image/IPerspectiveController.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIPerspectiveControllerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPerspectiveController {

class IPerspectiveController_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPerspectiveController_grpcServer();
    ~IPerspectiveController_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPerspectiveController"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPerspectiveControllerServiceImpl:  public ::grpcIPerspectiveController::grpcIPerspectiveControllerService::Service
    {
      public:
        grpcIPerspectiveControllerServiceImpl() = default;
        ::grpc::Status correct_grpc0(::grpc::ServerContext* context, const ::grpcIPerspectiveController::correct_grpc0Request* request, ::grpcIPerspectiveController::correct_grpc0Response* response) override;
        ::grpc::Status correct_grpc1(::grpc::ServerContext* context, const ::grpcIPerspectiveController::correct_grpc1Request* request, ::grpcIPerspectiveController::correct_grpc1Response* response) override;

        SRef<SolAR::api::image::IPerspectiveController> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIPerspectiveControllerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer>
{
  static constexpr const char * UUID = "35c1c15f-1151-45a5-b75c-012f985cb045";
  static constexpr const char * NAME = "IPerspectiveController_grpcServer";
  static constexpr const char * DESCRIPTION = "IPerspectiveController_grpcServer grpc server component";
};

#endif