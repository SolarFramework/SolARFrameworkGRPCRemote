// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DTRACKABLESDETECTOR_GRPCSERVER_H
#define I2DTRACKABLESDETECTOR_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/I2DTrackablesDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI2DTrackablesDetectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2DTrackablesDetector {

class I2DTrackablesDetector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2DTrackablesDetector_grpcServer();
    ~I2DTrackablesDetector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2DTrackablesDetector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2DTrackablesDetectorServiceImpl:  public ::grpcI2DTrackablesDetector::grpcI2DTrackablesDetectorService::Service
    {
      public:
        grpcI2DTrackablesDetectorServiceImpl() = default;
        ::grpc::Status setTrackables(::grpc::ServerContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest* request, ::grpcI2DTrackablesDetector::setTrackablesResponse* response) override;
        ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcI2DTrackablesDetector::detectRequest* request, ::grpcI2DTrackablesDetector::detectResponse* response) override;

        SRef<SolAR::api::features::I2DTrackablesDetector> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI2DTrackablesDetectorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2DTrackablesDetector::I2DTrackablesDetector_grpcServer>
{
  static constexpr const char * UUID = "b73bdd5a-aecb-4e63-b40f-cd05fa7b8490";
  static constexpr const char * NAME = "I2DTrackablesDetector_grpcServer";
  static constexpr const char * DESCRIPTION = "I2DTrackablesDetector_grpcServer grpc server component";
};

#endif