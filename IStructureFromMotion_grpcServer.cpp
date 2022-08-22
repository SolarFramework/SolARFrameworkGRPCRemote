// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IStructureFromMotion_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIStructureFromMotion::IStructureFromMotion_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIStructureFromMotion::IStructureFromMotion_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIStructureFromMotion {

IStructureFromMotion_grpcServer::IStructureFromMotion_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IStructureFromMotion_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::sfm::IStructureFromMotion>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IStructureFromMotion_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IStructureFromMotion_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IStructureFromMotion_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IStructureFromMotion_grpcServer::grpcIStructureFromMotionServiceImpl::createMap(::grpc::ServerContext* context, const ::grpcIStructureFromMotion::createMapRequest* request, ::grpcIStructureFromMotion::createMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStructureFromMotion_grpcServer::createMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<datastructure::Image>>>(request->images());
  SRef<datastructure::Map> map = xpcf::deserialize<SRef<datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->createMap(images, map);
  response->set_images(xpcf::serialize<std::vector<SRef<datastructure::Image>>>(images));
  response->set_map(xpcf::serialize<SRef<datastructure::Map>>(map));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStructureFromMotion_grpcServer::createMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

