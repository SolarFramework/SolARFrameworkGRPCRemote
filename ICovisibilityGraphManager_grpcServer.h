// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICOVISIBILITYGRAPHMANAGER_GRPCSERVER_H
#define ICOVISIBILITYGRAPHMANAGER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/storage/ICovisibilityGraphManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcICovisibilityGraphManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverICovisibilityGraphManager {

class ICovisibilityGraphManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ICovisibilityGraphManager_grpcServer();
    ~ICovisibilityGraphManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ICovisibilityGraphManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcICovisibilityGraphManagerServiceImpl:  public ::grpcICovisibilityGraphManager::grpcICovisibilityGraphManagerService::Service
    {
      public:
        grpcICovisibilityGraphManagerServiceImpl() = default;
        ::grpc::Status increaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::increaseEdgeRequest* request, ::grpcICovisibilityGraphManager::increaseEdgeResponse* response) override;
        ::grpc::Status decreaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::decreaseEdgeRequest* request, ::grpcICovisibilityGraphManager::decreaseEdgeResponse* response) override;
        ::grpc::Status removeEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::removeEdgeRequest* request, ::grpcICovisibilityGraphManager::removeEdgeResponse* response) override;
        ::grpc::Status getEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getEdgeRequest* request, ::grpcICovisibilityGraphManager::getEdgeResponse* response) override;
        ::grpc::Status isEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::isEdgeRequest* request, ::grpcICovisibilityGraphManager::isEdgeResponse* response) override;
        ::grpc::Status getAllNodes(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getAllNodesRequest* request, ::grpcICovisibilityGraphManager::getAllNodesResponse* response) override;
        ::grpc::Status suppressNode(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::suppressNodeRequest* request, ::grpcICovisibilityGraphManager::suppressNodeResponse* response) override;
        ::grpc::Status getNeighbors(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getNeighborsRequest* request, ::grpcICovisibilityGraphManager::getNeighborsResponse* response) override;
        ::grpc::Status minimalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::minimalSpanningTreeRequest* request, ::grpcICovisibilityGraphManager::minimalSpanningTreeResponse* response) override;
        ::grpc::Status maximalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::maximalSpanningTreeRequest* request, ::grpcICovisibilityGraphManager::maximalSpanningTreeResponse* response) override;
        ::grpc::Status getShortestPath(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getShortestPathRequest* request, ::grpcICovisibilityGraphManager::getShortestPathResponse* response) override;
        ::grpc::Status display(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICovisibilityGraphManager::displayResponse* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::saveToFileRequest* request, ::grpcICovisibilityGraphManager::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::loadFromFileRequest* request, ::grpcICovisibilityGraphManager::loadFromFileResponse* response) override;
        ::grpc::Status getConstCovisibilityGraph(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICovisibilityGraphManager::getConstCovisibilityGraphResponse* response) override;
        ::grpc::Status getCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getCovisibilityGraphRequest* request, ::grpcICovisibilityGraphManager::getCovisibilityGraphResponse* response) override;
        ::grpc::Status setCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::setCovisibilityGraphRequest* request, ::google::protobuf::Empty* response) override;

        SRef<SolAR::api::storage::ICovisibilityGraphManager> m_xpcfComponent;

    };


  private:
    grpcICovisibilityGraphManagerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer>
{
  static constexpr const char * UUID = "5b692517-dc78-40b0-9d4c-5361621b7823";
  static constexpr const char * NAME = "ICovisibilityGraphManager_grpcServer";
  static constexpr const char * DESCRIPTION = "ICovisibilityGraphManager_grpcServer grpc server component";
};

#endif