// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICamera_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICamera {

ICamera_grpcProxy::ICamera_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICamera_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::ICamera>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(12);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void ICamera_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICamera_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICamera::grpcICameraService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ICamera_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcICamera::startRequest reqIn;
  ::grpcICamera::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICamera_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcICamera::stopRequest reqIn;
  ::grpcICamera::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ICamera_grpcProxy::getNextImage(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcICamera::getNextImageRequest reqIn;
  ::grpcICamera::getNextImageResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getNextImage", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getNextImage request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextImage(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getNextImage response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextImage rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getNextImage",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


void  ICamera_grpcProxy::setResolution(SolAR::datastructure::Sizei const& resolution)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setResolutionRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setResolution request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setResolution(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setResolution response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setResolution rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ICamera_grpcProxy::setIntrinsicParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setIntrinsicParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setIntrinsicParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setIntrinsicParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setIntrinsicParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ICamera_grpcProxy::setDistortionParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setDistortionParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setDistortionParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setDistortionParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ICamera_grpcProxy::setParameters(SolAR::datastructure::CameraParameters const& parameters)
{
  ::grpc::ClientContext context;
  ::grpcICamera::setParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_parameters(xpcf::serialize<SolAR::datastructure::CameraParameters>(parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::setParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","setParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::datastructure::Sizei  ICamera_grpcProxy::getResolution() const
{
  ::grpc::ClientContext context;
  ::grpcICamera::getResolutionRequest reqIn;
  ::grpcICamera::getResolutionResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getResolution", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getResolution request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getResolution(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getResolution response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getResolution rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::CamCalibration const&  ICamera_grpcProxy::getIntrinsicsParameters() const
{
  ::grpc::ClientContext context;
  ::grpcICamera::getIntrinsicsParametersRequest reqIn;
  ::grpcICamera::getIntrinsicsParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getIntrinsicsParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getIntrinsicsParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getIntrinsicsParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getIntrinsicsParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsParameters;
}


SolAR::datastructure::CameraParameters const&  ICamera_grpcProxy::getParameters() const
{
  ::grpc::ClientContext context;
  ::grpcICamera::getParametersRequest reqIn;
  ::grpcICamera::getParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getParameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.xpcfgrpcreturnvalue());
  return m_getParameters;
}


SolAR::datastructure::CamDistortion const&  ICamera_grpcProxy::getDistortionParameters() const
{
  ::grpc::ClientContext context;
  ::grpcICamera::getDistortionParametersRequest reqIn;
  ::grpcICamera::getDistortionParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDistortionParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getDistortionParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICamera_grpcProxy::getDistortionParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraService","getDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionParameters;
}


}

