// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYPOINTDETECTORREGION_GRPCSERVER_H
#define IKEYPOINTDETECTORREGION_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IKeypointDetectorRegion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIKeypointDetectorRegionService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIKeypointDetectorRegion {

class IKeypointDetectorRegion_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IKeypointDetectorRegion_grpcServer();
    ~IKeypointDetectorRegion_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IKeypointDetectorRegion"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIKeypointDetectorRegionServiceImpl:  public ::grpcIKeypointDetectorRegion::grpcIKeypointDetectorRegionService::Service
    {
      public:
        grpcIKeypointDetectorRegionServiceImpl() = default;
        ::grpc::Status setType(::grpc::ServerContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status getType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response) override;
        ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response) override;

        SRef<SolAR::api::features::IKeypointDetectorRegion> m_xpcfComponent;

    };


  private:
    grpcIKeypointDetectorRegionServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIKeypointDetectorRegion::IKeypointDetectorRegion_grpcServer>
{
  static constexpr const char * UUID = "ecce7865-2ae3-4b51-b267-28067beb742c";
  static constexpr const char * NAME = "IKeypointDetectorRegion_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeypointDetectorRegion_grpcServer grpc server component";
};

#endif