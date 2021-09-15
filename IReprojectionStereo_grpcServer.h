// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IREPROJECTIONSTEREO_GRPCSERVER_H
#define IREPROJECTIONSTEREO_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IReprojectionStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIReprojectionStereoService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIReprojectionStereo {

class IReprojectionStereo_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IReprojectionStereo_grpcServer();
    ~IReprojectionStereo_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IReprojectionStereo"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIReprojectionStereoServiceImpl:  public ::grpcIReprojectionStereo::grpcIReprojectionStereoService::Service
    {
      public:
        grpcIReprojectionStereoServiceImpl() = default;
        ::grpc::Status reprojectToUnrectification(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToUnrectificationRequest* request, ::grpcIReprojectionStereo::reprojectToUnrectificationResponse* response) override;
        ::grpc::Status reprojectToCloudPoints_grpc0(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Request* request, ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Response* response) override;
        ::grpc::Status reprojectToCloudPoints_grpc1(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Request* request, ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Response* response) override;

        SRef<SolAR::api::geom::IReprojectionStereo> m_xpcfComponent;

    };


  private:
    grpcIReprojectionStereoServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer>
{
  static constexpr const char * UUID = "c3c612d7-b7a9-4a24-a327-e2060e7697d2";
  static constexpr const char * NAME = "IReprojectionStereo_grpcServer";
  static constexpr const char * DESCRIPTION = "IReprojectionStereo_grpcServer grpc server component";
};

#endif