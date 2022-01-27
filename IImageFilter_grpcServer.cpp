// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageFilter_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageFilter {

IImageFilter_grpcServer::IImageFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageFilter>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IImageFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageFilter_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageFilter_grpcServer::grpcIImageFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIImageFilter::filterRequest* request, ::grpcIImageFilter::filterResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageFilter_grpcServer::filter request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> input = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->input());
  SRef<SolAR::datastructure::Image> output = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->output());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(input, output);
  response->set_output(xpcf::serialize<SRef<SolAR::datastructure::Image>>(output));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageFilter_grpcServer::filter response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

