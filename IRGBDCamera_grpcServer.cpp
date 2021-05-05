// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRGBDCamera_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRGBDCamera {

IRGBDCamera_grpcServer::IRGBDCamera_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRGBDCamera_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IRGBDCamera>(m_grpcService.m_xpcfComponent);
}


void IRGBDCamera_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRGBDCamera_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRGBDCamera_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getNextImage(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextImageRequest* request, ::grpcIRGBDCamera::getNextImageResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextImage(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setResolutionRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  m_xpcfComponent->setResolution(resolution);
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setIntrinsicParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setIntrinsicParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  m_xpcfComponent->setIntrinsicParameters(intrinsic_parameters);
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setDistortionParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDistortionParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  m_xpcfComponent->setDistortionParameters(distortion_parameters);
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CameraParameters parameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->parameters());
  m_xpcfComponent->setParameters(parameters);
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getResolution(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getResolutionResponse* response)
{
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getIntrinsicsParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getIntrinsicsParametersResponse* response)
{
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getParametersResponse* response)
{
  SolAR::datastructure::CameraParameters returnValue = m_xpcfComponent->getParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CameraParameters>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDistortionParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getDistortionParametersResponse* response)
{
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getNextDepthFrame(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextDepthFrameRequest* request, ::grpcIRGBDCamera::getNextDepthFrameResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextDepthFrame(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getPointCloudRequest* request, ::grpcIRGBDCamera::getPointCloudResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pc());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloud(pc);
  response->set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setDepthResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDepthResolutionRequest* request, ::grpcIRGBDCamera::setDepthResolutionResponse* response)
{
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDepthResolution(resolution);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setIntrinsicDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setIntrinsicDepthParametersRequest* request, ::grpcIRGBDCamera::setIntrinsicDepthParametersResponse* response)
{
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setIntrinsicDepthParameters(intrinsic_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDistortionDepthParametersRequest* request, ::grpcIRGBDCamera::setDistortionDepthParametersResponse* response)
{
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDistortionDepthParameters(distortion_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDepthResolution(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getDepthResolutionResponse* response)
{
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getDepthResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDepthMinDistance(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getDepthMinDistanceResponse* response)
{
  float returnValue = m_xpcfComponent->getDepthMinDistance();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getIntrinsicsDepthParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getIntrinsicsDepthParametersResponse* response)
{
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDistortionDepthParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRGBDCamera::getDistortionDepthParametersResponse* response)
{
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getNextRGBDFrame(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextRGBDFrameRequest* request, ::grpcIRGBDCamera::getNextRGBDFrameResponse* response)
{
  SRef<SolAR::datastructure::Image> colorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->colorimg());
  SRef<SolAR::datastructure::Image> depthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->depthimg());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextRGBDFrame(colorImg, depthImg);
  response->set_colorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(colorImg));
  response->set_depthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(depthImg));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::alignDepthToColor(::grpc::ServerContext* context, const ::grpcIRGBDCamera::alignDepthToColorRequest* request, ::grpcIRGBDCamera::alignDepthToColorResponse* response)
{
  SRef<SolAR::datastructure::Image> alignedDepthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->aligneddepthimg());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->alignDepthToColor(alignedDepthImg);
  response->set_aligneddepthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedDepthImg));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::alignColorToDepth(::grpc::ServerContext* context, const ::grpcIRGBDCamera::alignColorToDepthRequest* request, ::grpcIRGBDCamera::alignColorToDepthResponse* response)
{
  SRef<SolAR::datastructure::Image> alignedColorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->alignedcolorimg());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->alignColorToDepth(alignedColorImg);
  response->set_alignedcolorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedColorImg));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getPixelToWorld(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getPixelToWorldRequest* request, ::grpcIRGBDCamera::getPixelToWorldResponse* response)
{
  SolAR::datastructure::Point2Di inPixel = xpcf::deserialize<SolAR::datastructure::Point2Di>(request->inpixel());
  SolAR::datastructure::Point3Df returnValue = m_xpcfComponent->getPixelToWorld(inPixel);
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Point3Df>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getWorldToPixel(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getWorldToPixelRequest* request, ::grpcIRGBDCamera::getWorldToPixelResponse* response)
{
  SolAR::datastructure::CloudPoint in3DPoint = xpcf::deserialize<SolAR::datastructure::CloudPoint>(request->in3dpoint());
  SolAR::datastructure::Point2Di returnValue = m_xpcfComponent->getWorldToPixel(in3DPoint);
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Point2Di>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getWorldToPixels(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getWorldToPixelsRequest* request, ::grpcIRGBDCamera::getWorldToPixelsResponse* response)
{
  std::vector<SolAR::datastructure::CloudPoint> in3DPoints = xpcf::deserialize<std::vector<SolAR::datastructure::CloudPoint>>(request->in3dpoints());
  std::vector<SolAR::datastructure::Point2Df> returnValue = m_xpcfComponent->getWorldToPixels(in3DPoints);
  return ::grpc::Status::OK;
}


}

