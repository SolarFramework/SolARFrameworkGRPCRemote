// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ILoopCorrector_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverILoopCorrector {

ILoopCorrector_grpcServer::ILoopCorrector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ILoopCorrector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::loop::ILoopCorrector>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ILoopCorrector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopCorrector_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ILoopCorrector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ILoopCorrector_grpcServer::grpcILoopCorrectorServiceImpl::correct(::grpc::ServerContext* context, const ::grpcILoopCorrector::correctRequest* request, ::grpcILoopCorrector::correctResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "correct", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ILoopCorrector_grpcServer::correct request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> queryKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->querykeyframe());
  SRef<SolAR::datastructure::Keyframe> detectedLoopKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->detectedloopkeyframe());
  SolAR::datastructure::Transform3Df S_wl_wc = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->s_wl_wc());
  std::vector<std::pair<uint32_t,uint32_t>> duplicatedPointsIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->duplicatedpointsindices());
  std::vector<uint32_t> correctedKeyframeIds = xpcf::deserialize<std::vector<uint32_t>>(request->correctedkeyframeids());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->correct(queryKeyframe, detectedLoopKeyframe, S_wl_wc, duplicatedPointsIndices, correctedKeyframeIds);
  response->set_correctedkeyframeids(xpcf::serialize<std::vector<uint32_t>>(correctedKeyframeIds));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ILoopCorrector_grpcServer::correct response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

