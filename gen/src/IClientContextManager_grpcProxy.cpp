// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IClientContextManager_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>

#include <opentelemetry/context/propagation/global_propagator.h>
#include <opentelemetry/context/propagation/text_map_propagator.h>
#include <opentelemetry/context/runtime_context.h>
#include <opentelemetry/trace/provider.h>
#include <opentelemetry/semconv/incubating/rpc_attributes.h>
#include <opentelemetry/semconv/network_attributes.h>
#include <opentelemetry/trace/span_metadata.h>
#include <opentelemetry/trace/span_startoptions.h>

namespace xpcf = org::bcom::xpcf;

namespace
{
class GrpcClientCarrier : public opentelemetry::context::propagation::TextMapCarrier
{
public:
  explicit GrpcClientCarrier(::grpc::ClientContext *context) : context_(context) {}
  GrpcClientCarrier() = default;
  virtual opentelemetry::nostd::string_view Get(
      opentelemetry::nostd::string_view /* key */) const noexcept override
  {
    return "";
  }

  virtual void Set(opentelemetry::nostd::string_view key,
                   opentelemetry::nostd::string_view value) noexcept override
  {
    context_->AddMetadata(std::string(key), std::string(value));
  }

private:
  ::grpc::ClientContext *context_ = nullptr;
};
} // namespace

template<> org::bcom::xpcf::grpc::proxyIClientContextManager::IClientContextManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIClientContextManager::IClientContextManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIClientContextManager {

IClientContextManager_grpcProxy::IClientContextManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IClientContextManager_grpcProxy>())
{
  declareInterface<SolAR::api::service::IClientContextManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(20);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IClientContextManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IClientContextManager_grpcProxy::onConfigured()
{
  ::grpc::ChannelArguments ch_args;
  ch_args.SetMaxReceiveMessageSize(-1);
  ch_args.SetMaxSendMessageSize(-1);
  m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
  xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
  ch_args);
  m_grpcStub = ::grpcIClientContextManager::grpcIClientContextManagerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::registerClient(SolAR::api::service::DeviceInfo const& deviceInfo, std::string const& worldElementUUID, std::string& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::registerClientRequest reqIn;
  ::grpcIClientContextManager::registerClientResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "registerClient", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_deviceinfo(xpcf::serialize<SolAR::api::service::DeviceInfo>(deviceInfo));
  reqIn.set_worldelementuuid(worldElementUUID);
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::registerClient request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.registerClient",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "registerClient"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->registerClient(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::registerClient response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "registerClient rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.registerClient() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","registerClient",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  clientUUID = respOut.clientuuid();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::unregisterClient(std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::unregisterClientRequest reqIn;
  ::grpcIClientContextManager::unregisterClientResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "unregisterClient", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::unregisterClient request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.unregisterClient",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "unregisterClient"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->unregisterClient(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::unregisterClient response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "unregisterClient rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.unregisterClient() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","unregisterClient",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getAllClientsUUID(std::vector<std::string>& clientUUIDList) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getAllClientsUUIDRequest reqIn;
  ::grpcIClientContextManager::getAllClientsUUIDResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllClientsUUID", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuidlist(xpcf::serialize<std::vector<std::string>>(clientUUIDList));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getAllClientsUUID request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getAllClientsUUID",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getAllClientsUUID"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllClientsUUID(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getAllClientsUUID response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllClientsUUID rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getAllClientsUUID() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getAllClientsUUID",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  clientUUIDList = xpcf::deserialize<std::vector<std::string>>(respOut.clientuuidlist());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getDeviceInfo(std::string const& clientUUID, SolAR::api::service::DeviceInfo& deviceInfo) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getDeviceInfoRequest reqIn;
  ::grpcIClientContextManager::getDeviceInfoResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDeviceInfo", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_deviceinfo(xpcf::serialize<SolAR::api::service::DeviceInfo>(deviceInfo));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getDeviceInfo request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getDeviceInfo",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getDeviceInfo"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDeviceInfo(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getDeviceInfo response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDeviceInfo rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getDeviceInfo() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getDeviceInfo",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  deviceInfo = xpcf::deserialize<SolAR::api::service::DeviceInfo>(respOut.deviceinfo());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::init(std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::init_grpc0Request reqIn;
  ::grpcIClientContextManager::init_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init_grpc0"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc0 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.init_grpc0() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","init_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::init(std::string const& clientUUID, SolAR::api::service::PipelineMode pipelineMode)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::init_grpc1Request reqIn;
  ::grpcIClientContextManager::init_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_pipelinemode(static_cast<int32_t>(pipelineMode));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init_grpc1"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc1 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.init_grpc1() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","init_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::start(std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::startRequest reqIn;
  ::grpcIClientContextManager::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "start"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.start() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::stop(std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::stopRequest reqIn;
  ::grpcIClientContextManager::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "stop"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.stop() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getProcessingMode(std::string const& clientUUID, SolAR::api::service::PipelineMode& pipelineMode) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getProcessingModeRequest reqIn;
  ::grpcIClientContextManager::getProcessingModeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getProcessingMode", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_pipelinemode(static_cast<int32_t>(pipelineMode));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getProcessingMode request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getProcessingMode",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getProcessingMode"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getProcessingMode(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getProcessingMode response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getProcessingMode rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getProcessingMode() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getProcessingMode",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  pipelineMode = static_cast<SolAR::api::service::PipelineMode>(respOut.pipelinemode());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::setCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::setCameraParameters_grpc0Request reqIn;
  ::grpcIClientContextManager::setCameraParameters_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.setCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setCameraParameters_grpc0"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters_grpc0 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.setCameraParameters_grpc0() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","setCameraParameters_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::setCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams1, SolAR::datastructure::CameraParameters const& cameraParams2)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::setCameraParameters_grpc1Request reqIn;
  ::grpcIClientContextManager::setCameraParameters_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_cameraparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams1));
  reqIn.set_cameraparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.setCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setCameraParameters_grpc1"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters_grpc1 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.setCameraParameters_grpc1() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","setCameraParameters_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::setRectificationParameters(std::string const& clientUUID, SolAR::datastructure::RectificationParameters const& rectCam1, SolAR::datastructure::RectificationParameters const& rectCam2)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::setRectificationParametersRequest reqIn;
  ::grpcIClientContextManager::setRectificationParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setRectificationParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_rectcam1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectCam1));
  reqIn.set_rectcam2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectCam2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::setRectificationParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.setRectificationParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setRectificationParameters"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setRectificationParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::setRectificationParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setRectificationParameters rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.setRectificationParameters() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","setRectificationParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters& cameraParams) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getCameraParametersRequest reqIn;
  ::grpcIClientContextManager::getCameraParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getCameraParameters"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCameraParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCameraParameters rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getCameraParameters() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.cameraparams());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::relocalizeProcessRequest(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& worldTransform, std::chrono::system_clock::time_point const& timestamp, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::relocalizeProcessRequest_grpc0Request reqIn;
  ::grpcIClientContextManager::relocalizeProcessRequest_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
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
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::relocalizeProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.relocalizeProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "relocalizeProcessRequest_grpc0"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->relocalizeProcessRequest_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::relocalizeProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "relocalizeProcessRequest_grpc0 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.relocalizeProcessRequest_grpc0() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","relocalizeProcessRequest_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  mappingStatus = static_cast<SolAR::api::pipeline::MappingStatus>(respOut.mappingstatus());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::relocalizeProcessRequest(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& worldTransform, std::chrono::system_clock::time_point const& timestamp, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus, std::vector<SolAR::datastructure::DetectedObject>& detectedObjects)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::relocalizeProcessRequest_grpc1Request reqIn;
  ::grpcIClientContextManager::relocalizeProcessRequest_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
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
  std::cout << "====> IClientContextManager_grpcProxy::relocalizeProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.relocalizeProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "relocalizeProcessRequest_grpc1"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->relocalizeProcessRequest_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::relocalizeProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "relocalizeProcessRequest_grpc1 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.relocalizeProcessRequest_grpc1() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","relocalizeProcessRequest_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  mappingStatus = static_cast<SolAR::api::pipeline::MappingStatus>(respOut.mappingstatus());
  detectedObjects = xpcf::deserialize<std::vector<SolAR::datastructure::DetectedObject>>(respOut.detectedobjects());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::get3DTransformRequest(std::string const& clientUUID, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence)
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::get3DTransformRequestRequest reqIn;
  ::grpcIClientContextManager::get3DTransformRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "get3DTransformRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_transform3dstatus(static_cast<int32_t>(transform3DStatus));
  reqIn.set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  reqIn.set_confidence(xpcf::serialize<float_t>(confidence));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::get3DTransformRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.get3DTransformRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "get3DTransformRequest"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->get3DTransformRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::get3DTransformRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "get3DTransformRequest rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.get3DTransformRequest() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","get3DTransformRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  transform3DStatus = static_cast<SolAR::api::service::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getMappingDataRequest(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getMappingDataRequestRequest reqIn;
  ::grpcIClientContextManager::getMappingDataRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMappingDataRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getMappingDataRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getMappingDataRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getMappingDataRequest"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMappingDataRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getMappingDataRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMappingDataRequest rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getMappingDataRequest() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getMappingDataRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.outputpointclouds());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getLastPose(std::string const& clientUUID, SolAR::datastructure::Transform3Df& pose, SolAR::api::service::PoseType const poseType) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getLastPoseRequest reqIn;
  ::grpcIClientContextManager::getLastPoseResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getLastPose", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_posetype(static_cast<int32_t>(poseType));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getLastPose request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getLastPose",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getLastPose"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getLastPose(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getLastPose response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getLastPose rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getLastPose() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getLastPose",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IClientContextManager_grpcProxy::getClientMapUUID(std::string const& clientUUID, std::string& mapUUID) const
{
  ::grpc::ClientContext context;
  ::grpcIClientContextManager::getClientMapUUIDRequest reqIn;
  ::grpcIClientContextManager::getClientMapUUIDResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getClientMapUUID", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getClientMapUUID request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IClientContextManager_grpcProxy.getClientMapUUID",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIClientContextManager.grpcIClientContextManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getClientMapUUID"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getClientMapUUID(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IClientContextManager_grpcProxy::getClientMapUUID response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getClientMapUUID rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIClientContextManagerService.getClientMapUUID() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIClientContextManagerService","getClientMapUUID",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  mapUUID = respOut.mapuuid();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

