// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IOVERLAPDETECTOR_GRPCSERVER_H
#define IOVERLAPDETECTOR_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/loop/IOverlapDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIOverlapDetectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIOverlapDetector {

class IOverlapDetector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IOverlapDetector_grpcServer();
    ~IOverlapDetector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IOverlapDetector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIOverlapDetectorServiceImpl:  public ::grpcIOverlapDetector::grpcIOverlapDetectorService::Service
    {
      public:
        grpcIOverlapDetectorServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIOverlapDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status detect_grpc0(::grpc::ServerContext* context, const ::grpcIOverlapDetector::detect_grpc0Request* request, ::grpcIOverlapDetector::detect_grpc0Response* response) override;
        ::grpc::Status detect_grpc1(::grpc::ServerContext* context, const ::grpcIOverlapDetector::detect_grpc1Request* request, ::grpcIOverlapDetector::detect_grpc1Response* response) override;

        SRef<SolAR::api::loop::IOverlapDetector> m_xpcfComponent;

    };


  private:
    grpcIOverlapDetectorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIOverlapDetector::IOverlapDetector_grpcServer>
{
  static constexpr const char * UUID = "fd2a17d8-1da8-420a-a765-6b67b03f3055";
  static constexpr const char * NAME = "IOverlapDetector_grpcServer";
  static constexpr const char * DESCRIPTION = "IOverlapDetector_grpcServer grpc server component";
};

#endif