// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom2D3D_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D {

I3DTransformFinderFrom2D3D_grpcServer::I3DTransformFinderFrom2D3D_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom2D3D_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3DTransformFinderFrom2D3D>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I3DTransformFinderFrom2D3D_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom2D3D_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransformFinderFrom2D3D_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransformFinderFrom2D3D_grpcServer::grpcI3DTransformFinderFrom2D3DServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcI3DTransformFinderFrom2D3D::estimateRequest* request, ::grpcI3DTransformFinderFrom2D3D::estimateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom2D3D_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  std::vector<SolAR::datastructure::Point3Df> worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->worldpoints());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::datastructure::Transform3Df initialPose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->initialpose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(imagePoints, worldPoints, camParams, pose, initialPose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I3DTransformFinderFrom2D3D_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

