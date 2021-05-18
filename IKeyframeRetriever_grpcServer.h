// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYFRAMERETRIEVER_GRPCSERVER_H
#define IKEYFRAMERETRIEVER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/reloc/IKeyframeRetriever.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIKeyframeRetrieverService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIKeyframeRetriever {

class IKeyframeRetriever_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IKeyframeRetriever_grpcServer();
    ~IKeyframeRetriever_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IKeyframeRetriever"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIKeyframeRetrieverServiceImpl:  public ::grpcIKeyframeRetriever::grpcIKeyframeRetrieverService::Service
    {
      public:
        grpcIKeyframeRetrieverServiceImpl() = default;
        ::grpc::Status addKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::addKeyframeRequest* request, ::grpcIKeyframeRetriever::addKeyframeResponse* response) override;
        ::grpc::Status suppressKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::suppressKeyframeRequest* request, ::grpcIKeyframeRetriever::suppressKeyframeResponse* response) override;
        ::grpc::Status retrieve_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::retrieve_grpc0Request* request, ::grpcIKeyframeRetriever::retrieve_grpc0Response* response) override;
        ::grpc::Status retrieve_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::retrieve_grpc1Request* request, ::grpcIKeyframeRetriever::retrieve_grpc1Response* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::saveToFileRequest* request, ::grpcIKeyframeRetriever::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::loadFromFileRequest* request, ::grpcIKeyframeRetriever::loadFromFileResponse* response) override;
        ::grpc::Status match_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::match_grpc0Request* request, ::grpcIKeyframeRetriever::match_grpc0Response* response) override;
        ::grpc::Status match_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::match_grpc1Request* request, ::grpcIKeyframeRetriever::match_grpc1Response* response) override;

        SRef<SolAR::api::reloc::IKeyframeRetriever> m_xpcfComponent;

    };


  private:
    grpcIKeyframeRetrieverServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIKeyframeRetriever::IKeyframeRetriever_grpcServer>
{
  static constexpr const char * UUID = "b976bb10-42fc-4bed-840c-6b8209b9890a";
  static constexpr const char * NAME = "IKeyframeRetriever_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeyframeRetriever_grpcServer grpc server component";
};

#endif