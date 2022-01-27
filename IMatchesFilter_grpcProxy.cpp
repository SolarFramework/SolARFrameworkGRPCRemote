// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMatchesFilter_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMatchesFilter {

IMatchesFilter_grpcProxy::IMatchesFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMatchesFilter_grpcProxy>())
{
  declareInterface<SolAR::api::features::IMatchesFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
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
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IMatchesFilter_grpcProxy::filter(std::vector<SolAR::datastructure::DescriptorMatch> const& inputMatches, std::vector<SolAR::datastructure::DescriptorMatch>& outputMatches, std::vector<SolAR::datastructure::Keypoint> const& keyPoints_1, std::vector<SolAR::datastructure::Keypoint> const& keyPoints_2)
{
  ::grpc::ClientContext context;
  ::grpcIMatchesFilter::filterRequest reqIn;
  ::grpcIMatchesFilter::filterResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputmatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inputMatches));
  reqIn.set_keypoints_1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keyPoints_1));
  reqIn.set_keypoints_2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keyPoints_2));
  reqIn.set_outputmatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(outputMatches));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesFilter_grpcProxy::filter request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesFilter_grpcProxy::filter response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMatchesFilterService","filter",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.outputmatches());
}


}

