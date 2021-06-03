// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMATCHESOVERLAY_GRPCSERVER_H
#define IMATCHESOVERLAY_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/display/IMatchesOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIMatchesOverlayService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMatchesOverlay {

class IMatchesOverlay_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMatchesOverlay_grpcServer();
    ~IMatchesOverlay_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMatchesOverlay"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMatchesOverlayServiceImpl:  public ::grpcIMatchesOverlay::grpcIMatchesOverlayService::Service
    {
      public:
        grpcIMatchesOverlayServiceImpl() = default;
        ::grpc::Status draw_grpc0(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request* request, ::grpcIMatchesOverlay::draw_grpc0Response* response) override;
        ::grpc::Status draw_grpc1(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request* request, ::grpcIMatchesOverlay::draw_grpc1Response* response) override;
        ::grpc::Status draw_grpc2(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request* request, ::grpcIMatchesOverlay::draw_grpc2Response* response) override;
        ::grpc::Status draw_grpc3(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request* request, ::grpcIMatchesOverlay::draw_grpc3Response* response) override;

        SRef<SolAR::api::display::IMatchesOverlay> m_xpcfComponent;

    };


  private:
    grpcIMatchesOverlayServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMatchesOverlay::IMatchesOverlay_grpcServer>
{
  static constexpr const char * UUID = "e2a1b505-d217-4a35-91fa-7269b0b7e761";
  static constexpr const char * NAME = "IMatchesOverlay_grpcServer";
  static constexpr const char * DESCRIPTION = "IMatchesOverlay_grpcServer grpc server component";
};

#endif