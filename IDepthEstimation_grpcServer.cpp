// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDepthEstimation_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDepthEstimation {

IDepthEstimation_grpcServer::IDepthEstimation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDepthEstimation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IDepthEstimation>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IDepthEstimation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthEstimation_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDepthEstimation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDepthEstimation_grpcServer::grpcIDepthEstimationServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcIDepthEstimation::estimateRequest* request, ::grpcIDepthEstimation::estimateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthEstimation_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> rectKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectkeypoints1());
  std::vector<SolAR::datastructure::Keypoint> rectKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectkeypoints2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float focal = request->focal();
  float baseline = request->baseline();
  SolAR::datastructure::StereoType type = xpcf::deserialize<SolAR::datastructure::StereoType>(request->type());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(rectKeypoints1, rectKeypoints2, matches, focal, baseline, type);
  response->set_rectkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints1));
  response->set_rectkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthEstimation_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

