// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IRGBDCamera_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIRGBDCamera {

IRGBDCamera_grpcProxy::IRGBDCamera_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IRGBDCamera_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IRGBDCamera>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(27);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IRGBDCamera_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRGBDCamera_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIRGBDCamera::grpcIRGBDCameraService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::startRequest reqIn;
  ::grpcIRGBDCamera::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::stopRequest reqIn;
  ::grpcIRGBDCamera::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getNextImage(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getNextImageRequest reqIn;
  ::grpcIRGBDCamera::getNextImageResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getNextImage", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getNextImage request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextImage(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getNextImage response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextImage rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getNextImage",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


void  IRGBDCamera_grpcProxy::setResolution(SolAR::datastructure::Sizei const& resolution)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setResolutionRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setResolution request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setResolution(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setResolution response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setResolution rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IRGBDCamera_grpcProxy::setIntrinsicParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setIntrinsicParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setIntrinsicParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setIntrinsicParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setIntrinsicParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IRGBDCamera_grpcProxy::setDistortionParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setDistortionParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setDistortionParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setDistortionParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IRGBDCamera_grpcProxy::setParameters(SolAR::datastructure::CameraParameters const& parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_parameters(xpcf::serialize<SolAR::datastructure::CameraParameters>(parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::datastructure::Sizei  IRGBDCamera_grpcProxy::getResolution() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getResolutionRequest reqIn;
  ::grpcIRGBDCamera::getResolutionResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getResolution", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getResolution request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getResolution(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getResolution response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getResolution rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::CamCalibration const&  IRGBDCamera_grpcProxy::getIntrinsicsParameters() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getIntrinsicsParametersRequest reqIn;
  ::grpcIRGBDCamera::getIntrinsicsParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getIntrinsicsParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getIntrinsicsParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getIntrinsicsParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getIntrinsicsParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsParameters;
}


SolAR::datastructure::CameraParameters const&  IRGBDCamera_grpcProxy::getParameters() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getParametersRequest reqIn;
  ::grpcIRGBDCamera::getParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getParameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.xpcfgrpcreturnvalue());
  return m_getParameters;
}


SolAR::datastructure::CamDistortion const&  IRGBDCamera_grpcProxy::getDistortionParameters() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getDistortionParametersRequest reqIn;
  ::grpcIRGBDCamera::getDistortionParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDistortionParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDistortionParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDistortionParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDistortionParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionParameters;
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getNextDepthFrame(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getNextDepthFrameRequest reqIn;
  ::grpcIRGBDCamera::getNextDepthFrameResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getNextDepthFrame", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getNextDepthFrame request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextDepthFrame(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getNextDepthFrame response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextDepthFrame rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getNextDepthFrame",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getPointCloud(SRef<SolAR::datastructure::PointCloud>& pc)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getPointCloudRequest reqIn;
  ::grpcIRGBDCamera::getPointCloudResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getPointCloud", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getPointCloud request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPointCloud(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getPointCloud response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointCloud rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pc());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::setDepthResolution(SolAR::datastructure::Sizei resolution)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setDepthResolutionRequest reqIn;
  ::grpcIRGBDCamera::setDepthResolutionResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setDepthResolution", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_resolution(xpcf::serialize<SolAR::datastructure::Sizei>(resolution));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setDepthResolution request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDepthResolution(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setDepthResolution response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDepthResolution rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setDepthResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::setIntrinsicDepthParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setIntrinsicDepthParametersRequest reqIn;
  ::grpcIRGBDCamera::setIntrinsicDepthParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setIntrinsicDepthParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setIntrinsicDepthParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setIntrinsicDepthParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setIntrinsicDepthParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setIntrinsicDepthParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setIntrinsicDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::setDistortionDepthParameters(SolAR::datastructure::CamDistortion const& distortion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::setDistortionDepthParametersRequest reqIn;
  ::grpcIRGBDCamera::setDistortionDepthParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setDistortionDepthParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_distortion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortion_parameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setDistortionDepthParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDistortionDepthParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::setDistortionDepthParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDistortionDepthParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","setDistortionDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Sizei  IRGBDCamera_grpcProxy::getDepthResolution() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getDepthResolutionRequest reqIn;
  ::grpcIRGBDCamera::getDepthResolutionResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDepthResolution", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDepthResolution request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDepthResolution(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDepthResolution response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDepthResolution rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDepthResolution",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Sizei>(respOut.xpcfgrpcreturnvalue());
}


float  IRGBDCamera_grpcProxy::getDepthMinDistance() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getDepthMinDistanceRequest reqIn;
  ::grpcIRGBDCamera::getDepthMinDistanceResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDepthMinDistance", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDepthMinDistance request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDepthMinDistance(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDepthMinDistance response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDepthMinDistance rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDepthMinDistance",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::datastructure::CamCalibration const&  IRGBDCamera_grpcProxy::getIntrinsicsDepthParameters() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getIntrinsicsDepthParametersRequest reqIn;
  ::grpcIRGBDCamera::getIntrinsicsDepthParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getIntrinsicsDepthParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getIntrinsicsDepthParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getIntrinsicsDepthParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getIntrinsicsDepthParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getIntrinsicsDepthParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getIntrinsicsDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getIntrinsicsDepthParameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.xpcfgrpcreturnvalue());
  return m_getIntrinsicsDepthParameters;
}


SolAR::datastructure::CamDistortion const&  IRGBDCamera_grpcProxy::getDistortionDepthParameters() const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getDistortionDepthParametersRequest reqIn;
  ::grpcIRGBDCamera::getDistortionDepthParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDistortionDepthParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDistortionDepthParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDistortionDepthParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getDistortionDepthParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDistortionDepthParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getDistortionDepthParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  m_getDistortionDepthParameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.xpcfgrpcreturnvalue());
  return m_getDistortionDepthParameters;
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::getNextRGBDFrame(SRef<SolAR::datastructure::Image>& colorImg, SRef<SolAR::datastructure::Image>& depthImg)
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getNextRGBDFrameRequest reqIn;
  ::grpcIRGBDCamera::getNextRGBDFrameResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getNextRGBDFrame", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_colorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(colorImg));
  reqIn.set_depthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(depthImg));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getNextRGBDFrame request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNextRGBDFrame(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getNextRGBDFrame response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNextRGBDFrame rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getNextRGBDFrame",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  colorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.colorimg());
  depthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.depthimg());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::alignDepthToColor(SRef<SolAR::datastructure::Image>& alignedDepthImg) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::alignDepthToColorRequest reqIn;
  ::grpcIRGBDCamera::alignDepthToColorResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "alignDepthToColor", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_aligneddepthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedDepthImg));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::alignDepthToColor request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->alignDepthToColor(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::alignDepthToColor response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "alignDepthToColor rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","alignDepthToColor",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  alignedDepthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.aligneddepthimg());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRGBDCamera_grpcProxy::alignColorToDepth(SRef<SolAR::datastructure::Image>& alignedColorImg) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::alignColorToDepthRequest reqIn;
  ::grpcIRGBDCamera::alignColorToDepthResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "alignColorToDepth", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_alignedcolorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedColorImg));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::alignColorToDepth request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->alignColorToDepth(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::alignColorToDepth response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "alignColorToDepth rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","alignColorToDepth",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  alignedColorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.alignedcolorimg());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Point3Df  IRGBDCamera_grpcProxy::getPixelToWorld(SolAR::datastructure::Point2Di const& inPixel) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getPixelToWorldRequest reqIn;
  ::grpcIRGBDCamera::getPixelToWorldResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getPixelToWorld", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inpixel(xpcf::serialize<SolAR::datastructure::Point2Di>(inPixel));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getPixelToWorld request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPixelToWorld(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getPixelToWorld response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPixelToWorld rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getPixelToWorld",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Point3Df>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::Point2Di  IRGBDCamera_grpcProxy::getWorldToPixel(SolAR::datastructure::CloudPoint const& in3DPoint) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getWorldToPixelRequest reqIn;
  ::grpcIRGBDCamera::getWorldToPixelResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldToPixel", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_in3dpoint(xpcf::serialize<SolAR::datastructure::CloudPoint>(in3DPoint));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getWorldToPixel request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldToPixel(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getWorldToPixel response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldToPixel rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getWorldToPixel",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<SolAR::datastructure::Point2Di>(respOut.xpcfgrpcreturnvalue());
}


std::vector<SolAR::datastructure::Point2Df>  IRGBDCamera_grpcProxy::getWorldToPixels(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& in3DPoints) const
{
  ::grpc::ClientContext context;
  ::grpcIRGBDCamera::getWorldToPixelsRequest reqIn;
  ::grpcIRGBDCamera::getWorldToPixelsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getWorldToPixels", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_in3dpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(in3DPoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getWorldToPixels request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getWorldToPixels(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcProxy::getWorldToPixels response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getWorldToPixels rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRGBDCameraService","getWorldToPixels",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.xpcfgrpcreturnvalue());
}


}

