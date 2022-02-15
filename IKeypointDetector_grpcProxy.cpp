// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeypointDetector_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeypointDetector {

IKeypointDetector_grpcProxy::IKeypointDetector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeypointDetector_grpcProxy>())
{
  declareInterface<SolAR::api::features::IKeypointDetector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IKeypointDetector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointDetector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeypointDetector::grpcIKeypointDetectorService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IKeypointDetector_grpcProxy::setType(SolAR::api::features::IKeypointDetector::KeypointDetectorType type)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetector::setTypeRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_type(static_cast<int32_t>(type));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcProxy::setType request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setType(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcProxy::setType response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setType rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorService","setType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::api::features::IKeypointDetector::KeypointDetectorType  IKeypointDetector_grpcProxy::getType()
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetector::getTypeRequest reqIn;
  ::grpcIKeypointDetector::getTypeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getType", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcProxy::getType request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getType(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcProxy::getType response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getType rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorService","getType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::api::features::IKeypointDetector::KeypointDetectorType>(respOut.xpcfgrpcreturnvalue());
}


void  IKeypointDetector_grpcProxy::detect(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint>& keypoints)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetector::detectRequest reqIn;
  ::grpcIKeypointDetector::detectResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcProxy::detect request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcProxy::detect response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detect rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorService","detect",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.keypoints());
}


}

