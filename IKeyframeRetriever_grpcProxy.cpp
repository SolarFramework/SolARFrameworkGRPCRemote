// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeyframeRetriever_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeyframeRetriever {

IKeyframeRetriever_grpcProxy::IKeyframeRetriever_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeyframeRetriever_grpcProxy>())
{
  declareInterface<SolAR::api::reloc::IKeyframeRetriever>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(12);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IKeyframeRetriever_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframeRetriever_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeyframeRetriever::grpcIKeyframeRetrieverService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::addKeyframeRequest reqIn;
  ::grpcIKeyframeRetriever::addKeyframeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::addKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::addKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","addKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::suppressKeyframe(uint32_t keyframe_id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::suppressKeyframeRequest reqIn;
  ::grpcIKeyframeRetriever::suppressKeyframeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "suppressKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe_id(keyframe_id);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::suppressKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::suppressKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","suppressKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::retrieve(SRef<SolAR::datastructure::Frame> const frame, std::vector<uint32_t>& retKeyframes_id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::retrieve_grpc0Request reqIn;
  ::grpcIKeyframeRetriever::retrieve_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "retrieve", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_retkeyframes_id(xpcf::serialize<std::vector<uint32_t>>(retKeyframes_id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::retrieve request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->retrieve_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::retrieve response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "retrieve_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","retrieve_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  retKeyframes_id = xpcf::deserialize<std::vector<uint32_t>>(respOut.retkeyframes_id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::retrieve(SRef<SolAR::datastructure::Frame> const frame, std::set<unsigned int> const& canKeyframes_id, std::vector<uint32_t>& retKeyframes_id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::retrieve_grpc1Request reqIn;
  ::grpcIKeyframeRetriever::retrieve_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "retrieve", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_cankeyframes_id(xpcf::serialize<std::set<unsigned int>>(canKeyframes_id));
  reqIn.set_retkeyframes_id(xpcf::serialize<std::vector<uint32_t>>(retKeyframes_id));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::retrieve request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->retrieve_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::retrieve response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "retrieve_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","retrieve_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  retKeyframes_id = xpcf::deserialize<std::vector<uint32_t>>(respOut.retkeyframes_id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::saveToFileRequest reqIn;
  ::grpcIKeyframeRetriever::saveToFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_file(file);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::saveToFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::saveToFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::loadFromFileRequest reqIn;
  ::grpcIKeyframeRetriever::loadFromFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_file(file);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::loadFromFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::loadFromFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::match(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Keyframe> const keyframe, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::match_grpc0Request reqIn;
  ::grpcIKeyframeRetriever::match_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::match request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::match response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","match_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::match(std::vector<int> const& indexDescriptors, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors, SRef<SolAR::datastructure::Keyframe> const keyframe, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::match_grpc1Request reqIn;
  ::grpcIKeyframeRetriever::match_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_indexdescriptors(xpcf::serialize<std::vector<int>>(indexDescriptors));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::match request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::match response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","match_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SRef<SolAR::datastructure::KeyframeRetrieval> const&  IKeyframeRetriever_grpcProxy::getConstKeyframeRetrieval() const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::getConstKeyframeRetrievalRequest reqIn;
  ::grpcIKeyframeRetriever::getConstKeyframeRetrievalResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getConstKeyframeRetrieval", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::getConstKeyframeRetrieval request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getConstKeyframeRetrieval(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::getConstKeyframeRetrieval response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getConstKeyframeRetrieval rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","getConstKeyframeRetrieval",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getConstKeyframeRetrieval = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(respOut.xpcfgrpcreturnvalue());
  return m_getConstKeyframeRetrieval;
}


std::unique_lock<std::mutex>  IKeyframeRetriever_grpcProxy::getKeyframeRetrieval(SRef<SolAR::datastructure::KeyframeRetrieval>& keyframeRetrieval)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::getKeyframeRetrievalRequest reqIn;
  ::grpcIKeyframeRetriever::getKeyframeRetrievalResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getKeyframeRetrieval", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframeretrieval(xpcf::serialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(keyframeRetrieval));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::getKeyframeRetrieval request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframeRetrieval(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::getKeyframeRetrieval response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframeRetrieval rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","getKeyframeRetrieval",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframeRetrieval = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(respOut.keyframeretrieval());
  return xpcf::deserialize<std::unique_lock<std::mutex>>(respOut.xpcfgrpcreturnvalue());
}


void  IKeyframeRetriever_grpcProxy::setKeyframeRetrieval(SRef<SolAR::datastructure::KeyframeRetrieval> const keyframeRetrieval)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::setKeyframeRetrievalRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_keyframeretrieval(xpcf::serialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(keyframeRetrieval));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::setKeyframeRetrieval request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setKeyframeRetrieval(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcProxy::setKeyframeRetrieval response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setKeyframeRetrieval rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","setKeyframeRetrieval",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

