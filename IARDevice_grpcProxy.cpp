// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IARDevice_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIARDevice::IARDevice_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIARDevice::IARDevice_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIARDevice {

IARDevice_grpcProxy::IARDevice_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IARDevice_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IARDevice>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IARDevice_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IARDevice_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIARDevice::grpcIARDeviceService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IARDevice_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIARDevice::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "startrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIARDeviceService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IARDevice_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIARDevice::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stoprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIARDeviceService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


int  IARDevice_grpcProxy::getNbCameras()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIARDevice::getNbCamerasResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNbCameras(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNbCamerasrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIARDeviceService","getNbCameras",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  IARDevice_grpcProxy::getData(std::vector<SRef<SolAR::datastructure::Image>>& images, std::vector<SolAR::datastructure::Transform3Df>& poses, std::chrono::system_clock::time_point& timestamp)
{
  ::grpc::ClientContext context;
  ::grpcIARDevice::getDataRequest reqIn;
  ::grpcIARDevice::getDataResponse respOut;
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_poses(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(poses));
  reqIn.set_timestamp(xpcf::serialize<std::chrono::system_clock::time_point>(timestamp));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getData(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDatarpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIARDeviceService","getData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(respOut.images());
  poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.poses());
  timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(respOut.timestamp());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::CameraParameters const&  IARDevice_grpcProxy::getParameters(int const& camera_id) const
{
  ::grpc::ClientContext context;
  ::grpcIARDevice::getParametersRequest reqIn;
  ::grpcIARDevice::getParametersResponse respOut;
  reqIn.set_camera_id(camera_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIARDeviceService","getParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getParameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.xpcfgrpcreturnvalue());
  return m_getParameters;
}


void  IARDevice_grpcProxy::setParameters(int const& camera_id, SolAR::datastructure::CameraParameters const& parameters)
{
  ::grpc::ClientContext context;
  ::grpcIARDevice::setParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_camera_id(camera_id);
  reqIn.set_parameters(xpcf::serialize<SolAR::datastructure::CameraParameters>(parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIARDeviceService","setParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

