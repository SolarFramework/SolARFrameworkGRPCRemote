// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ISemanticSegmentation_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyISemanticSegmentation::ISemanticSegmentation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyISemanticSegmentation::ISemanticSegmentation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyISemanticSegmentation {

ISemanticSegmentation_grpcProxy::ISemanticSegmentation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ISemanticSegmentation_grpcProxy>())
{
  declareInterface<SolAR::api::segm::ISemanticSegmentation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void ISemanticSegmentation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ISemanticSegmentation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcISemanticSegmentation::grpcISemanticSegmentationService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ISemanticSegmentation_grpcProxy::segment(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& mask)
{
  ::grpc::ClientContext context;
  ::grpcISemanticSegmentation::segmentRequest reqIn;
  ::grpcISemanticSegmentation::segmentResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "segment", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_mask(xpcf::serialize<SRef<SolAR::datastructure::Image>>(mask));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISemanticSegmentation_grpcProxy::segment request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->segment(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISemanticSegmentation_grpcProxy::segment response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "segment rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcISemanticSegmentationService","segment",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mask = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.mask());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

