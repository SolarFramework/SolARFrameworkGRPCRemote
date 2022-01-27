// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeyframesManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeyframesManager {

IKeyframesManager_grpcServer::IKeyframesManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeyframesManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::IKeyframesManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(16);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IKeyframesManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframesManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeyframesManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::addKeyframe_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframesManager::addKeyframe_grpc0Request* request, ::grpcIKeyframesManager::addKeyframe_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::addKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::addKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::addKeyframe_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframesManager::addKeyframe_grpc1Request* request, ::grpcIKeyframesManager::addKeyframe_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::addKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Keyframe keyframe = xpcf::deserialize<SolAR::datastructure::Keyframe>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::addKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframeRequest* request, ::grpcIKeyframesManager::getKeyframeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t id = request->id();
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getKeyframe(id, keyframe);
  response->set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframesRequest* request, ::grpcIKeyframesManager::getKeyframesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getKeyframes", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getKeyframes request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<uint32_t> ids = xpcf::deserialize<std::vector<uint32_t>>(request->ids());
  std::vector<SRef<SolAR::datastructure::Keyframe>> keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(request->keyframes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getKeyframes(ids, keyframes);
  response->set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getKeyframes response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getAllKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getAllKeyframesRequest* request, ::grpcIKeyframesManager::getAllKeyframesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllKeyframes", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getAllKeyframes request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Keyframe>> keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(request->keyframes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllKeyframes(keyframes);
  response->set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getAllKeyframes response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::suppressKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::suppressKeyframeRequest* request, ::grpcIKeyframesManager::suppressKeyframeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "suppressKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::suppressKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t id = request->id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressKeyframe(id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::suppressKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getDescriptorType(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getDescriptorTypeRequest* request, ::grpcIKeyframesManager::getDescriptorTypeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDescriptorType", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getDescriptorType request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::DescriptorType returnValue = m_xpcfComponent->getDescriptorType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getDescriptorType response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::setDescriptorType(::grpc::ServerContext* context, const ::grpcIKeyframesManager::setDescriptorTypeRequest* request, ::grpcIKeyframesManager::setDescriptorTypeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setDescriptorType", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::setDescriptorType request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::DescriptorType type = static_cast<SolAR::datastructure::DescriptorType>(request->type());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDescriptorType(type);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::setDescriptorType response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::isExistKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::isExistKeyframeRequest* request, ::grpcIKeyframesManager::isExistKeyframeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isExistKeyframe", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::isExistKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t id = request->id();
  bool returnValue = m_xpcfComponent->isExistKeyframe(id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::isExistKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getNbKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getNbKeyframesRequest* request, ::grpcIKeyframesManager::getNbKeyframesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNbKeyframes", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getNbKeyframes request received at " << to_simple_string(start) << std::endl;
  #endif
  int returnValue = m_xpcfComponent->getNbKeyframes();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getNbKeyframes response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcIKeyframesManager::saveToFileRequest* request, ::grpcIKeyframesManager::saveToFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::saveToFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::saveToFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcIKeyframesManager::loadFromFileRequest* request, ::grpcIKeyframesManager::loadFromFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::loadFromFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::loadFromFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getConstKeyframeCollection(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getConstKeyframeCollectionRequest* request, ::grpcIKeyframesManager::getConstKeyframeCollectionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getConstKeyframeCollection", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getConstKeyframeCollection request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::KeyframeCollection> returnValue = m_xpcfComponent->getConstKeyframeCollection();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getConstKeyframeCollection response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getKeyframeCollection(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframeCollectionRequest* request, ::grpcIKeyframesManager::getKeyframeCollectionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getKeyframeCollection", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getKeyframeCollection request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(request->keyframecollection());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getKeyframeCollection(keyframeCollection);
  response->set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<std::unique_lock<std::mutex>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::getKeyframeCollection response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::setKeyframeCollection(::grpc::ServerContext* context, const ::grpcIKeyframesManager::setKeyframeCollectionRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::setKeyframeCollection request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(request->keyframecollection());
  m_xpcfComponent->setKeyframeCollection(keyframeCollection);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeyframesManager_grpcServer::setKeyframeCollection response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

