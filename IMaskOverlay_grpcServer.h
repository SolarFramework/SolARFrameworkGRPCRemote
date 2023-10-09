// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMASKOVERLAY_GRPCSERVER_H
#define IMASKOVERLAY_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/display/IMaskOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMaskOverlayService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMaskOverlay {

class IMaskOverlay_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMaskOverlay_grpcServer();
    ~IMaskOverlay_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMaskOverlay"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMaskOverlayServiceImpl:  public ::grpcIMaskOverlay::grpcIMaskOverlayService::Service
    {
      public:
        grpcIMaskOverlayServiceImpl() = default;
        ::grpc::Status draw_grpc0(::grpc::ServerContext* context, const ::grpcIMaskOverlay::draw_grpc0Request* request, ::grpcIMaskOverlay::draw_grpc0Response* response) override;
        ::grpc::Status draw_grpc1(::grpc::ServerContext* context, const ::grpcIMaskOverlay::draw_grpc1Request* request, ::grpcIMaskOverlay::draw_grpc1Response* response) override;

        SRef<SolAR::api::display::IMaskOverlay> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMaskOverlayServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMaskOverlay::IMaskOverlay_grpcServer>
{
  static constexpr const char * UUID = "86974141-74a8-40a2-8150-c20eda855ed4";
  static constexpr const char * NAME = "IMaskOverlay_grpcServer";
  static constexpr const char * DESCRIPTION = "IMaskOverlay_grpcServer grpc server component";
};

#endif