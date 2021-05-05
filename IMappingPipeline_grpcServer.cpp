// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMappingPipeline_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMappingPipeline {

IMappingPipeline_grpcServer::IMappingPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMappingPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IMappingPipeline>(m_grpcService.m_xpcfComponent);
}


void IMappingPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMappingPipeline_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMappingPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::init(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::initResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMappingPipeline::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParametersRequest* request, ::grpcIMappingPipeline::setCameraParametersResponse* response)
{
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::setObjectToTrack(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setObjectToTrackRequest* request, ::grpcIMappingPipeline::setObjectToTrackResponse* response)
{
  SRef<SolAR::datastructure::Trackable> trackableObject = xpcf::deserialize<SRef<SolAR::datastructure::Trackable>>(request->trackableobject());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setObjectToTrack(trackableObject);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::mappingProcessRequest(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequestRequest* request, ::grpcIMappingPipeline::mappingProcessRequestResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->mappingProcessRequest(image, pose);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::getDataForVisualization(::grpc::ServerContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest* request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response)
{
  std::vector<SRef<SolAR::datastructure::CloudPoint>> outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->outputpointclouds());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getDataForVisualization(outputPointClouds, keyframePoses);
  response->set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

