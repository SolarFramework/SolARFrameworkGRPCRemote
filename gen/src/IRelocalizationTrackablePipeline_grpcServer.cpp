// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRelocalizationTrackablePipeline_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRelocalizationTrackablePipeline::IRelocalizationTrackablePipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRelocalizationTrackablePipeline::IRelocalizationTrackablePipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRelocalizationTrackablePipeline {

IRelocalizationTrackablePipeline_grpcServer::IRelocalizationTrackablePipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRelocalizationTrackablePipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IRelocalizationTrackablePipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(15);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IRelocalizationTrackablePipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRelocalizationTrackablePipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRelocalizationTrackablePipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::init_grpc0(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc0Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::start_grpc0(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::start_grpc0Request* request, ::grpcIRelocalizationTrackablePipeline::start_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::stop_grpc0(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::stop_grpc0Request* request, ::grpcIRelocalizationTrackablePipeline::stop_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::init_grpc1(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc1Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::init_grpc2(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc2Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc2Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::string mapupdateServiceURL = request->mapupdateserviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID, mapupdateServiceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::start_grpc1(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::start_grpc1Request* request, ::grpcIRelocalizationTrackablePipeline::start_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::stop_grpc1(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::stop_grpc1Request* request, ::grpcIRelocalizationTrackablePipeline::stop_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::setCameraParametersRequest* request, ::grpcIRelocalizationTrackablePipeline::setCameraParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(clientUUID, cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::getCameraParametersRequest* request, ::grpcIRelocalizationTrackablePipeline::getCameraParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::getCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(clientUUID, cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::getCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::relocalizeProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc0Request* request, ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::datastructure::Transform3Df poseCoarse = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->posecoarse());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(clientUUID, image, pose, confidence, poseCoarse);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::relocalizeProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc1Request* request, ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> currPointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->currpointcloud());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::datastructure::Transform3Df poseCoarse = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->posecoarse());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(clientUUID, image, currPointCloud, pose, confidence, poseCoarse);
  response->set_currpointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(currPointCloud));
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::relocalizeProcessRequest_grpc2(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc2Request* request, ::grpcIRelocalizationTrackablePipeline::relocalizeProcessRequest_grpc2Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  std::vector<SolAR::datastructure::DetectedObject> detectedObjects = xpcf::deserialize<std::vector<SolAR::datastructure::DetectedObject>>(request->detectedobjects());
  SolAR::datastructure::Transform3Df poseCoarse = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->posecoarse());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(clientUUID, image, pose, confidence, detectedObjects, poseCoarse);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_detectedobjects(xpcf::serialize<std::vector<SolAR::datastructure::DetectedObject>>(detectedObjects));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::getMapRequest(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::getMapRequestRequest* request, ::grpcIRelocalizationTrackablePipeline::getMapRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::getMapRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapRequest(clientUUID, map);
  response->set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::getMapRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationTrackablePipeline_grpcServer::grpcIRelocalizationTrackablePipelineServiceImpl::init_grpc3(::grpc::ServerContext* context, const ::grpcIRelocalizationTrackablePipeline::init_grpc3Request* request, ::grpcIRelocalizationTrackablePipeline::init_grpc3Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::vector<SRef<SolAR::datastructure::Trackable>> trackableObjects = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(request->trackableobjects());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID, trackableObjects);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRelocalizationTrackablePipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

