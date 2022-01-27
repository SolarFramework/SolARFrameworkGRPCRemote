// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IContoursExtractor_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIContoursExtractor {

IContoursExtractor_grpcProxy::IContoursExtractor_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IContoursExtractor_grpcProxy>())
{
  declareInterface<SolAR::api::features::IContoursExtractor>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IContoursExtractor_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursExtractor_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIContoursExtractor::grpcIContoursExtractorService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IContoursExtractor_grpcProxy::extract(SRef<SolAR::datastructure::Image> const inputImg, std::vector<SolAR::datastructure::Contour2Df>& contours)
{
  ::grpc::ClientContext context;
  ::grpcIContoursExtractor::extractRequest reqIn;
  ::grpcIContoursExtractor::extractResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "extract", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(inputImg));
  reqIn.set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(contours));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursExtractor_grpcProxy::extract request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursExtractor_grpcProxy::extract response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIContoursExtractorService","extract",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(respOut.contours());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

