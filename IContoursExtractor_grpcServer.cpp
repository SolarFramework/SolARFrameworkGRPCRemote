// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IContoursExtractor_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIContoursExtractor {

IContoursExtractor_grpcServer::IContoursExtractor_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IContoursExtractor_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IContoursExtractor>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IContoursExtractor_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursExtractor_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IContoursExtractor_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IContoursExtractor_grpcServer::grpcIContoursExtractorServiceImpl::extract(::grpc::ServerContext* context, const ::grpcIContoursExtractor::extractRequest* request, ::grpcIContoursExtractor::extractResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "extract", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursExtractor_grpcServer::extract request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> inputImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->inputimg());
  std::vector<SolAR::datastructure::Contour2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->contours());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->extract(inputImg, contours);
  response->set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(contours));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursExtractor_grpcServer::extract response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

