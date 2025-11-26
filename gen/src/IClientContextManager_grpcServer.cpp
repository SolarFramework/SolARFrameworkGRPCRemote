// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IClientContextManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIClientContextManager::IClientContextManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIClientContextManager::IClientContextManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIClientContextManager {

IClientContextManager_grpcServer::IClientContextManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IClientContextManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::service::IClientContextManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(24);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IClientContextManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IClientContextManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IClientContextManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::registerClient(::grpc::ServerContext* context, const ::grpcIClientContextManager::registerClientRequest* request, ::grpcIClientContextManager::registerClientResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "registerClient", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::registerClient request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::service::DeviceInfo deviceInfo = xpcf::deserialize<SolAR::api::service::DeviceInfo>(request->deviceinfo());
  std::string worldElementUUID = request->worldelementuuid();
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->registerClient(deviceInfo, worldElementUUID, clientUUID);
  response->set_clientuuid(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::registerClient response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::unregisterClient(::grpc::ServerContext* context, const ::grpcIClientContextManager::unregisterClientRequest* request, ::grpcIClientContextManager::unregisterClientResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unregisterClient", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::unregisterClient request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unregisterClient(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::unregisterClient response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getAllClientsUUID(::grpc::ServerContext* context, const ::grpcIClientContextManager::getAllClientsUUIDRequest* request, ::grpcIClientContextManager::getAllClientsUUIDResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllClientsUUID", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getAllClientsUUID request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<std::string> clientUUIDList = xpcf::deserialize<std::vector<std::string>>(request->clientuuidlist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllClientsUUID(clientUUIDList);
  response->set_clientuuidlist(xpcf::serialize<std::vector<std::string>>(clientUUIDList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getAllClientsUUID response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getDeviceInfo(::grpc::ServerContext* context, const ::grpcIClientContextManager::getDeviceInfoRequest* request, ::grpcIClientContextManager::getDeviceInfoResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDeviceInfo", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getDeviceInfo request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::DeviceInfo deviceInfo = xpcf::deserialize<SolAR::api::service::DeviceInfo>(request->deviceinfo());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getDeviceInfo(clientUUID, deviceInfo);
  response->set_deviceinfo(xpcf::serialize<SolAR::api::service::DeviceInfo>(deviceInfo));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getDeviceInfo response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::init_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::init_grpc0Request* request, ::grpcIClientContextManager::init_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::init_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::init_grpc1Request* request, ::grpcIClientContextManager::init_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::PipelineMode pipelineMode = static_cast<SolAR::api::service::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID, pipelineMode);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::start(::grpc::ServerContext* context, const ::grpcIClientContextManager::startRequest* request, ::grpcIClientContextManager::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIClientContextManager::stopRequest* request, ::grpcIClientContextManager::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getProcessingMode(::grpc::ServerContext* context, const ::grpcIClientContextManager::getProcessingModeRequest* request, ::grpcIClientContextManager::getProcessingModeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getProcessingMode", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getProcessingMode request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::PipelineMode pipelineMode = static_cast<SolAR::api::service::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getProcessingMode(clientUUID, pipelineMode);
  response->set_pipelinemode(static_cast<int32_t>(pipelineMode));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getProcessingMode response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::setCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::setCameraParameters_grpc0Request* request, ::grpcIClientContextManager::setCameraParameters_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(clientUUID, cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::setCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::setCameraParameters_grpc1Request* request, ::grpcIClientContextManager::setCameraParameters_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams1());
  SolAR::datastructure::CameraParameters cameraParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(clientUUID, cameraParams1, cameraParams2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::setRectificationParameters(::grpc::ServerContext* context, const ::grpcIClientContextManager::setRectificationParametersRequest* request, ::grpcIClientContextManager::setRectificationParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setRectificationParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::setRectificationParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::RectificationParameters rectCam1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam1());
  SolAR::datastructure::RectificationParameters rectCam2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setRectificationParameters(clientUUID, rectCam1, rectCam2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::setRectificationParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::grpcIClientContextManager::getCameraParametersRequest* request, ::grpcIClientContextManager::getCameraParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(clientUUID, cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::relocalizeProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::relocalizeProcessRequest_grpc0Request* request, ::grpcIClientContextManager::relocalizeProcessRequest_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  bool fixedPose = request->fixedpose();
  SolAR::datastructure::Transform3Df worldTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->worldtransform());
  std::chrono::system_clock::time_point timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(request->timestamp());
  SolAR::api::service::TransformStatus transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::api::pipeline::MappingStatus mappingStatus = static_cast<SolAR::api::pipeline::MappingStatus>(request->mappingstatus());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(clientUUID, images, poses, fixedPose, worldTransform, timestamp, transform3DStatus, transform3D, confidence, mappingStatus);
  response->set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_mappingstatus(static_cast<int32_t>(mappingStatus));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::relocalizeProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::relocalizeProcessRequest_grpc1Request* request, ::grpcIClientContextManager::relocalizeProcessRequest_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  bool fixedPose = request->fixedpose();
  SolAR::datastructure::Transform3Df worldTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->worldtransform());
  std::chrono::system_clock::time_point timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(request->timestamp());
  SolAR::api::service::TransformStatus transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::api::pipeline::MappingStatus mappingStatus = static_cast<SolAR::api::pipeline::MappingStatus>(request->mappingstatus());
  std::vector<SolAR::datastructure::DetectedObject> detectedObjects = xpcf::deserialize<std::vector<SolAR::datastructure::DetectedObject>>(request->detectedobjects());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(clientUUID, images, poses, fixedPose, worldTransform, timestamp, transform3DStatus, transform3D, confidence, mappingStatus, detectedObjects);
  response->set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_mappingstatus(static_cast<int32_t>(mappingStatus));
  response->set_detectedobjects(xpcf::serialize<std::vector<SolAR::datastructure::DetectedObject>>(detectedObjects));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::get3DTransformRequest(::grpc::ServerContext* context, const ::grpcIClientContextManager::get3DTransformRequestRequest* request, ::grpcIClientContextManager::get3DTransformRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "get3DTransformRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::get3DTransformRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::TransformStatus transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->get3DTransformRequest(clientUUID, transform3DStatus, transform3D, confidence);
  response->set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::get3DTransformRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getMappingDataRequest(::grpc::ServerContext* context, const ::grpcIClientContextManager::getMappingDataRequestRequest* request, ::grpcIClientContextManager::getMappingDataRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMappingDataRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getMappingDataRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::vector<SRef<SolAR::datastructure::CloudPoint>> outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->outputpointclouds());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMappingDataRequest(clientUUID, outputPointClouds, keyframePoses);
  response->set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getMappingDataRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getLastPose(::grpc::ServerContext* context, const ::grpcIClientContextManager::getLastPoseRequest* request, ::grpcIClientContextManager::getLastPoseResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getLastPose", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getLastPose request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::api::service::PoseType poseType = static_cast<SolAR::api::service::PoseType>(request->posetype());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getLastPose(clientUUID, pose, poseType);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getLastPose response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getClientMapUUID(::grpc::ServerContext* context, const ::grpcIClientContextManager::getClientMapUUIDRequest* request, ::grpcIClientContextManager::getClientMapUUIDResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getClientMapUUID", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getClientMapUUID request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getClientMapUUID(clientUUID, mapUUID);
  response->set_mapuuid(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getClientMapUUID response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::imageSegmentationProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc0Request* request, ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "imageSegmentationProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::imageSegmentationProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->imageSegmentationProcessRequest(clientUUID, image);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::imageSegmentationProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::imageSegmentationProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc1Request* request, ::grpcIClientContextManager::imageSegmentationProcessRequest_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "imageSegmentationProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::imageSegmentationProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  bool temporalConsistency = request->temporalconsistency();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->imageSegmentationProcessRequest(clientUUID, images, temporalConsistency);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::imageSegmentationProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getImageSegmentationProcessStatus(::grpc::ServerContext* context, const ::grpcIClientContextManager::getImageSegmentationProcessStatusRequest* request, ::grpcIClientContextManager::getImageSegmentationProcessStatusResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getImageSegmentationProcessStatus", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getImageSegmentationProcessStatus request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::api::pipeline::IImageSegmentationPipeline::Status status = static_cast<SolAR::api::pipeline::IImageSegmentationPipeline::Status>(request->status());
  float progress = request->progress();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getImageSegmentationProcessStatus(clientUUID, status, progress);
  response->set_status(static_cast<int32_t>(status));
  response->set_progress(progress);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getImageSegmentationProcessStatus response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IClientContextManager_grpcServer::grpcIClientContextManagerServiceImpl::getImageSegmentationProcessOutputMasks(::grpc::ServerContext* context, const ::grpcIClientContextManager::getImageSegmentationProcessOutputMasksRequest* request, ::grpcIClientContextManager::getImageSegmentationProcessOutputMasksResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getImageSegmentationProcessOutputMasks", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getImageSegmentationProcessOutputMasks request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SRef<SolAR::datastructure::Mask2DCollection> mask = xpcf::deserialize<SRef<SolAR::datastructure::Mask2DCollection>>(request->mask());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getImageSegmentationProcessOutputMasks(clientUUID, mask);
  response->set_mask(xpcf::serialize<SRef<SolAR::datastructure::Mask2DCollection>>(mask));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcServer::getImageSegmentationProcessOutputMasks response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

