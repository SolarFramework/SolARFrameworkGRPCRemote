// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom2D2D_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D {

I3DTransformFinderFrom2D2D_grpcServer::I3DTransformFinderFrom2D2D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom2D2D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformFinderFrom2D2D>(m_grpcService.m_xpcfComponent);
}


void I3DTransformFinderFrom2D2D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom2D2D_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformFinderFrom2D2D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformFinderFrom2D2D_grpcServer::grpcI3DTransformFinderFrom2D2DServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformFinderFrom2D2D_grpcServer::grpcI3DTransformFinderFrom2D2DServiceImpl::estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point2Df> pointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointsview1());
  std::vector<SolAR::datastructure::Point2Df> pointsView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointsview2());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SolAR::datastructure::DescriptorMatch> inlierMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->inliermatches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(pointsView1, pointsView2, poseView1, poseView2, inlierMatches);
  response->set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  response->set_inliermatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inlierMatches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformFinderFrom2D2D_grpcServer::grpcI3DTransformFinderFrom2D2DServiceImpl::estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> pointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->pointsview1());
  std::vector<SolAR::datastructure::Keypoint> pointsView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->pointsview2());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SolAR::datastructure::DescriptorMatch> inlierMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->inliermatches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(pointsView1, pointsView2, poseView1, poseView2, inlierMatches);
  response->set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  response->set_inliermatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inlierMatches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

