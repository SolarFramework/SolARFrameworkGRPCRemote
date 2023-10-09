// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DTRANSFORMFINDER_GRPCSERVER_H
#define I2DTRANSFORMFINDER_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/pose/I2DTransformFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcI2DTransformFinderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2DTransformFinder {

class I2DTransformFinder_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2DTransformFinder_grpcServer();
    ~I2DTransformFinder_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2DTransformFinder"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2DTransformFinderServiceImpl:  public ::grpcI2DTransformFinder::grpcI2DTransformFinderService::Service
    {
      public:
        grpcI2DTransformFinderServiceImpl() = default;
        ::grpc::Status find(::grpc::ServerContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response) override;

        SRef<SolAR::api::solver::pose::I2DTransformFinder> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI2DTransformFinderServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2DTransformFinder::I2DTransformFinder_grpcServer>
{
  static constexpr const char * UUID = "e59ed354-1ddc-4f89-b445-31001e0acc67";
  static constexpr const char * NAME = "I2DTransformFinder_grpcServer";
  static constexpr const char * DESCRIPTION = "I2DTransformFinder_grpcServer grpc server component";
};

#endif