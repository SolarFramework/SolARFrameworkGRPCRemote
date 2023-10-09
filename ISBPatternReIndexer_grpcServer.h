// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISBPATTERNREINDEXER_GRPCSERVER_H
#define ISBPATTERNREINDEXER_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/ISBPatternReIndexer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcISBPatternReIndexerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverISBPatternReIndexer {

class ISBPatternReIndexer_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ISBPatternReIndexer_grpcServer();
    ~ISBPatternReIndexer_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ISBPatternReIndexer"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcISBPatternReIndexerServiceImpl:  public ::grpcISBPatternReIndexer::grpcISBPatternReIndexerService::Service
    {
      public:
        grpcISBPatternReIndexerServiceImpl() = default;
        ::grpc::Status reindex(::grpc::ServerContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response) override;

        SRef<SolAR::api::features::ISBPatternReIndexer> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcISBPatternReIndexerServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer>
{
  static constexpr const char * UUID = "2c59c1e6-c757-4147-9c97-12cd7878f88d";
  static constexpr const char * NAME = "ISBPatternReIndexer_grpcServer";
  static constexpr const char * DESCRIPTION = "ISBPatternReIndexer_grpcServer grpc server component";
};

#endif