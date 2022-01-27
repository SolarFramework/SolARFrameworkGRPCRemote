// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IIMU_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIIMU {

IIMU_grpcProxy::IIMU_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IIMU_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IIMU>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(10);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IIMU_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IIMU_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIIMU::grpcIIMUService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcIIMU::startRequest reqIn;
  ::grpcIIMU::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcIIMU::stopRequest reqIn;
  ::grpcIIMU::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::getGyroscopeData(SolAR::datastructure::Vector3f& gyroData)
{
  ::grpc::ClientContext context;
  ::grpcIIMU::getGyroscopeDataRequest reqIn;
  ::grpcIIMU::getGyroscopeDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getGyroscopeData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getGyroscopeData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getGyroscopeData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getGyroscopeData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getGyroscopeData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","getGyroscopeData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  gyroData = xpcf::deserialize<SolAR::datastructure::Vector3f>(respOut.gyrodata());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::getAccelerometerData(SolAR::datastructure::Vector3f& accelData)
{
  ::grpc::ClientContext context;
  ::grpcIIMU::getAccelerometerDataRequest reqIn;
  ::grpcIIMU::getAccelerometerDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAccelerometerData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getAccelerometerData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAccelerometerData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getAccelerometerData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAccelerometerData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","getAccelerometerData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  accelData = xpcf::deserialize<SolAR::datastructure::Vector3f>(respOut.acceldata());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::getMagnetometerData(SolAR::datastructure::Vector3f& magData)
{
  ::grpc::ClientContext context;
  ::grpcIIMU::getMagnetometerDataRequest reqIn;
  ::grpcIIMU::getMagnetometerDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMagnetometerData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getMagnetometerData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMagnetometerData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getMagnetometerData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMagnetometerData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","getMagnetometerData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  magData = xpcf::deserialize<SolAR::datastructure::Vector3f>(respOut.magdata());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::getAllSensorsData(SolAR::datastructure::Vector3f& gyroData, SolAR::datastructure::Vector3f& accelData, SolAR::datastructure::Vector3f& magData)
{
  ::grpc::ClientContext context;
  ::grpcIIMU::getAllSensorsDataRequest reqIn;
  ::grpcIIMU::getAllSensorsDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllSensorsData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  reqIn.set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  reqIn.set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getAllSensorsData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllSensorsData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::getAllSensorsData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllSensorsData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","getAllSensorsData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  gyroData = xpcf::deserialize<SolAR::datastructure::Vector3f>(respOut.gyrodata());
  accelData = xpcf::deserialize<SolAR::datastructure::Vector3f>(respOut.acceldata());
  magData = xpcf::deserialize<SolAR::datastructure::Vector3f>(respOut.magdata());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


bool  IIMU_grpcProxy::isGyroscopeAvailable()
{
  ::grpc::ClientContext context;
  ::grpcIIMU::isGyroscopeAvailableRequest reqIn;
  ::grpcIIMU::isGyroscopeAvailableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "isGyroscopeAvailable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::isGyroscopeAvailable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isGyroscopeAvailable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::isGyroscopeAvailable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isGyroscopeAvailable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","isGyroscopeAvailable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


bool  IIMU_grpcProxy::isAccelerometerAvailable()
{
  ::grpc::ClientContext context;
  ::grpcIIMU::isAccelerometerAvailableRequest reqIn;
  ::grpcIIMU::isAccelerometerAvailableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "isAccelerometerAvailable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::isAccelerometerAvailable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isAccelerometerAvailable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::isAccelerometerAvailable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isAccelerometerAvailable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","isAccelerometerAvailable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


bool  IIMU_grpcProxy::isMagnetometerAvailable()
{
  ::grpc::ClientContext context;
  ::grpcIIMU::isMagnetometerAvailableRequest reqIn;
  ::grpcIIMU::isMagnetometerAvailableResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "isMagnetometerAvailable", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::isMagnetometerAvailable request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isMagnetometerAvailable(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IIMU_grpcProxy::isMagnetometerAvailable response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isMagnetometerAvailable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","isMagnetometerAvailable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


}

