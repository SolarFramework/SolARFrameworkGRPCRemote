// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IIMU_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIIMU {

IIMU_grpcProxy::IIMU_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IIMU_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IIMU>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
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
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIIMU::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IIMU_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIIMU::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
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
  reqIn.set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getGyroscopeData(&context, reqIn, &respOut);
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
  reqIn.set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAccelerometerData(&context, reqIn, &respOut);
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
  reqIn.set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMagnetometerData(&context, reqIn, &respOut);
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
  reqIn.set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  reqIn.set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  reqIn.set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllSensorsData(&context, reqIn, &respOut);
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
  ::google::protobuf::Empty reqIn;
  ::grpcIIMU::isGyroscopeAvailableResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isGyroscopeAvailable(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isGyroscopeAvailable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","isGyroscopeAvailable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


bool  IIMU_grpcProxy::isAccelerometerAvailable()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIIMU::isAccelerometerAvailableResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isAccelerometerAvailable(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isAccelerometerAvailable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","isAccelerometerAvailable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


bool  IIMU_grpcProxy::isMagnetometerAvailable()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIIMU::isMagnetometerAvailableResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isMagnetometerAvailable(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isMagnetometerAvailable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIIMUService","isMagnetometerAvailable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


}

