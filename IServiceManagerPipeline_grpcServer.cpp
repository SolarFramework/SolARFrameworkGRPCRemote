// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IServiceManagerPipeline_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIServiceManagerPipeline::IServiceManagerPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIServiceManagerPipeline::IServiceManagerPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIServiceManagerPipeline {

IServiceManagerPipeline_grpcServer::IServiceManagerPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IServiceManagerPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IServiceManagerPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(9);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IServiceManagerPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IServiceManagerPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IServiceManagerPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::init(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::initRequest* request, ::grpcIServiceManagerPipeline::initResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::startRequest* request, ::grpcIServiceManagerPipeline::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::stopRequest* request, ::grpcIServiceManagerPipeline::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::registerService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::registerServiceRequest* request, ::grpcIServiceManagerPipeline::registerServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "registerService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::registerService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::ServiceType serviceType = xpcf::deserialize<SolAR::api::pipeline::ServiceType>(request->servicetype());
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->registerService(serviceType, serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::registerService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::unregisterService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::unregisterServiceRequest* request, ::grpcIServiceManagerPipeline::unregisterServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unregisterService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::unregisterService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::ServiceType serviceType = xpcf::deserialize<SolAR::api::pipeline::ServiceType>(request->servicetype());
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unregisterService(serviceType, serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::unregisterService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::getService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::getServiceRequest* request, ::grpcIServiceManagerPipeline::getServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::getService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::ServiceType serviceType = xpcf::deserialize<SolAR::api::pipeline::ServiceType>(request->servicetype());
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getService(serviceType, serviceURL);
  response->set_serviceurl(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::getService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::getAndLockService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::getAndLockServiceRequest* request, ::grpcIServiceManagerPipeline::getAndLockServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAndLockService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::getAndLockService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::ServiceType serviceType = xpcf::deserialize<SolAR::api::pipeline::ServiceType>(request->servicetype());
  std::string clientUUID = request->clientuuid();
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAndLockService(serviceType, clientUUID, serviceURL);
  response->set_serviceurl(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::getAndLockService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManagerPipeline_grpcServer::grpcIServiceManagerPipelineServiceImpl::unlockService(::grpc::ServerContext* context, const ::grpcIServiceManagerPipeline::unlockServiceRequest* request, ::grpcIServiceManagerPipeline::unlockServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unlockService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::unlockService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::ServiceType serviceType = xpcf::deserialize<SolAR::api::pipeline::ServiceType>(request->servicetype());
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unlockService(serviceType, clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManagerPipeline_grpcServer::unlockService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

