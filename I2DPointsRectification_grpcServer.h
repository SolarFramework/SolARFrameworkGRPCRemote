// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DPOINTSRECTIFICATION_GRPCSERVER_H
#define I2DPOINTSRECTIFICATION_GRPCSERVER_H
#include "api/geom/I2DPointsRectification.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI2DPointsRectificationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2DPointsRectification {

class I2DPointsRectification_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2DPointsRectification_grpcServer();
    ~I2DPointsRectification_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2DPointsRectification"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2DPointsRectificationServiceImpl:  public ::grpcI2DPointsRectification::grpcI2DPointsRectificationService::Service
    {
      public:
        grpcI2DPointsRectificationServiceImpl() = default;
        ::grpc::Status rectify_grpc0(::grpc::ServerContext* context, const ::grpcI2DPointsRectification::rectify_grpc0Request* request, ::grpcI2DPointsRectification::rectify_grpc0Response* response) override;
        ::grpc::Status rectify_grpc1(::grpc::ServerContext* context, const ::grpcI2DPointsRectification::rectify_grpc1Request* request, ::grpcI2DPointsRectification::rectify_grpc1Response* response) override;

        SRef<SolAR::api::geom::I2DPointsRectification> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI2DPointsRectificationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2DPointsRectification::I2DPointsRectification_grpcServer>
{
  static constexpr const char * UUID = "e02ef0d2-b3b1-4a2d-b088-f236b9447fed";
  static constexpr const char * NAME = "I2DPointsRectification_grpcServer";
  static constexpr const char * DESCRIPTION = "I2DPointsRectification_grpcServer grpc server component";
};

#endif