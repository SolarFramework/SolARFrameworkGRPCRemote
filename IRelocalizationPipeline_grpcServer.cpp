// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRelocalizationPipeline_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRelocalizationPipeline::IRelocalizationPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRelocalizationPipeline::IRelocalizationPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRelocalizationPipeline {

IRelocalizationPipeline_grpcServer::IRelocalizationPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRelocalizationPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IRelocalizationPipeline>(m_grpcService.m_xpcfComponent);
}


void IRelocalizationPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRelocalizationPipeline_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRelocalizationPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRelocalizationPipeline_grpcServer::grpcIRelocalizationPipelineServiceImpl::init(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRelocalizationPipeline::initResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationPipeline_grpcServer::grpcIRelocalizationPipelineServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRelocalizationPipeline::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationPipeline_grpcServer::grpcIRelocalizationPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRelocalizationPipeline::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationPipeline_grpcServer::grpcIRelocalizationPipelineServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::setCameraParametersRequest* request, ::grpcIRelocalizationPipeline::setCameraParametersResponse* response)
{
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationPipeline_grpcServer::grpcIRelocalizationPipelineServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::getCameraParametersRequest* request, ::grpcIRelocalizationPipeline::getCameraParametersResponse* response)
{
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizationPipeline_grpcServer::grpcIRelocalizationPipelineServiceImpl::relocalizeProcessRequest(::grpc::ServerContext* context, const ::grpcIRelocalizationPipeline::relocalizeProcessRequestRequest* request, ::grpcIRelocalizationPipeline::relocalizeProcessRequestResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(image, pose, confidence);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

