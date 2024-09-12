// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IWorldGraphManager_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIWorldGraphManager::IWorldGraphManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIWorldGraphManager::IWorldGraphManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIWorldGraphManager {

IWorldGraphManager_grpcProxy::IWorldGraphManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IWorldGraphManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::IWorldGraphManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(23);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IWorldGraphManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IWorldGraphManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIWorldGraphManager::grpcIWorldGraphManagerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getRelocalizationInformation(std::vector<std::tuple<org::bcom::xpcf::uuids::uuid,bool>> const& uuids, std::string const& token, std::vector<datastructure::StorageCapabilities> const& capability, std::vector<datastructure::RelocalizationInformation>& relocalizationInformation)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getRelocalizationInformationRequest reqIn;
  ::grpcIWorldGraphManager::getRelocalizationInformationResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getRelocalizationInformation", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_uuids(xpcf::serialize<std::vector<std::tuple<org::bcom::xpcf::uuids::uuid,bool>>>(uuids));
  reqIn.set_token(token);
  reqIn.set_capability(xpcf::serialize<std::vector<datastructure::StorageCapabilities>>(capability));
  reqIn.set_relocalizationinformation(xpcf::serialize<std::vector<datastructure::RelocalizationInformation>>(relocalizationInformation));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getRelocalizationInformation request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getRelocalizationInformation(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getRelocalizationInformation response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getRelocalizationInformation rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getRelocalizationInformation",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  relocalizationInformation = xpcf::deserialize<std::vector<datastructure::RelocalizationInformation>>(respOut.relocalizationinformation());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldElement(org::bcom::xpcf::uuids::uuid const& worldElementId, SRef<datastructure::StorageWorldElement>& worldElement)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldElementRequest reqIn;
  ::grpcIWorldGraphManager::getWorldElementResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldElement", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldelementid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(worldElementId));
  reqIn.set_worldelement(xpcf::serialize<SRef<datastructure::StorageWorldElement>>(worldElement));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElement request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldElement(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElement response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldElement rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldElement",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldElement = xpcf::deserialize<SRef<datastructure::StorageWorldElement>>(respOut.worldelement());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldElements(std::vector<SRef<datastructure::StorageWorldElement>>& vector)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldElementsRequest reqIn;
  ::grpcIWorldGraphManager::getWorldElementsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldElements", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_vector(xpcf::serialize<std::vector<SRef<datastructure::StorageWorldElement>>>(vector));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElements request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldElements(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElements response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldElements rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldElements",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  vector = xpcf::deserialize<std::vector<SRef<datastructure::StorageWorldElement>>>(respOut.vector());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldElementByKeyValue(std::string const& key, std::string const& value, std::vector<SRef<datastructure::StorageWorldElement>>& vector)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldElementByKeyValueRequest reqIn;
  ::grpcIWorldGraphManager::getWorldElementByKeyValueResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldElementByKeyValue", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_key(key);
  reqIn.set_value(value);
  reqIn.set_vector(xpcf::serialize<std::vector<SRef<datastructure::StorageWorldElement>>>(vector));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElementByKeyValue request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldElementByKeyValue(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElementByKeyValue response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldElementByKeyValue rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldElementByKeyValue",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  vector = xpcf::deserialize<std::vector<SRef<datastructure::StorageWorldElement>>>(respOut.vector());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldElementByKey(std::string const& key, std::vector<SRef<datastructure::StorageWorldElement>>& vector)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldElementByKeyRequest reqIn;
  ::grpcIWorldGraphManager::getWorldElementByKeyResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldElementByKey", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_key(key);
  reqIn.set_vector(xpcf::serialize<std::vector<SRef<datastructure::StorageWorldElement>>>(vector));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElementByKey request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldElementByKey(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldElementByKey response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldElementByKey rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldElementByKey",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  vector = xpcf::deserialize<std::vector<SRef<datastructure::StorageWorldElement>>>(respOut.vector());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::addTrackable(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageTrackable> trackable)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::addTrackableRequest reqIn;
  ::grpcIWorldGraphManager::addTrackableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addTrackable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_trackable(xpcf::serialize<SRef<datastructure::StorageTrackable>>(trackable));
  reqIn.set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::addTrackable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addTrackable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::addTrackable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addTrackable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","addTrackable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(respOut.id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getTrackable(org::bcom::xpcf::uuids::uuid const& trackableId, SRef<datastructure::StorageTrackable>& trackable)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getTrackableRequest reqIn;
  ::grpcIWorldGraphManager::getTrackableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getTrackable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_trackableid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(trackableId));
  reqIn.set_trackable(xpcf::serialize<SRef<datastructure::StorageTrackable>>(trackable));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getTrackable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getTrackable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getTrackable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTrackable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getTrackable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  trackable = xpcf::deserialize<SRef<datastructure::StorageTrackable>>(respOut.trackable());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::removeTrackable(org::bcom::xpcf::uuids::uuid const& trackableId)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::removeTrackableRequest reqIn;
  ::grpcIWorldGraphManager::removeTrackableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeTrackable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_trackableid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(trackableId));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeTrackable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeTrackable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeTrackable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeTrackable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","removeTrackable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getTrackables(std::vector<SRef<datastructure::StorageTrackable>>& vector)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getTrackablesRequest reqIn;
  ::grpcIWorldGraphManager::getTrackablesResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getTrackables", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_vector(xpcf::serialize<std::vector<SRef<datastructure::StorageTrackable>>>(vector));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getTrackables request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getTrackables(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getTrackables response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTrackables rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getTrackables",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  vector = xpcf::deserialize<std::vector<SRef<datastructure::StorageTrackable>>>(respOut.vector());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::modifyTrackable(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageTrackable> trackable)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::modifyTrackableRequest reqIn;
  ::grpcIWorldGraphManager::modifyTrackableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "modifyTrackable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_trackable(xpcf::serialize<SRef<datastructure::StorageTrackable>>(trackable));
  reqIn.set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::modifyTrackable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->modifyTrackable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::modifyTrackable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "modifyTrackable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","modifyTrackable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(respOut.id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::addWorldAnchor(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldAnchor> worldAnchor)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::addWorldAnchorRequest reqIn;
  ::grpcIWorldGraphManager::addWorldAnchorResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addWorldAnchor", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldanchor(xpcf::serialize<SRef<datastructure::StorageWorldAnchor>>(worldAnchor));
  reqIn.set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::addWorldAnchor request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addWorldAnchor(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::addWorldAnchor response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addWorldAnchor rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","addWorldAnchor",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(respOut.id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldAnchor(org::bcom::xpcf::uuids::uuid const& worldAnchorId, SRef<datastructure::StorageWorldAnchor>& worldAnchor)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldAnchorRequest reqIn;
  ::grpcIWorldGraphManager::getWorldAnchorResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldAnchor", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldanchorid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(worldAnchorId));
  reqIn.set_worldanchor(xpcf::serialize<SRef<datastructure::StorageWorldAnchor>>(worldAnchor));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldAnchor request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldAnchor(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldAnchor response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldAnchor rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldAnchor",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldAnchor = xpcf::deserialize<SRef<datastructure::StorageWorldAnchor>>(respOut.worldanchor());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::removeWorldAnchor(org::bcom::xpcf::uuids::uuid const& worldAnchorId)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::removeWorldAnchorRequest reqIn;
  ::grpcIWorldGraphManager::removeWorldAnchorResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeWorldAnchor", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldanchorid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(worldAnchorId));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeWorldAnchor request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeWorldAnchor(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeWorldAnchor response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeWorldAnchor rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","removeWorldAnchor",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldAnchors(std::vector<SRef<datastructure::StorageWorldAnchor>>& vector)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldAnchorsRequest reqIn;
  ::grpcIWorldGraphManager::getWorldAnchorsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldAnchors", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_vector(xpcf::serialize<std::vector<SRef<datastructure::StorageWorldAnchor>>>(vector));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldAnchors request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldAnchors(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldAnchors response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldAnchors rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldAnchors",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  vector = xpcf::deserialize<std::vector<SRef<datastructure::StorageWorldAnchor>>>(respOut.vector());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::modifyWorldAnchor(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldAnchor> worldAnchor)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::modifyWorldAnchorRequest reqIn;
  ::grpcIWorldGraphManager::modifyWorldAnchorResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "modifyWorldAnchor", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldanchor(xpcf::serialize<SRef<datastructure::StorageWorldAnchor>>(worldAnchor));
  reqIn.set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::modifyWorldAnchor request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->modifyWorldAnchor(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::modifyWorldAnchor response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "modifyWorldAnchor rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","modifyWorldAnchor",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(respOut.id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::addWorldLink(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldLink> worldLink)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::addWorldLinkRequest reqIn;
  ::grpcIWorldGraphManager::addWorldLinkResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addWorldLink", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldlink(xpcf::serialize<SRef<datastructure::StorageWorldLink>>(worldLink));
  reqIn.set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::addWorldLink request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addWorldLink(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::addWorldLink response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addWorldLink rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","addWorldLink",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(respOut.id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldLink(org::bcom::xpcf::uuids::uuid const& parentId, org::bcom::xpcf::uuids::uuid const& childId, SRef<datastructure::StorageWorldLink>& worldLink)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldLink_grpc0Request reqIn;
  ::grpcIWorldGraphManager::getWorldLink_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldLink", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_parentid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(parentId));
  reqIn.set_childid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(childId));
  reqIn.set_worldlink(xpcf::serialize<SRef<datastructure::StorageWorldLink>>(worldLink));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldLink request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldLink_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldLink response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldLink_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldLink_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldLink = xpcf::deserialize<SRef<datastructure::StorageWorldLink>>(respOut.worldlink());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldLink(org::bcom::xpcf::uuids::uuid const& linkId, SRef<datastructure::StorageWorldLink>& worldLink)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldLink_grpc1Request reqIn;
  ::grpcIWorldGraphManager::getWorldLink_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldLink", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_linkid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(linkId));
  reqIn.set_worldlink(xpcf::serialize<SRef<datastructure::StorageWorldLink>>(worldLink));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldLink request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldLink_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldLink response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldLink_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldLink_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldLink = xpcf::deserialize<SRef<datastructure::StorageWorldLink>>(respOut.worldlink());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::removeWorldLink(org::bcom::xpcf::uuids::uuid const& parentId, org::bcom::xpcf::uuids::uuid const& childId)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::removeWorldLink_grpc0Request reqIn;
  ::grpcIWorldGraphManager::removeWorldLink_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeWorldLink", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_parentid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(parentId));
  reqIn.set_childid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(childId));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeWorldLink request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeWorldLink_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeWorldLink response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeWorldLink_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","removeWorldLink_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::removeWorldLink(org::bcom::xpcf::uuids::uuid const& linkId)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::removeWorldLink_grpc1Request reqIn;
  ::grpcIWorldGraphManager::removeWorldLink_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeWorldLink", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_linkid(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(linkId));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeWorldLink request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeWorldLink_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::removeWorldLink response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeWorldLink_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","removeWorldLink_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::getWorldLinks(std::vector<SRef<datastructure::StorageWorldLink>>& vector)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::getWorldLinksRequest reqIn;
  ::grpcIWorldGraphManager::getWorldLinksResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldLinks", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_vector(xpcf::serialize<std::vector<SRef<datastructure::StorageWorldLink>>>(vector));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldLinks request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldLinks(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::getWorldLinks response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldLinks rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","getWorldLinks",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  vector = xpcf::deserialize<std::vector<SRef<datastructure::StorageWorldLink>>>(respOut.vector());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IWorldGraphManager_grpcProxy::modifyWorldLink(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldLink> worldLink)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphManager::modifyWorldLinkRequest reqIn;
  ::grpcIWorldGraphManager::modifyWorldLinkResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "modifyWorldLink", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_worldlink(xpcf::serialize<SRef<datastructure::StorageWorldLink>>(worldLink));
  reqIn.set_id(xpcf::serialize<org::bcom::xpcf::uuids::uuid>(id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::modifyWorldLink request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->modifyWorldLink(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphManager_grpcProxy::modifyWorldLink response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "modifyWorldLink rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphManagerService","modifyWorldLink",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  id = xpcf::deserialize<org::bcom::xpcf::uuids::uuid>(respOut.id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

