// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherGeometric_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric {

IDescriptorMatcherGeometric_grpcServer::IDescriptorMatcherGeometric_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherGeometric_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorMatcherGeometric>(m_grpcService.m_xpcfComponent);
}


void IDescriptorMatcherGeometric_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherGeometric_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorMatcherGeometric_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorMatcherGeometric_grpcServer::grpcIDescriptorMatcherGeometricServiceImpl::match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherGeometric::match_grpc0Request* request, ::grpcIDescriptorMatcherGeometric::match_grpc0Response* response)
{
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors2());
  std::vector<SolAR::datastructure::Keypoint> undistortedKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->undistortedkeypoints1());
  std::vector<SolAR::datastructure::Keypoint> undistortedKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->undistortedkeypoints2());
  SolAR::datastructure::Transform3Df pose1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose1());
  SolAR::datastructure::Transform3Df pose2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose2());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<uint32_t> mask = xpcf::deserialize<std::vector<uint32_t>>(request->mask());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(descriptors1, descriptors2, undistortedKeypoints1, undistortedKeypoints2, pose1, pose2, camParams, matches, mask);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcherGeometric_grpcServer::grpcIDescriptorMatcherGeometricServiceImpl::match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherGeometric::match_grpc1Request* request, ::grpcIDescriptorMatcherGeometric::match_grpc1Response* response)
{
  SRef<SolAR::datastructure::Frame> frame1 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame1());
  SRef<SolAR::datastructure::Frame> frame2 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame2());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<uint32_t> mask = xpcf::deserialize<std::vector<uint32_t>>(request->mask());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(frame1, frame2, camParams, matches, mask);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

