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
  m_grpcServerCompressionConfig.resize(21);
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
  std::string uuid = request->uuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->registerClient(uuid);
  response->set_uuid(uuid);
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
  std::string uuid = request->uuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unregisterClient(uuid);
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
  std::vector<std::string> uuidList = xpcf::deserialize<std::vector<std::string>>(request->uuidlist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllClientsUUID(uuidList);
  response->set_uuidlist(xpcf::serialize<std::vector<std::string>>(uuidList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getAllClientsUUID response sent at " << to_simple_string(end) << std::endl;
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
  std::string uuid = request->uuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(uuid);
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
  std::string uuid = request->uuid();
  SolAR::api::service::PipelineMode pipelineMode = xpcf::deserialize<SolAR::api::service::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(uuid, pipelineMode);
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
  std::string uuid = request->uuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start(uuid);
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
  std::string uuid = request->uuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop(uuid);
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
  std::string uuid = request->uuid();
  SolAR::api::service::PipelineMode pipelineMode = xpcf::deserialize<SolAR::api::service::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getProcessingMode(uuid, pipelineMode);
  response->set_pipelinemode(xpcf::serialize<SolAR::api::service::PipelineMode>(pipelineMode));
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
  std::string uuid = request->uuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(uuid, cameraParams);
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
  std::string uuid = request->uuid();
  SolAR::datastructure::CameraParameters cameraParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams1());
  SolAR::datastructure::CameraParameters cameraParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(uuid, cameraParams1, cameraParams2);
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
  std::string uuid = request->uuid();
  SolAR::datastructure::RectificationParameters rectCam1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam1());
  SolAR::datastructure::RectificationParameters rectCam2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setRectificationParameters(uuid, rectCam1, rectCam2);
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
  std::string uuid = request->uuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(uuid, cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::relocalizeProcessRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::relocalizeProcessRequestRequest* request, ::grpcIFrontEnd::relocalizeProcessRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string uuid = request->uuid();
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  bool fixedPose = request->fixedpose();
  SolAR::datastructure::Transform3Df worldTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->worldtransform());
  std::chrono::system_clock::time_point timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(request->timestamp());
  SolAR::api::service::TransformStatus transform3DStatus = xpcf::deserialize<SolAR::api::service::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::api::pipeline::MappingStatus mappingStatus = xpcf::deserialize<SolAR::api::pipeline::MappingStatus>(request->mappingstatus());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(uuid, images, poses, fixedPose, worldTransform, timestamp, transform3DStatus, transform3D, confidence, mappingStatus);
  response->set_transform3dstatus(xpcf::serialize<SolAR::api::service::TransformStatus>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_mappingstatus(xpcf::serialize<SolAR::api::pipeline::MappingStatus>(mappingStatus));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::get3DTransformRequest(::grpc::ServerContext* context, const ::grpcIFrontEnd::get3DTransformRequestRequest* request, ::grpcIFrontEnd::get3DTransformRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "get3DTransformRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::get3DTransformRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string uuid = request->uuid();
  SolAR::api::service::TransformStatus transform3DStatus = xpcf::deserialize<SolAR::api::service::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->get3DTransformRequest(uuid, transform3DStatus, transform3D, confidence);
  response->set_transform3dstatus(xpcf::serialize<SolAR::api::service::TransformStatus>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::get3DTransformRequest response sent at " << to_simple_string(end) << std::endl;
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
  std::string uuid = request->uuid();
  std::vector<SRef<SolAR::datastructure::CloudPoint>> outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->outputpointclouds());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMappingDataRequest(uuid, outputPointClouds, keyframePoses);
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


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::getLastPose(::grpc::ServerContext* context, const ::grpcIFrontEnd::getLastPoseRequest* request, ::grpcIFrontEnd::getLastPoseResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getLastPose", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getLastPose request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string uuid = request->uuid();
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::api::service::PoseType poseType = xpcf::deserialize<SolAR::api::service::PoseType>(request->posetype());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getLastPose(uuid, pose, poseType);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getLastPose response sent at " << to_simple_string(end) << std::endl;
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
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapRequest(map);
  response->set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
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
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMapRequest(map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::setMapRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFrontEnd_grpcServer::grpcIFrontEndServiceImpl::resetMap(::grpc::ServerContext* context, const ::grpcIFrontEnd::resetMapRequest* request, ::grpcIFrontEnd::resetMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "resetMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::resetMap request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->resetMap();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::resetMap response sent at " << to_simple_string(end) << std::endl;
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
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloudRequest(pointCloud);
  response->set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcServer::getPointCloudRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}
