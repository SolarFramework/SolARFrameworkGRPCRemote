// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDepthCamera_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDepthCamera {

IDepthCamera_grpcServer::IDepthCamera_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDepthCamera_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IDepthCamera>(m_grpcService.m_xpcfComponent);
}


void IDepthCamera_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthCamera_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDepthCamera_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getNextDepthFrame(::grpc::ServerContext* context, const ::grpcIDepthCamera::getNextDepthFrameRequest* request, ::grpcIDepthCamera::getNextDepthFrameResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextDepthFrame(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIDepthCamera::getPointCloudRequest* request, ::grpcIDepthCamera::getPointCloudResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pc());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloud(pc);
  response->set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::setDepthResolution(::grpc::ServerContext* context, const ::grpcIDepthCamera::setDepthResolutionRequest* request, ::grpcIDepthCamera::setDepthResolutionResponse* response)
{
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDepthResolution(resolution);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::setIntrinsicDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::setIntrinsicDepthParametersRequest* request, ::grpcIDepthCamera::setIntrinsicDepthParametersResponse* response)
{
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setIntrinsicDepthParameters(intrinsic_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::setDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::setDistortionDepthParametersRequest* request, ::grpcIDepthCamera::setDistortionDepthParametersResponse* response)
{
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDistortionDepthParameters(distortion_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getDepthResolution(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getDepthResolutionResponse* response)
{
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getDepthResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getDepthMinDistance(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getDepthMinDistanceResponse* response)
{
  float returnValue = m_xpcfComponent->getDepthMinDistance();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getIntrinsicsDepthParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getIntrinsicsDepthParametersResponse* response)
{
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getDistortionDepthParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDepthCamera::getDistortionDepthParametersResponse* response)
{
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  return ::grpc::Status::OK;
}


}

