// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractor_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractor {

IDescriptorsExtractor_grpcProxy::IDescriptorsExtractor_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractor_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorsExtractor>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IDescriptorsExtractor_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractor_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorsExtractor::grpcIDescriptorsExtractorService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


std::string  IDescriptorsExtractor_grpcProxy::getTypeString()
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorsExtractor::getTypeStringRequest reqIn;
  ::grpcIDescriptorsExtractor::getTypeStringResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getTypeString", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractor_grpcProxy::getTypeString request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getTypeString(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractor_grpcProxy::getTypeString response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTypeString rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorService","getTypeString",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IDescriptorsExtractor_grpcProxy::extract(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint> const& keypoints, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorsExtractor::extractRequest reqIn;
  ::grpcIDescriptorsExtractor::extractResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "extract", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractor_grpcProxy::extract request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractor_grpcProxy::extract response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorService","extract",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(respOut.descriptors());
}


}

