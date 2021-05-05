// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICamera_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICamera::ICamera_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICamera::ICamera_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICamera {

ICamera_grpcServer::ICamera_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICamera_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::ICamera>(m_grpcService.m_xpcfComponent);
}


void ICamera_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICamera_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICamera_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICamera::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICamera::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::getNextImage(::grpc::ServerContext* context, const ::grpcICamera::getNextImageRequest* request, ::grpcICamera::getNextImageResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextImage(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::setResolution(::grpc::ServerContext* context, const ::grpcICamera::setResolutionRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  m_xpcfComponent->setResolution(resolution);
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::setIntrinsicParameters(::grpc::ServerContext* context, const ::grpcICamera::setIntrinsicParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  m_xpcfComponent->setIntrinsicParameters(intrinsic_parameters);
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::setDistortionParameters(::grpc::ServerContext* context, const ::grpcICamera::setDistortionParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  m_xpcfComponent->setDistortionParameters(distortion_parameters);
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::setParameters(::grpc::ServerContext* context, const ::grpcICamera::setParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CameraParameters parameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->parameters());
  m_xpcfComponent->setParameters(parameters);
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::getResolution(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICamera::getResolutionResponse* response)
{
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::getIntrinsicsParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICamera::getIntrinsicsParametersResponse* response)
{
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::getParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICamera::getParametersResponse* response)
{
  SolAR::datastructure::CameraParameters returnValue = m_xpcfComponent->getParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CameraParameters>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ICamera_grpcServer::grpcICameraServiceImpl::getDistortionParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcICamera::getDistortionParametersResponse* response)
{
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  return ::grpc::Status::OK;
}


}

