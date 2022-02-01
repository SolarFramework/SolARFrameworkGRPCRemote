// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DPointsViewer_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DPointsViewer::I3DPointsViewer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DPointsViewer::I3DPointsViewer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DPointsViewer {

I3DPointsViewer_grpcProxy::I3DPointsViewer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DPointsViewer_grpcProxy>())
{
  declareInterface<SolAR::api::display::I3DPointsViewer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I3DPointsViewer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DPointsViewer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DPointsViewer::grpcI3DPointsViewerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I3DPointsViewer_grpcProxy::display(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& points, SolAR::datastructure::Transform3Df const& pose, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses, std::vector<SolAR::datastructure::Transform3Df> const& framePoses, std::vector<SRef<SolAR::datastructure::CloudPoint>> const& points2, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses2)
{
  ::grpc::ClientContext context;
  ::grpcI3DPointsViewer::display_grpc0Request reqIn;
  ::grpcI3DPointsViewer::display_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "display", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  reqIn.set_frameposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(framePoses));
  reqIn.set_points2(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points2));
  reqIn.set_keyframeposes2(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcProxy::display request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->display_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcProxy::display response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "display_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DPointsViewerService","display_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DPointsViewer_grpcProxy::display(SRef<SolAR::datastructure::PointCloud> const points, SolAR::datastructure::Transform3Df const& pose, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses, std::vector<SolAR::datastructure::Transform3Df> const& framePoses, SRef<SolAR::datastructure::PointCloud> const points2, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses2)
{
  ::grpc::ClientContext context;
  ::grpcI3DPointsViewer::display_grpc1Request reqIn;
  ::grpcI3DPointsViewer::display_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "display", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_points(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(points));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  reqIn.set_frameposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(framePoses));
  reqIn.set_points2(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(points2));
  reqIn.set_keyframeposes2(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcProxy::display request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->display_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcProxy::display response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "display_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DPointsViewerService","display_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

