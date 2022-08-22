// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformSACFinderFrom3D3D_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D {

I3DTransformSACFinderFrom3D3D_grpcServer::I3DTransformSACFinderFrom3D3D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformSACFinderFrom3D3D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformSACFinderFrom3D3D>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I3DTransformSACFinderFrom3D3D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformSACFinderFrom3D3D_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformSACFinderFrom3D3D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformSACFinderFrom3D3D_grpcServer::grpcI3DTransformSACFinderFrom3D3DServiceImpl::estimate_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Request* request, ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point3Df> firstPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->firstpoints3d());
  std::vector<SolAR::datastructure::Point3Df> secondPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->secondpoints3d());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::vector<int> inliers = xpcf::deserialize<std::vector<int>>(request->inliers());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(firstPoints3D, secondPoints3D, pose, inliers);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_inliers(xpcf::serialize<std::vector<int>>(inliers));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransformSACFinderFrom3D3D_grpcServer::grpcI3DTransformSACFinderFrom3D3DServiceImpl::estimate_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Request* request, ::grpcI3DTransformSACFinderFrom3D3D::estimate_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> firstKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->firstkeyframe());
  SRef<SolAR::datastructure::Keyframe> secondKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->secondkeyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point3Df> firstPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->firstpoints3d());
  std::vector<SolAR::datastructure::Point3Df> secondPoints3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->secondpoints3d());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  std::vector<int> inliers = xpcf::deserialize<std::vector<int>>(request->inliers());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(firstKeyframe, secondKeyframe, matches, firstPoints3D, secondPoints3D, pose, inliers);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_inliers(xpcf::serialize<std::vector<int>>(inliers));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformSACFinderFrom3D3D_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

