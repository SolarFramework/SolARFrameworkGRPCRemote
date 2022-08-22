// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DOverlay_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DOverlay {

I3DOverlay_grpcProxy::I3DOverlay_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DOverlay_grpcProxy>())
{
  declareInterface<SolAR::api::display::I3DOverlay>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I3DOverlay_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DOverlay_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DOverlay::grpcI3DOverlayService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I3DOverlay_grpcProxy::draw(SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CameraParameters const& camParams, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI3DOverlay::drawRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DOverlay_grpcProxy::draw request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DOverlay_grpcProxy::draw response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DOverlayService","draw",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

