// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DTrackablesDetector_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DTrackablesDetector::I2DTrackablesDetector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DTrackablesDetector::I2DTrackablesDetector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DTrackablesDetector {

I2DTrackablesDetector_grpcServer::I2DTrackablesDetector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DTrackablesDetector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::I2DTrackablesDetector>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I2DTrackablesDetector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTrackablesDetector_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DTrackablesDetector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DTrackablesDetector_grpcServer::grpcI2DTrackablesDetectorServiceImpl::setTrackables(::grpc::ServerContext* context, const ::grpcI2DTrackablesDetector::setTrackablesRequest* request, ::grpcI2DTrackablesDetector::setTrackablesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setTrackables", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcServer::setTrackables request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Trackable>> trackables = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(request->trackables());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setTrackables(trackables);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcServer::setTrackables response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2DTrackablesDetector_grpcServer::grpcI2DTrackablesDetectorServiceImpl::detect(::grpc::ServerContext* context, const ::grpcI2DTrackablesDetector::detectRequest* request, ::grpcI2DTrackablesDetector::detectResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcServer::detect request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<std::vector<SolAR::datastructure::Point2Df>> corners = xpcf::deserialize<std::vector<std::vector<SolAR::datastructure::Point2Df>>>(request->corners());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->detect(image, corners);
  response->set_corners(xpcf::serialize<std::vector<std::vector<SolAR::datastructure::Point2Df>>>(corners));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTrackablesDetector_grpcServer::detect response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

