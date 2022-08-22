// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DTransformSACFinderFrom3D3D_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D {

I3DTransformSACFinderFrom3D3D_grpcProxy::I3DTransformSACFinderFrom3D3D_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformSACFinderFrom3D3D_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I3DTransformSACFinderFrom3D3D>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I3DTransformSACFinderFrom3D3D_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformSACFinderFrom3D3D_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DTransformSACFinderFrom3D3D::grpcI3DTransformSACFinderFrom3D3DService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I3DTransformSACFinderFrom3D3D_grpcProxy::estimate(std::vector<SolAR::datastructure::Point3Df> const& firstPoints3D, std::vector<SolAR::datastructure::Point3Df> const& secondPoints3D, SolAR::datastructure::Transform3Df& pose, std::vector<int>& inliers)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Request reqIn;
  ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_firstpoints3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(firstPoints3D));
  reqIn.set_secondpoints3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(secondPoints3D));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_inliers(xpcf::serialize<std::vector<int>>(inliers));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcProxy::estimate request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcProxy::estimate response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformSACFinderFrom3D3DService","estimate_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  inliers = xpcf::deserialize<std::vector<int>>(respOut.inliers());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransformSACFinderFrom3D3D_grpcProxy::estimate(SRef<SolAR::datastructure::Keyframe> const firstKeyframe, SRef<SolAR::datastructure::Keyframe> const secondKeyframe, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point3Df> const& firstPoints3D, std::vector<SolAR::datastructure::Point3Df> const& secondPoints3D, SolAR::datastructure::Transform3Df& pose, std::vector<int>& inliers)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Request reqIn;
  ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_firstkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(firstKeyframe));
  reqIn.set_secondkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(secondKeyframe));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_firstpoints3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(firstPoints3D));
  reqIn.set_secondpoints3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(secondPoints3D));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_inliers(xpcf::serialize<std::vector<int>>(inliers));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcProxy::estimate request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcProxy::estimate response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformSACFinderFrom3D3DService","estimate_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  inliers = xpcf::deserialize<std::vector<int>>(respOut.inliers());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

