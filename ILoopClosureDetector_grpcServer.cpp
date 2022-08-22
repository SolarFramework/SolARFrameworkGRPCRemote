// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ILoopClosureDetector_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverILoopClosureDetector {

ILoopClosureDetector_grpcServer::ILoopClosureDetector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ILoopClosureDetector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::loop::ILoopClosureDetector>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ILoopClosureDetector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopClosureDetector_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ILoopClosureDetector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ILoopClosureDetector_grpcServer::grpcILoopClosureDetectorServiceImpl::detect(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ILoopClosureDetector_grpcServer::detect request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> queryKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->querykeyframe());
  SRef<SolAR::datastructure::Keyframe> detectedLoopKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->detectedloopkeyframe());
  SolAR::datastructure::Transform3Df sim3Transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->sim3transform());
  std::vector<std::pair<uint32_t,uint32_t>> duplicatedPointsIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->duplicatedpointsindices());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->detect(queryKeyframe, detectedLoopKeyframe, sim3Transform, duplicatedPointsIndices);
  response->set_detectedloopkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(detectedLoopKeyframe));
  response->set_sim3transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(sim3Transform));
  response->set_duplicatedpointsindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(duplicatedPointsIndices));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ILoopClosureDetector_grpcServer::detect response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

