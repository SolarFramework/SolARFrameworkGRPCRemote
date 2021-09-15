// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcher_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorMatcher::IDescriptorMatcher_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorMatcher::IDescriptorMatcher_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcher {

IDescriptorMatcher_grpcProxy::IDescriptorMatcher_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcher_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorMatcher>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDescriptorMatcher_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcher_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorMatcher::grpcIDescriptorMatcherService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDescriptorMatcher_grpcProxy::match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors2, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcher::match_grpc0Request reqIn;
  ::grpcIDescriptorMatcher::match_grpc0Response respOut;
  reqIn.set_descriptors1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors1));
  reqIn.set_descriptors2(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherService","match_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDescriptorMatcher_grpcProxy::match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> const& descriptors2, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcher::match_grpc1Request reqIn;
  ::grpcIDescriptorMatcher::match_grpc1Response respOut;
  reqIn.set_descriptors1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors1));
  reqIn.set_descriptors2(xpcf::serialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(descriptors2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherService","match_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

