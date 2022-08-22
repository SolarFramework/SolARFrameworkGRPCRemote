// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherGeometric_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric {

IDescriptorMatcherGeometric_grpcProxy::IDescriptorMatcherGeometric_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherGeometric_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorMatcherGeometric>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IDescriptorMatcherGeometric_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherGeometric_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorMatcherGeometric::grpcIDescriptorMatcherGeometricService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDescriptorMatcherGeometric_grpcProxy::match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors2, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints1, std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints2, SolAR::datastructure::Transform3Df const& pose1, SolAR::datastructure::Transform3Df const& pose2, SolAR::datastructure::CameraParameters const& camParams1, SolAR::datastructure::CameraParameters const& camParams2, std::vector<SolAR::datastructure::DescriptorMatch>& matches, std::vector<uint32_t> const& mask)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherGeometric::match_grpc0Request reqIn;
  ::grpcIDescriptorMatcherGeometric::match_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_descriptors1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors1));
  reqIn.set_descriptors2(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors2));
  reqIn.set_undistortedkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(undistortedKeypoints1));
  reqIn.set_undistortedkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(undistortedKeypoints2));
  reqIn.set_pose1(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose1));
  reqIn.set_pose2(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose2));
  reqIn.set_camparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams1));
  reqIn.set_camparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams2));
  reqIn.set_mask(xpcf::serialize<std::vector<uint32_t>>(mask));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherGeometric_grpcProxy::match request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherGeometric_grpcProxy::match response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherGeometricService","match_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDescriptorMatcherGeometric_grpcProxy::match(SRef<SolAR::datastructure::Frame> const frame1, SRef<SolAR::datastructure::Frame> const frame2, std::vector<SolAR::datastructure::DescriptorMatch>& matches, std::vector<uint32_t> const& mask)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorMatcherGeometric::match_grpc1Request reqIn;
  ::grpcIDescriptorMatcherGeometric::match_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_frame1(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame1));
  reqIn.set_frame2(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame2));
  reqIn.set_mask(xpcf::serialize<std::vector<uint32_t>>(mask));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherGeometric_grpcProxy::match request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherGeometric_grpcProxy::match response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorMatcherGeometricService","match_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

