// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom3D3D_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D {

I3DTransformFinderFrom3D3D_grpcProxy::I3DTransformFinderFrom3D3D_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom3D3D_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I3DTransformFinderFrom3D3D>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I3DTransformFinderFrom3D3D_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom3D3D_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DTransformFinderFrom3D3D::grpcI3DTransformFinderFrom3D3DService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I3DTransformFinderFrom3D3D_grpcProxy::estimate(SRef<SolAR::datastructure::PointCloud> const sourcePointCloud, SRef<SolAR::datastructure::PointCloud> const targetPointCloud, SolAR::datastructure::Transform3Df& pose, SolAR::datastructure::Transform3Df const& initialPose)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformFinderFrom3D3D::estimateRequest reqIn;
  ::grpcI3DTransformFinderFrom3D3D::estimateResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_sourcepointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(sourcePointCloud));
  reqIn.set_targetpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(targetPointCloud));
  reqIn.set_initialpose(xpcf::serialize<SolAR::datastructure::Transform3Df>(initialPose));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom3D3D_grpcProxy::estimate request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom3D3D_grpcProxy::estimate response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformFinderFrom3D3DService","estimate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

