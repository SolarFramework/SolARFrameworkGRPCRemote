// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IAsyncRelocalizationPipeline_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline {

IAsyncRelocalizationPipeline_grpcServer::IAsyncRelocalizationPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IAsyncRelocalizationPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IAsyncRelocalizationPipeline>(m_grpcService.m_xpcfComponent);
}


void IAsyncRelocalizationPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IAsyncRelocalizationPipeline_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IAsyncRelocalizationPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::init(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIAsyncRelocalizationPipeline::initResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIAsyncRelocalizationPipeline::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIAsyncRelocalizationPipeline::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::setCameraParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::setCameraParametersResponse* response)
{
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::getCameraParametersRequest* request, ::grpcIAsyncRelocalizationPipeline::getCameraParametersResponse* response)
{
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getCameraParameters(cameraParams);
  response->set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::relocalizeProcessRequest(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestRequest* request, ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::chrono::system_clock::time_point timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(request->timestamp());
  SolAR::api::pipeline::TransformStatus transform3DStatus = xpcf::deserialize<SolAR::api::pipeline::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalizeProcessRequest(image, pose, timestamp, transform3DStatus, transform3D, confidence);
  response->set_transform3dstatus(xpcf::serialize<SolAR::api::pipeline::TransformStatus>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IAsyncRelocalizationPipeline_grpcServer::grpcIAsyncRelocalizationPipelineServiceImpl::get3DTransformRequest(::grpc::ServerContext* context, const ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestRequest* request, ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestResponse* response)
{
  SolAR::api::pipeline::TransformStatus transform3DStatus = xpcf::deserialize<SolAR::api::pipeline::TransformStatus>(request->transform3dstatus());
  SolAR::datastructure::Transform3Df transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform3d());
  float_t confidence = xpcf::deserialize<float_t>(request->confidence());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->get3DTransformRequest(transform3DStatus, transform3D, confidence);
  response->set_transform3dstatus(xpcf::serialize<SolAR::api::pipeline::TransformStatus>(transform3DStatus));
  response->set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  response->set_confidence(xpcf::serialize<float_t>(confidence));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

