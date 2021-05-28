// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICovisibilityGraphManager_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICovisibilityGraphManager {

ICovisibilityGraphManager_grpcServer::ICovisibilityGraphManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICovisibilityGraphManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::ICovisibilityGraphManager>(m_grpcService.m_xpcfComponent);
}


void ICovisibilityGraphManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICovisibilityGraphManager_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICovisibilityGraphManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::increaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::increaseEdgeRequest* request, ::grpcICovisibilityGraphManager::increaseEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->increaseEdge(node1_id, node2_id, weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::decreaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::decreaseEdgeRequest* request, ::grpcICovisibilityGraphManager::decreaseEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->decreaseEdge(node1_id, node2_id, weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::removeEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::removeEdgeRequest* request, ::grpcICovisibilityGraphManager::removeEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeEdge(node1_id, node2_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getEdgeRequest* request, ::grpcICovisibilityGraphManager::getEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getEdge(node1_id, node2_id, weight);
  response->set_weight(weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::isEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::isEdgeRequest* request, ::grpcICovisibilityGraphManager::isEdgeResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  bool returnValue = m_xpcfComponent->isEdge(node1_id, node2_id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getAllNodes(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getAllNodesRequest* request, ::grpcICovisibilityGraphManager::getAllNodesResponse* response)
{
  std::set<uint32_t> nodes_id = xpcf::deserialize<std::set<uint32_t>>(request->nodes_id());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllNodes(nodes_id);
  response->set_nodes_id(xpcf::serialize<std::set<uint32_t>>(nodes_id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::suppressNode(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::suppressNodeRequest* request, ::grpcICovisibilityGraphManager::suppressNodeResponse* response)
{
  uint32_t node_id = request->node_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressNode(node_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getNeighbors(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getNeighborsRequest* request, ::grpcICovisibilityGraphManager::getNeighborsResponse* response)
{
  uint32_t node_id = request->node_id();
  float minWeight = request->minweight();
  std::vector<uint32_t> neighbors = xpcf::deserialize<std::vector<uint32_t>>(request->neighbors());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNeighbors(node_id, minWeight, neighbors);
  response->set_neighbors(xpcf::serialize<std::vector<uint32_t>>(neighbors));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::minimalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::minimalSpanningTreeRequest* request, ::grpcICovisibilityGraphManager::minimalSpanningTreeResponse* response)
{
  std::vector<std::tuple<uint32_t,uint32_t,float>> edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(request->edges_weights());
  float minTotalWeights = request->mintotalweights();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->minimalSpanningTree(edges_weights, minTotalWeights);
  response->set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  response->set_mintotalweights(minTotalWeights);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::maximalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::maximalSpanningTreeRequest* request, ::grpcICovisibilityGraphManager::maximalSpanningTreeResponse* response)
{
  std::vector<std::tuple<uint32_t,uint32_t,float>> edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(request->edges_weights());
  float maxTotalWeights = request->maxtotalweights();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->maximalSpanningTree(edges_weights, maxTotalWeights);
  response->set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  response->set_maxtotalweights(maxTotalWeights);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getShortestPath(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getShortestPathRequest* request, ::grpcICovisibilityGraphManager::getShortestPathResponse* response)
{
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  std::vector<uint32_t> path = xpcf::deserialize<std::vector<uint32_t>>(request->path());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getShortestPath(node1_id, node2_id, path);
  response->set_path(xpcf::serialize<std::vector<uint32_t>>(path));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::display(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICovisibilityGraphManager::displayResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->display();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::saveToFileRequest* request, ::grpcICovisibilityGraphManager::saveToFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::loadFromFileRequest* request, ::grpcICovisibilityGraphManager::loadFromFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getConstCovisibilityGraph(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICovisibilityGraphManager::getConstCovisibilityGraphResponse* response)
{
  SRef<SolAR::datastructure::CovisibilityGraph> returnValue = m_xpcfComponent->getConstCovisibilityGraph();
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getCovisibilityGraphRequest* request, ::grpcICovisibilityGraphManager::getCovisibilityGraphResponse* response)
{
  SRef<SolAR::datastructure::CovisibilityGraph> covisibilityGraph = xpcf::deserialize<SRef<SolAR::datastructure::CovisibilityGraph>>(request->covisibilitygraph());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getCovisibilityGraph(covisibilityGraph);
  response->set_covisibilitygraph(xpcf::serialize<SRef<SolAR::datastructure::CovisibilityGraph>>(covisibilityGraph));
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::setCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::setCovisibilityGraphRequest* request, ::google::protobuf::Empty* response)
{
  SRef<SolAR::datastructure::CovisibilityGraph> covisibilityGraph = xpcf::deserialize<SRef<SolAR::datastructure::CovisibilityGraph>>(request->covisibilitygraph());
  m_xpcfComponent->setCovisibilityGraph(covisibilityGraph);
  return ::grpc::Status::OK;
}


}

