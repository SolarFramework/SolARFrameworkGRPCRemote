// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICamera_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICamera {

ICamera_grpcProxy::ICamera_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICamera_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::ICamera>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ICamera_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICamera_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICamera::grpcICameraService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ICamera_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICamera::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "startrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICamera_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICamera::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stoprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICamera_grpcProxy::getNextImage(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcICamera::getNextImageRequest reqIn;
  ::grpcICamera::getNextImageResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextImage(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextImagerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getNextImage",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


void  ICamera_grpcProxy::setResolution(SolAR::datastructure::Sizei const& resolution)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setResolutionRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ICamera_grpcProxy::setIntrinsicParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setIntrinsicParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setIntrinsicParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ICamera_grpcProxy::setDistortionParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setDistortionParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ICamera_grpcProxy::setParameters(SolAR::datastructure::CameraParameters const& parameters)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_parameters(xpcf::serialize<SolAR::datastructure::CameraParameters>(parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::datastructure::Sizei  ICamera_grpcProxy::getResolution() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICamera::getResolutionResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::CamCalibration const&  ICamera_grpcProxy::getIntrinsicsParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICamera::getIntrinsicsParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getIntrinsicsParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsParameters;
}


SolAR::datastructure::CameraParameters const&  ICamera_grpcProxy::getParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICamera::getParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getParameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.xpcfgrpcreturnvalue());
  return m_getParameters;
}


SolAR::datastructure::CamDistortion const&  ICamera_grpcProxy::getDistortionParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcICamera::getDistortionParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionParameters;
}


}

