// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapUpdatePipeline_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapUpdatePipeline::IMapUpdatePipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapUpdatePipeline::IMapUpdatePipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapUpdatePipeline {

IMapUpdatePipeline_grpcServer::IMapUpdatePipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapUpdatePipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IMapUpdatePipeline>(m_grpcService.m_xpcfComponent);
}


void IMapUpdatePipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapUpdatePipeline_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapUpdatePipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapUpdatePipeline_grpcServer::grpcIMapUpdatePipelineServiceImpl::init(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapUpdatePipeline::initResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdatePipeline_grpcServer::grpcIMapUpdatePipelineServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapUpdatePipeline::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdatePipeline_grpcServer::grpcIMapUpdatePipelineServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapUpdatePipeline::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdatePipeline_grpcServer::grpcIMapUpdatePipelineServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::setCameraParametersRequest* request, ::grpcIMapUpdatePipeline::setCameraParametersResponse* response)
{
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdatePipeline_grpcServer::grpcIMapUpdatePipelineServiceImpl::mapUpdateRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::mapUpdateRequestRequest* request, ::grpcIMapUpdatePipeline::mapUpdateRequestResponse* response)
{
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->mapUpdateRequest(map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdatePipeline_grpcServer::grpcIMapUpdatePipelineServiceImpl::getMapRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::getMapRequestRequest* request, ::grpcIMapUpdatePipeline::getMapRequestResponse* response)
{
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapRequest(map);
  response->set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

