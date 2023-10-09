// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ITRIANGULATOR_GRPCSERVER_H
#define ITRIANGULATOR_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/map/ITriangulator.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcITriangulatorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverITriangulator {

class ITriangulator_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ITriangulator_grpcServer();
    ~ITriangulator_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ITriangulator"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcITriangulatorServiceImpl:  public ::grpcITriangulator::grpcITriangulatorService::Service
    {
      public:
        grpcITriangulatorServiceImpl() = default;
        ::grpc::Status triangulate_grpc0(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc0Request* request, ::grpcITriangulator::triangulate_grpc0Response* response) override;
        ::grpc::Status triangulate_grpc1(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc1Request* request, ::grpcITriangulator::triangulate_grpc1Response* response) override;
        ::grpc::Status triangulate_grpc2(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc2Request* request, ::grpcITriangulator::triangulate_grpc2Response* response) override;
        ::grpc::Status triangulate_grpc3(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc3Request* request, ::grpcITriangulator::triangulate_grpc3Response* response) override;

        SRef<SolAR::api::solver::map::ITriangulator> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcITriangulatorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverITriangulator::ITriangulator_grpcServer>
{
  static constexpr const char * UUID = "9cb53cc2-2887-4606-8d07-d9d4ae3108b2";
  static constexpr const char * NAME = "ITriangulator_grpcServer";
  static constexpr const char * DESCRIPTION = "ITriangulator_grpcServer grpc server component";
};

#endif