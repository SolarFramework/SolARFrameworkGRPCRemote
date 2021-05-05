// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IRGBDCamera_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIRGBDCamera {

IRGBDCamera_grpcProxy::IRGBDCamera_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IRGBDCamera_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IRGBDCamera>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IRGBDCamera_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRGBDCamera_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIRGBDCamera::grpcIRGBDCameraService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "startrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stoprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getNextImage(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getNextImageRequest reqIn;
  ::grpcIRGBDCamera::getNextImageResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextImage(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextImagerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getNextImage",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


void  IRGBDCamera_grpcProxy::setResolution(SolAR::datastructure::Sizei const& resolution)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setResolutionRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IRGBDCamera_grpcProxy::setIntrinsicParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setIntrinsicParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setIntrinsicParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IRGBDCamera_grpcProxy::setDistortionParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setDistortionParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IRGBDCamera_grpcProxy::setParameters(SolAR::datastructure::CameraParameters const& parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_parameters(xpcf::serialize<SolAR::datastructure::CameraParameters>(parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::datastructure::Sizei  IRGBDCamera_grpcProxy::getResolution() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getResolutionResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::CamCalibration const&  IRGBDCamera_grpcProxy::getIntrinsicsParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getIntrinsicsParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getIntrinsicsParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsParameters;
}


SolAR::datastructure::CameraParameters const&  IRGBDCamera_grpcProxy::getParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getParameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.xpcfgrpcreturnvalue());
  return m_getParameters;
}


SolAR::datastructure::CamDistortion const&  IRGBDCamera_grpcProxy::getDistortionParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getDistortionParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionParameters;
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getNextDepthFrame(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getNextDepthFrameRequest reqIn;
  ::grpcIRGBDCamera::getNextDepthFrameResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextDepthFrame(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextDepthFramerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getNextDepthFrame",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getPointCloud(SRef<SolAR::datastructure::PointCloud>& pc)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getPointCloudRequest reqIn;
  ::grpcIRGBDCamera::getPointCloudResponse respOut;
  reqIn.set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPointCloud(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointCloudrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pc());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::setDepthResolution(SolAR::datastructure::Sizei resolution)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setDepthResolutionRequest reqIn;
  ::grpcIRGBDCamera::setDepthResolutionResponse respOut;
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDepthResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDepthResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setDepthResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::setIntrinsicDepthParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setIntrinsicDepthParametersRequest reqIn;
  ::grpcIRGBDCamera::setIntrinsicDepthParametersResponse respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setIntrinsicDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::setDistortionDepthParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setDistortionDepthParametersRequest reqIn;
  ::grpcIRGBDCamera::setDistortionDepthParametersResponse respOut;
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setDistortionDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Sizei  IRGBDCamera_grpcProxy::getDepthResolution() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getDepthResolutionResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDepthResolution(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDepthResolutionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDepthResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


float  IRGBDCamera_grpcProxy::getDepthMinDistance() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getDepthMinDistanceResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDepthMinDistance(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDepthMinDistancerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDepthMinDistance",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::datastructure::CamCalibration const&  IRGBDCamera_grpcProxy::getIntrinsicsDepthParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getIntrinsicsDepthParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getIntrinsicsDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsDepthParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsDepthParameters;
}


SolAR::datastructure::CamDistortion const&  IRGBDCamera_grpcProxy::getDistortionDepthParameters() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRGBDCamera::getDistortionDepthParametersResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionDepthParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionDepthParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDistortionDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionDepthParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionDepthParameters;
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getNextRGBDFrame(SRef<SolAR::datastructure::Image>& colorImg, SRef<SolAR::datastructure::Image>& depthImg)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getNextRGBDFrameRequest reqIn;
  ::grpcIRGBDCamera::getNextRGBDFrameResponse respOut;
  reqIn.set_colorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(colorImg));
  reqIn.set_depthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(depthImg));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextRGBDFrame(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextRGBDFramerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getNextRGBDFrame",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  colorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.colorimg());
  depthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.depthimg());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::alignDepthToColor(SRef<SolAR::datastructure::Image>& alignedDepthImg) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::alignDepthToColorRequest reqIn;
  ::grpcIRGBDCamera::alignDepthToColorResponse respOut;
  reqIn.set_aligneddepthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedDepthImg));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->alignDepthToColor(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "alignDepthToColorrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","alignDepthToColor",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  alignedDepthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.aligneddepthimg());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::alignColorToDepth(SRef<SolAR::datastructure::Image>& alignedColorImg) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::alignColorToDepthRequest reqIn;
  ::grpcIRGBDCamera::alignColorToDepthResponse respOut;
  reqIn.set_alignedcolorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedColorImg));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->alignColorToDepth(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "alignColorToDepthrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","alignColorToDepth",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  alignedColorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.alignedcolorimg());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Point3Df  IRGBDCamera_grpcProxy::getPixelToWorld(SolAR::datastructure::Point2Di const& inPixel) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getPixelToWorldRequest reqIn;
  ::grpcIRGBDCamera::getPixelToWorldResponse respOut;
  reqIn.set_inpixel(xpcf::serialize<SolAR::datastructure::Point2Di>(inPixel));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPixelToWorld(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPixelToWorldrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getPixelToWorld",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Point3Df>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Point2Di  IRGBDCamera_grpcProxy::getWorldToPixel(SolAR::datastructure::CloudPoint const& in3DPoint) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getWorldToPixelRequest reqIn;
  ::grpcIRGBDCamera::getWorldToPixelResponse respOut;
  reqIn.set_in3dpoint(xpcf::serialize<SolAR::datastructure::CloudPoint>(in3DPoint));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldToPixel(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldToPixelrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getWorldToPixel",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Point2Di>(respOut.xpcfgrpcreturnvalue());
}


std::vector<SolAR::datastructure::Point2Df>  IRGBDCamera_grpcProxy::getWorldToPixels(std::vector<SolAR::datastructure::CloudPoint> const& in3DPoints) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getWorldToPixelsRequest reqIn;
  ::grpcIRGBDCamera::getWorldToPixelsResponse respOut;
  reqIn.set_in3dpoints(xpcf::serialize<std::vector<SolAR::datastructure::CloudPoint>>(in3DPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldToPixels(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldToPixelsrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getWorldToPixels",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

