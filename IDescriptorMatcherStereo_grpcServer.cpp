// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherStereo_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo {

IDescriptorMatcherStereo_grpcServer::IDescriptorMatcherStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorMatcherStereo>(m_grpcService.m_xpcfComponent);
}


void IDescriptorMatcherStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherStereo_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorMatcherStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorMatcherStereo_grpcServer::grpcIDescriptorMatcherStereoServiceImpl::match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherStereo::match_grpc0Request* request, ::grpcIDescriptorMatcherStereo::match_grpc0Response* response)
{
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors2());
  std::vector<SolAR::datastructure::Keypoint> undistortedKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->undistortedkeypoints1());
  std::vector<SolAR::datastructure::Keypoint> undistortedKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->undistortedkeypoints2());
  SolAR::datastructure::StereoType type = xpcf::deserialize<SolAR::datastructure::StereoType>(request->type());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(descriptors1, descriptors2, undistortedKeypoints1, undistortedKeypoints2, type, matches);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcherStereo_grpcServer::grpcIDescriptorMatcherStereoServiceImpl::match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherStereo::match_grpc1Request* request, ::grpcIDescriptorMatcherStereo::match_grpc1Response* response)
{
  SRef<SolAR::datastructure::Frame> frame1 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame1());
  SRef<SolAR::datastructure::Frame> frame2 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame2());
  SolAR::datastructure::StereoType type = xpcf::deserialize<SolAR::datastructure::StereoType>(request->type());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(frame1, frame2, type, matches);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

