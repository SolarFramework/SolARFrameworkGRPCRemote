// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IUNDISTORTPOINTS_GRPCSERVER_H
#define IUNDISTORTPOINTS_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IUndistortPoints.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIUndistortPoints::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;

        SRef<SolAR::api::geom::IUndistortPoints> m_xpcfComponent;

    };


  private:
    grpcIUndistortPointsServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer>
{
  static constexpr const char * UUID = "c47ed79d-eb48-457a-83b7-8ac37f915ddc";
  static constexpr const char * NAME = "IUndistortPoints_grpcServer";
  static constexpr const char * DESCRIPTION = "IUndistortPoints_grpcServer grpc server component";
};

#endif