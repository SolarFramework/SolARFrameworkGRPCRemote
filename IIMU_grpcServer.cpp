// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IIMU_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIIMU {

IIMU_grpcServer::IIMU_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IIMU_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IIMU>(m_grpcService.m_xpcfComponent);
}


void IIMU_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IIMU_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IIMU_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getGyroscopeData(::grpc::ServerContext* context, const ::grpcIIMU::getGyroscopeDataRequest* request, ::grpcIIMU::getGyroscopeDataResponse* response)
{
  SolAR::datastructure::Vector3f gyroData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->gyrodata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getGyroscopeData(gyroData);
  response->set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getAccelerometerData(::grpc::ServerContext* context, const ::grpcIIMU::getAccelerometerDataRequest* request, ::grpcIIMU::getAccelerometerDataResponse* response)
{
  SolAR::datastructure::Vector3f accelData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->acceldata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAccelerometerData(accelData);
  response->set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getMagnetometerData(::grpc::ServerContext* context, const ::grpcIIMU::getMagnetometerDataRequest* request, ::grpcIIMU::getMagnetometerDataResponse* response)
{
  SolAR::datastructure::Vector3f magData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->magdata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMagnetometerData(magData);
  response->set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::getAllSensorsData(::grpc::ServerContext* context, const ::grpcIIMU::getAllSensorsDataRequest* request, ::grpcIIMU::getAllSensorsDataResponse* response)
{
  SolAR::datastructure::Vector3f gyroData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->gyrodata());
  SolAR::datastructure::Vector3f accelData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->acceldata());
  SolAR::datastructure::Vector3f magData = xpcf::deserialize<SolAR::datastructure::Vector3f>(request->magdata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllSensorsData(gyroData, accelData, magData);
  response->set_gyrodata(xpcf::serialize<SolAR::datastructure::Vector3f>(gyroData));
  response->set_acceldata(xpcf::serialize<SolAR::datastructure::Vector3f>(accelData));
  response->set_magdata(xpcf::serialize<SolAR::datastructure::Vector3f>(magData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::isGyroscopeAvailable(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::isGyroscopeAvailableResponse* response)
{
  bool returnValue = m_xpcfComponent->isGyroscopeAvailable();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::isAccelerometerAvailable(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::isAccelerometerAvailableResponse* response)
{
  bool returnValue = m_xpcfComponent->isAccelerometerAvailable();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IIMU_grpcServer::grpcIIMUServiceImpl::isMagnetometerAvailable(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIIMU::isMagnetometerAvailableResponse* response)
{
  bool returnValue = m_xpcfComponent->isMagnetometerAvailable();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

