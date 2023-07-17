// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IOverlapDetector_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIOverlapDetector {

IOverlapDetector_grpcProxy::IOverlapDetector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IOverlapDetector_grpcProxy>())
{
  declareInterface<SolAR::api::loop::IOverlapDetector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IOverlapDetector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IOverlapDetector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIOverlapDetector::grpcIOverlapDetectorService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IOverlapDetector_grpcProxy::detect(SRef<SolAR::datastructure::Map> const globalMap, SRef<SolAR::datastructure::Map> const floatingMap, SolAR::datastructure::Transform3Df& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& cpOverlapIndices) const
{
  ::grpc::ClientContext context;
  ::grpcIOverlapDetector::detect_grpc0Request reqIn;
  ::grpcIOverlapDetector::detect_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_globalmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(globalMap));
  reqIn.set_floatingmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(floatingMap));
  reqIn.set_sim3transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(sim3Transform));
  reqIn.set_cpoverlapindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(cpOverlapIndices));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcProxy::detect request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcProxy::detect response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detect_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOverlapDetectorService","detect_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  sim3Transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.sim3transform());
  cpOverlapIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(respOut.cpoverlapindices());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IOverlapDetector_grpcProxy::detect(SRef<SolAR::datastructure::Map> const globalMap, SRef<SolAR::datastructure::Map> const floatingMap, std::vector<SolAR::datastructure::Transform3Df>& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& overlapIndices, std::vector<double>& scores) const
{
  ::grpc::ClientContext context;
  ::grpcIOverlapDetector::detect_grpc1Request reqIn;
  ::grpcIOverlapDetector::detect_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_globalmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(globalMap));
  reqIn.set_floatingmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(floatingMap));
  reqIn.set_sim3transform(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(sim3Transform));
  reqIn.set_overlapindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(overlapIndices));
  reqIn.set_scores(xpcf::serialize<std::vector<double>>(scores));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcProxy::detect request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcProxy::detect response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detect_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOverlapDetectorService","detect_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  sim3Transform = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.sim3transform());
  overlapIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(respOut.overlapindices());
  scores = xpcf::deserialize<std::vector<double>>(respOut.scores());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

