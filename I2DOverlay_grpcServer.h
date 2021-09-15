// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DOVERLAY_GRPCSERVER_H
#define I2DOVERLAY_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/display/I2DOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI2DOverlayService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2DOverlay {

class I2DOverlay_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2DOverlay_grpcServer();
    ~I2DOverlay_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2DOverlay"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2DOverlayServiceImpl:  public ::grpcI2DOverlay::grpcI2DOverlayService::Service
    {
      public:
        grpcI2DOverlayServiceImpl() = default;
        ::grpc::Status drawCircle(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircleRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status drawCircles_grpc0(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircles_grpc0Request* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status drawCircles_grpc1(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircles_grpc1Request* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status drawContour(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawContourRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status drawContours(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawContoursRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status drawSBPattern(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawSBPatternRequest* request, ::google::protobuf::Empty* response) override;

        SRef<SolAR::api::display::I2DOverlay> m_xpcfComponent;

    };


  private:
    grpcI2DOverlayServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer>
{
  static constexpr const char * UUID = "9383ce9b-750b-4d24-b478-a2eab3263b00";
  static constexpr const char * NAME = "I2DOverlay_grpcServer";
  static constexpr const char * DESCRIPTION = "I2DOverlay_grpcServer grpc server component";
};

#endif