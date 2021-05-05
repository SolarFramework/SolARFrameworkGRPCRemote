// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ITriangulator_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverITriangulator::ITriangulator_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverITriangulator::ITriangulator_grpcServer>();

namespace org::bcom::xpcf::grpc::serverITriangulator {

ITriangulator_grpcServer::ITriangulator_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ITriangulator_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::ITriangulator>(m_grpcService.m_xpcfComponent);
}


void ITriangulator_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITriangulator_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ITriangulator_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ITriangulator_grpcServer::grpcITriangulatorServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcITriangulator::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status ITriangulator_grpcServer::grpcITriangulatorServiceImpl::triangulate_grpc0(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc0Request* request, ::grpcITriangulator::triangulate_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point2Df> pointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointsview1());
  std::vector<SolAR::datastructure::Point2Df> pointView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointview2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::pair<unsigned int,unsigned int> working_views = xpcf::deserialize<std::pair<unsigned int,unsigned int>>(request->working_views());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pcloud());
  double returnValue = m_xpcfComponent->triangulate(pointsView1, pointView2, matches, working_views, poseView1, poseView2, pcloud);
  response->set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ITriangulator_grpcServer::grpcITriangulatorServiceImpl::triangulate_grpc1(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc1Request* request, ::grpcITriangulator::triangulate_grpc1Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> keypointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypointsview1());
  std::vector<SolAR::datastructure::Keypoint> keypointsView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypointsview2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::pair<unsigned int,unsigned int> working_views = xpcf::deserialize<std::pair<unsigned int,unsigned int>>(request->working_views());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pcloud());
  double returnValue = m_xpcfComponent->triangulate(keypointsView1, keypointsView2, matches, working_views, poseView1, poseView2, pcloud);
  response->set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ITriangulator_grpcServer::grpcITriangulatorServiceImpl::triangulate_grpc2(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc2Request* request, ::grpcITriangulator::triangulate_grpc2Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> keypointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypointsview1());
  std::vector<SolAR::datastructure::Keypoint> keypointsView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypointsview2());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptor1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptor1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptor2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptor2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::pair<unsigned int,unsigned int> working_views = xpcf::deserialize<std::pair<unsigned int,unsigned int>>(request->working_views());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pcloud());
  double returnValue = m_xpcfComponent->triangulate(keypointsView1, keypointsView2, descriptor1, descriptor2, matches, working_views, poseView1, poseView2, pcloud);
  response->set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ITriangulator_grpcServer::grpcITriangulatorServiceImpl::triangulate_grpc3(::grpc::ServerContext* context, const ::grpcITriangulator::triangulate_grpc3Request* request, ::grpcITriangulator::triangulate_grpc3Response* response)
{
  SRef<SolAR::datastructure::Keyframe> curKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->curkeyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pcloud());
  double returnValue = m_xpcfComponent->triangulate(curKeyframe, matches, pcloud);
  response->set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

