// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapProcessingPipeline_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapProcessingPipeline::IMapProcessingPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapProcessingPipeline::IMapProcessingPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapProcessingPipeline {

IMapProcessingPipeline_grpcServer::IMapProcessingPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapProcessingPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IMapProcessingPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(8);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMapProcessingPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapProcessingPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapProcessingPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::init(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::initRequest* request, ::grpcIMapProcessingPipeline::initResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::startRequest* request, ::grpcIMapProcessingPipeline::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::stopRequest* request, ::grpcIMapProcessingPipeline::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::setMapToProcess(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::setMapToProcessRequest* request, ::grpcIMapProcessingPipeline::setMapToProcessResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setMapToProcess", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::setMapToProcess request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<datastructure::Map> map = xpcf::deserialize<SRef<datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMapToProcess(map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::setMapToProcess response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::getStatus(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::getStatusRequest* request, ::grpcIMapProcessingPipeline::getStatusResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getStatus", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::getStatus request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::MapProcessingStatus status = xpcf::deserialize<SolAR::api::pipeline::MapProcessingStatus>(request->status());
  float progress = request->progress();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getStatus(status, progress);
  response->set_status(xpcf::serialize<SolAR::api::pipeline::MapProcessingStatus>(status));
  response->set_progress(progress);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::getStatus response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::getDataForVisualization(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::getDataForVisualizationRequest* request, ::grpcIMapProcessingPipeline::getDataForVisualizationResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDataForVisualization", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::getDataForVisualization request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pointcloud());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getDataForVisualization(pointCloud, keyframePoses);
  response->set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::getDataForVisualization response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapProcessingPipeline_grpcServer::grpcIMapProcessingPipelineServiceImpl::getProcessedMap(::grpc::ServerContext* context, const ::grpcIMapProcessingPipeline::getProcessedMapRequest* request, ::grpcIMapProcessingPipeline::getProcessedMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getProcessedMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::getProcessedMap request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<datastructure::Map> map = xpcf::deserialize<SRef<datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getProcessedMap(map);
  response->set_map(xpcf::serialize<SRef<datastructure::Map>>(map));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcServer::getProcessedMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

