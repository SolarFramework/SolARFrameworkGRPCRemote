// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICOVISIBILITYGRAPH_GRPCSERVER_H
#define ICOVISIBILITYGRAPH_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/storage/ICovisibilityGraph.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcICovisibilityGraphService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverICovisibilityGraph {

class ICovisibilityGraph_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ICovisibilityGraph_grpcServer();
    ~ICovisibilityGraph_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ICovisibilityGraph"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcICovisibilityGraphServiceImpl:  public ::grpcICovisibilityGraph::grpcICovisibilityGraphService::Service
    {
      public:
        grpcICovisibilityGraphServiceImpl() = default;
        ::grpc::Status increaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::increaseEdgeRequest* request, ::grpcICovisibilityGraph::increaseEdgeResponse* response) override;
        ::grpc::Status decreaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::decreaseEdgeRequest* request, ::grpcICovisibilityGraph::decreaseEdgeResponse* response) override;
        ::grpc::Status removeEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::removeEdgeRequest* request, ::grpcICovisibilityGraph::removeEdgeResponse* response) override;
        ::grpc::Status getEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getEdgeRequest* request, ::grpcICovisibilityGraph::getEdgeResponse* response) override;
        ::grpc::Status isEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::isEdgeRequest* request, ::grpcICovisibilityGraph::isEdgeResponse* response) override;
        ::grpc::Status getAllNodes(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getAllNodesRequest* request, ::grpcICovisibilityGraph::getAllNodesResponse* response) override;
        ::grpc::Status suppressNode(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::suppressNodeRequest* request, ::grpcICovisibilityGraph::suppressNodeResponse* response) override;
        ::grpc::Status getNeighbors(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getNeighborsRequest* request, ::grpcICovisibilityGraph::getNeighborsResponse* response) override;
        ::grpc::Status minimalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::minimalSpanningTreeRequest* request, ::grpcICovisibilityGraph::minimalSpanningTreeResponse* response) override;
        ::grpc::Status maximalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::maximalSpanningTreeRequest* request, ::grpcICovisibilityGraph::maximalSpanningTreeResponse* response) override;
        ::grpc::Status getShortestPath(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getShortestPathRequest* request, ::grpcICovisibilityGraph::getShortestPathResponse* response) override;
        ::grpc::Status display(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICovisibilityGraph::displayResponse* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::saveToFileRequest* request, ::grpcICovisibilityGraph::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::loadFromFileRequest* request, ::grpcICovisibilityGraph::loadFromFileResponse* response) override;

        SRef<SolAR::api::storage::ICovisibilityGraph> m_xpcfComponent;

    };


  private:
    grpcICovisibilityGraphServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverICovisibilityGraph::ICovisibilityGraph_grpcServer>
{
  static constexpr const char * UUID = "c6c9005f-79a7-4f6e-870c-d28acef1f316";
  static constexpr const char * NAME = "ICovisibilityGraph_grpcServer";
  static constexpr const char * DESCRIPTION = "ICovisibilityGraph_grpcServer grpc server component";
};

#endif