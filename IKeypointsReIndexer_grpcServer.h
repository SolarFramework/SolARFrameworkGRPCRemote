// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYPOINTSREINDEXER_GRPCSERVER_H
#define IKEYPOINTSREINDEXER_GRPCSERVER_H
#include "api/features/IKeypointsReIndexer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIKeypointsReIndexerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIKeypointsReIndexer {

class IKeypointsReIndexer_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IKeypointsReIndexer_grpcServer();
    ~IKeypointsReIndexer_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IKeypointsReIndexer"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIKeypointsReIndexerServiceImpl:  public ::grpcIKeypointsReIndexer::grpcIKeypointsReIndexerService::Service
    {
      public:
        grpcIKeypointsReIndexerServiceImpl() = default;
        ::grpc::Status reindex(::grpc::ServerContext* context, const ::grpcIKeypointsReIndexer::reindexRequest* request, ::grpcIKeypointsReIndexer::reindexResponse* response) override;

        SRef<SolAR::api::features::IKeypointsReIndexer> m_xpcfComponent;

    };


  private:
    grpcIKeypointsReIndexerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer>
{
  static constexpr const char * UUID = "0305c89a-f5f2-46ce-a3a3-c795179f8e8c";
  static constexpr const char * NAME = "IKeypointsReIndexer_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeypointsReIndexer_grpcServer grpc server component";
};

#endif