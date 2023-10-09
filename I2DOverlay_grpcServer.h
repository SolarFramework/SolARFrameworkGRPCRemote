// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DOVERLAY_GRPCSERVER_H
#define I2DOVERLAY_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/display/I2DOverlay.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI2DOverlayServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer>
{
  static constexpr const char * UUID = "ad47d50c-83d6-4b63-af31-8cf3642addd0";
  static constexpr const char * NAME = "I2DOverlay_grpcServer";
  static constexpr const char * DESCRIPTION = "I2DOverlay_grpcServer grpc server component";
};

#endif