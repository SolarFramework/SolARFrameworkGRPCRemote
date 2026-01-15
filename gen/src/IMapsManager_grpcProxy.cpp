// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapsManager_grpcProxy.h"
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

template<> org::bcom::xpcf::grpc::proxyIMapsManager::IMapsManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapsManager::IMapsManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapsManager {

IMapsManager_grpcProxy::IMapsManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapsManager_grpcProxy>())
{
  declareInterface<SolAR::api::service::IMapsManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(13);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMapsManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapsManager_grpcProxy::onConfigured()
{
  ::grpc::ChannelArguments ch_args;
  ch_args.SetMaxReceiveMessageSize(-1);
  ch_args.SetMaxSendMessageSize(-1);
  m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
  xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
  ch_args);
  m_grpcStub = ::grpcIMapsManager::grpcIMapsManagerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::createMap(std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::createMapRequest reqIn;
  ::grpcIMapsManager::createMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::createMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.createMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "createMap"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->createMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::createMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "createMap rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.createMap() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","createMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::deleteMap(std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::deleteMapRequest reqIn;
  ::grpcIMapsManager::deleteMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "deleteMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::deleteMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.deleteMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "deleteMap"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->deleteMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::deleteMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "deleteMap rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.deleteMap() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","deleteMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::getAllMaps(std::vector<std::string>& mapUUIDList) const
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::getAllMapsRequest reqIn;
  ::grpcIMapsManager::getAllMapsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getAllMaps", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuidlist(xpcf::serialize<std::vector<std::string>>(mapUUIDList));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getAllMaps request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.getAllMaps",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getAllMaps"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllMaps(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getAllMaps response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllMaps rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.getAllMaps() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","getAllMaps",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  mapUUIDList = xpcf::deserialize<std::vector<std::string>>(respOut.mapuuidlist());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::increaseMapClients(std::string const& mapUUID, std::string& serviceURL)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::increaseMapClientsRequest reqIn;
  ::grpcIMapsManager::increaseMapClientsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "increaseMapClients", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_serviceurl(serviceURL);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::increaseMapClients request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.increaseMapClients",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "increaseMapClients"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->increaseMapClients(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::increaseMapClients response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "increaseMapClients rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.increaseMapClients() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","increaseMapClients",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  serviceURL = respOut.serviceurl();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::decreaseMapClients(std::string const& mapUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::decreaseMapClientsRequest reqIn;
  ::grpcIMapsManager::decreaseMapClientsResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "decreaseMapClients", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::decreaseMapClients request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.decreaseMapClients",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "decreaseMapClients"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->decreaseMapClients(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::decreaseMapClients response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "decreaseMapClients rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.decreaseMapClients() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","decreaseMapClients",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::getMapRequest(std::string const& mapUUID, SRef<SolAR::datastructure::Map>& map, SolAR::api::service::GetMapRequestOption const& keyframeImagesOption) const
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::getMapRequestRequest reqIn;
  ::grpcIMapsManager::getMapRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_keyframeimagesoption(static_cast<int32_t>(keyframeImagesOption));
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.getMapRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getMapRequest"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapRequest rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.getMapRequest() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","getMapRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.map());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::setMapRequest(std::string const& mapUUID, SRef<SolAR::datastructure::Map> const mapDatastructure)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::setMapRequestRequest reqIn;
  ::grpcIMapsManager::setMapRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setMapRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_mapdatastructure(xpcf::serialize<SRef<SolAR::datastructure::Map>>(mapDatastructure));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::setMapRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.setMapRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setMapRequest"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMapRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::setMapRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setMapRequest rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.setMapRequest() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","setMapRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::getPointCloudRequest(std::string const& mapUUID, SRef<SolAR::datastructure::PointCloud>& pointCloud) const
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::getPointCloudRequestRequest reqIn;
  ::grpcIMapsManager::getPointCloudRequestResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getPointCloudRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getPointCloudRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.getPointCloudRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getPointCloudRequest"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPointCloudRequest(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getPointCloudRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointCloudRequest rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.getPointCloudRequest() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","getPointCloudRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::getMapInfo(std::string const& mapUUID, std::string& version, SolAR::datastructure::GlobalDescriptorType& globalDescriptorType, SolAR::datastructure::DescriptorType& descriptorType, uint32_t& dataSize, bool& areImageSaved) const
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::getMapInfoRequest reqIn;
  ::grpcIMapsManager::getMapInfoResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapInfo", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_version(version);
  reqIn.set_globaldescriptortype(static_cast<int32_t>(globalDescriptorType));
  reqIn.set_descriptortype(static_cast<int32_t>(descriptorType));
  reqIn.set_datasize(dataSize);
  reqIn.set_areimagesaved(areImageSaved);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapInfo request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.getMapInfo",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getMapInfo"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapInfo(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapInfo response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapInfo rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.getMapInfo() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","getMapInfo",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  version = respOut.version();
  globalDescriptorType = static_cast<SolAR::datastructure::GlobalDescriptorType>(respOut.globaldescriptortype());
  descriptorType = static_cast<SolAR::datastructure::DescriptorType>(respOut.descriptortype());
  dataSize = respOut.datasize();
  areImageSaved = respOut.areimagesaved();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::requestMapProcessing(std::string const& mapUUID, std::string const& resultMapUUID, SolAR::api::service::MapProcessingType const processingType)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::requestMapProcessingRequest reqIn;
  ::grpcIMapsManager::requestMapProcessingResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "requestMapProcessing", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_resultmapuuid(resultMapUUID);
  reqIn.set_processingtype(static_cast<int32_t>(processingType));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::requestMapProcessing request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.requestMapProcessing",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "requestMapProcessing"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->requestMapProcessing(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::requestMapProcessing response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "requestMapProcessing rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.requestMapProcessing() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","requestMapProcessing",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::getMapProcessingStatus(std::string const& resultMapUUID, SolAR::api::service::MapProcessingStatus& status, SolAR::api::service::MapProcessingType& processingType, float& progress)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::getMapProcessingStatusRequest reqIn;
  ::grpcIMapsManager::getMapProcessingStatusResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapProcessingStatus", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_resultmapuuid(resultMapUUID);
  reqIn.set_status(static_cast<int32_t>(status));
  reqIn.set_processingtype(static_cast<int32_t>(processingType));
  reqIn.set_progress(progress);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapProcessingStatus request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.getMapProcessingStatus",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getMapProcessingStatus"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapProcessingStatus(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapProcessingStatus response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapProcessingStatus rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.getMapProcessingStatus() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","getMapProcessingStatus",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  status = static_cast<SolAR::api::service::MapProcessingStatus>(respOut.status());
  processingType = static_cast<SolAR::api::service::MapProcessingType>(respOut.processingtype());
  progress = respOut.progress();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapsManager_grpcProxy::getMapProcessingData(std::string const& resultMapUUID, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pointCloud, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses)
{
  ::grpc::ClientContext context;
  ::grpcIMapsManager::getMapProcessingDataRequest reqIn;
  ::grpcIMapsManager::getMapProcessingDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMapProcessingData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_resultmapuuid(resultMapUUID);
  reqIn.set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapProcessingData request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapsManager_grpcProxy.getMapProcessingData",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapsManager.grpcIMapsManagerService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getMapProcessingData"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapProcessingData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcProxy::getMapProcessingData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapProcessingData rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapsManagerService.getMapProcessingData() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapsManagerService","getMapProcessingData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pointcloud());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

