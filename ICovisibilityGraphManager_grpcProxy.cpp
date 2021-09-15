// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICovisibilityGraphManager_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICovisibilityGraphManager::ICovisibilityGraphManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICovisibilityGraphManager::ICovisibilityGraphManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICovisibilityGraphManager {

ICovisibilityGraphManager_grpcProxy::ICovisibilityGraphManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICovisibilityGraphManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::ICovisibilityGraphManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ICovisibilityGraphManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICovisibilityGraphManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICovisibilityGraphManager::grpcICovisibilityGraphManagerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::increaseEdge(uint32_t const node1_id, uint32_t const node2_id, float const weight)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::increaseEdgeRequest reqIn;
  ::grpcICovisibilityGraphManager::increaseEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_weight(weight);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->increaseEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "increaseEdge rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","increaseEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::decreaseEdge(uint32_t const node1_id, uint32_t const node2_id, float const weight)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::decreaseEdgeRequest reqIn;
  ::grpcICovisibilityGraphManager::decreaseEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_weight(weight);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->decreaseEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "decreaseEdge rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","decreaseEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::removeEdge(uint32_t const node1_id, uint32_t const node2_id)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::removeEdgeRequest reqIn;
  ::grpcICovisibilityGraphManager::removeEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeEdge rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","removeEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::getEdge(uint32_t node1_id, uint32_t node2_id, float& weight) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::getEdgeRequest reqIn;
  ::grpcICovisibilityGraphManager::getEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_weight(weight);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getEdge rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","getEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  weight = respOut.weight();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


bool  ICovisibilityGraphManager_grpcProxy::isEdge(uint32_t const node1_id, uint32_t const node2_id) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::isEdgeRequest reqIn;
  ::grpcICovisibilityGraphManager::isEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isEdge rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","isEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::getAllNodes(std::set<uint32_t>& nodes_id) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::getAllNodesRequest reqIn;
  ::grpcICovisibilityGraphManager::getAllNodesResponse respOut;
  reqIn.set_nodes_id(xpcf::serialize<std::set<uint32_t>>(nodes_id));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllNodes(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllNodes rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","getAllNodes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  nodes_id = xpcf::deserialize<std::set<uint32_t>>(respOut.nodes_id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::suppressNode(uint32_t const node_id)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::suppressNodeRequest reqIn;
  ::grpcICovisibilityGraphManager::suppressNodeResponse respOut;
  reqIn.set_node_id(node_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressNode(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressNode rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","suppressNode",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::getNeighbors(uint32_t const node_id, float const minWeight, std::vector<uint32_t>& neighbors) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::getNeighborsRequest reqIn;
  ::grpcICovisibilityGraphManager::getNeighborsResponse respOut;
  reqIn.set_node_id(node_id);
  reqIn.set_minweight(minWeight);
  reqIn.set_neighbors(xpcf::serialize<std::vector<uint32_t>>(neighbors));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNeighbors(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNeighbors rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","getNeighbors",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  neighbors = xpcf::deserialize<std::vector<uint32_t>>(respOut.neighbors());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::minimalSpanningTree(std::vector<std::tuple<uint32_t,uint32_t,float>>& edges_weights, float& minTotalWeights)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::minimalSpanningTreeRequest reqIn;
  ::grpcICovisibilityGraphManager::minimalSpanningTreeResponse respOut;
  reqIn.set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  reqIn.set_mintotalweights(minTotalWeights);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->minimalSpanningTree(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "minimalSpanningTree rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","minimalSpanningTree",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(respOut.edges_weights());
  minTotalWeights = respOut.mintotalweights();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::maximalSpanningTree(std::vector<std::tuple<uint32_t,uint32_t,float>>& edges_weights, float& maxTotalWeights)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::maximalSpanningTreeRequest reqIn;
  ::grpcICovisibilityGraphManager::maximalSpanningTreeResponse respOut;
  reqIn.set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  reqIn.set_maxtotalweights(maxTotalWeights);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->maximalSpanningTree(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "maximalSpanningTree rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","maximalSpanningTree",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(respOut.edges_weights());
  maxTotalWeights = respOut.maxtotalweights();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::getShortestPath(uint32_t node1_id, uint32_t node2_id, std::vector<uint32_t>& path)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::getShortestPathRequest reqIn;
  ::grpcICovisibilityGraphManager::getShortestPathResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_path(xpcf::serialize<std::vector<uint32_t>>(path));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getShortestPath(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getShortestPath rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","getShortestPath",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  path = xpcf::deserialize<std::vector<uint32_t>>(respOut.path());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::display() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICovisibilityGraphManager::displayResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->display(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "display rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","display",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::saveToFileRequest reqIn;
  ::grpcICovisibilityGraphManager::saveToFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraphManager_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::loadFromFileRequest reqIn;
  ::grpcICovisibilityGraphManager::loadFromFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SRef<SolAR::datastructure::CovisibilityGraph> const&  ICovisibilityGraphManager_grpcProxy::getConstCovisibilityGraph() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICovisibilityGraphManager::getConstCovisibilityGraphResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getConstCovisibilityGraph(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getConstCovisibilityGraph rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","getConstCovisibilityGraph",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


std::unique_lock<std::mutex>  ICovisibilityGraphManager_grpcProxy::getCovisibilityGraph(SRef<SolAR::datastructure::CovisibilityGraph>& covisibilityGraph)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::getCovisibilityGraphRequest reqIn;
  ::grpcICovisibilityGraphManager::getCovisibilityGraphResponse respOut;
  reqIn.set_covisibilitygraph(xpcf::serialize<SRef<SolAR::datastructure::CovisibilityGraph>>(covisibilityGraph));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCovisibilityGraph(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCovisibilityGraph rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","getCovisibilityGraph",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  covisibilityGraph = xpcf::deserialize<SRef<SolAR::datastructure::CovisibilityGraph>>(respOut.covisibilitygraph());
}


void  ICovisibilityGraphManager_grpcProxy::setCovisibilityGraph(SRef<SolAR::datastructure::CovisibilityGraph> const covisibilityGraph)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraphManager::setCovisibilityGraphRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_covisibilitygraph(xpcf::serialize<SRef<SolAR::datastructure::CovisibilityGraph>>(covisibilityGraph));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCovisibilityGraph(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCovisibilityGraph rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphManagerService","setCovisibilityGraph",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

