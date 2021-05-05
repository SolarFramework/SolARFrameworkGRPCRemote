// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformSACFinderFrom3D3D_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D {

I3DTransformSACFinderFrom3D3D_grpcServer::I3DTransformSACFinderFrom3D3D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformSACFinderFrom3D3D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformSACFinderFrom3D3D>(m_grpcService.m_xpcfComponent);
}


void I3DTransformSACFinderFrom3D3D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformSACFinderFrom3D3D_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformSACFinderFrom3D3D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformSACFinderFrom3D3D_grpcServer::grpcI3DTransformSACFinderFrom3D3DServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distortionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distortionParams);
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformSACFinderFrom3D3D_grpcServer::grpcI3DTransformSACFinderFrom3D3DServiceImpl::estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Request* request, ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point3Df> firstPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->firstpoints3d());
  std::vector<SolAR::datastructure::Point3Df> secondPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->secondpoints3d());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::vector<int> inliers = xpcf::deserialize<std::vector<int>>(request->inliers());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(firstPoints3D, secondPoints3D, pose, inliers);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_inliers(xpcf::serialize<std::vector<int>>(inliers));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformSACFinderFrom3D3D_grpcServer::grpcI3DTransformSACFinderFrom3D3DServiceImpl::estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Request* request, ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Response* response)
{
  SRef<SolAR::datastructure::Keyframe> firstKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->firstkeyframe());
  SRef<SolAR::datastructure::Keyframe> secondKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->secondkeyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point3Df> firstPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->firstpoints3d());
  std::vector<SolAR::datastructure::Point3Df> secondPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->secondpoints3d());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::vector<int> inliers = xpcf::deserialize<std::vector<int>>(request->inliers());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(firstKeyframe, secondKeyframe, matches, firstPoints3D, secondPoints3D, pose, inliers);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_inliers(xpcf::serialize<std::vector<int>>(inliers));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

