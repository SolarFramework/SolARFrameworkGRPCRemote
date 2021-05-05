// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom2D3D_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D {

I3DTransformFinderFrom2D3D_grpcServer::I3DTransformFinderFrom2D3D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom2D3D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformFinderFrom2D3D>(m_grpcService.m_xpcfComponent);
}


void I3DTransformFinderFrom2D3D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom2D3D_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformFinderFrom2D3D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformFinderFrom2D3D_grpcServer::grpcI3DTransformFinderFrom2D3DServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D3D::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformFinderFrom2D3D_grpcServer::grpcI3DTransformFinderFrom2D3DServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom2D3D::estimateResponse* response)
{
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  std::vector<SolAR::datastructure::Point3Df> worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->worldpoints());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::datastructure::Transform3Df initialPose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->initialpose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(imagePoints, worldPoints, pose, initialPose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

