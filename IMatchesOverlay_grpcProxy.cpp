// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMatchesOverlay_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMatchesOverlay::IMatchesOverlay_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMatchesOverlay::IMatchesOverlay_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMatchesOverlay {

IMatchesOverlay_grpcProxy::IMatchesOverlay_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMatchesOverlay_grpcProxy>())
{
  declareInterface<SolAR::api::display::IMatchesOverlay>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(5);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMatchesOverlay_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMatchesOverlay_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMatchesOverlay::grpcIMatchesOverlayService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IMatchesOverlay_grpcProxy::draw(SRef<SolAR::datastructure::Image> const image1, SRef<SolAR::datastructure::Image> const image2, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Point2Df> const& points_image1, std::vector<SolAR::datastructure::Point2Df> const& points_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)
{
  ::grpc::ClientContext context;
  ::grpcIMatchesOverlay::draw_grpc0Request reqIn;
  ::grpcIMatchesOverlay::draw_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image1(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image1));
  reqIn.set_image2(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image2));
  reqIn.set_points_image1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points_image1));
  reqIn.set_points_image2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points_image2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMatchesOverlayService","draw_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.outimage());
}


void  IMatchesOverlay_grpcProxy::draw(SRef<SolAR::datastructure::Image> const image1, SRef<SolAR::datastructure::Image> const image2, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image1, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)
{
  ::grpc::ClientContext context;
  ::grpcIMatchesOverlay::draw_grpc1Request reqIn;
  ::grpcIMatchesOverlay::draw_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image1(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image1));
  reqIn.set_image2(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image2));
  reqIn.set_keypoints_image1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints_image1));
  reqIn.set_keypoints_image2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints_image2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMatchesOverlayService","draw_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.outimage());
}


void  IMatchesOverlay_grpcProxy::draw(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Point2Df> const& points_image1, std::vector<SolAR::datastructure::Point2Df> const& points_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)
{
  ::grpc::ClientContext context;
  ::grpcIMatchesOverlay::draw_grpc2Request reqIn;
  ::grpcIMatchesOverlay::draw_grpc2Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_points_image1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points_image1));
  reqIn.set_points_image2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points_image2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw_grpc2(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw_grpc2 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMatchesOverlayService","draw_grpc2",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.outimage());
}


void  IMatchesOverlay_grpcProxy::draw(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& outImage, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image1, std::vector<SolAR::datastructure::Keypoint> const& keypoints_image2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches)
{
  ::grpc::ClientContext context;
  ::grpcIMatchesOverlay::draw_grpc3Request reqIn;
  ::grpcIMatchesOverlay::draw_grpc3Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_keypoints_image1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints_image1));
  reqIn.set_keypoints_image2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints_image2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw_grpc3(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw_grpc3 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMatchesOverlayService","draw_grpc3",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.outimage());
}


}

