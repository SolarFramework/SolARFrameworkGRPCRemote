// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDevice_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDevice::IDevice_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDevice::IDevice_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDevice {

IDevice_grpcServer::IDevice_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDevice_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IDevice>(m_grpcService.m_xpcfComponent);
}


void IDevice_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDevice_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDevice_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDevice_grpcServer::grpcIDeviceServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDevice::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDevice_grpcServer::grpcIDeviceServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDevice::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

