// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IFrontEnd_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIFrontEnd::IFrontEnd_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIFrontEnd::IFrontEnd_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIFrontEnd {

IFrontEnd_grpcProxy::IFrontEnd_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IFrontEnd_grpcProxy>())
{
  declareInterface<SolAR::api::service::IFrontEnd>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(33);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IFrontEnd_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IFrontEnd_grpcProxy::onConfigured()
{
  ::grpc::ChannelArguments ch_args;
  ch_args.SetMaxReceiveMessageSize(-1);
  ch_args.SetMaxSendMessageSize(-1);
  m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
  xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
  ch_args);
  m_grpcStub = ::grpcIFrontEnd::grpcIFrontEndService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::registerClient(std::string const& accessToken, SolAR::api::service::DeviceInfo const& deviceInfo, std::string const& worldElementUUID, std::string& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::registerClientRequest reqIn;
  ::grpcIFrontEnd::registerClientResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "registerClient", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_deviceinfo(xpcf::serialize<SolAR::api::service::DeviceInfo>(deviceInfo));
  reqIn.set_worldelementuuid(worldElementUUID);
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::registerClient request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->registerClient(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::registerClient response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "registerClient rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","registerClient",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  clientUUID = respOut.clientuuid();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::unregisterClient(std::string const& accessToken, std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::unregisterClientRequest reqIn;
  ::grpcIFrontEnd::unregisterClientResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "unregisterClient", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::unregisterClient request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->unregisterClient(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::unregisterClient response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "unregisterClient rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","unregisterClient",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getAllClientsUUID(std::string const& accessToken, std::vector<std::string>& clientUUIDList) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getAllClientsUUIDRequest reqIn;
  ::grpcIFrontEnd::getAllClientsUUIDResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllClientsUUID", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuidlist(xpcf::serialize<std::vector<std::string>>(clientUUIDList));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getAllClientsUUID request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllClientsUUID(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getAllClientsUUID response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllClientsUUID rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getAllClientsUUID",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  clientUUIDList = xpcf::deserialize<std::vector<std::string>>(respOut.clientuuidlist());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getDeviceInfo(std::string const& accessToken, std::string const& clientUUID, SolAR::api::service::DeviceInfo& deviceInfo) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getDeviceInfoRequest reqIn;
  ::grpcIFrontEnd::getDeviceInfoResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDeviceInfo", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_deviceinfo(xpcf::serialize<SolAR::api::service::DeviceInfo>(deviceInfo));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getDeviceInfo request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDeviceInfo(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getDeviceInfo response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDeviceInfo rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getDeviceInfo",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  deviceInfo = xpcf::deserialize<SolAR::api::service::DeviceInfo>(respOut.deviceinfo());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::init(std::string const& accessToken, std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::init_grpc0Request reqIn;
  ::grpcIFrontEnd::init_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","init_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::init(std::string const& accessToken, std::string const& clientUUID, SolAR::api::service::PipelineMode pipelineMode)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::init_grpc1Request reqIn;
  ::grpcIFrontEnd::init_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_pipelinemode(static_cast<int32_t>(pipelineMode));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","init_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::start(std::string const& accessToken, std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::startRequest reqIn;
  ::grpcIFrontEnd::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::stop(std::string const& accessToken, std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::stopRequest reqIn;
  ::grpcIFrontEnd::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getProcessingMode(std::string const& accessToken, std::string const& clientUUID, SolAR::api::service::PipelineMode& pipelineMode) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getProcessingModeRequest reqIn;
  ::grpcIFrontEnd::getProcessingModeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getProcessingMode", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_pipelinemode(static_cast<int32_t>(pipelineMode));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getProcessingMode request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getProcessingMode(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getProcessingMode response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getProcessingMode rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getProcessingMode",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pipelineMode = static_cast<SolAR::api::service::PipelineMode>(respOut.pipelinemode());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::setCameraParameters(std::string const& accessToken, std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::setCameraParameters_grpc0Request reqIn;
  ::grpcIFrontEnd::setCameraParameters_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","setCameraParameters_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::setCameraParameters(std::string const& accessToken, std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams1, SolAR::datastructure::CameraParameters const& cameraParams2)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::setCameraParameters_grpc1Request reqIn;
  ::grpcIFrontEnd::setCameraParameters_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_cameraparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams1));
  reqIn.set_cameraparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","setCameraParameters_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::setRectificationParameters(std::string const& accessToken, std::string const& clientUUID, SolAR::datastructure::RectificationParameters const& rectCam1, SolAR::datastructure::RectificationParameters const& rectCam2)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::setRectificationParametersRequest reqIn;
  ::grpcIFrontEnd::setRectificationParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setRectificationParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_rectcam1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectCam1));
  reqIn.set_rectcam2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectCam2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setRectificationParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setRectificationParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setRectificationParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setRectificationParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","setRectificationParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getCameraParameters(std::string const& accessToken, std::string const& clientUUID, SolAR::datastructure::CameraParameters& cameraParams) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getCameraParametersRequest reqIn;
  ::grpcIFrontEnd::getCameraParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCameraParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.cameraparams());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::imageProcessRequest(std::string const& accessToken, std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& worldTransform, std::chrono::system_clock::time_point const& timestamp, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus, std::vector<SolAR::datastructure::DetectedObject>& detectedObjects)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::imageProcessRequestRequest reqIn;
  ::grpcIFrontEnd::imageProcessRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "imageProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_poses(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(poses));
  reqIn.set_fixedpose(fixedPose);
  reqIn.set_worldtransform(xpcf::serialize<SolAR::datastructure::Transform3Df>(worldTransform));
  reqIn.set_timestamp(xpcf::serialize<std::chrono::system_clock::time_point>(timestamp));
  reqIn.set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  reqIn.set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  reqIn.set_confidence(xpcf::serialize<float_t>(confidence));
  reqIn.set_mappingstatus(static_cast<int32_t>(mappingStatus));
  reqIn.set_detectedobjects(xpcf::serialize<std::vector<SolAR::datastructure::DetectedObject>>(detectedObjects));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::imageProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->imageProcessRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::imageProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "imageProcessRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","imageProcessRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  mappingStatus = static_cast<SolAR::api::pipeline::MappingStatus>(respOut.mappingstatus());
  detectedObjects = xpcf::deserialize<std::vector<SolAR::datastructure::DetectedObject>>(respOut.detectedobjects());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getMappingDataRequest(std::string const& accessToken, std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getMappingDataRequestRequest reqIn;
  ::grpcIFrontEnd::getMappingDataRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMappingDataRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMappingDataRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMappingDataRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMappingDataRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMappingDataRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getMappingDataRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.outputpointclouds());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getClientPose(std::string const& accessToken, std::string const& clientUUID, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::datastructure::Transform3Df& pose, SolAR::api::service::PoseType const poseType)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getClientPoseRequest reqIn;
  ::grpcIFrontEnd::getClientPoseResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getClientPose", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_posetype(static_cast<int32_t>(poseType));
  reqIn.set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  reqIn.set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  reqIn.set_confidence(xpcf::serialize<float_t>(confidence));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getClientPose request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getClientPose(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getClientPose response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getClientPose rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getClientPose",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::imageSegmentationProcessRequest(std::string const& accessToken, std::string const& clientUUID, SRef<SolAR::datastructure::Image> image)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc0Request reqIn;
  ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "imageSegmentationProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::imageSegmentationProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->imageSegmentationProcessRequest_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::imageSegmentationProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "imageSegmentationProcessRequest_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","imageSegmentationProcessRequest_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::imageSegmentationProcessRequest(std::string const& accessToken, std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Image>> const& images, bool temporalConsistency)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc1Request reqIn;
  ::grpcIFrontEnd::imageSegmentationProcessRequest_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "imageSegmentationProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_temporalconsistency(temporalConsistency);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::imageSegmentationProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->imageSegmentationProcessRequest_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::imageSegmentationProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "imageSegmentationProcessRequest_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","imageSegmentationProcessRequest_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getImageSegmentationProcessStatus(std::string const& accessToken, std::string const& clientUUID, SolAR::api::pipeline::IImageSegmentationPipeline::Status& status, float& progress) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getImageSegmentationProcessStatusRequest reqIn;
  ::grpcIFrontEnd::getImageSegmentationProcessStatusResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getImageSegmentationProcessStatus", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_status(static_cast<int32_t>(status));
  reqIn.set_progress(progress);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getImageSegmentationProcessStatus request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getImageSegmentationProcessStatus(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getImageSegmentationProcessStatus response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getImageSegmentationProcessStatus rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getImageSegmentationProcessStatus",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  status = static_cast<SolAR::api::pipeline::IImageSegmentationPipeline::Status>(respOut.status());
  progress = respOut.progress();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getImageSegmentationProcessOutputMasks(std::string const& accessToken, std::string const& clientUUID, SRef<SolAR::datastructure::Mask2DCollection>& mask) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getImageSegmentationProcessOutputMasksRequest reqIn;
  ::grpcIFrontEnd::getImageSegmentationProcessOutputMasksResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getImageSegmentationProcessOutputMasks", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_mask(xpcf::serialize<SRef<SolAR::datastructure::Mask2DCollection>>(mask));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getImageSegmentationProcessOutputMasks request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getImageSegmentationProcessOutputMasks(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getImageSegmentationProcessOutputMasks response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getImageSegmentationProcessOutputMasks rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getImageSegmentationProcessOutputMasks",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mask = xpcf::deserialize<SRef<SolAR::datastructure::Mask2DCollection>>(respOut.mask());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::createMap(std::string const& accessToken, std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::createMapRequest reqIn;
  ::grpcIFrontEnd::createMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::createMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->createMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::createMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "createMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","createMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::deleteMap(std::string const& accessToken, std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::deleteMapRequest reqIn;
  ::grpcIFrontEnd::deleteMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "deleteMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::deleteMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->deleteMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::deleteMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "deleteMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","deleteMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getAllMapsUUID(std::string const& accessToken, std::vector<std::string>& mapUUIDList) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getAllMapsUUIDRequest reqIn;
  ::grpcIFrontEnd::getAllMapsUUIDResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllMapsUUID", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuidlist(xpcf::serialize<std::vector<std::string>>(mapUUIDList));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getAllMapsUUID request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllMapsUUID(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getAllMapsUUID response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllMapsUUID rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getAllMapsUUID",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mapUUIDList = xpcf::deserialize<std::vector<std::string>>(respOut.mapuuidlist());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getClientMapUUID(std::string const& accessToken, std::string const& clientUUID, std::string& mapUUID) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getClientMapUUIDRequest reqIn;
  ::grpcIFrontEnd::getClientMapUUIDResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getClientMapUUID", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getClientMapUUID request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getClientMapUUID(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getClientMapUUID response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getClientMapUUID rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getClientMapUUID",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mapUUID = respOut.mapuuid();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getClientInfoForMap(std::string const& accessToken, std::string const& mapUUID, std::vector<SolAR::api::service::ClientInfo>& clientInfoList) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getClientInfoForMapRequest reqIn;
  ::grpcIFrontEnd::getClientInfoForMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getClientInfoForMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_clientinfolist(xpcf::serialize<std::vector<SolAR::api::service::ClientInfo>>(clientInfoList));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getClientInfoForMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getClientInfoForMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getClientInfoForMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getClientInfoForMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getClientInfoForMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  clientInfoList = xpcf::deserialize<std::vector<SolAR::api::service::ClientInfo>>(respOut.clientinfolist());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getMapRequest(std::string const& accessToken, std::string const& mapUUID, SRef<SolAR::datastructure::Map>& mapDatastructure, SolAR::api::service::GetMapRequestOption const& keyframeImagesOption) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getMapRequestRequest reqIn;
  ::grpcIFrontEnd::getMapRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_keyframeimagesoption(static_cast<int32_t>(keyframeImagesOption));
  reqIn.set_mapdatastructure(xpcf::serialize<SRef<SolAR::datastructure::Map>>(mapDatastructure));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getMapRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mapDatastructure = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.mapdatastructure());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::setMapRequest(std::string const& accessToken, std::string const& mapUUID, SRef<SolAR::datastructure::Map> const mapDatastructure)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::setMapRequestRequest reqIn;
  ::grpcIFrontEnd::setMapRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setMapRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_mapdatastructure(xpcf::serialize<SRef<SolAR::datastructure::Map>>(mapDatastructure));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setMapRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMapRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::setMapRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setMapRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","setMapRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getPointCloudRequest(std::string const& accessToken, std::string const& mapUUID, SRef<SolAR::datastructure::PointCloud>& pointCloud) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getPointCloudRequestRequest reqIn;
  ::grpcIFrontEnd::getPointCloudRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getPointCloudRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getPointCloudRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPointCloudRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getPointCloudRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointCloudRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getPointCloudRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getMapInfo(std::string const& accessToken, std::string const& mapUUID, std::string& version, SolAR::datastructure::GlobalDescriptorType& globalDescriptorType, SolAR::datastructure::DescriptorType& descriptorType, uint32_t& dataSize, bool& areImageSaved) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getMapInfoRequest reqIn;
  ::grpcIFrontEnd::getMapInfoResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapInfo", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_version(version);
  reqIn.set_globaldescriptortype(static_cast<int32_t>(globalDescriptorType));
  reqIn.set_descriptortype(static_cast<int32_t>(descriptorType));
  reqIn.set_datasize(dataSize);
  reqIn.set_areimagesaved(areImageSaved);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapInfo request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapInfo(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapInfo response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapInfo rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getMapInfo",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  version = respOut.version();
  globalDescriptorType = static_cast<SolAR::datastructure::GlobalDescriptorType>(respOut.globaldescriptortype());
  descriptorType = static_cast<SolAR::datastructure::DescriptorType>(respOut.descriptortype());
  dataSize = respOut.datasize();
  areImageSaved = respOut.areimagesaved();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::requestMapProcessing(std::string const& accessToken, std::string const& mapUUID, std::string const& resultMapUUID, SolAR::api::service::MapProcessingType const processingType)
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::requestMapProcessingRequest reqIn;
  ::grpcIFrontEnd::requestMapProcessingResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "requestMapProcessing", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_resultmapuuid(resultMapUUID);
  reqIn.set_processingtype(static_cast<int32_t>(processingType));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::requestMapProcessing request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->requestMapProcessing(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::requestMapProcessing response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "requestMapProcessing rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","requestMapProcessing",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getMapProcessingStatus(std::string const& accessToken, std::string const& resultMapUUID, SolAR::api::service::MapProcessingStatus& status, float& progress) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getMapProcessingStatusRequest reqIn;
  ::grpcIFrontEnd::getMapProcessingStatusResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapProcessingStatus", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_resultmapuuid(resultMapUUID);
  reqIn.set_status(static_cast<int32_t>(status));
  reqIn.set_progress(progress);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapProcessingStatus request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapProcessingStatus(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapProcessingStatus response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapProcessingStatus rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getMapProcessingStatus",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  status = static_cast<SolAR::api::service::MapProcessingStatus>(respOut.status());
  progress = respOut.progress();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IFrontEnd_grpcProxy::getMapProcessingData(std::string const& accessToken, std::string const& resultMapUUID, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pointCloud, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses) const
{
  ::grpc::ClientContext context;
  ::grpcIFrontEnd::getMapProcessingDataRequest reqIn;
  ::grpcIFrontEnd::getMapProcessingDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapProcessingData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_accesstoken(accessToken);
  reqIn.set_resultmapuuid(resultMapUUID);
  reqIn.set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapProcessingData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapProcessingData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFrontEnd_grpcProxy::getMapProcessingData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapProcessingData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFrontEndService","getMapProcessingData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pointcloud());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

