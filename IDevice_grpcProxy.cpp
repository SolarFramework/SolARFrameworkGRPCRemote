// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDevice_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDevice::IDevice_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDevice::IDevice_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDevice {

IDevice_grpcProxy::IDevice_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDevice_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IDevice>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDevice_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDevice_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDevice::grpcIDeviceService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDevice_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDevice::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDeviceService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDevice_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDevice::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDeviceService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

