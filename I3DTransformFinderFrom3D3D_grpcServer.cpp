// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom3D3D_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D {

I3DTransformFinderFrom3D3D_grpcServer::I3DTransformFinderFrom3D3D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom3D3D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformFinderFrom3D3D>(m_grpcService.m_xpcfComponent);
}


void I3DTransformFinderFrom3D3D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom3D3D_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformFinderFrom3D3D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformFinderFrom3D3D_grpcServer::grpcI3DTransformFinderFrom3D3DServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom3D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom3D3D::estimateResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> sourcePointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->sourcepointcloud());
  SRef<SolAR::datastructure::PointCloud> targetPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->targetpointcloud());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::datastructure::Transform3Df initialPose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->initialpose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(sourcePointCloud, targetPointCloud, pose, initialPose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

