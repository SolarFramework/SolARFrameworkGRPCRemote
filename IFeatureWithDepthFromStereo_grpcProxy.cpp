// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IFeatureWithDepthFromStereo_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo {

IFeatureWithDepthFromStereo_grpcProxy::IFeatureWithDepthFromStereo_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IFeatureWithDepthFromStereo_grpcProxy>())
{
  declareInterface<SolAR::api::features::IFeatureWithDepthFromStereo>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IFeatureWithDepthFromStereo_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IFeatureWithDepthFromStereo_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIFeatureWithDepthFromStereo::grpcIFeatureWithDepthFromStereoService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IFeatureWithDepthFromStereo_grpcProxy::setRectificationParameters(SolAR::datastructure::CameraParameters const& camParams1, SolAR::datastructure::CameraParameters const& camParams2, SolAR::datastructure::RectificationParameters const& rectParams1, SolAR::datastructure::RectificationParameters const& rectParams2)
{
  ::grpc::ClientContext context;
  ::grpcIFeatureWithDepthFromStereo::setRectificationParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_camparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams1));
  reqIn.set_camparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams2));
  reqIn.set_rectparams1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams1));
  reqIn.set_rectparams2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcProxy::setRectificationParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setRectificationParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcProxy::setRectificationParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setRectificationParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFeatureWithDepthFromStereoService","setRectificationParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IFeatureWithDepthFromStereo_grpcProxy::compute(SRef<SolAR::datastructure::Image> image1, SRef<SolAR::datastructure::Image> image2, SRef<SolAR::datastructure::Frame>& frame1, SRef<SolAR::datastructure::Frame>& frame2)
{
  ::grpc::ClientContext context;
  ::grpcIFeatureWithDepthFromStereo::computeRequest reqIn;
  ::grpcIFeatureWithDepthFromStereo::computeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "compute", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image1(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image1));
  reqIn.set_image2(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image2));
  reqIn.set_frame1(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame1));
  reqIn.set_frame2(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcProxy::compute request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->compute(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcProxy::compute response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "compute rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFeatureWithDepthFromStereoService","compute",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  frame1 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(respOut.frame1());
  frame2 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(respOut.frame2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

