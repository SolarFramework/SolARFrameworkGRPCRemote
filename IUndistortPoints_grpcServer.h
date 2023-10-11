// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IUNDISTORTPOINTS_GRPCSERVER_H
#define IUNDISTORTPOINTS_GRPCSERVER_H
#include "api/geom/IUndistortPoints.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIUndistortPointsService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIUndistortPoints {

class IUndistortPoints_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IUndistortPoints_grpcServer();
    ~IUndistortPoints_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IUndistortPoints"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIUndistortPointsServiceImpl:  public ::grpcIUndistortPoints::grpcIUndistortPointsService::Service
    {
      public:
        grpcIUndistortPointsServiceImpl() = default;
        ::grpc::Status undistort_grpc0(::grpc::ServerContext* context, const ::grpcIUndistortPoints::undistort_grpc0Request* request, ::grpcIUndistortPoints::undistort_grpc0Response* response) override;
        ::grpc::Status undistort_grpc1(::grpc::ServerContext* context, const ::grpcIUndistortPoints::undistort_grpc1Request* request, ::grpcIUndistortPoints::undistort_grpc1Response* response) override;

        SRef<SolAR::api::geom::IUndistortPoints> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIUndistortPointsServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer>
{
  static constexpr const char * UUID = "def64009-6792-4e4f-b467-d17309232147";
  static constexpr const char * NAME = "IUndistortPoints_grpcServer";
  static constexpr const char * DESCRIPTION = "IUndistortPoints_grpcServer grpc server component";
};

#endif