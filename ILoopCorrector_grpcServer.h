// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ILOOPCORRECTOR_GRPCSERVER_H
#define ILOOPCORRECTOR_GRPCSERVER_H
#include "api/loop/ILoopCorrector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcILoopCorrectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverILoopCorrector {

class ILoopCorrector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ILoopCorrector_grpcServer();
    ~ILoopCorrector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ILoopCorrector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcILoopCorrectorServiceImpl:  public ::grpcILoopCorrector::grpcILoopCorrectorService::Service
    {
      public:
        grpcILoopCorrectorServiceImpl() = default;
        ::grpc::Status correct_grpc0(::grpc::ServerContext* context, const ::grpcILoopCorrector::correct_grpc0Request* request, ::grpcILoopCorrector::correct_grpc0Response* response) override;
        ::grpc::Status correct_grpc1(::grpc::ServerContext* context, const ::grpcILoopCorrector::correct_grpc1Request* request, ::grpcILoopCorrector::correct_grpc1Response* response) override;

        SRef<SolAR::api::loop::ILoopCorrector> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcILoopCorrectorServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer>
{
  static constexpr const char * UUID = "7dc30f5b-c61f-4eea-81d9-265a2a2b3b93";
  static constexpr const char * NAME = "ILoopCorrector_grpcServer";
  static constexpr const char * DESCRIPTION = "ILoopCorrector_grpcServer grpc server component";
};

#endif