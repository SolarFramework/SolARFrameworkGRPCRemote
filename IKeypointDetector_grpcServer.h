// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYPOINTDETECTOR_GRPCSERVER_H
#define IKEYPOINTDETECTOR_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IKeypointDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIKeypointDetectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIKeypointDetector {

class IKeypointDetector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IKeypointDetector_grpcServer();
    ~IKeypointDetector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IKeypointDetector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIKeypointDetectorServiceImpl:  public ::grpcIKeypointDetector::grpcIKeypointDetectorService::Service
    {
      public:
        grpcIKeypointDetectorServiceImpl() = default;
        ::grpc::Status setType(::grpc::ServerContext* context, const ::grpcIKeypointDetector::setTypeRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status getType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetector::getTypeResponse* response) override;
        ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcIKeypointDetector::detectRequest* request, ::grpcIKeypointDetector::detectResponse* response) override;

        SRef<SolAR::api::features::IKeypointDetector> m_xpcfComponent;

    };


  private:
    grpcIKeypointDetectorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer>
{
  static constexpr const char * UUID = "de8e7518-5811-4a6d-99c6-3a4604902f2d";
  static constexpr const char * NAME = "IKeypointDetector_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeypointDetector_grpcServer grpc server component";
};

#endif