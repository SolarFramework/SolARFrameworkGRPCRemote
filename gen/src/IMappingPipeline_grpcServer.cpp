// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMappingPipeline_grpcServer.h"
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

template<> org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMappingPipeline {

IMappingPipeline_grpcServer::IMappingPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMappingPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IMappingPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(14);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMappingPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMappingPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMappingPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::init_grpc0(::grpc::ServerContext* context, const ::grpcIMappingPipeline::init_grpc0Request* request, ::grpcIMappingPipeline::init_grpc0Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init_grpc0"},
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
  std::cout << "====> IMappingPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIMappingPipeline::startRequest* request, ::grpcIMappingPipeline::startResponse* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIMappingPipeline::stopRequest* request, ::grpcIMappingPipeline::stopResponse* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
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
  std::cout << "====> IMappingPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::init_grpc1(::grpc::ServerContext* context, const ::grpcIMappingPipeline::init_grpc1Request* request, ::grpcIMappingPipeline::init_grpc1Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init_grpc1"},
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
  std::cout << "====> IMappingPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::init_grpc2(::grpc::ServerContext* context, const ::grpcIMappingPipeline::init_grpc2Request* request, ::grpcIMappingPipeline::init_grpc2Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "init_grpc2"},
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
  std::cout << "====> IMappingPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string clientUUID = request->clientuuid();
  std::string relocalizationServiceURL = request->relocalizationserviceurl();
  std::string mapupdateServiceURL = request->mapupdateserviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init(clientUUID, relocalizationServiceURL, mapupdateServiceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::setCameraParameters_grpc0(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParameters_grpc0Request* request, ::grpcIMappingPipeline::setCameraParameters_grpc0Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.setCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setCameraParameters_grpc0"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::setCameraParameters_grpc1(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setCameraParameters_grpc1Request* request, ::grpcIMappingPipeline::setCameraParameters_grpc1Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.setCameraParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setCameraParameters_grpc1"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters cameraParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams1());
  SolAR::datastructure::CameraParameters cameraParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->cameraparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setCameraParameters(cameraParams1, cameraParams2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::setRectificationParameters(::grpc::ServerContext* context, const ::grpcIMappingPipeline::setRectificationParametersRequest* request, ::grpcIMappingPipeline::setRectificationParametersResponse* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.setRectificationParameters",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "setRectificationParameters"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setRectificationParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::setRectificationParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::RectificationParameters rectCam1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam1());
  SolAR::datastructure::RectificationParameters rectCam2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectcam2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setRectificationParameters(rectCam1, rectCam2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::setRectificationParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::set3DTransformSolARToWorld(::grpc::ServerContext* context, const ::grpcIMappingPipeline::set3DTransformSolARToWorldRequest* request, ::grpcIMappingPipeline::set3DTransformSolARToWorldResponse* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.set3DTransformSolARToWorld",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "set3DTransformSolARToWorld"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "set3DTransformSolARToWorld", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::set3DTransformSolARToWorld request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Transform3Df transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->set3DTransformSolARToWorld(transform);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::set3DTransformSolARToWorld response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::mappingProcessRequest_grpc0(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequest_grpc0Request* request, ::grpcIMappingPipeline::mappingProcessRequest_grpc0Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.mappingProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "mappingProcessRequest_grpc0"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "mappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::mappingProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  bool fixedPose = request->fixedpose();
  SolAR::datastructure::Transform3Df transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transform());
  SolAR::datastructure::Transform3Df updatedTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->updatedtransform());
  SolAR::api::pipeline::MappingStatus status = static_cast<SolAR::api::pipeline::MappingStatus>(request->status());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->mappingProcessRequest(images, poses, fixedPose, transform, updatedTransform, status);
  response->set_updatedtransform(xpcf::serialize<SolAR::datastructure::Transform3Df>(updatedTransform));
  response->set_status(static_cast<int32_t>(status));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::mappingProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::mappingProcessRequest_grpc1(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequest_grpc1Request* request, ::grpcIMappingPipeline::mappingProcessRequest_grpc1Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.mappingProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "mappingProcessRequest_grpc1"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "mappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::mappingProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  bool fixedPose = request->fixedpose();
  SolAR::api::pipeline::MappingStatus status = static_cast<SolAR::api::pipeline::MappingStatus>(request->status());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->mappingProcessRequest(images, poses, fixedPose, status);
  response->set_status(static_cast<int32_t>(status));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::mappingProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::mappingProcessRequest_grpc2(::grpc::ServerContext* context, const ::grpcIMappingPipeline::mappingProcessRequest_grpc2Request* request, ::grpcIMappingPipeline::mappingProcessRequest_grpc2Response* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.mappingProcessRequest",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "mappingProcessRequest_grpc2"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "mappingProcessRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::mappingProcessRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  bool fixedPose = request->fixedpose();
  SolAR::datastructure::Transform3Df updatedTransform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->updatedtransform());
  SolAR::api::pipeline::MappingStatus status = static_cast<SolAR::api::pipeline::MappingStatus>(request->status());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->mappingProcessRequest(images, poses, fixedPose, updatedTransform, status);
  response->set_updatedtransform(xpcf::serialize<SolAR::datastructure::Transform3Df>(updatedTransform));
  response->set_status(static_cast<int32_t>(status));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::mappingProcessRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMappingPipeline_grpcServer::grpcIMappingPipelineServiceImpl::getDataForVisualization(::grpc::ServerContext* context, const ::grpcIMappingPipeline::getDataForVisualizationRequest* request, ::grpcIMappingPipeline::getDataForVisualizationResponse* response)
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
  auto span = tracer->StartSpan("IMappingPipeline_grpcServer.getDataForVisualization",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIMappingPipeline.grpcIMappingPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getDataForVisualization"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDataForVisualization", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::getDataForVisualization request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::CloudPoint>> outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->outputpointclouds());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getDataForVisualization(outputPointClouds, keyframePoses);
  response->set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMappingPipeline_grpcServer::getDataForVisualization response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

