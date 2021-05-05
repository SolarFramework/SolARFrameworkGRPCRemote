// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IRELOCALIZER_GRPCSERVER_H
#define IRELOCALIZER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/reloc/IRelocalizer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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

    };


  private:
    grpcIRelocalizerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIRelocalizer::IRelocalizer_grpcServer>
{
  static constexpr const char * UUID = "5bd6d516-8097-448d-aa82-de8658ee390f";
  static constexpr const char * NAME = "IRelocalizer_grpcServer";
  static constexpr const char * DESCRIPTION = "IRelocalizer_grpcServer grpc server component";
};

#endif