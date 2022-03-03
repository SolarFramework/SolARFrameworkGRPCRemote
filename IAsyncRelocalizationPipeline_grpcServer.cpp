// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IAsyncRelocalizationPipeline_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline {

IAsyncRelocalizationPipeline_grpcServer::IAsyncRelocalizationPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IAsyncRelocalizationPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IAsyncRelocalizationPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(10);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IAsyncRelocalizationPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IAsyncRelocalizationPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IAsyncRelocalizationPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::init(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::initRequest* request, ::grpcIAsyncRelocalizationPipeline::initResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::startRequest* request, ::grpcIAsyncRelocalizationPipeline::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::stopRequest* request, ::grpcIAsyncRelocalizationPipeline::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::initProcessingMode(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::initProcessingModeRequest* request, ::grpcIAsyncRelocalizationPipeline::initProcessingModeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "initProcessingMode", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::initProcessingMode request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::PipelineMode pipelineMode = xpcf::deserialize<SolAR::api::pipeline::PipelineMode>(request->pipelinemode());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->initProcessingMode(pipelineMode);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::initProcessingMode response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::setCameraParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::setCameraParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::getCameraParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::getCameraParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::getCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::getCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::relocalizeProcessRequest(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestRequest* request, ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::relocalizeProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::chrono::system_clock::time_point timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(request->timestamp());
  SolAR::api::pipeline::TransformStatus transform3DStatus = xpcf::deserialize<SolAR::api::pipeline::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(image, pose, timestamp, transform3DStatus, transform3D, confidence);
  response->set_transform3dstatus(xpcf::serialize<SolAR::api::pipeline::TransformStatus>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::relocalizeProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::get3DTransformRequest(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestRequest* request, ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "get3DTransformRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::get3DTransformRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::TransformStatus transform3DStatus = xpcf::deserialize<SolAR::api::pipeline::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->get3DTransformRequest(transform3DStatus, transform3D, confidence);
  response->set_transform3dstatus(xpcf::serialize<SolAR::api::pipeline::TransformStatus>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::get3DTransformRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::getLastPose(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::getLastPoseRequest* request, ::grpcIAsyncRelocalizationPipeline::getLastPoseResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getLastPose", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::getLastPose request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::api::pipeline::PoseType poseType = xpcf::deserialize<SolAR::api::pipeline::PoseType>(request->posetype());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getLastPose(pose, poseType);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IAsyncRelocalizationPipeline_grpcServer::getLastPose response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

