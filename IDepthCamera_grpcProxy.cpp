// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDepthCamera_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDepthCamera::IDepthCamera_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDepthCamera::IDepthCamera_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDepthCamera {

IDepthCamera_grpcProxy::IDepthCamera_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDepthCamera_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IDepthCamera>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDepthCamera_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthCamera_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDepthCamera::grpcIDepthCameraService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDepthCamera::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "startrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDepthCamera::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stoprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::getNextDepthFrame(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcIDepthCamera::getNextDepthFrameRequest reqIn;
  ::grpcIDepthCamera::getNextDepthFrameResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextDepthFrame(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextDepthFramerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","getNextDepthFrame",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::getPointCloud(SRef<SolAR::datastructure::PointCloud>& pc)
{
  ::grpc::ClientContext context;
  ::grpcIDepthCamera::getPointCloudRequest reqIn;
  ::grpcIDepthCamera::getPointCloudResponse respOut;
  reqIn.set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPointCloud(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointCloudrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","getPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pc());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::setDepthResolution(SolAR::datastructure::Sizei resolution)
{
  ::grpc::ClientContext context;
  ::grpcIDepthCamera::setDepthResolutionRequest reqIn;
  ::grpcIDepthCamera::setDepthResolutionResponse respOut;
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDepthResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDepthResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","setDepthResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::setIntrinsicDepthParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIDepthCamera::setIntrinsicDepthParametersRequest reqIn;
  ::grpcIDepthCamera::setIntrinsicDepthParametersResponse respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","setIntrinsicDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDepthCamera_grpcProxy::setDistortionDepthParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIDepthCamera::setDistortionDepthParametersRequest reqIn;
  ::grpcIDepthCamera::setDistortionDepthParametersResponse respOut;
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","setDistortionDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Sizei  IDepthCamera_grpcProxy::getDepthResolution() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDepthCamera::getDepthResolutionResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDepthResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDepthResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","getDepthResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


float  IDepthCamera_grpcProxy::getDepthMinDistance() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDepthCamera::getDepthMinDistanceResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDepthMinDistance(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDepthMinDistancerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","getDepthMinDistance",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::datastructure::CamCalibration const&  IDepthCamera_grpcProxy::getIntrinsicsDepthParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDepthCamera::getIntrinsicsDepthParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","getIntrinsicsDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsDepthParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsDepthParameters;
}


SolAR::datastructure::CamDistortion const&  IDepthCamera_grpcProxy::getDistortionDepthParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDepthCamera::getDistortionDepthParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthCameraService","getDistortionDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionDepthParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionDepthParameters;
}


}

