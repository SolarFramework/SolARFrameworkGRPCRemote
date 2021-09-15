// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherRegion_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion {

IDescriptorMatcherRegion_grpcServer::IDescriptorMatcherRegion_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherRegion_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorMatcherRegion>(m_grpcService.m_xpcfComponent);
}


void IDescriptorMatcherRegion_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherRegion_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorMatcherRegion_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorMatcherRegion_grpcServer::grpcIDescriptorMatcherRegionServiceImpl::match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc0Request* request, ::grpcIDescriptorMatcherRegion::match_grpc0Response* response)
{
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors2());
  std::vector<SolAR::datastructure::Point2Df> points2D1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d1());
  std::vector<SolAR::datastructure::Point2Df> points2D2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float radius = request->radius();
  float matchingDistanceMax = request->matchingdistancemax();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(descriptors1, descriptors2, points2D1, points2D2, matches, radius, matchingDistanceMax);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcherRegion_grpcServer::grpcIDescriptorMatcherRegionServiceImpl::match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc1Request* request, ::grpcIDescriptorMatcherRegion::match_grpc1Response* response)
{
  std::vector<SolAR::datastructure::Point2Df> points2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d());
  std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> descriptors = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(request->descriptors());
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float radius = request->radius();
  float matchingDistanceMax = request->matchingdistancemax();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(points2D, descriptors, frame, matches, radius, matchingDistanceMax);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcherRegion_grpcServer::grpcIDescriptorMatcherRegionServiceImpl::match_grpc2(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc2Request* request, ::grpcIDescriptorMatcherRegion::match_grpc2Response* response)
{
  SRef<SolAR::datastructure::Frame> currentFrame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->currentframe());
  SRef<SolAR::datastructure::Frame> lastFrame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->lastframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float radius = request->radius();
  float matchingDistanceMax = request->matchingdistancemax();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(currentFrame, lastFrame, matches, radius, matchingDistanceMax);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

