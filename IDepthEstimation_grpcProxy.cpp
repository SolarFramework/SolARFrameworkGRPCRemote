// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDepthEstimation_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDepthEstimation {

IDepthEstimation_grpcProxy::IDepthEstimation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDepthEstimation_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IDepthEstimation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IDepthEstimation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthEstimation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDepthEstimation::grpcIDepthEstimationService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDepthEstimation_grpcProxy::estimate(std::vector<SolAR::datastructure::Keypoint>& rectKeypoints1, std::vector<SolAR::datastructure::Keypoint>& rectKeypoints2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, float focal, float baseline, SolAR::datastructure::StereoType type)
{
  ::grpc::ClientContext context;
  ::grpcIDepthEstimation::estimateRequest reqIn;
  ::grpcIDepthEstimation::estimateResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_focal(focal);
  reqIn.set_baseline(baseline);
  reqIn.set_type(xpcf::serialize<SolAR::datastructure::StereoType>(type));
  reqIn.set_rectkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints1));
  reqIn.set_rectkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthEstimation_grpcProxy::estimate request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthEstimation_grpcProxy::estimate response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthEstimationService","estimate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  rectKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.rectkeypoints1());
  rectKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.rectkeypoints2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

