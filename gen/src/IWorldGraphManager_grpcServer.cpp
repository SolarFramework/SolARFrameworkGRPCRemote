// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IWorldGraphManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIWorldGraphManager::IWorldGraphManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIWorldGraphManager::IWorldGraphManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIWorldGraphManager {

IWorldGraphManager_grpcServer::IWorldGraphManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IWorldGraphManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::IWorldGraphManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(26);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IWorldGraphManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IWorldGraphManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IWorldGraphManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getRelocalizationInformation(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getRelocalizationInformationRequest* request, ::grpcIWorldGraphManager::getRelocalizationInformationResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getRelocalizationInformation", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getRelocalizationInformation request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<std::tuple<org::bcom::xpcf::uuids::uuid,bool>> uuids = xpcf::deserialize<std::vector<std::tuple<org::bcom::xpcf::uuids::uuid,bool>>>(request->uuids());
  std::string token = request->token();
  std::vector<SolAR::datastructure::StorageCapabilities> capability = xpcf::deserialize<std::vector<SolAR::datastructure::StorageCapabilities>>(request->capability());
  std::vector<SolAR::datastructure::RelocalizationInformation> relocalizationInformation = xpcf::deserialize<std::vector<SolAR::datastructure::RelocalizationInformation>>(request->relocalizationinformation());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getRelocalizationInformation(uuids, token, capability, relocalizationInformation);
  response->set_relocalizationinformation(xpcf::serialize<std::vector<SolAR::datastructure::RelocalizationInformation>>(relocalizationInformation));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getRelocalizationInformation response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldElement(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementRequest* request, ::grpcIWorldGraphManager::getWorldElementResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldElement", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElement request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid worldElementId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->worldelementid());
  SRef<SolAR::datastructure::StorageWorldElement> worldElement = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldElement>>(request->worldelement());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldElement(worldElementId, worldElement);
  response->set_worldelement(xpcf::serialize<SRef<SolAR::datastructure::StorageWorldElement>>(worldElement));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElement response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldElements(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementsRequest* request, ::grpcIWorldGraphManager::getWorldElementsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldElements", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElements request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::StorageWorldElement>> vector = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::StorageWorldElement>>>(request->vector());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldElements(vector);
  response->set_vector(xpcf::serialize<std::vector<SRef<SolAR::datastructure::StorageWorldElement>>>(vector));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElements response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldElementByKeyValue(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementByKeyValueRequest* request, ::grpcIWorldGraphManager::getWorldElementByKeyValueResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldElementByKeyValue", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElementByKeyValue request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string key = request->key();
  std::string value = request->value();
  std::vector<SRef<SolAR::datastructure::StorageWorldElement>> vector = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::StorageWorldElement>>>(request->vector());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldElementByKeyValue(key, value, vector);
  response->set_vector(xpcf::serialize<std::vector<SRef<SolAR::datastructure::StorageWorldElement>>>(vector));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElementByKeyValue response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldElementByKey(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldElementByKeyRequest* request, ::grpcIWorldGraphManager::getWorldElementByKeyResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldElementByKey", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElementByKey request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string key = request->key();
  std::vector<SRef<SolAR::datastructure::StorageWorldElement>> vector = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::StorageWorldElement>>>(request->vector());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldElementByKey(key, vector);
  response->set_vector(xpcf::serialize<std::vector<SRef<SolAR::datastructure::StorageWorldElement>>>(vector));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldElementByKey response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::addTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::addTrackableRequest* request, ::grpcIWorldGraphManager::addTrackableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addTrackable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::addTrackable request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->id());
  SRef<SolAR::datastructure::StorageTrackable> trackable = xpcf::deserialize<SRef<SolAR::datastructure::StorageTrackable>>(request->trackable());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addTrackable(id, trackable);
  response->set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::addTrackable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getTrackableRequest* request, ::grpcIWorldGraphManager::getTrackableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getTrackable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getTrackable request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid trackableId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->trackableid());
  SRef<SolAR::datastructure::StorageTrackable> trackable = xpcf::deserialize<SRef<SolAR::datastructure::StorageTrackable>>(request->trackable());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getTrackable(trackableId, trackable);
  response->set_trackable(xpcf::serialize<SRef<SolAR::datastructure::StorageTrackable>>(trackable));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getTrackable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::removeTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeTrackableRequest* request, ::grpcIWorldGraphManager::removeTrackableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "removeTrackable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeTrackable request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid trackableId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->trackableid());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeTrackable(trackableId);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeTrackable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getTrackables(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getTrackablesRequest* request, ::grpcIWorldGraphManager::getTrackablesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getTrackables", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getTrackables request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::StorageTrackable>> vector = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::StorageTrackable>>>(request->vector());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getTrackables(vector);
  response->set_vector(xpcf::serialize<std::vector<SRef<SolAR::datastructure::StorageTrackable>>>(vector));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getTrackables response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::modifyTrackable(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::modifyTrackableRequest* request, ::grpcIWorldGraphManager::modifyTrackableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "modifyTrackable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::modifyTrackable request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->id());
  SRef<SolAR::datastructure::StorageTrackable> trackable = xpcf::deserialize<SRef<SolAR::datastructure::StorageTrackable>>(request->trackable());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->modifyTrackable(id, trackable);
  response->set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::modifyTrackable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::addWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::addWorldAnchorRequest* request, ::grpcIWorldGraphManager::addWorldAnchorResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addWorldAnchor", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::addWorldAnchor request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->id());
  SRef<SolAR::datastructure::StorageWorldAnchor> worldAnchor = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldAnchor>>(request->worldanchor());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addWorldAnchor(id, worldAnchor);
  response->set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::addWorldAnchor response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldAnchorRequest* request, ::grpcIWorldGraphManager::getWorldAnchorResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldAnchor", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldAnchor request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid worldAnchorId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->worldanchorid());
  SRef<SolAR::datastructure::StorageWorldAnchor> worldAnchor = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldAnchor>>(request->worldanchor());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldAnchor(worldAnchorId, worldAnchor);
  response->set_worldanchor(xpcf::serialize<SRef<SolAR::datastructure::StorageWorldAnchor>>(worldAnchor));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldAnchor response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::removeWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeWorldAnchorRequest* request, ::grpcIWorldGraphManager::removeWorldAnchorResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "removeWorldAnchor", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeWorldAnchor request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid worldAnchorId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->worldanchorid());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeWorldAnchor(worldAnchorId);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeWorldAnchor response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldAnchors(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldAnchorsRequest* request, ::grpcIWorldGraphManager::getWorldAnchorsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldAnchors", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldAnchors request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::StorageWorldAnchor>> vector = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::StorageWorldAnchor>>>(request->vector());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldAnchors(vector);
  response->set_vector(xpcf::serialize<std::vector<SRef<SolAR::datastructure::StorageWorldAnchor>>>(vector));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldAnchors response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::modifyWorldAnchor(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::modifyWorldAnchorRequest* request, ::grpcIWorldGraphManager::modifyWorldAnchorResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "modifyWorldAnchor", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::modifyWorldAnchor request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->id());
  SRef<SolAR::datastructure::StorageWorldAnchor> worldAnchor = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldAnchor>>(request->worldanchor());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->modifyWorldAnchor(id, worldAnchor);
  response->set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::modifyWorldAnchor response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::addWorldLink(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::addWorldLinkRequest* request, ::grpcIWorldGraphManager::addWorldLinkResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addWorldLink", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::addWorldLink request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->id());
  SRef<SolAR::datastructure::StorageWorldLink> worldLink = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldLink>>(request->worldlink());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addWorldLink(id, worldLink);
  response->set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::addWorldLink response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldLink_grpc0(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldLink_grpc0Request* request, ::grpcIWorldGraphManager::getWorldLink_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldLink", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldLink request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid parentId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->parentid());
  org::bcom::xpcf::uuids::uuid childId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->childid());
  SRef<SolAR::datastructure::StorageWorldLink> worldLink = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldLink>>(request->worldlink());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldLink(parentId, childId, worldLink);
  response->set_worldlink(xpcf::serialize<SRef<SolAR::datastructure::StorageWorldLink>>(worldLink));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldLink response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldLink_grpc1(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldLink_grpc1Request* request, ::grpcIWorldGraphManager::getWorldLink_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldLink", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldLink request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid linkId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->linkid());
  SRef<SolAR::datastructure::StorageWorldLink> worldLink = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldLink>>(request->worldlink());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldLink(linkId, worldLink);
  response->set_worldlink(xpcf::serialize<SRef<SolAR::datastructure::StorageWorldLink>>(worldLink));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldLink response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::removeWorldLink_grpc0(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeWorldLink_grpc0Request* request, ::grpcIWorldGraphManager::removeWorldLink_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "removeWorldLink", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeWorldLink request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid parentId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->parentid());
  org::bcom::xpcf::uuids::uuid childId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->childid());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeWorldLink(parentId, childId);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeWorldLink response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::removeWorldLink_grpc1(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::removeWorldLink_grpc1Request* request, ::grpcIWorldGraphManager::removeWorldLink_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "removeWorldLink", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeWorldLink request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid linkId = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->linkid());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeWorldLink(linkId);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::removeWorldLink response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::getWorldLinks(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::getWorldLinksRequest* request, ::grpcIWorldGraphManager::getWorldLinksResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldLinks", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldLinks request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::StorageWorldLink>> vector = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::StorageWorldLink>>>(request->vector());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getWorldLinks(vector);
  response->set_vector(xpcf::serialize<std::vector<SRef<SolAR::datastructure::StorageWorldLink>>>(vector));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::getWorldLinks response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::modifyWorldLink(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::modifyWorldLinkRequest* request, ::grpcIWorldGraphManager::modifyWorldLinkResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "modifyWorldLink", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::modifyWorldLink request received at " << to_simple_string(start) << std::endl;
  #endif
  org::bcom::xpcf::uuids::uuid id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(request->id());
  SRef<SolAR::datastructure::StorageWorldLink> worldLink = xpcf::deserialize<SRef<SolAR::datastructure::StorageWorldLink>>(request->worldlink());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->modifyWorldLink(id, worldLink);
  response->set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::modifyWorldLink response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::saveToFileRequest* request, ::grpcIWorldGraphManager::saveToFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::saveToFile request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::saveToFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::loadFromFileRequest* request, ::grpcIWorldGraphManager::loadFromFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::loadFromFile request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::loadFromFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IWorldGraphManager_grpcServer::grpcIWorldGraphManagerServiceImpl::deleteFile(::grpc::ServerContext* context, const ::grpcIWorldGraphManager::deleteFileRequest* request, ::grpcIWorldGraphManager::deleteFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "deleteFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::deleteFile request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->deleteFile();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcServer::deleteFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

