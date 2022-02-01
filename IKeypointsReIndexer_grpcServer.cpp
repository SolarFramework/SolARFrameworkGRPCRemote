// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeypointsReIndexer_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeypointsReIndexer {

IKeypointsReIndexer_grpcServer::IKeypointsReIndexer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeypointsReIndexer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IKeypointsReIndexer>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IKeypointsReIndexer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointsReIndexer_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeypointsReIndexer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeypointsReIndexer_grpcServer::grpcIKeypointsReIndexerServiceImpl::reindex(::grpc::ServerContext* context, const ::grpcIKeypointsReIndexer::reindexRequest* request, ::grpcIKeypointsReIndexer::reindexResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "reindex", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointsReIndexer_grpcServer::reindex request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> keypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints1());
  std::vector<SolAR::datastructure::Keypoint> keypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point2Df> matchedKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->matchedkeypoints1());
  std::vector<SolAR::datastructure::Point2Df> matchedKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->matchedkeypoints2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reindex(keypoints1, keypoints2, matches, matchedKeypoints1, matchedKeypoints2);
  response->set_matchedkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(matchedKeypoints1));
  response->set_matchedkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(matchedKeypoints2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointsReIndexer_grpcServer::reindex response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

