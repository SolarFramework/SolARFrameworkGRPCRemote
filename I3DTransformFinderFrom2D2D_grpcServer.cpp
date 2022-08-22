// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom2D2D_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D {

I3DTransformFinderFrom2D2D_grpcServer::I3DTransformFinderFrom2D2D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom2D2D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformFinderFrom2D2D>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I3DTransformFinderFrom2D2D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom2D2D_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformFinderFrom2D2D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformFinderFrom2D2D_grpcServer::grpcI3DTransformFinderFrom2D2DServiceImpl::estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom2D2D_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> pointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointsview1());
  std::vector<SolAR::datastructure::Point2Df> pointsView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointsview2());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SolAR::datastructure::DescriptorMatch> inlierMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->inliermatches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(pointsView1, pointsView2, camParams, poseView1, poseView2, inlierMatches);
  response->set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  response->set_inliermatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inlierMatches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom2D2D_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformFinderFrom2D2D_grpcServer::grpcI3DTransformFinderFrom2D2DServiceImpl::estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request* request, ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom2D2D_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> pointsView1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->pointsview1());
  std::vector<SolAR::datastructure::Keypoint> pointsView2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->pointsview2());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::Transform3Df poseView1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview1());
  SolAR::datastructure::Transform3Df poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->poseview2());
  std::vector<SolAR::datastructure::DescriptorMatch> inlierMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->inliermatches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(pointsView1, pointsView2, camParams, poseView1, poseView2, inlierMatches);
  response->set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  response->set_inliermatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inlierMatches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom2D2D_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

