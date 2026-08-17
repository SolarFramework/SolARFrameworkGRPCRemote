// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapImportExportPipeline_grpcProxy.h"
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

template<> org::bcom::xpcf::grpc::proxyIMapImportExportPipeline::IMapImportExportPipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapImportExportPipeline::IMapImportExportPipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapImportExportPipeline {

IMapImportExportPipeline_grpcProxy::IMapImportExportPipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapImportExportPipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IMapImportExportPipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(6);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMapImportExportPipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapImportExportPipeline_grpcProxy::onConfigured()
{
  ::grpc::ChannelArguments ch_args;
  ch_args.SetMaxReceiveMessageSize(-1);
  ch_args.SetMaxSendMessageSize(-1);
  m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
  xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
  ch_args);
  m_grpcStub = ::grpcIMapImportExportPipeline::grpcIMapImportExportPipelineService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapImportExportPipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::grpcIMapImportExportPipeline::initRequest reqIn;
  ::grpcIMapImportExportPipeline::initResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapImportExportPipeline_grpcProxy.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapImportExportPipeline.grpcIMapImportExportPipelineService"},
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
  std::cout << "====> IMapImportExportPipeline_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapImportExportPipelineService.init() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapImportExportPipelineService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapImportExportPipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcIMapImportExportPipeline::startRequest reqIn;
  ::grpcIMapImportExportPipeline::startResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::start request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapImportExportPipeline_grpcProxy.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapImportExportPipeline.grpcIMapImportExportPipelineService"},
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
  std::cout << "====> IMapImportExportPipeline_grpcProxy::start response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapImportExportPipelineService.start() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapImportExportPipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapImportExportPipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcIMapImportExportPipeline::stopRequest reqIn;
  ::grpcIMapImportExportPipeline::stopResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::stop request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapImportExportPipeline_grpcProxy.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapImportExportPipeline.grpcIMapImportExportPipelineService"},
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
  std::cout << "====> IMapImportExportPipeline_grpcProxy::stop response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapImportExportPipelineService.stop() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapImportExportPipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapImportExportPipeline_grpcProxy::exportMap(std::string const& mapUUID, std::vector<unsigned char>& compressedZipExport)
{
  ::grpc::ClientContext context;
  ::grpcIMapImportExportPipeline::exportMapRequest reqIn;
  ::grpcIMapImportExportPipeline::exportMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "exportMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_compressedzipexport(xpcf::serialize<std::vector<unsigned char>>(compressedZipExport));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::exportMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapImportExportPipeline_grpcProxy.exportMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapImportExportPipeline.grpcIMapImportExportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "exportMap"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->exportMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::exportMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "exportMap rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapImportExportPipelineService.exportMap() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapImportExportPipelineService","exportMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  compressedZipExport = xpcf::deserialize<std::vector<unsigned char>>(respOut.compressedzipexport());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapImportExportPipeline_grpcProxy::importMap(std::string const& mapUUID, std::vector<unsigned char> const& compressedZipImport)
{
  ::grpc::ClientContext context;
  ::grpcIMapImportExportPipeline::importMapRequest reqIn;
  ::grpcIMapImportExportPipeline::importMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "importMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mapuuid(mapUUID);
  reqIn.set_compressedzipimport(xpcf::serialize<std::vector<unsigned char>>(compressedZipImport));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::importMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  
  // TODO: safer parsing with error handling
  auto const pos = m_channelUrl.find_last_of(':');
  auto networkAddress = m_channelUrl.substr(0, pos);
  auto networkPort =  m_channelUrl.substr(pos + 1);
  
  opentelemetry::trace::StartSpanOptions spanOptions;
  spanOptions.kind = opentelemetry::trace::SpanKind::kClient;
  auto span = tracer->StartSpan("IMapImportExportPipeline_grpcProxy.importMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapImportExportPipeline.grpcIMapImportExportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "importMap"},
                                 {opentelemetry::semconv::network::kNetworkPeerAddress, networkAddress},
                                 {opentelemetry::semconv::network::kNetworkPeerPort, std::stoi(networkPort)}},
                                spanOptions);
  
  auto scope = tracer->WithActiveSpan(span);
  
  // inject current context to grpc metadata
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcClientCarrier carrier(&context);
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  prop->Inject(carrier, currentCtx);
  
  ::grpc::Status grpcRemoteStatus = m_grpcStub->importMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapImportExportPipeline_grpcProxy::importMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "importMap rpc failed." << std::endl;
    span->SetStatus(opentelemetry::trace::StatusCode::kError, "grpcIMapImportExportPipelineService.importMap() rpc failed.");
    span->End();
    throw xpcf::RemotingException("grpcIMapImportExportPipelineService","importMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  
  span->SetStatus(opentelemetry::trace::StatusCode::kOk);
  span->End();
  
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

