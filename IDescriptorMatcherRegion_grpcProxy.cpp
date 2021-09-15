// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherRegion_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion {

IDescriptorMatcherRegion_grpcProxy::IDescriptorMatcherRegion_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherRegion_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorMatcherRegion>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDescriptorMatcherRegion_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherRegion_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorMatcherRegion::grpcIDescriptorMatcherRegionService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDescriptorMatcherRegion_grpcProxy::match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors2, std::vector<SolAR::datastructure::Point2Df> const& points2D1, std::vector<SolAR::datastructure::Point2Df> const& points2D2, std::vector<SolAR::datastructure::DescriptorMatch>& matches, float const radius, float const matchingDistanceMax)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherRegion::match_grpc0Request reqIn;
  ::grpcIDescriptorMatcherRegion::match_grpc0Response respOut;
  reqIn.set_descriptors1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors1));
  reqIn.set_descriptors2(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors2));
  reqIn.set_points2d1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D1));
  reqIn.set_points2d2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D2));
  reqIn.set_radius(radius);
  reqIn.set_matchingdistancemax(matchingDistanceMax);
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherRegionService","match_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDescriptorMatcherRegion_grpcProxy::match(std::vector<SolAR::datastructure::Point2Df> const& points2D, std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> const& descriptors, SRef<SolAR::datastructure::Frame> const frame, std::vector<SolAR::datastructure::DescriptorMatch>& matches, float const radius, float const matchingDistanceMax)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherRegion::match_grpc1Request reqIn;
  ::grpcIDescriptorMatcherRegion::match_grpc1Response respOut;
  reqIn.set_points2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D));
  reqIn.set_descriptors(xpcf::serialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(descriptors));
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_radius(radius);
  reqIn.set_matchingdistancemax(matchingDistanceMax);
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherRegionService","match_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDescriptorMatcherRegion_grpcProxy::match(SRef<SolAR::datastructure::Frame> const currentFrame, SRef<SolAR::datastructure::Frame> const lastFrame, std::vector<SolAR::datastructure::DescriptorMatch>& matches, float const radius, float const matchingDistanceMax)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherRegion::match_grpc2Request reqIn;
  ::grpcIDescriptorMatcherRegion::match_grpc2Response respOut;
  reqIn.set_currentframe(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(currentFrame));
  reqIn.set_lastframe(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(lastFrame));
  reqIn.set_radius(radius);
  reqIn.set_matchingdistancemax(matchingDistanceMax);
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc2(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc2 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherRegionService","match_grpc2",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

