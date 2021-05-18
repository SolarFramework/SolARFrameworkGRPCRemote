// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISBPATTERNREINDEXER_GRPCSERVER_H
#define ISBPATTERNREINDEXER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/ISBPatternReIndexer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
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

    };


  private:
    grpcISBPatternReIndexerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer>
{
  static constexpr const char * UUID = "88a65246-9dff-4466-b10d-a2a39a3ba48d";
  static constexpr const char * NAME = "ISBPatternReIndexer_grpcServer";
  static constexpr const char * DESCRIPTION = "ISBPatternReIndexer_grpcServer grpc server component";
};

#endif