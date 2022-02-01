// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IWorldGraphLoader_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIWorldGraphLoader {

IWorldGraphLoader_grpcServer::IWorldGraphLoader_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IWorldGraphLoader_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::files::IWorldGraphLoader>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IWorldGraphLoader_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IWorldGraphLoader_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IWorldGraphLoader_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IWorldGraphLoader_grpcServer::grpcIWorldGraphLoaderServiceImpl::load(::grpc::ServerContext* context, const ::grpcIWorldGraphLoader::loadRequest* request, ::grpcIWorldGraphLoader::loadResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "load", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphLoader_grpcServer::load request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Trackable>> trackables = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(request->trackables());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->load(trackables);
  response->set_trackables(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(trackables));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IWorldGraphLoader_grpcServer::load response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

