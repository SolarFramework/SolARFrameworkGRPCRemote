// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICornerRefinement_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICornerRefinement {

ICornerRefinement_grpcServer::ICornerRefinement_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICornerRefinement_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::ICornerRefinement>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ICornerRefinement_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICornerRefinement_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICornerRefinement_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICornerRefinement_grpcServer::grpcICornerRefinementServiceImpl::refine(::grpc::ServerContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "refine", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICornerRefinement_grpcServer::refine request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Point2Df> corners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->corners());
  m_xpcfComponent->refine(image, corners);
  response->set_corners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(corners));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICornerRefinement_grpcServer::refine response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

