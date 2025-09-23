// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IFrontEnd_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIFrontEnd::IFrontEnd_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIFrontEnd::IFrontEnd_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIFrontEnd {

IFrontEnd_grpcServer::IFrontEnd_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IFrontEnd_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::service::IFrontEnd>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(29);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IFrontEnd_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IFrontEnd_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IFrontEnd_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::registerClient(::grpc::ServerContext* context, const ::grpcIFrontEnd::registerClientRequest* request, ::grpcIFrontEnd::registerClientResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "registerClient", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::registerClient request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  SolAR::api::service::DeviceInfo deviceInfo = xpcf::deserialize<SolAR::api::service::DeviceInfo>(request->deviceinfo());
  std::string worldElementUUID = request->worldelementuuid();
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->registerClient(accessToken, deviceInfo, worldElementUUID, clientUUID);
  response->set_clientuuid(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::registerClient response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::unregisterClient(::grpc::ServerContext* context, const ::grpcIFrontEnd::unregisterClientRequest* request, ::grpcIFrontEnd::unregisterClientResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unregisterClient", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::unregisterClient request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unregisterClient(accessToken, clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::unregisterClient response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getAllClientsUUID(::grpc::ServerContext* context, const ::grpcIFrontEnd::getAllClientsUUIDRequest* request, ::grpcIFrontEnd::getAllClientsUUIDResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllClientsUUID", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getAllClientsUUID request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::vector<std::string> clientUUIDList = xpcf::deserialize<std::vector<std::string>>(request->clientuuidlist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllClientsUUID(accessToken, clientUUIDList);
  response->set_clientuuidlist(xpcf::serialize<std::vector<std::string>>(clientUUIDList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getAllClientsUUID response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getDeviceInfo(::grpc::ServerContext* context, const ::grpcIFrontEnd::getDeviceInfoRequest* request, ::grpcIFrontEnd::getDeviceInfoResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDeviceInfo", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getDeviceInfo request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::DeviceInfo deviceInfo = xpcf::deserialize<SolAR::api::service::DeviceInfo>(request->deviceinfo());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getDeviceInfo(accessToken, clientUUID, deviceInfo);
  response->set_deviceinfo(xpcf::serialize<SolAR::api::service::DeviceInfo>(deviceInfo));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getDeviceInfo response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::init_grpc0(::grpc::ServerContext* context, const ::grpcIFrontEnd::init_grpc0Request* request, ::grpcIFrontEnd::init_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(accessToken, clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::init_grpc1(::grpc::ServerContext* context, const ::grpcIFrontEnd::init_grpc1Request* request, ::grpcIFrontEnd::init_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::PipelineMode pipelineMode = static_cast<SolAR::api::service::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(accessToken, clientUUID, pipelineMode);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::start(::grpc::ServerContext* context, const ::grpcIFrontEnd::startRequest* request, ::grpcIFrontEnd::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start(accessToken, clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIFrontEnd::stopRequest* request, ::grpcIFrontEnd::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop(accessToken, clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getProcessingMode(::grpc::ServerContext* context, const ::grpcIFrontEnd::getProcessingModeRequest* request, ::grpcIFrontEnd::getProcessingModeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getProcessingMode", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getProcessingMode request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::PipelineMode pipelineMode = static_cast<SolAR::api::service::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getProcessingMode(accessToken, clientUUID, pipelineMode);
  response->set_pipelinemode(static_cast<int32_t>(pipelineMode));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getProcessingMode response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::setCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIFrontEnd::setCameraParameters_grpc0Request* request, ::grpcIFrontEnd::setCameraParameters_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(accessToken, clientUUID, cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::setCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIFrontEnd::setCameraParameters_grpc1Request* request, ::grpcIFrontEnd::setCameraParameters_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams1());
  SolAR::datastructure::CameraParameters cameraParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(accessToken, clientUUID, cameraParams1, cameraParams2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::setRectificationParameters(::grpc::ServerContext* context, const ::grpcIFrontEnd::setRectificationParametersRequest* request, ::grpcIFrontEnd::setRectificationParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setRectificationParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setRectificationParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::RectificationParameters rectCam1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam1());
  SolAR::datastructure::RectificationParameters rectCam2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setRectificationParameters(accessToken, clientUUID, rectCam1, rectCam2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setRectificationParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::grpcIFrontEnd::getCameraParametersRequest* request, ::grpcIFrontEnd::getCameraParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(accessToken, clientUUID, cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::imageProcessRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::imageProcessRequestRequest* request, ::grpcIFrontEnd::imageProcessRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "imageProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::imageProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
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
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->imageProcessRequest(accessToken, clientUUID, images, poses, fixedPose, worldTransform, timestamp, transform3DStatus, transform3D, confidence, mappingStatus, detectedObjects);
  response->set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_mappingstatus(static_cast<int32_t>(mappingStatus));
  response->set_detectedobjects(xpcf::serialize<std::vector<SolAR::datastructure::DetectedObject>>(detectedObjects));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::imageProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getMappingDataRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMappingDataRequestRequest* request, ::grpcIFrontEnd::getMappingDataRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMappingDataRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMappingDataRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  std::vector<SRef<SolAR::datastructure::CloudPoint>> outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->outputpointclouds());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMappingDataRequest(accessToken, clientUUID, outputPointClouds, keyframePoses);
  response->set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMappingDataRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getClientPose(::grpc::ServerContext* context, const ::grpcIFrontEnd::getClientPoseRequest* request, ::grpcIFrontEnd::getClientPoseResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getClientPose", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getClientPose request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  SolAR::api::service::TransformStatus transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::api::service::PoseType poseType = static_cast<SolAR::api::service::PoseType>(request->posetype());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getClientPose(accessToken, clientUUID, transform3DStatus, transform3D, confidence, pose, poseType);
  response->set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getClientPose response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::createMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::createMapRequest* request, ::grpcIFrontEnd::createMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::createMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->createMap(accessToken, mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::createMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::deleteMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::deleteMapRequest* request, ::grpcIFrontEnd::deleteMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "deleteMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::deleteMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->deleteMap(accessToken, mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::deleteMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getAllMapsUUID(::grpc::ServerContext* context, const ::grpcIFrontEnd::getAllMapsUUIDRequest* request, ::grpcIFrontEnd::getAllMapsUUIDResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllMapsUUID", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getAllMapsUUID request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::vector<std::string> mapUUIDList = xpcf::deserialize<std::vector<std::string>>(request->mapuuidlist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllMapsUUID(accessToken, mapUUIDList);
  response->set_mapuuidlist(xpcf::serialize<std::vector<std::string>>(mapUUIDList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getAllMapsUUID response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getClientMapUUID(::grpc::ServerContext* context, const ::grpcIFrontEnd::getClientMapUUIDRequest* request, ::grpcIFrontEnd::getClientMapUUIDResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getClientMapUUID", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getClientMapUUID request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string clientUUID = request->clientuuid();
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getClientMapUUID(accessToken, clientUUID, mapUUID);
  response->set_mapuuid(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getClientMapUUID response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getClientInfoForMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::getClientInfoForMapRequest* request, ::grpcIFrontEnd::getClientInfoForMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getClientInfoForMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getClientInfoForMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  std::vector<SolAR::api::service::ClientInfo> clientInfoList = xpcf::deserialize<std::vector<SolAR::api::service::ClientInfo>>(request->clientinfolist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getClientInfoForMap(accessToken, mapUUID, clientInfoList);
  response->set_clientinfolist(xpcf::serialize<std::vector<SolAR::api::service::ClientInfo>>(clientInfoList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getClientInfoForMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getMapRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapRequestRequest* request, ::grpcIFrontEnd::getMapRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  SRef<SolAR::datastructure::Map> mapDatastructure = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->mapdatastructure());
  SolAR::api::service::GetMapRequestOption keyframeImagesOption = static_cast<SolAR::api::service::GetMapRequestOption>(request->keyframeimagesoption());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapRequest(accessToken, mapUUID, mapDatastructure, keyframeImagesOption);
  response->set_mapdatastructure(xpcf::serialize<SRef<SolAR::datastructure::Map>>(mapDatastructure));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::setMapRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::setMapRequestRequest* request, ::grpcIFrontEnd::setMapRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setMapRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setMapRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  SRef<SolAR::datastructure::Map> mapDatastructure = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->mapdatastructure());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMapRequest(accessToken, mapUUID, mapDatastructure);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setMapRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getPointCloudRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::getPointCloudRequestRequest* request, ::grpcIFrontEnd::getPointCloudRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPointCloudRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getPointCloudRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloudRequest(accessToken, mapUUID, pointCloud);
  response->set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getPointCloudRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getMapInfo(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapInfoRequest* request, ::grpcIFrontEnd::getMapInfoResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapInfo", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapInfo request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  std::string version = request->version();
  SolAR::datastructure::GlobalDescriptorType globalDescriptorType = static_cast<SolAR::datastructure::GlobalDescriptorType>(request->globaldescriptortype());
  SolAR::datastructure::DescriptorType descriptorType = static_cast<SolAR::datastructure::DescriptorType>(request->descriptortype());
  uint32_t dataSize = request->datasize();
  bool areImageSaved = request->areimagesaved();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapInfo(accessToken, mapUUID, version, globalDescriptorType, descriptorType, dataSize, areImageSaved);
  response->set_version(version);
  response->set_globaldescriptortype(static_cast<int32_t>(globalDescriptorType));
  response->set_descriptortype(static_cast<int32_t>(descriptorType));
  response->set_datasize(dataSize);
  response->set_areimagesaved(areImageSaved);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapInfo response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::requestMapProcessing(::grpc::ServerContext* context, const ::grpcIFrontEnd::requestMapProcessingRequest* request, ::grpcIFrontEnd::requestMapProcessingResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "requestMapProcessing", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::requestMapProcessing request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string mapUUID = request->mapuuid();
  std::string resultMapUUID = request->resultmapuuid();
  SolAR::api::service::MapProcessingType processingType = static_cast<SolAR::api::service::MapProcessingType>(request->processingtype());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->requestMapProcessing(accessToken, mapUUID, resultMapUUID, processingType);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::requestMapProcessing response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getMapProcessingStatus(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapProcessingStatusRequest* request, ::grpcIFrontEnd::getMapProcessingStatusResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapProcessingStatus", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapProcessingStatus request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string resultMapUUID = request->resultmapuuid();
  SolAR::api::service::MapProcessingStatus status = static_cast<SolAR::api::service::MapProcessingStatus>(request->status());
  float progress = request->progress();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapProcessingStatus(accessToken, resultMapUUID, status, progress);
  response->set_status(static_cast<int32_t>(status));
  response->set_progress(progress);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapProcessingStatus response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getMapProcessingData(::grpc::ServerContext* context, const ::grpcIFrontEnd::getMapProcessingDataRequest* request, ::grpcIFrontEnd::getMapProcessingDataResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapProcessingData", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapProcessingData request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string accessToken = request->accesstoken();
  std::string resultMapUUID = request->resultmapuuid();
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pointcloud());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapProcessingData(accessToken, resultMapUUID, pointCloud, keyframePoses);
  response->set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getMapProcessingData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

