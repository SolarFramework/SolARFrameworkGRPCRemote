// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageSegmentationPipeline_grpcServer.h"
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

template<> org::bcom::xpcf::grpc::serverIImageSegmentationPipeline::IImageSegmentationPipeline_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageSegmentationPipeline::IImageSegmentationPipeline_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageSegmentationPipeline {

IImageSegmentationPipeline_grpcServer::IImageSegmentationPipeline_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageSegmentationPipeline_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pipeline::IImageSegmentationPipeline>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(8);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IImageSegmentationPipeline_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageSegmentationPipeline_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageSegmentationPipeline_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::init(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::initRequest* request, ::grpcIImageSegmentationPipeline::initResponse* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.init",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
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
  std::cout << "====> IImageSegmentationPipeline_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->init();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::start(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::startRequest* request, ::grpcIImageSegmentationPipeline::startResponse* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.start",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
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
  std::cout << "====> IImageSegmentationPipeline_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::stopRequest* request, ::grpcIImageSegmentationPipeline::stopResponse* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.stop",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
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
  std::cout << "====> IImageSegmentationPipeline_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::segment_grpc0(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::segment_grpc0Request* request, ::grpcIImageSegmentationPipeline::segment_grpc0Response* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.segment",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "segment_grpc0"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "segment", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::segment request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->segment(image);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::segment response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::segment_grpc1(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::segment_grpc1Request* request, ::grpcIImageSegmentationPipeline::segment_grpc1Response* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.segment",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "segment_grpc1"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "segment", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::segment request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  bool temporalConsistency = request->temporalconsistency();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->segment(images, temporalConsistency);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::segment response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::getStatus(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::getStatusRequest* request, ::grpcIImageSegmentationPipeline::getStatusResponse* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.getStatus",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getStatus"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getStatus", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::getStatus request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::pipeline::IImageSegmentationPipeline::Status status = static_cast<SolAR::api::pipeline::IImageSegmentationPipeline::Status>(request->status());
  float progress = request->progress();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getStatus(status, progress);
  response->set_status(static_cast<int32_t>(status));
  response->set_progress(progress);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::getStatus response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageSegmentationPipeline_grpcServer::grpcIImageSegmentationPipelineServiceImpl::getOutputMask(::grpc::ServerContext* context, const ::grpcIImageSegmentationPipeline::getOutputMaskRequest* request, ::grpcIImageSegmentationPipeline::getOutputMaskResponse* response)
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
  auto tracer = provider->GetTracer("xpcfGrpcRemotingSolARFramework", "1.5.0");
  auto span = tracer->StartSpan("IImageSegmentationPipeline_grpcServer.getOutputMask",
                                {{opentelemetry::semconv::rpc::kRpcSystem, "grpc"},
                                 {opentelemetry::semconv::rpc::kRpcService, "grpcIImageSegmentationPipeline.grpcIImageSegmentationPipelineService"},
                                 {opentelemetry::semconv::rpc::kRpcMethod, "getOutputMask"},
                                 {opentelemetry::semconv::rpc::kRpcGrpcStatusCode, 0}},
                                options);
  SpanScope spanScope(span);
  auto scope= tracer->WithActiveSpan(span);
  
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getOutputMask", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::getOutputMask request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Mask2DCollection> mask = xpcf::deserialize<SRef<SolAR::datastructure::Mask2DCollection>>(request->mask());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getOutputMask(mask);
  response->set_mask(xpcf::serialize<SRef<SolAR::datastructure::Mask2DCollection>>(mask));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageSegmentationPipeline_grpcServer::getOutputMask response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

