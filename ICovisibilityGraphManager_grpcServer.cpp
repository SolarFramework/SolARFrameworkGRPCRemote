// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICovisibilityGraphManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICovisibilityGraphManager {

ICovisibilityGraphManager_grpcServer::ICovisibilityGraphManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICovisibilityGraphManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::ICovisibilityGraphManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(18);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ICovisibilityGraphManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICovisibilityGraphManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICovisibilityGraphManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::increaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::increaseEdgeRequest* request, ::grpcICovisibilityGraphManager::increaseEdgeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "increaseEdge", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::increaseEdge request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->increaseEdge(node1_id, node2_id, weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::increaseEdge response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::decreaseEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::decreaseEdgeRequest* request, ::grpcICovisibilityGraphManager::decreaseEdgeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "decreaseEdge", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::decreaseEdge request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->decreaseEdge(node1_id, node2_id, weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::decreaseEdge response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::removeEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::removeEdgeRequest* request, ::grpcICovisibilityGraphManager::removeEdgeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "removeEdge", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::removeEdge request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeEdge(node1_id, node2_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::removeEdge response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getEdgeRequest* request, ::grpcICovisibilityGraphManager::getEdgeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getEdge", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getEdge request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  float weight = request->weight();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getEdge(node1_id, node2_id, weight);
  response->set_weight(weight);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getEdge response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::isEdge(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::isEdgeRequest* request, ::grpcICovisibilityGraphManager::isEdgeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isEdge", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::isEdge request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  bool returnValue = m_xpcfComponent->isEdge(node1_id, node2_id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::isEdge response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getAllNodes(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getAllNodesRequest* request, ::grpcICovisibilityGraphManager::getAllNodesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllNodes", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getAllNodes request received at " << to_simple_string(start) << std::endl;
  #endif
  std::set<uint32_t> nodes_id = xpcf::deserialize<std::set<uint32_t>>(request->nodes_id());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllNodes(nodes_id);
  response->set_nodes_id(xpcf::serialize<std::set<uint32_t>>(nodes_id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getAllNodes response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::suppressNode(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::suppressNodeRequest* request, ::grpcICovisibilityGraphManager::suppressNodeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "suppressNode", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::suppressNode request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node_id = request->node_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressNode(node_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::suppressNode response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getNeighbors(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getNeighborsRequest* request, ::grpcICovisibilityGraphManager::getNeighborsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNeighbors", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getNeighbors request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node_id = request->node_id();
  float minWeight = request->minweight();
  std::vector<uint32_t> neighbors = xpcf::deserialize<std::vector<uint32_t>>(request->neighbors());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNeighbors(node_id, minWeight, neighbors);
  response->set_neighbors(xpcf::serialize<std::vector<uint32_t>>(neighbors));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getNeighbors response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::minimalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::minimalSpanningTreeRequest* request, ::grpcICovisibilityGraphManager::minimalSpanningTreeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "minimalSpanningTree", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::minimalSpanningTree request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<std::tuple<uint32_t,uint32_t,float>> edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(request->edges_weights());
  float minTotalWeights = request->mintotalweights();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->minimalSpanningTree(edges_weights, minTotalWeights);
  response->set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  response->set_mintotalweights(minTotalWeights);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::minimalSpanningTree response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::maximalSpanningTree(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::maximalSpanningTreeRequest* request, ::grpcICovisibilityGraphManager::maximalSpanningTreeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "maximalSpanningTree", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::maximalSpanningTree request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<std::tuple<uint32_t,uint32_t,float>> edges_weights = xpcf::deserialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(request->edges_weights());
  float maxTotalWeights = request->maxtotalweights();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->maximalSpanningTree(edges_weights, maxTotalWeights);
  response->set_edges_weights(xpcf::serialize<std::vector<std::tuple<uint32_t,uint32_t,float>>>(edges_weights));
  response->set_maxtotalweights(maxTotalWeights);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::maximalSpanningTree response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getShortestPath(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getShortestPathRequest* request, ::grpcICovisibilityGraphManager::getShortestPathResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getShortestPath", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getShortestPath request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t node1_id = request->node1_id();
  uint32_t node2_id = request->node2_id();
  std::vector<uint32_t> path = xpcf::deserialize<std::vector<uint32_t>>(request->path());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getShortestPath(node1_id, node2_id, path);
  response->set_path(xpcf::serialize<std::vector<uint32_t>>(path));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getShortestPath response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::display(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::displayRequest* request, ::grpcICovisibilityGraphManager::displayResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "display", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::display request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->display();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::display response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::saveToFileRequest* request, ::grpcICovisibilityGraphManager::saveToFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::saveToFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::saveToFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::loadFromFileRequest* request, ::grpcICovisibilityGraphManager::loadFromFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::loadFromFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::loadFromFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getConstCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getConstCovisibilityGraphRequest* request, ::grpcICovisibilityGraphManager::getConstCovisibilityGraphResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getConstCovisibilityGraph", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getConstCovisibilityGraph request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::CovisibilityGraph> returnValue = m_xpcfComponent->getConstCovisibilityGraph();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SRef<SolAR::datastructure::CovisibilityGraph>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getConstCovisibilityGraph response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::getCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::getCovisibilityGraphRequest* request, ::grpcICovisibilityGraphManager::getCovisibilityGraphResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getCovisibilityGraph", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getCovisibilityGraph request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::CovisibilityGraph> covisibilityGraph = xpcf::deserialize<SRef<SolAR::datastructure::CovisibilityGraph>>(request->covisibilitygraph());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getCovisibilityGraph(covisibilityGraph);
  response->set_covisibilitygraph(xpcf::serialize<SRef<SolAR::datastructure::CovisibilityGraph>>(covisibilityGraph));
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<std::unique_lock<std::mutex>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::getCovisibilityGraph response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ICovisibilityGraphManager_grpcServer::grpcICovisibilityGraphManagerServiceImpl::setCovisibilityGraph(::grpc::ServerContext* context, const ::grpcICovisibilityGraphManager::setCovisibilityGraphRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::setCovisibilityGraph request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::CovisibilityGraph> covisibilityGraph = xpcf::deserialize<SRef<SolAR::datastructure::CovisibilityGraph>>(request->covisibilitygraph());
  m_xpcfComponent->setCovisibilityGraph(covisibilityGraph);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICovisibilityGraphManager_grpcServer::setCovisibilityGraph response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

