// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DOVERLAY_GRPCSERVER_H
#define I3DOVERLAY_GRPCSERVER_H
#include "api/display/I3DOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI3DOverlayService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DOverlay {

class I3DOverlay_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DOverlay_grpcServer();
    ~I3DOverlay_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DOverlay"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DOverlayServiceImpl:  public ::grpcI3DOverlay::grpcI3DOverlayService::Service
    {
      public:
        grpcI3DOverlayServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DOverlay::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status draw(::grpc::ServerContext* context, const ::grpcI3DOverlay::drawRequest* request, ::google::protobuf::Empty* response) override;

        SRef<SolAR::api::display::I3DOverlay> m_xpcfComponent;

    };


  private:
    grpcI3DOverlayServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DOverlay::I3DOverlay_grpcServer>
{
  static constexpr const char * UUID = "cb391967-f407-4a67-b092-26d44de001ce";
  static constexpr const char * NAME = "I3DOverlay_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DOverlay_grpcServer grpc server component";
};

#endif
