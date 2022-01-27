// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeyframeRetriever_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeyframeRetriever::IKeyframeRetriever_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeyframeRetriever::IKeyframeRetriever_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeyframeRetriever {

IKeyframeRetriever_grpcServer::IKeyframeRetriever_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeyframeRetriever_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::reloc::IKeyframeRetriever>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(12);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IKeyframeRetriever_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframeRetriever_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeyframeRetriever_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::addKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::addKeyframeRequest* request, ::grpcIKeyframeRetriever::addKeyframeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::addKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::addKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::suppressKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::suppressKeyframeRequest* request, ::grpcIKeyframeRetriever::suppressKeyframeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "suppressKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::suppressKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t keyframe_id = request->keyframe_id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressKeyframe(keyframe_id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::suppressKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::retrieve_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::retrieve_grpc0Request* request, ::grpcIKeyframeRetriever::retrieve_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "retrieve", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::retrieve request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  std::vector<uint32_t> retKeyframes_id = xpcf::deserialize<std::vector<uint32_t>>(request->retkeyframes_id());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->retrieve(frame, retKeyframes_id);
  response->set_retkeyframes_id(xpcf::serialize<std::vector<uint32_t>>(retKeyframes_id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::retrieve response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::retrieve_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::retrieve_grpc1Request* request, ::grpcIKeyframeRetriever::retrieve_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "retrieve", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::retrieve request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  std::set<unsigned int> canKeyframes_id = xpcf::deserialize<std::set<unsigned int>>(request->cankeyframes_id());
  std::vector<uint32_t> retKeyframes_id = xpcf::deserialize<std::vector<uint32_t>>(request->retkeyframes_id());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->retrieve(frame, canKeyframes_id, retKeyframes_id);
  response->set_retkeyframes_id(xpcf::serialize<std::vector<uint32_t>>(retKeyframes_id));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::retrieve response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::saveToFileRequest* request, ::grpcIKeyframeRetriever::saveToFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::saveToFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::saveToFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::loadFromFileRequest* request, ::grpcIKeyframeRetriever::loadFromFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::loadFromFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::loadFromFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::match_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::match_grpc0Request* request, ::grpcIKeyframeRetriever::match_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::match request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(frame, keyframe, matches);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::match response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::match_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::match_grpc1Request* request, ::grpcIKeyframeRetriever::match_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::match request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<int> indexDescriptors = xpcf::deserialize<std::vector<int>>(request->indexdescriptors());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(indexDescriptors, descriptors, keyframe, matches);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::match response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::getConstKeyframeRetrieval(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::getConstKeyframeRetrievalRequest* request, ::grpcIKeyframeRetriever::getConstKeyframeRetrievalResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getConstKeyframeRetrieval", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::getConstKeyframeRetrieval request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::KeyframeRetrieval> returnValue = m_xpcfComponent->getConstKeyframeRetrieval();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::getConstKeyframeRetrieval response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::getKeyframeRetrieval(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::getKeyframeRetrievalRequest* request, ::grpcIKeyframeRetriever::getKeyframeRetrievalResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getKeyframeRetrieval", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::getKeyframeRetrieval request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::KeyframeRetrieval> keyframeRetrieval = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(request->keyframeretrieval());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getKeyframeRetrieval(keyframeRetrieval);
  response->set_keyframeretrieval(xpcf::serialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(keyframeRetrieval));
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<std::unique_lock<std::mutex>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::getKeyframeRetrieval response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframeRetriever_grpcServer::grpcIKeyframeRetrieverServiceImpl::setKeyframeRetrieval(::grpc::ServerContext* context, const ::grpcIKeyframeRetriever::setKeyframeRetrievalRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::setKeyframeRetrieval request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::KeyframeRetrieval> keyframeRetrieval = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(request->keyframeretrieval());
  m_xpcfComponent->setKeyframeRetrieval(keyframeRetrieval);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframeRetriever_grpcServer::setKeyframeRetrieval response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

