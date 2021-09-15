// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMatchesFilter_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMatchesFilter {

IMatchesFilter_grpcProxy::IMatchesFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMatchesFilter_grpcProxy>())
{
  declareInterface<SolAR::api::features::IMatchesFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IMatchesFilter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMatchesFilter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMatchesFilter::grpcIMatchesFilterService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IMatchesFilter_grpcProxy::filter(std::vector<SolAR::datastructure::DescriptorMatch> const& inputMatches, std::vector<SolAR::datastructure::DescriptorMatch>& outputMatches, std::vector<SolAR::datastructure::Keypoint> const& keyPoints_1, std::vector<SolAR::datastructure::Keypoint> const& keyPoints_2)
{
  ::grpc::ClientContext context;
  ::grpcIMatchesFilter::filterRequest reqIn;
  ::grpcIMatchesFilter::filterResponse respOut;
  reqIn.set_inputmatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inputMatches));
  reqIn.set_keypoints_1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keyPoints_1));
  reqIn.set_keypoints_2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keyPoints_2));
  reqIn.set_outputmatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(outputMatches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMatchesFilterService","filter",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.outputmatches());
}


}

