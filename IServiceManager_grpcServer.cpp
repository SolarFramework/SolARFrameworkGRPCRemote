// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IServiceManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIServiceManager::IServiceManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIServiceManager::IServiceManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIServiceManager {

IServiceManager_grpcServer::IServiceManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IServiceManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::service::IServiceManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(7);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IServiceManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IServiceManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IServiceManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IServiceManager_grpcServer::grpcIServiceManagerServiceImpl::init(::grpc::ServerContext* context, const ::grpcIServiceManager::initRequest* request, ::grpcIServiceManager::initResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManager_grpcServer::grpcIServiceManagerServiceImpl::registerService(::grpc::ServerContext* context, const ::grpcIServiceManager::registerServiceRequest* request, ::grpcIServiceManager::registerServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "registerService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::registerService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::service::ServiceType serviceType = static_cast<SolAR::api::service::ServiceType>(request->servicetype());
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->registerService(serviceType, serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::registerService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManager_grpcServer::grpcIServiceManagerServiceImpl::unregisterService(::grpc::ServerContext* context, const ::grpcIServiceManager::unregisterServiceRequest* request, ::grpcIServiceManager::unregisterServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unregisterService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::unregisterService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::service::ServiceType serviceType = static_cast<SolAR::api::service::ServiceType>(request->servicetype());
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unregisterService(serviceType, serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::unregisterService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManager_grpcServer::grpcIServiceManagerServiceImpl::getService(::grpc::ServerContext* context, const ::grpcIServiceManager::getServiceRequest* request, ::grpcIServiceManager::getServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::getService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::service::ServiceType serviceType = static_cast<SolAR::api::service::ServiceType>(request->servicetype());
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getService(serviceType, serviceURL);
  response->set_serviceurl(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::getService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManager_grpcServer::grpcIServiceManagerServiceImpl::getAndLockService(::grpc::ServerContext* context, const ::grpcIServiceManager::getAndLockServiceRequest* request, ::grpcIServiceManager::getAndLockServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAndLockService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::getAndLockService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::service::ServiceType serviceType = static_cast<SolAR::api::service::ServiceType>(request->servicetype());
  std::string clientUUID = request->clientuuid();
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAndLockService(serviceType, clientUUID, serviceURL);
  response->set_serviceurl(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::getAndLockService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IServiceManager_grpcServer::grpcIServiceManagerServiceImpl::unlockService(::grpc::ServerContext* context, const ::grpcIServiceManager::unlockServiceRequest* request, ::grpcIServiceManager::unlockServiceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "unlockService", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::unlockService request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::service::ServiceType serviceType = static_cast<SolAR::api::service::ServiceType>(request->servicetype());
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unlockService(serviceType, clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IServiceManager_grpcServer::unlockService response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

