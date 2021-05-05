// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IVisualInertialFusion_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIVisualInertialFusion {

IVisualInertialFusion_grpcServer::IVisualInertialFusion_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IVisualInertialFusion_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::fusion::IVisualInertialFusion>(m_grpcService.m_xpcfComponent);
}


void IVisualInertialFusion_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IVisualInertialFusion_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IVisualInertialFusion_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::init(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::initRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::api::fusion::VisionData initialVisionData = xpcf::deserialize<SolAR::api::fusion::VisionData>(request->initialvisiondata());
  m_xpcfComponent->init(initialVisionData);
  return ::grpc::Status::OK;
}


::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::addInertialData(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::addInertialDataRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::api::fusion::InertialData inertialData = xpcf::deserialize<SolAR::api::fusion::InertialData>(request->inertialdata());
  m_xpcfComponent->addInertialData(inertialData);
  return ::grpc::Status::OK;
}


::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::addVisionData(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::addVisionDataRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::api::fusion::VisionData visionData = xpcf::deserialize<SolAR::api::fusion::VisionData>(request->visiondata());
  m_xpcfComponent->addVisionData(visionData);
  return ::grpc::Status::OK;
}


::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::process(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::processRequest* request, ::grpcIVisualInertialFusion::processResponse* response)
{
  SolAR::datastructure::Transform3Df outputData = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->outputdata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(outputData);
  response->set_outputdata(xpcf::serialize<SolAR::datastructure::Transform3Df>(outputData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

