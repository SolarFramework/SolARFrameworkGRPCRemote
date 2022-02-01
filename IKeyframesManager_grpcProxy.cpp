// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeyframesManager_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeyframesManager {

IKeyframesManager_grpcProxy::IKeyframesManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeyframesManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::IKeyframesManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(16);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IKeyframesManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframesManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeyframesManager::grpcIKeyframesManagerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::addKeyframe_grpc0Request reqIn;
  ::grpcIKeyframesManager::addKeyframe_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::addKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::addKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","addKeyframe_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::addKeyframe(SolAR::datastructure::Keyframe const& keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::addKeyframe_grpc1Request reqIn;
  ::grpcIKeyframesManager::addKeyframe_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe(xpcf::serialize<SolAR::datastructure::Keyframe>(keyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::addKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::addKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","addKeyframe_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::getKeyframe(uint32_t const id, SRef<SolAR::datastructure::Keyframe>& keyframe) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getKeyframeRequest reqIn;
  ::grpcIKeyframesManager::getKeyframeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_id(id);
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(respOut.keyframe());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::getKeyframes(std::vector<uint32_t> const& ids, std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getKeyframesRequest reqIn;
  ::grpcIKeyframesManager::getKeyframesResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getKeyframes", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_ids(xpcf::serialize<std::vector<uint32_t>>(ids));
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getKeyframes request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframes(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getKeyframes response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframes rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getKeyframes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(respOut.keyframes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::getAllKeyframes(std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getAllKeyframesRequest reqIn;
  ::grpcIKeyframesManager::getAllKeyframesResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllKeyframes", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getAllKeyframes request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllKeyframes(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getAllKeyframes response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllKeyframes rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getAllKeyframes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(respOut.keyframes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::suppressKeyframe(uint32_t const id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::suppressKeyframeRequest reqIn;
  ::grpcIKeyframesManager::suppressKeyframeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "suppressKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_id(id);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::suppressKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::suppressKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","suppressKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::DescriptorType  IKeyframesManager_grpcProxy::getDescriptorType() const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getDescriptorTypeRequest reqIn;
  ::grpcIKeyframesManager::getDescriptorTypeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDescriptorType", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getDescriptorType request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDescriptorType(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getDescriptorType response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDescriptorType rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getDescriptorType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::datastructure::DescriptorType>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::setDescriptorType(SolAR::datastructure::DescriptorType const& type)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::setDescriptorTypeRequest reqIn;
  ::grpcIKeyframesManager::setDescriptorTypeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setDescriptorType", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_type(static_cast<int32_t>(type));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::setDescriptorType request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDescriptorType(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::setDescriptorType response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDescriptorType rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","setDescriptorType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


bool  IKeyframesManager_grpcProxy::isExistKeyframe(uint32_t const id) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::isExistKeyframeRequest reqIn;
  ::grpcIKeyframesManager::isExistKeyframeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "isExistKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_id(id);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::isExistKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isExistKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::isExistKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isExistKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","isExistKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


int  IKeyframesManager_grpcProxy::getNbKeyframes() const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getNbKeyframesRequest reqIn;
  ::grpcIKeyframesManager::getNbKeyframesResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getNbKeyframes", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getNbKeyframes request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNbKeyframes(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getNbKeyframes response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNbKeyframes rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getNbKeyframes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::saveToFileRequest reqIn;
  ::grpcIKeyframesManager::saveToFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_file(file);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::saveToFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::saveToFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::loadFromFileRequest reqIn;
  ::grpcIKeyframesManager::loadFromFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_file(file);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::loadFromFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::loadFromFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SRef<SolAR::datastructure::KeyframeCollection> const&  IKeyframesManager_grpcProxy::getConstKeyframeCollection() const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getConstKeyframeCollectionRequest reqIn;
  ::grpcIKeyframesManager::getConstKeyframeCollectionResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getConstKeyframeCollection", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getConstKeyframeCollection request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getConstKeyframeCollection(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getConstKeyframeCollection response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getConstKeyframeCollection rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getConstKeyframeCollection",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getConstKeyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(respOut.xpcfgrpcreturnvalue());
  return m_getConstKeyframeCollection;
}


std::unique_lock<std::mutex>  IKeyframesManager_grpcProxy::getKeyframeCollection(SRef<SolAR::datastructure::KeyframeCollection>& keyframeCollection)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getKeyframeCollectionRequest reqIn;
  ::grpcIKeyframesManager::getKeyframeCollectionResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getKeyframeCollection", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getKeyframeCollection request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframeCollection(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::getKeyframeCollection response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframeCollection rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getKeyframeCollection",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(respOut.keyframecollection());
  return xpcf::deserialize<std::unique_lock<std::mutex>>(respOut.xpcfgrpcreturnvalue());
}


void  IKeyframesManager_grpcProxy::setKeyframeCollection(SRef<SolAR::datastructure::KeyframeCollection> const keyframeCollection)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::setKeyframeCollectionRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::setKeyframeCollection request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setKeyframeCollection(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcProxy::setKeyframeCollection response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setKeyframeCollection rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","setKeyframeCollection",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

