// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2DTransform_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2DTransform {

I2DTransform_grpcProxy::I2DTransform_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2DTransform_grpcProxy>())
{
  declareInterface<SolAR::api::geom::I2DTransform>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I2DTransform_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTransform_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2DTransform::grpcI2DTransformService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I2DTransform_grpcProxy::transform(std::vector<SolAR::datastructure::Point2Df> const& inputPoints, SolAR::datastructure::Transform2Df const& transformation, std::vector<SolAR::datastructure::Point2Df>& outputPoints)
{
  ::grpc::ClientContext context;
  ::grpcI2DTransform::transformRequest reqIn;
  ::grpcI2DTransform::transformResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "transform", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(inputPoints));
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform2Df>(transformation));
  reqIn.set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTransform_grpcProxy::transform request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transform(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTransform_grpcProxy::transform response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transform rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DTransformService","transform",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.outputpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

