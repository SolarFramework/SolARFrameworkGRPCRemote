// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ITracking_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyITracking {

ITracking_grpcProxy::ITracking_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ITracking_grpcProxy>())
{
  declareInterface<SolAR::api::slam::ITracking>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(5);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void ITracking_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITracking_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcITracking::grpcITrackingService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ITracking_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcITracking::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ITracking_grpcProxy::setNewKeyframe(SRef<SolAR::datastructure::Keyframe> const newKeyframe)
{
  ::grpc::ClientContext context;
  ::grpcITracking::setNewKeyframeRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_newkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(newKeyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::setNewKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setNewKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::setNewKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setNewKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","setNewKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


bool  ITracking_grpcProxy::checkNeedNewKeyframe()
{
  ::grpc::ClientContext context;
  ::grpcITracking::checkNeedNewKeyframeRequest reqIn;
  ::grpcITracking::checkNeedNewKeyframeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "checkNeedNewKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::checkNeedNewKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->checkNeedNewKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::checkNeedNewKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "checkNeedNewKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","checkNeedNewKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  ITracking_grpcProxy::process(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Image>& displayImage)
{
  ::grpc::ClientContext context;
  ::grpcITracking::processRequest reqIn;
  ::grpcITracking::processResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "process", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::process request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->process(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcProxy::process response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "process rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","process",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.displayimage());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

