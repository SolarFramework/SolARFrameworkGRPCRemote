// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2DPointsRectification_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2DPointsRectification::I2DPointsRectification_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2DPointsRectification::I2DPointsRectification_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2DPointsRectification {

I2DPointsRectification_grpcProxy::I2DPointsRectification_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2DPointsRectification_grpcProxy>())
{
  declareInterface<SolAR::api::geom::I2DPointsRectification>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I2DPointsRectification_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DPointsRectification_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2DPointsRectification::grpcI2DPointsRectificationService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I2DPointsRectification_grpcProxy::rectify(std::vector<SolAR::datastructure::Point2Df> const& points2D, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::RectificationParameters const& rectParams, std::vector<SolAR::datastructure::Point2Df>& rectifiedPoints2D)
{
  ::grpc::ClientContext context;
  ::grpcI2DPointsRectification::rectify_grpc0Request reqIn;
  ::grpcI2DPointsRectification::rectify_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "rectify", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_points2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  reqIn.set_rectparams(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams));
  reqIn.set_rectifiedpoints2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(rectifiedPoints2D));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DPointsRectification_grpcProxy::rectify request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->rectify_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DPointsRectification_grpcProxy::rectify response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "rectify_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DPointsRectificationService","rectify_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  rectifiedPoints2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.rectifiedpoints2d());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I2DPointsRectification_grpcProxy::rectify(std::vector<SolAR::datastructure::Keypoint> const& keypoints, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::RectificationParameters const& rectParams, std::vector<SolAR::datastructure::Keypoint>& rectifiedKeypoints)
{
  ::grpc::ClientContext context;
  ::grpcI2DPointsRectification::rectify_grpc1Request reqIn;
  ::grpcI2DPointsRectification::rectify_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "rectify", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  reqIn.set_rectparams(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams));
  reqIn.set_rectifiedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectifiedKeypoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DPointsRectification_grpcProxy::rectify request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->rectify_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DPointsRectification_grpcProxy::rectify response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "rectify_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DPointsRectificationService","rectify_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  rectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.rectifiedkeypoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

