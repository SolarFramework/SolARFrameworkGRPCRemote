// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DTransform_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DTransform::I3DTransform_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DTransform::I3DTransform_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DTransform {

I3DTransform_grpcProxy::I3DTransform_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DTransform_grpcProxy>())
{
  declareInterface<SolAR::api::geom::I3DTransform>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(7);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I3DTransform_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransform_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DTransform::grpcI3DTransformService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I3DTransform_grpcProxy::transform(std::vector<SolAR::datastructure::Point3Df> const& inputPoints, SolAR::datastructure::Transform3Df const& transformation, std::vector<SolAR::datastructure::Point3Df>& outputPoints)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransform::transformRequest reqIn;
  ::grpcI3DTransform::transformResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transform", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(inputPoints));
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(outputPoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transform request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transform(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transform response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transform rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformService","transform",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(respOut.outputpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransform_grpcProxy::transformInPlace(SolAR::datastructure::Transform3Df const& transformation, SRef<SolAR::datastructure::Map> map)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransform::transformInPlace_grpc0Request reqIn;
  ::grpcI3DTransform::transformInPlace_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transformInPlace", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transformInPlace_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transformInPlace_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformService","transformInPlace_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransform_grpcProxy::transformInPlace(SolAR::datastructure::Transform3Df const& transformation, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pointCloud)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransform::transformInPlace_grpc1Request reqIn;
  ::grpcI3DTransform::transformInPlace_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transformInPlace", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transformInPlace_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transformInPlace_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformService","transformInPlace_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransform_grpcProxy::transformInPlace(SolAR::datastructure::Transform3Df const& transformation, std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransform::transformInPlace_grpc2Request reqIn;
  ::grpcI3DTransform::transformInPlace_grpc2Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transformInPlace", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transformInPlace_grpc2(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transformInPlace_grpc2 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformService","transformInPlace_grpc2",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(respOut.keyframes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransform_grpcProxy::transformInPlace(SolAR::datastructure::Transform3Df const& transformation, SRef<SolAR::datastructure::PointCloud> pointCloud)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransform::transformInPlace_grpc3Request reqIn;
  ::grpcI3DTransform::transformInPlace_grpc3Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transformInPlace", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transformInPlace_grpc3(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transformInPlace_grpc3 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformService","transformInPlace_grpc3",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransform_grpcProxy::transformInPlace(SolAR::datastructure::Transform3Df const& transformation, SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransform::transformInPlace_grpc4Request reqIn;
  ::grpcI3DTransform::transformInPlace_grpc4Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transformInPlace", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transformInPlace_grpc4(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransform_grpcProxy::transformInPlace response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transformInPlace_grpc4 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformService","transformInPlace_grpc4",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

