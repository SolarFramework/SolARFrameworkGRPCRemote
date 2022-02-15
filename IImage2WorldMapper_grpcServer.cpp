// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImage2WorldMapper_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImage2WorldMapper {

IImage2WorldMapper_grpcServer::IImage2WorldMapper_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImage2WorldMapper_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IImage2WorldMapper>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IImage2WorldMapper_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImage2WorldMapper_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImage2WorldMapper_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImage2WorldMapper_grpcServer::grpcIImage2WorldMapperServiceImpl::map(::grpc::ServerContext* context, const ::grpcIImage2WorldMapper::mapRequest* request, ::grpcIImage2WorldMapper::mapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "map", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImage2WorldMapper_grpcServer::map request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> digitalPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->digitalpoints());
  std::vector<SolAR::datastructure::Point3Df> worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->worldpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->map(digitalPoints, worldPoints);
  response->set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImage2WorldMapper_grpcServer::map response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

