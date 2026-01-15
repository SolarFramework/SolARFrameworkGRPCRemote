// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMappingPipeline_grpcProxy.h"
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

template<> org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMappingPipeline {

IMappingPipeline_grpcProxy::IMappingPipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMappingPipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IMappingPipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(14);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMappingPipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMappingPipeline_grpcProxy::onConfigured()
{
  ::grpc::ChannelArguments ch_args;
  ch_args.SetMaxReceiveMessageSize(-1);
  m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
  xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
  ch_args);
  m_grpcStub = ::grpcIMappingPipeline::grpcIMappingPipelineService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::init_grpc0Request reqIn;
  ::grpcIMappingPipeline::init_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc0 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.init_grpc0() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","init_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::startRequest reqIn;
  ::grpcIMappingPipeline::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.start() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::stopRequest reqIn;
  ::grpcIMappingPipeline::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.stop() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::init(std::string const& clientUUID)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::init_grpc1Request reqIn;
  ::grpcIMappingPipeline::init_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc1 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.init_grpc1() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","init_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::init(std::string const& clientUUID, std::string const& relocalizationServiceURL, std::string const& mapupdateServiceURL)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::init_grpc2Request reqIn;
  ::grpcIMappingPipeline::init_grpc2Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_clientuuid(clientUUID);
  reqIn.set_relocalizationserviceurl(relocalizationServiceURL);
  reqIn.set_mapupdateserviceurl(mapupdateServiceURL);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init_grpc2"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init_grpc2(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init_grpc2 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.init_grpc2() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","init_grpc2",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::setCameraParameters_grpc0Request reqIn;
  ::grpcIMappingPipeline::setCameraParameters_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.setCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters_grpc0 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.setCameraParameters_grpc0() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","setCameraParameters_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams1, SolAR::datastructure::CameraParameters const& cameraParams2)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::setCameraParameters_grpc1Request reqIn;
  ::grpcIMappingPipeline::setCameraParameters_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cameraparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams1));
  reqIn.set_cameraparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.setCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters_grpc1 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.setCameraParameters_grpc1() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","setCameraParameters_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::setRectificationParameters(SolAR::datastructure::RectificationParameters const& rectCam1, SolAR::datastructure::RectificationParameters const& rectCam2)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::setRectificationParametersRequest reqIn;
  ::grpcIMappingPipeline::setRectificationParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setRectificationParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_rectcam1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectCam1));
  reqIn.set_rectcam2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectCam2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::setRectificationParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.setRectificationParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcProxy::setRectificationParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setRectificationParameters rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.setRectificationParameters() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","setRectificationParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::set3DTransformSolARToWorld(SolAR::datastructure::Transform3Df const& transform)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::set3DTransformSolARToWorldRequest reqIn;
  ::grpcIMappingPipeline::set3DTransformSolARToWorldResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "set3DTransformSolARToWorld", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::set3DTransformSolARToWorld request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.set3DTransformSolARToWorld",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "set3DTransformSolARToWorld"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->set3DTransformSolARToWorld(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::set3DTransformSolARToWorld response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "set3DTransformSolARToWorld rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.set3DTransformSolARToWorld() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","set3DTransformSolARToWorld",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::mappingProcessRequest(std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& transform, SolAR::datastructure::Transform3Df& updatedTransform, SolAR::api::pipeline::MappingStatus& status)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::mappingProcessRequest_grpc0Request reqIn;
  ::grpcIMappingPipeline::mappingProcessRequest_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "mappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_poses(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(poses));
  reqIn.set_fixedpose(fixedPose);
  reqIn.set_transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform));
  reqIn.set_updatedtransform(xpcf::serialize<SolAR::datastructure::Transform3Df>(updatedTransform));
  reqIn.set_status(static_cast<int32_t>(status));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::mappingProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.mappingProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "mappingProcessRequest_grpc0"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->mappingProcessRequest_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::mappingProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "mappingProcessRequest_grpc0 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.mappingProcessRequest_grpc0() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","mappingProcessRequest_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  updatedTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.updatedtransform());
  status = static_cast<SolAR::api::pipeline::MappingStatus>(respOut.status());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::mappingProcessRequest(std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::api::pipeline::MappingStatus& status)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::mappingProcessRequest_grpc1Request reqIn;
  ::grpcIMappingPipeline::mappingProcessRequest_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "mappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_poses(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(poses));
  reqIn.set_fixedpose(fixedPose);
  reqIn.set_status(static_cast<int32_t>(status));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::mappingProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.mappingProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "mappingProcessRequest_grpc1"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->mappingProcessRequest_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::mappingProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "mappingProcessRequest_grpc1 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.mappingProcessRequest_grpc1() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","mappingProcessRequest_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  status = static_cast<SolAR::api::pipeline::MappingStatus>(respOut.status());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::mappingProcessRequest(std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df& updatedTransform, SolAR::api::pipeline::MappingStatus& status)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::mappingProcessRequest_grpc2Request reqIn;
  ::grpcIMappingPipeline::mappingProcessRequest_grpc2Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "mappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_poses(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(poses));
  reqIn.set_fixedpose(fixedPose);
  reqIn.set_updatedtransform(xpcf::serialize<SolAR::datastructure::Transform3Df>(updatedTransform));
  reqIn.set_status(static_cast<int32_t>(status));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::mappingProcessRequest request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.mappingProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "mappingProcessRequest_grpc2"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->mappingProcessRequest_grpc2(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::mappingProcessRequest response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "mappingProcessRequest_grpc2 rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.mappingProcessRequest_grpc2() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","mappingProcessRequest_grpc2",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  updatedTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.updatedtransform());
  status = static_cast<SolAR::api::pipeline::MappingStatus>(respOut.status());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::getDataForVisualization(std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses) const
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::getDataForVisualizationRequest reqIn;
  ::grpcIMappingPipeline::getDataForVisualizationResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getDataForVisualization", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::getDataForVisualization request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMappingPipeline_grpcProxy.getDataForVisualization",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getDataForVisualization"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDataForVisualization(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcProxy::getDataForVisualization response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDataForVisualization rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMappingPipelineService.getDataForVisualization() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMappingPipelineService","getDataForVisualization",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.outputpointclouds());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

