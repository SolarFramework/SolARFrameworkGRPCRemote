// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ITRACKING_GRPCSERVER_H
#define ITRACKING_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/slam/ITracking.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcITrackingService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverITracking {

class ITracking_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ITracking_grpcServer();
    ~ITracking_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ITracking"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcITrackingServiceImpl:  public ::grpcITracking::grpcITrackingService::Service
    {
      public:
        grpcITrackingServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcITracking::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status updateReferenceKeyframe(::grpc::ServerContext* context, const ::grpcITracking::updateReferenceKeyframeRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status process(::grpc::ServerContext* context, const ::grpcITracking::processRequest* request, ::grpcITracking::processResponse* response) override;

        SRef<SolAR::api::slam::ITracking> m_xpcfComponent;

    };


  private:
    grpcITrackingServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer>
{
  static constexpr const char * UUID = "d5baf1c5-d0ff-40ba-aa45-2c308a402587";
  static constexpr const char * NAME = "ITracking_grpcServer";
  static constexpr const char * DESCRIPTION = "ITracking_grpcServer grpc server component";
};

#endif