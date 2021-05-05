// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYPOINTSREINDEXER_GRPCSERVER_H
#define IKEYPOINTSREINDEXER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IKeypointsReIndexer.h"
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
  static constexpr const char * UUID = "7e34c58e-f451-42e0-aa2c-13c10c37b9d7";
  static constexpr const char * NAME = "IKeypointsReIndexer_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeypointsReIndexer_grpcServer grpc server component";
};

#endif