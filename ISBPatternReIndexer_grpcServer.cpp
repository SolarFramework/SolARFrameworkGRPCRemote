// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ISBPatternReIndexer_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverISBPatternReIndexer {

ISBPatternReIndexer_grpcServer::ISBPatternReIndexer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ISBPatternReIndexer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::ISBPatternReIndexer>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ISBPatternReIndexer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ISBPatternReIndexer_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ISBPatternReIndexer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ISBPatternReIndexer_grpcServer::grpcISBPatternReIndexerServiceImpl::reindex(::grpc::ServerContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "reindex", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISBPatternReIndexer_grpcServer::reindex request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Contour2Df> candidateContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->candidatecontours());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point2Df> patternPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->patternpoints());
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reindex(candidateContours, matches, patternPoints, imagePoints);
  response->set_patternpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(patternPoints));
  response->set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISBPatternReIndexer_grpcServer::reindex response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

