// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMeshLoader_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMeshLoader::IMeshLoader_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMeshLoader::IMeshLoader_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMeshLoader {

IMeshLoader_grpcServer::IMeshLoader_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMeshLoader_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::files::IMeshLoader>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMeshLoader_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMeshLoader_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMeshLoader_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMeshLoader_grpcServer::grpcIMeshLoaderServiceImpl::load(::grpc::ServerContext* context, const ::grpcIMeshLoader::loadRequest* request, ::grpcIMeshLoader::loadResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "load", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshLoader_grpcServer::load request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Mesh> Mesh = xpcf::deserialize<SRef<SolAR::datastructure::Mesh>>(request->mesh());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->load(Mesh);
  response->set_mesh(xpcf::serialize<SRef<SolAR::datastructure::Mesh>>(Mesh));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshLoader_grpcServer::load response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

