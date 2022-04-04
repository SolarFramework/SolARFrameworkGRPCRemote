// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMaskOverlay_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMaskOverlay::IMaskOverlay_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMaskOverlay::IMaskOverlay_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMaskOverlay {

IMaskOverlay_grpcProxy::IMaskOverlay_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMaskOverlay_grpcProxy>())
{
  declareInterface<SolAR::api::display::IMaskOverlay>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMaskOverlay_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMaskOverlay_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMaskOverlay::grpcIMaskOverlayService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMaskOverlay_grpcProxy::draw(SRef<SolAR::datastructure::Image> image, std::vector<SolAR::datastructure::Rectanglei> const& boxes, std::vector<SRef<SolAR::datastructure::Image>> const& masks, std::vector<uint32_t> const& classIds, std::vector<float> const& scores)
{
  ::grpc::ClientContext context;
  ::grpcIMaskOverlay::draw_grpc0Request reqIn;
  ::grpcIMaskOverlay::draw_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_boxes(xpcf::serialize<std::vector<SolAR::datastructure::Rectanglei>>(boxes));
  reqIn.set_masks(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(masks));
  reqIn.set_classids(xpcf::serialize<std::vector<uint32_t>>(classIds));
  reqIn.set_scores(xpcf::serialize<std::vector<float>>(scores));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMaskOverlayService","draw_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMaskOverlay_grpcProxy::draw(SRef<SolAR::datastructure::Image> image, SRef<SolAR::datastructure::Image> const mask)
{
  ::grpc::ClientContext context;
  ::grpcIMaskOverlay::draw_grpc1Request reqIn;
  ::grpcIMaskOverlay::draw_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_mask(xpcf::serialize<SRef<SolAR::datastructure::Image>>(mask));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMaskOverlayService","draw_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

