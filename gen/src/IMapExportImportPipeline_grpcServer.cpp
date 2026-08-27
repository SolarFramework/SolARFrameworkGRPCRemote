// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapExportImportPipeline_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>

#include <opentelemetry/context/propagation/global_propagator.h>
#include <opentelemetry/context/propagation/text_map_propagator.h>
#include <opentelemetry/context/runtime_context.h>
#include <opentelemetry/nostd/shared_ptr.h>
#include <opentelemetry/nostd/string_view.h>
#include <opentelemetry/nostd/unique_ptr.h>
#include <opentelemetry/nostd/variant.h>
#include <opentelemetry/semconv/incubating/rpc_attributes.h>
#include <opentelemetry/trace/context.h>
#include <opentelemetry/trace/provider.h>
#include <opentelemetry/trace/span.h>
#include <opentelemetry/trace/span_metadata.h>
#include <opentelemetry/trace/span_startoptions.h>
#include <opentelemetry/trace/tracer.h>

namespace
{

class GrpcServerCarrier : public opentelemetry::context::propagation::TextMapCarrier
{
public:
  explicit GrpcServerCarrier(grpc::ServerContext *context) : context_(context) {}
  GrpcServerCarrier() = default;
  virtual opentelemetry::nostd::string_view Get(
      opentelemetry::nostd::string_view key) const noexcept override
  {
    auto it = context_->client_metadata().find({key.data(), key.size()});
    if (it != context_->client_metadata().end())
    {
      return opentelemetry::nostd::string_view(it->second.data(), it->second.size());
    }
    return "";
  }

  virtual void Set(opentelemetry::nostd::string_view /* key */,
                   opentelemetry::nostd::string_view /* value */) noexcept override
  {
    // Not required for server
  }

  grpc::ServerContext *context_ = nullptr;
};

class ContextScope {
public:
    explicit ContextScope(const opentelemetry::context::Context& context) {
        m_token = opentelemetry::context::RuntimeContext::Attach(context);
    }

    ~ContextScope() {
        if (m_token) {
            opentelemetry::context::RuntimeContext::Detach(*m_token);
        }
    }

    ContextScope(const ContextScope&) = delete;
    ContextScope& operator=(const ContextScope&) = delete;

private:
    opentelemetry::nostd::unique_ptr<opentelemetry::context::Token> m_token;
};

class SpanScope {
public:
    explicit SpanScope(const opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span> span) : m_span(span){}

    ~SpanScope() {
      if (m_span) {
        m_span->End();
      }
    }

    SpanScope(const ContextScope&) = delete;
    SpanScope& operator=(const SpanScope&) = delete;

private:
    opentelemetry::nostd::shared_ptr<opentelemetry::trace::Span> m_span;
};
} // namespace

namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapExportImportPipeline::IMapExportImportPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapExportImportPipeline::IMapExportImportPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapExportImportPipeline {

IMapExportImportPipeline_grpcServer::IMapExportImportPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapExportImportPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IMapExportImportPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(6);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMapExportImportPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapExportImportPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapExportImportPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapExportImportPipeline_grpcServer::grpcIMapExportImportPipelineServiceImpl::init(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::initRequest* request, ::grpcIMapExportImportPipeline::initResponse* response)
{
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcServerCarrier carrier(context);
  auto newContext = prop->Extract(carrier, currentCtx);
  ContextScope ctxtScope(newContext);
  
  opentelemetry::trace::StartSpanOptions options;
  options.kind = opentelemetry::trace::SpanKind::kServer;
  options.parent = opentelemetry::trace::GetSpan(newContext)->GetContext();
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  auto span = tracer->StartSpan("IMapExportImportPipeline_grpcServer.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapExportImportPipeline.grpcIMapExportImportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapExportImportPipeline_grpcServer::grpcIMapExportImportPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::startRequest* request, ::grpcIMapExportImportPipeline::startResponse* response)
{
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcServerCarrier carrier(context);
  auto newContext = prop->Extract(carrier, currentCtx);
  ContextScope ctxtScope(newContext);
  
  opentelemetry::trace::StartSpanOptions options;
  options.kind = opentelemetry::trace::SpanKind::kServer;
  options.parent = opentelemetry::trace::GetSpan(newContext)->GetContext();
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  auto span = tracer->StartSpan("IMapExportImportPipeline_grpcServer.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapExportImportPipeline.grpcIMapExportImportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "start"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapExportImportPipeline_grpcServer::grpcIMapExportImportPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::stopRequest* request, ::grpcIMapExportImportPipeline::stopResponse* response)
{
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcServerCarrier carrier(context);
  auto newContext = prop->Extract(carrier, currentCtx);
  ContextScope ctxtScope(newContext);
  
  opentelemetry::trace::StartSpanOptions options;
  options.kind = opentelemetry::trace::SpanKind::kServer;
  options.parent = opentelemetry::trace::GetSpan(newContext)->GetContext();
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  auto span = tracer->StartSpan("IMapExportImportPipeline_grpcServer.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapExportImportPipeline.grpcIMapExportImportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "stop"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapExportImportPipeline_grpcServer::grpcIMapExportImportPipelineServiceImpl::exportMap(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::exportMapRequest* request, ::grpcIMapExportImportPipeline::exportMapResponse* response)
{
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcServerCarrier carrier(context);
  auto newContext = prop->Extract(carrier, currentCtx);
  ContextScope ctxtScope(newContext);
  
  opentelemetry::trace::StartSpanOptions options;
  options.kind = opentelemetry::trace::SpanKind::kServer;
  options.parent = opentelemetry::trace::GetSpan(newContext)->GetContext();
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  auto span = tracer->StartSpan("IMapExportImportPipeline_grpcServer.exportMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapExportImportPipeline.grpcIMapExportImportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "exportMap"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "exportMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::exportMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  std::vector<unsigned char> compressedZipExport = xpcf::deserialize<std::vector<unsigned char>>(request->compressedzipexport());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->exportMap(mapUUID, compressedZipExport);
  response->set_compressedzipexport(xpcf::serialize<std::vector<unsigned char>>(compressedZipExport));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::exportMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapExportImportPipeline_grpcServer::grpcIMapExportImportPipelineServiceImpl::importMap(::grpc::ServerContext* context, const ::grpcIMapExportImportPipeline::importMapRequest* request, ::grpcIMapExportImportPipeline::importMapResponse* response)
{
  auto prop = opentelemetry::context::propagation::GlobalTextMapPropagator::GetGlobalPropagator();
  auto currentCtx = opentelemetry::context::RuntimeContext::GetCurrent();
  GrpcServerCarrier carrier(context);
  auto newContext = prop->Extract(carrier, currentCtx);
  ContextScope ctxtScope(newContext);
  
  opentelemetry::trace::StartSpanOptions options;
  options.kind = opentelemetry::trace::SpanKind::kServer;
  options.parent = opentelemetry::trace::GetSpan(newContext)->GetContext();
  
  auto provider = opentelemetry::trace::Provider::GetTracerProvider();
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.6.0");
  auto span = tracer->StartSpan("IMapExportImportPipeline_grpcServer.importMap",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMapExportImportPipeline.grpcIMapExportImportPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "importMap"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "importMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::importMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  std::vector<unsigned char> compressedZipImport = xpcf::deserialize<std::vector<unsigned char>>(request->compressedzipimport());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->importMap(mapUUID, compressedZipImport);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapExportImportPipeline_grpcServer::importMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

