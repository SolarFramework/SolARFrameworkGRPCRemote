// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICovisibilityGraph_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICovisibilityGraph::ICovisibilityGraph_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICovisibilityGraph::ICovisibilityGraph_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICovisibilityGraph {

ICovisibilityGraph_grpcProxy::ICovisibilityGraph_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICovisibilityGraph_grpcProxy>())
{
  declareInterface<SolAR::api::storage::ICovisibilityGraph>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ICovisibilityGraph_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICovisibilityGraph_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICovisibilityGraph::grpcICovisibilityGraphService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::increaseEdge(uint32_t const node1_id, uint32_t const node2_id, float const weight)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::increaseEdgeRequest reqIn;
  ::grpcICovisibilityGraph::increaseEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_weight(weight);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->increaseEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "increaseEdgerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","increaseEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::decreaseEdge(uint32_t const node1_id, uint32_t const node2_id, float const weight)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::decreaseEdgeRequest reqIn;
  ::grpcICovisibilityGraph::decreaseEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_weight(weight);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->decreaseEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "decreaseEdgerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","decreaseEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::removeEdge(uint32_t const node1_id, uint32_t const node2_id)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::removeEdgeRequest reqIn;
  ::grpcICovisibilityGraph::removeEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeEdgerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","removeEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::getEdge(uint32_t node1_id, uint32_t node2_id, float& weight) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::getEdgeRequest reqIn;
  ::grpcICovisibilityGraph::getEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_weight(weight);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getEdgerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","getEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  weight = respOut.weight();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


bool  ICovisibilityGraph_grpcProxy::isEdge(uint32_t const node1_id, uint32_t const node2_id) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::isEdgeRequest reqIn;
  ::grpcICovisibilityGraph::isEdgeResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isEdge(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isEdgerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","isEdge",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::getAllNodes(std::set<uint32_t>& nodes_id) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::getAllNodesRequest reqIn;
  ::grpcICovisibilityGraph::getAllNodesResponse respOut;
  reqIn.set_nodes_id(xpcf::serialize<std::set<uint32_t>>(nodes_id));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllNodes(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllNodesrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","getAllNodes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  nodes_id = xpcf::deserialize<std::set<uint32_t>>(respOut.nodes_id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::suppressNode(uint32_t const node_id)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::suppressNodeRequest reqIn;
  ::grpcICovisibilityGraph::suppressNodeResponse respOut;
  reqIn.set_node_id(node_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressNode(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressNoderpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","suppressNode",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::getNeighbors(uint32_t const node_id, float const minWeight, std::vector<uint32_t>& neighbors) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::getNeighborsRequest reqIn;
  ::grpcICovisibilityGraph::getNeighborsResponse respOut;
  reqIn.set_node_id(node_id);
  reqIn.set_minweight(minWeight);
  reqIn.set_neighbors(xpcf::serialize<std::vector<uint32_t>>(neighbors));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNeighbors(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNeighborsrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","getNeighbors",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  neighbors = xpcf::deserialize<std::vector<uint32_t>>(respOut.neighbors());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::minimalSpanningTree(std::vector<std::tuple<uint32_t,uint32_t,float>>& edges_weights, float& minTotalWeights)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::minimalSpanningTreeRequest reqIn;
  ::grpcICovisibilityGraph::minimalSpanningTreeResponse respOut;
  reqIn.set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  reqIn.set_mintotalweights(minTotalWeights);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->minimalSpanningTree(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "minimalSpanningTreerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","minimalSpanningTree",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(respOut.edges_weights());
  minTotalWeights = respOut.mintotalweights();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::maximalSpanningTree(std::vector<std::tuple<uint32_t,uint32_t,float>>& edges_weights, float& maxTotalWeights)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::maximalSpanningTreeRequest reqIn;
  ::grpcICovisibilityGraph::maximalSpanningTreeResponse respOut;
  reqIn.set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  reqIn.set_maxtotalweights(maxTotalWeights);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->maximalSpanningTree(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "maximalSpanningTreerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","maximalSpanningTree",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(respOut.edges_weights());
  maxTotalWeights = respOut.maxtotalweights();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::getShortestPath(uint32_t node1_id, uint32_t node2_id, std::vector<uint32_t>& path)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::getShortestPathRequest reqIn;
  ::grpcICovisibilityGraph::getShortestPathResponse respOut;
  reqIn.set_node1_id(node1_id);
  reqIn.set_node2_id(node2_id);
  reqIn.set_path(xpcf::serialize<std::vector<uint32_t>>(path));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getShortestPath(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getShortestPathrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","getShortestPath",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  path = xpcf::deserialize<std::vector<uint32_t>>(respOut.path());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::display() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICovisibilityGraph::displayResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->display(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "displayrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","display",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::saveToFileRequest reqIn;
  ::grpcICovisibilityGraph::saveToFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICovisibilityGraph_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcICovisibilityGraph::loadFromFileRequest reqIn;
  ::grpcICovisibilityGraph::loadFromFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICovisibilityGraphService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

