// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IRELOCALIZER_GRPCSERVER_H
#define IRELOCALIZER_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/reloc/IRelocalizer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIRelocalizerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIRelocalizer {

class IRelocalizer_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IRelocalizer_grpcServer();
    ~IRelocalizer_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IRelocalizer"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIRelocalizerServiceImpl:  public ::grpcIRelocalizer::grpcIRelocalizerService::Service
    {
      public:
        grpcIRelocalizerServiceImpl() = default;
        ::grpc::Status addKeyframe(::grpc::ServerContext* context, const ::grpcIRelocalizer::addKeyframeRequest* request, ::grpcIRelocalizer::addKeyframeResponse* response) override;
        ::grpc::Status relocalize(::grpc::ServerContext* context, const ::grpcIRelocalizer::relocalizeRequest* request, ::grpcIRelocalizer::relocalizeResponse* response) override;

        SRef<SolAR::api::reloc::IRelocalizer> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIRelocalizerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRelocalizer::IRelocalizer_grpcServer>
{
  static constexpr const char * UUID = "cc39b0cc-9236-46b2-8188-937992010c9f";
  static constexpr const char * NAME = "IRelocalizer_grpcServer";
  static constexpr const char * DESCRIPTION = "IRelocalizer_grpcServer grpc server component";
};

#endif