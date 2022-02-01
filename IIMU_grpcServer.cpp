// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IIMU_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIIMU {

IIMU_grpcServer::IIMU_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IIMU_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IIMU>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(10);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IIMU_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IIMU_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IIMU_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::start(::grpc::ServerContext* context, const ::grpcIIMU::startRequest* request, ::grpcIIMU::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIIMU::stopRequest* request, ::grpcIIMU::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getGyroscopeData(::grpc::ServerContext* context, const ::grpcIIMU::getGyroscopeDataRequest* request, ::grpcIIMU::getGyroscopeDataResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getGyroscopeData", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getGyroscopeData request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Vector3f gyroData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->gyrodata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getGyroscopeData(gyroData);
  response->set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getGyroscopeData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getAccelerometerData(::grpc::ServerContext* context, const ::grpcIIMU::getAccelerometerDataRequest* request, ::grpcIIMU::getAccelerometerDataResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAccelerometerData", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getAccelerometerData request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Vector3f accelData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->acceldata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAccelerometerData(accelData);
  response->set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getAccelerometerData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getMagnetometerData(::grpc::ServerContext* context, const ::grpcIIMU::getMagnetometerDataRequest* request, ::grpcIIMU::getMagnetometerDataResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMagnetometerData", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getMagnetometerData request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Vector3f magData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->magdata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMagnetometerData(magData);
  response->set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getMagnetometerData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getAllSensorsData(::grpc::ServerContext* context, const ::grpcIIMU::getAllSensorsDataRequest* request, ::grpcIIMU::getAllSensorsDataResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllSensorsData", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getAllSensorsData request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Vector3f gyroData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->gyrodata());
  SolAR::datastructure::Vector3f accelData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->acceldata());
  SolAR::datastructure::Vector3f magData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->magdata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllSensorsData(gyroData, accelData, magData);
  response->set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  response->set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  response->set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::getAllSensorsData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::isGyroscopeAvailable(::grpc::ServerContext* context, const ::grpcIIMU::isGyroscopeAvailableRequest* request, ::grpcIIMU::isGyroscopeAvailableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isGyroscopeAvailable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::isGyroscopeAvailable request received at " << to_simple_string(start) << std::endl;
  #endif
  bool returnValue = m_xpcfComponent->isGyroscopeAvailable();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::isGyroscopeAvailable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::isAccelerometerAvailable(::grpc::ServerContext* context, const ::grpcIIMU::isAccelerometerAvailableRequest* request, ::grpcIIMU::isAccelerometerAvailableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isAccelerometerAvailable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::isAccelerometerAvailable request received at " << to_simple_string(start) << std::endl;
  #endif
  bool returnValue = m_xpcfComponent->isAccelerometerAvailable();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::isAccelerometerAvailable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::isMagnetometerAvailable(::grpc::ServerContext* context, const ::grpcIIMU::isMagnetometerAvailableRequest* request, ::grpcIIMU::isMagnetometerAvailableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isMagnetometerAvailable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::isMagnetometerAvailable request received at " << to_simple_string(start) << std::endl;
  #endif
  bool returnValue = m_xpcfComponent->isMagnetometerAvailable();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcServer::isMagnetometerAvailable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

