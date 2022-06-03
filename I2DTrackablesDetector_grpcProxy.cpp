// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2DTrackablesDetector_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2DTrackablesDetector::I2DTrackablesDetector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2DTrackablesDetector::I2DTrackablesDetector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2DTrackablesDetector {

I2DTrackablesDetector_grpcProxy::I2DTrackablesDetector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2DTrackablesDetector_grpcProxy>())
{
  declareInterface<SolAR::api::features::I2DTrackablesDetector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I2DTrackablesDetector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTrackablesDetector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2DTrackablesDetector::grpcI2DTrackablesDetectorService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I2DTrackablesDetector_grpcProxy::setTrackables(std::vector<SRef<SolAR::datastructure::Trackable>> const trackables)
{
  ::grpc::ClientContext context;
  ::grpcI2DTrackablesDetector::setTrackablesRequest reqIn;
  ::grpcI2DTrackablesDetector::setTrackablesResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setTrackables", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_trackables(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(trackables));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcProxy::setTrackables request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setTrackables(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcProxy::setTrackables response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setTrackables rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DTrackablesDetectorService","setTrackables",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I2DTrackablesDetector_grpcProxy::detect(SRef<SolAR::datastructure::Image> const image, std::vector<std::vector<SolAR::datastructure::Point2Df>>& corners)
{
  ::grpc::ClientContext context;
  ::grpcI2DTrackablesDetector::detectRequest reqIn;
  ::grpcI2DTrackablesDetector::detectResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_corners(xpcf::serialize<std::vector<std::vector<SolAR::datastructure::Point2Df>>>(corners));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcProxy::detect request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcProxy::detect response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detect rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DTrackablesDetectorService","detect",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  corners = xpcf::deserialize<std::vector<std::vector<SolAR::datastructure::Point2Df>>>(respOut.corners());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

