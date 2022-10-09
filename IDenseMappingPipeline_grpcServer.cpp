// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDenseMappingPipeline_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDenseMappingPipeline::IDenseMappingPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDenseMappingPipeline::IDenseMappingPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDenseMappingPipeline {

IDenseMappingPipeline_grpcServer::IDenseMappingPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDenseMappingPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IDenseMappingPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(7);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IDenseMappingPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDenseMappingPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDenseMappingPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDenseMappingPipeline_grpcServer::grpcIDenseMappingPipelineServiceImpl::init(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::initRequest* request, ::grpcIDenseMappingPipeline::initResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDenseMappingPipeline_grpcServer::grpcIDenseMappingPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::startRequest* request, ::grpcIDenseMappingPipeline::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDenseMappingPipeline_grpcServer::grpcIDenseMappingPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::stopRequest* request, ::grpcIDenseMappingPipeline::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDenseMappingPipeline_grpcServer::grpcIDenseMappingPipelineServiceImpl::denseMappingProcessRequest(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::denseMappingProcessRequestRequest* request, ::grpcIDenseMappingPipeline::denseMappingProcessRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "denseMappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::denseMappingProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Map> sparseMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->sparsemap());
  bool createMesh = request->createmesh();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->denseMappingProcessRequest(sparseMap, createMesh);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::denseMappingProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDenseMappingPipeline_grpcServer::grpcIDenseMappingPipelineServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::getPointCloudRequest* request, ::grpcIDenseMappingPipeline::getPointCloudResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPointCloud", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::getPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> outputPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->outputpointcloud());
  SolAR::api::pipeline::DenseMappingStatus status = xpcf::deserialize<SolAR::api::pipeline::DenseMappingStatus>(request->status());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloud(outputPointCloud, status);
  response->set_status(xpcf::serialize<SolAR::api::pipeline::DenseMappingStatus>(status));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::getPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDenseMappingPipeline_grpcServer::grpcIDenseMappingPipelineServiceImpl::getMesh(::grpc::ServerContext* context, const ::grpcIDenseMappingPipeline::getMeshRequest* request, ::grpcIDenseMappingPipeline::getMeshResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMesh", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::getMesh request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Mesh> outputMesh = xpcf::deserialize<SRef<SolAR::datastructure::Mesh>>(request->outputmesh());
  SolAR::api::pipeline::DenseMappingStatus status = xpcf::deserialize<SolAR::api::pipeline::DenseMappingStatus>(request->status());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMesh(outputMesh, status);
  response->set_status(xpcf::serialize<SolAR::api::pipeline::DenseMappingStatus>(status));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDenseMappingPipeline_grpcServer::getMesh response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

