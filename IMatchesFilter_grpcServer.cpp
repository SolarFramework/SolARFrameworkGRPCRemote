// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMatchesFilter_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMatchesFilter {

IMatchesFilter_grpcServer::IMatchesFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMatchesFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IMatchesFilter>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMatchesFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMatchesFilter_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMatchesFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMatchesFilter_grpcServer::grpcIMatchesFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIMatchesFilter::filterRequest* request, ::grpcIMatchesFilter::filterResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesFilter_grpcServer::filter request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::DescriptorMatch> inputMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->inputmatches());
  std::vector<SolAR::datastructure::DescriptorMatch> outputMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->outputmatches());
  std::vector<SolAR::datastructure::Keypoint> keyPoints_1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_1());
  std::vector<SolAR::datastructure::Keypoint> keyPoints_2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_2());
  m_xpcfComponent->filter(inputMatches, outputMatches, keyPoints_1, keyPoints_2);
  response->set_outputmatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(outputMatches));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMatchesFilter_grpcServer::filter response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

