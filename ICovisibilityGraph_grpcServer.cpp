// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICovisibilityGraph_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICovisibilityGraph::ICovisibilityGraph_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICovisibilityGraph::ICovisibilityGraph_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICovisibilityGraph {

ICovisibilityGraph_grpcServer::ICovisibilityGraph_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICovisibilityGraph_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::ICovisibilityGraph>(m_grpcService.m_xpcfComponent);
}


void ICovisibilityGraph_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICovisibilityGraph_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICovisibilityGraph_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::increaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::increaseEdgeRequest* request, ::grpcICovisibilityGraph::increaseEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->increaseEdge(node1_id, node2_id, weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::decreaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::decreaseEdgeRequest* request, ::grpcICovisibilityGraph::decreaseEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->decreaseEdge(node1_id, node2_id, weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::removeEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::removeEdgeRequest* request, ::grpcICovisibilityGraph::removeEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeEdge(node1_id, node2_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::getEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getEdgeRequest* request, ::grpcICovisibilityGraph::getEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getEdge(node1_id, node2_id, weight);
  response->set_weight(weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::isEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::isEdgeRequest* request, ::grpcICovisibilityGraph::isEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  bool returnValue = m_xpcfComponent->isEdge(node1_id, node2_id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::getAllNodes(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getAllNodesRequest* request, ::grpcICovisibilityGraph::getAllNodesResponse* response)
{
  std::set<uint32_t> nodes_id = xpcf::deserialize<std::set<uint32_t>>(request->nodes_id());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllNodes(nodes_id);
  response->set_nodes_id(xpcf::serialize<std::set<uint32_t>>(nodes_id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::suppressNode(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::suppressNodeRequest* request, ::grpcICovisibilityGraph::suppressNodeResponse* response)
{
  uint32_t node_id = request->node_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressNode(node_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::getNeighbors(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getNeighborsRequest* request, ::grpcICovisibilityGraph::getNeighborsResponse* response)
{
  uint32_t node_id = request->node_id();
  float minWeight = request->minweight();
  std::vector<uint32_t> neighbors = xpcf::deserialize<std::vector<uint32_t>>(request->neighbors());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNeighbors(node_id, minWeight, neighbors);
  response->set_neighbors(xpcf::serialize<std::vector<uint32_t>>(neighbors));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::minimalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::minimalSpanningTreeRequest* request, ::grpcICovisibilityGraph::minimalSpanningTreeResponse* response)
{
  std::vector<std::tuple<uint32_t,uint32_t,float>> edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(request->edges_weights());
  float minTotalWeights = request->mintotalweights();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->minimalSpanningTree(edges_weights, minTotalWeights);
  response->set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  response->set_mintotalweights(minTotalWeights);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::maximalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::maximalSpanningTreeRequest* request, ::grpcICovisibilityGraph::maximalSpanningTreeResponse* response)
{
  std::vector<std::tuple<uint32_t,uint32_t,float>> edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(request->edges_weights());
  float maxTotalWeights = request->maxtotalweights();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->maximalSpanningTree(edges_weights, maxTotalWeights);
  response->set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  response->set_maxtotalweights(maxTotalWeights);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::getShortestPath(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::getShortestPathRequest* request, ::grpcICovisibilityGraph::getShortestPathResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  std::vector<uint32_t> path = xpcf::deserialize<std::vector<uint32_t>>(request->path());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getShortestPath(node1_id, node2_id, path);
  response->set_path(xpcf::serialize<std::vector<uint32_t>>(path));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::display(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICovisibilityGraph::displayResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->display();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::saveToFileRequest* request, ::grpcICovisibilityGraph::saveToFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraph_grpcServer::grpcICovisibilityGraphServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraph::loadFromFileRequest* request, ::grpcICovisibilityGraph::loadFromFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

