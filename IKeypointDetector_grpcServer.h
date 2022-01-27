// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYPOINTDETECTOR_GRPCSERVER_H
#define IKEYPOINTDETECTOR_GRPCSERVER_H
#include "api/features/IKeypointDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        ::grpc::Status getType(::grpc::ServerContext* context, const ::grpcIKeypointDetector::getTypeRequest* request, ::grpcIKeypointDetector::getTypeResponse* response) override;
        ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcIKeypointDetector::detectRequest* request, ::grpcIKeypointDetector::detectResponse* response) override;

        SRef<SolAR::api::features::IKeypointDetector> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIKeypointDetectorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer>
{
  static constexpr const char * UUID = "7094b3a7-e257-46bf-84c5-c5e5ce3b8d39";
  static constexpr const char * NAME = "IKeypointDetector_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeypointDetector_grpcServer grpc server component";
};

#endif