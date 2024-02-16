// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapManager {

IMapManager_grpcServer::IMapManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::service::IMapManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(9);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMapManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::init(::grpc::ServerContext* context, const ::grpcIMapManager::initRequest* request, ::grpcIMapManager::initResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::createMap(::grpc::ServerContext* context, const ::grpcIMapManager::createMapRequest* request, ::grpcIMapManager::createMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::createMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->createMap(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::createMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::deleteMap(::grpc::ServerContext* context, const ::grpcIMapManager::deleteMapRequest* request, ::grpcIMapManager::deleteMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "deleteMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::deleteMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->deleteMap(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::deleteMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::getAllMaps(::grpc::ServerContext* context, const ::grpcIMapManager::getAllMapsRequest* request, ::grpcIMapManager::getAllMapsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllMaps", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::getAllMaps request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<std::string> mapUUIDList = xpcf::deserialize<std::vector<std::string>>(request->mapuuidlist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllMaps(mapUUIDList);
  response->set_mapuuidlist(xpcf::serialize<std::vector<std::string>>(mapUUIDList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::getAllMaps response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::registerMapUpdateService(::grpc::ServerContext* context, const ::grpcIMapManager::registerMapUpdateServiceRequest* request, ::grpcIMapManager::registerMapUpdateServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "registerMapUpdateService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::registerMapUpdateService request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->registerMapUpdateService(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::registerMapUpdateService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::unregisterMapUpdateService(::grpc::ServerContext* context, const ::grpcIMapManager::unregisterMapUpdateServiceRequest* request, ::grpcIMapManager::unregisterMapUpdateServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unregisterMapUpdateService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::unregisterMapUpdateService request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unregisterMapUpdateService(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::unregisterMapUpdateService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::increaseMapClients(::grpc::ServerContext* context, const ::grpcIMapManager::increaseMapClientsRequest* request, ::grpcIMapManager::increaseMapClientsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "increaseMapClients", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::increaseMapClients request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->increaseMapClients(mapUUID, serviceURL);
  response->set_serviceurl(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::increaseMapClients response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::decreaseMapClients(::grpc::ServerContext* context, const ::grpcIMapManager::decreaseMapClientsRequest* request, ::grpcIMapManager::decreaseMapClientsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "decreaseMapClients", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::decreaseMapClients request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->decreaseMapClients(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcServer::decreaseMapClients response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

