// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcherRegion_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion {

IDescriptorMatcherRegion_grpcServer::IDescriptorMatcherRegion_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcherRegion_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorMatcherRegion>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IDescriptorMatcherRegion_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcherRegion_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorMatcherRegion_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorMatcherRegion_grpcServer::grpcIDescriptorMatcherRegionServiceImpl::match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc0Request* request, ::grpcIDescriptorMatcherRegion::match_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherRegion_grpcServer::match request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors2());
  std::vector<SolAR::datastructure::Point2Df> points2D1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d1());
  std::vector<SolAR::datastructure::Point2Df> points2D2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float radius = request->radius();
  float matchingDistanceMax = request->matchingdistancemax();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(descriptors1, descriptors2, points2D1, points2D2, matches, radius, matchingDistanceMax);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherRegion_grpcServer::match response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcherRegion_grpcServer::grpcIDescriptorMatcherRegionServiceImpl::match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc1Request* request, ::grpcIDescriptorMatcherRegion::match_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherRegion_grpcServer::match request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> points2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d());
  std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> descriptors = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(request->descriptors());
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float radius = request->radius();
  float matchingDistanceMax = request->matchingdistancemax();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(points2D, descriptors, frame, matches, radius, matchingDistanceMax);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherRegion_grpcServer::match response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcherRegion_grpcServer::grpcIDescriptorMatcherRegionServiceImpl::match_grpc2(::grpc::ServerContext* context, const ::grpcIDescriptorMatcherRegion::match_grpc2Request* request, ::grpcIDescriptorMatcherRegion::match_grpc2Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "match", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherRegion_grpcServer::match request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> currentFrame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->currentframe());
  SRef<SolAR::datastructure::Frame> lastFrame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->lastframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float radius = request->radius();
  float matchingDistanceMax = request->matchingdistancemax();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(currentFrame, lastFrame, matches, radius, matchingDistanceMax);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorMatcherRegion_grpcServer::match response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

