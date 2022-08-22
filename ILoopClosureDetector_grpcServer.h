// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ILOOPCLOSUREDETECTOR_GRPCSERVER_H
#define ILOOPCLOSUREDETECTOR_GRPCSERVER_H
#include "api/loop/ILoopClosureDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcILoopClosureDetectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverILoopClosureDetector {

class ILoopClosureDetector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ILoopClosureDetector_grpcServer();
    ~ILoopClosureDetector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ILoopClosureDetector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcILoopClosureDetectorServiceImpl:  public ::grpcILoopClosureDetector::grpcILoopClosureDetectorService::Service
    {
      public:
        grpcILoopClosureDetectorServiceImpl() = default;
        ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response) override;

        SRef<SolAR::api::loop::ILoopClosureDetector> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcILoopClosureDetectorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer>
{
  static constexpr const char * UUID = "fd612992-30d0-11ec-8d3d-0242ac130003";
  static constexpr const char * NAME = "ILoopClosureDetector_grpcServer";
  static constexpr const char * DESCRIPTION = "ILoopClosureDetector_grpcServer grpc server component";
};

#endif