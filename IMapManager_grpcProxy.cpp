// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapManager_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapManager {

IMapManager_grpcProxy::IMapManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapManager_grpcProxy>())
{
  declareInterface<SolAR::api::service::IMapManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(9);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMapManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMapManager::grpcIMapManagerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::initRequest reqIn;
  ::grpcIMapManager::initResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::createMap(std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::createMapRequest reqIn;
  ::grpcIMapManager::createMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::createMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->createMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::createMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "createMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","createMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::deleteMap(std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::deleteMapRequest reqIn;
  ::grpcIMapManager::deleteMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "deleteMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::deleteMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->deleteMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::deleteMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "deleteMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","deleteMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getAllMaps(std::vector<std::string>& mapUUIDList) const
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getAllMapsRequest reqIn;
  ::grpcIMapManager::getAllMapsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllMaps", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuidlist(xpcf::serialize<std::vector<std::string>>(mapUUIDList));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getAllMaps request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllMaps(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getAllMaps response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllMaps rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getAllMaps",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mapUUIDList = xpcf::deserialize<std::vector<std::string>>(respOut.mapuuidlist());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::registerMapUpdateService(std::string const& serviceURL)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::registerMapUpdateServiceRequest reqIn;
  ::grpcIMapManager::registerMapUpdateServiceResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "registerMapUpdateService", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_serviceurl(serviceURL);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::registerMapUpdateService request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->registerMapUpdateService(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::registerMapUpdateService response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "registerMapUpdateService rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","registerMapUpdateService",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::unregisterMapUpdateService(std::string const& serviceURL)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::unregisterMapUpdateServiceRequest reqIn;
  ::grpcIMapManager::unregisterMapUpdateServiceResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "unregisterMapUpdateService", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_serviceurl(serviceURL);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::unregisterMapUpdateService request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->unregisterMapUpdateService(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::unregisterMapUpdateService response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "unregisterMapUpdateService rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","unregisterMapUpdateService",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::increaseMapClients(std::string const& mapUUID, std::string& serviceURL)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::increaseMapClientsRequest reqIn;
  ::grpcIMapManager::increaseMapClientsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "increaseMapClients", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_serviceurl(serviceURL);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::increaseMapClients request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->increaseMapClients(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::increaseMapClients response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "increaseMapClients rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","increaseMapClients",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  serviceURL = respOut.serviceurl();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::decreaseMapClients(std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::decreaseMapClientsRequest reqIn;
  ::grpcIMapManager::decreaseMapClientsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "decreaseMapClients", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::decreaseMapClients request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->decreaseMapClients(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::decreaseMapClients response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "decreaseMapClients rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","decreaseMapClients",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

