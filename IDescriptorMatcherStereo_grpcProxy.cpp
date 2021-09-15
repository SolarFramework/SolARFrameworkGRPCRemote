// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherStereo_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo {

IDescriptorMatcherStereo_grpcProxy::IDescriptorMatcherStereo_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherStereo_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorMatcherStereo>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDescriptorMatcherStereo_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherStereo_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorMatcherStereo::grpcIDescriptorMatcherStereoService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDescriptorMatcherStereo_grpcProxy::match(SRef<SolAR::datastructure::DescriptorBuffer> const& descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const& descriptors2, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints1, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints2, SolAR::datastructure::StereoType type, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherStereo::match_grpc0Request reqIn;
  ::grpcIDescriptorMatcherStereo::match_grpc0Response respOut;
  reqIn.set_descriptors1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors1));
  reqIn.set_descriptors2(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors2));
  reqIn.set_undistortedkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(undistortedKeypoints1));
  reqIn.set_undistortedkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(undistortedKeypoints2));
  reqIn.set_type(xpcf::serialize<SolAR::datastructure::StereoType>(type));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherStereoService","match_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDescriptorMatcherStereo_grpcProxy::match(SRef<SolAR::datastructure::Frame> const frame1, SRef<SolAR::datastructure::Frame> const frame2, SolAR::datastructure::StereoType type, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherStereo::match_grpc1Request reqIn;
  ::grpcIDescriptorMatcherStereo::match_grpc1Response respOut;
  reqIn.set_frame1(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame1));
  reqIn.set_frame2(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame2));
  reqIn.set_type(xpcf::serialize<SolAR::datastructure::StereoType>(type));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherStereoService","match_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

