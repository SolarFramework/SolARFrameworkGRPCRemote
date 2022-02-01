// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ISBPatternReIndexer_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyISBPatternReIndexer {

ISBPatternReIndexer_grpcProxy::ISBPatternReIndexer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ISBPatternReIndexer_grpcProxy>())
{
  declareInterface<SolAR::api::features::ISBPatternReIndexer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void ISBPatternReIndexer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ISBPatternReIndexer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcISBPatternReIndexer::grpcISBPatternReIndexerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ISBPatternReIndexer_grpcProxy::reindex(std::vector<SolAR::datastructure::Contour2Df> const& candidateContours, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point2Df>& patternPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints)
{
  ::grpc::ClientContext context;
  ::grpcISBPatternReIndexer::reindexRequest reqIn;
  ::grpcISBPatternReIndexer::reindexResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "reindex", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_candidatecontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(candidateContours));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_patternpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(patternPoints));
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISBPatternReIndexer_grpcProxy::reindex request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reindex(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISBPatternReIndexer_grpcProxy::reindex response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reindex rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcISBPatternReIndexerService","reindex",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  patternPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.patternpoints());
  imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.imagepoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

