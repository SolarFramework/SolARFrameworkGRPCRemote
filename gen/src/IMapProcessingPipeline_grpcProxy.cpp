// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapProcessingPipeline_grpcProxy.h"
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

template<> org::bcom::xpcf::grpc::proxyIMapProcessingPipeline::IMapProcessingPipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapProcessingPipeline::IMapProcessingPipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapProcessingPipeline {

IMapProcessingPipeline_grpcProxy::IMapProcessingPipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapProcessingPipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IMapProcessingPipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(8);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMapProcessingPipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapProcessingPipeline_grpcProxy::onConfigured()
{
  ::grpc::ChannelArguments ch_args;
  ch_args.SetMaxReceiveMessageSize(-1);
  ch_args.SetMaxSendMessageSize(-1);
  m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
  xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
  ch_args);
  m_grpcStub = ::grpcIMapProcessingPipeline::grpcIMapProcessingPipelineService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::initRequest reqIn;
  ::grpcIMapProcessingPipeline::initResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.init() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::startRequest reqIn;
  ::grpcIMapProcessingPipeline::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
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
  std::cout << "====> IMapProcessingPipeline_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.start() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::stopRequest reqIn;
  ::grpcIMapProcessingPipeline::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
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
  std::cout << "====> IMapProcessingPipeline_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.stop() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::setMapToProcess(SRef<SolAR::datastructure::Map> const map)
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::setMapToProcessRequest reqIn;
  ::grpcIMapProcessingPipeline::setMapToProcessResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setMapToProcess", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::setMapToProcess request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.setMapToProcess",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setMapToProcess"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMapToProcess(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::setMapToProcess response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setMapToProcess rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.setMapToProcess() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","setMapToProcess",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::getStatus(SolAR::api::pipeline::MapProcessingStatus& status, float& progress) const
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::getStatusRequest reqIn;
  ::grpcIMapProcessingPipeline::getStatusResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getStatus", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_status(static_cast<int32_t>(status));
  reqIn.set_progress(progress);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::getStatus request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.getStatus",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getStatus"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getStatus(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::getStatus response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getStatus rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.getStatus() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","getStatus",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  status = static_cast<SolAR::api::pipeline::MapProcessingStatus>(respOut.status());
  progress = respOut.progress();
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::getProcessingData(std::vector<SRef<SolAR::datastructure::CloudPoint>>& pointCloud, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses) const
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::getProcessingDataRequest reqIn;
  ::grpcIMapProcessingPipeline::getProcessingDataResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getProcessingData", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::getProcessingData request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.getProcessingData",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getProcessingData"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getProcessingData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::getProcessingData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getProcessingData rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.getProcessingData() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","getProcessingData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pointcloud());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapProcessingPipeline_grpcProxy::getProcessedMap(SRef<SolAR::datastructure::Map>& map) const
{
  ::grpc::ClientContext context;
  ::grpcIMapProcessingPipeline::getProcessedMapRequest reqIn;
  ::grpcIMapProcessingPipeline::getProcessedMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getProcessedMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::getProcessedMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapProcessingPipeline_grpcProxy.getProcessedMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapProcessingPipeline.grpcIMapProcessingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getProcessedMap"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getProcessedMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapProcessingPipeline_grpcProxy::getProcessedMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getProcessedMap rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapProcessingPipelineService.getProcessedMap() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapProcessingPipelineService","getProcessedMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.map());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

