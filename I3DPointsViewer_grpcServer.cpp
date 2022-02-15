// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DPointsViewer_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DPointsViewer::I3DPointsViewer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DPointsViewer::I3DPointsViewer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DPointsViewer {

I3DPointsViewer_grpcServer::I3DPointsViewer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DPointsViewer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::I3DPointsViewer>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I3DPointsViewer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DPointsViewer_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DPointsViewer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DPointsViewer_grpcServer::grpcI3DPointsViewerServiceImpl::display_grpc0(::grpc::ServerContext* context, const ::grpcI3DPointsViewer::display_grpc0Request* request, ::grpcI3DPointsViewer::display_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "display", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcServer::display request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  std::vector<SolAR::datastructure::Transform3Df> framePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->frameposes());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points2 = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points2());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses2 = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->display(points, pose, keyframePoses, framePoses, points2, keyframePoses2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcServer::display response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I3DPointsViewer_grpcServer::grpcI3DPointsViewerServiceImpl::display_grpc1(::grpc::ServerContext* context, const ::grpcI3DPointsViewer::display_grpc1Request* request, ::grpcI3DPointsViewer::display_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "display", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcServer::display request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> points = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->points());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  std::vector<SolAR::datastructure::Transform3Df> framePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->frameposes());
  SRef<SolAR::datastructure::PointCloud> points2 = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->points2());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses2 = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->display(points, pose, keyframePoses, framePoses, points2, keyframePoses2);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DPointsViewer_grpcServer::display response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

