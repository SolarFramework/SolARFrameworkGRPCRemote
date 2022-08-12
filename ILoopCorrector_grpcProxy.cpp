// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ILoopCorrector_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyILoopCorrector {

ILoopCorrector_grpcProxy::ILoopCorrector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ILoopCorrector_grpcProxy>())
{
  declareInterface<SolAR::api::loop::ILoopCorrector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void ILoopCorrector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopCorrector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcILoopCorrector::grpcILoopCorrectorService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ILoopCorrector_grpcProxy::correct(SRef<SolAR::datastructure::Keyframe> const queryKeyframe, SRef<SolAR::datastructure::Keyframe> const detectedLoopKeyframe, SolAR::datastructure::Transform3Df const& S_wl_wc, std::vector<std::pair<uint32_t,uint32_t>> const& duplicatedPointsIndices)
{
  ::grpc::ClientContext context;
  ::grpcILoopCorrector::correctRequest reqIn;
  ::grpcILoopCorrector::correctResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "correct", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_querykeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(queryKeyframe));
  reqIn.set_detectedloopkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(detectedLoopKeyframe));
  reqIn.set_s_wl_wc(xpcf::serialize<SolAR::datastructure::Transform3Df>(S_wl_wc));
  reqIn.set_duplicatedpointsindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(duplicatedPointsIndices));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ILoopCorrector_grpcProxy::correct request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->correct(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ILoopCorrector_grpcProxy::correct response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "correct rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcILoopCorrectorService","correct",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

