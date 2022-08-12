// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IBundler_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIBundler {

IBundler_grpcServer::IBundler_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IBundler_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::IBundler>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IBundler_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBundler_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IBundler_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::setMap(::grpc::ServerContext* context, const ::grpcIBundler::setMapRequest* request, ::grpcIBundler::setMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBundler_grpcServer::setMap request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMap(map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBundler_grpcServer::setMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::bundleAdjustment(::grpc::ServerContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "bundleAdjustment", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBundler_grpcServer::bundleAdjustment request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<uint32_t> selectKeyframes = xpcf::deserialize<std::vector<uint32_t>>(request->selectkeyframes());
  double returnValue = m_xpcfComponent->bundleAdjustment(selectKeyframes);
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBundler_grpcServer::bundleAdjustment response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::optimizeSim3(::grpc::ServerContext* context, const ::grpcIBundler::optimizeSim3Request* request, ::grpcIBundler::optimizeSim3Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "optimizeSim3", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBundler_grpcServer::optimizeSim3 request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> keyframe1 = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe1());
  SRef<SolAR::datastructure::Keyframe> keyframe2 = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point3Df> pts3D1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->pts3d1());
  std::vector<SolAR::datastructure::Point3Df> pts3D2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->pts3d2());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  double returnValue = m_xpcfComponent->optimizeSim3(keyframe1, keyframe2, matches, pts3D1, pts3D2, pose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBundler_grpcServer::optimizeSim3 response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

