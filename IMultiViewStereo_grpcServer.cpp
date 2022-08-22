// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMultiViewStereo_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMultiViewStereo::IMultiViewStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMultiViewStereo::IMultiViewStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMultiViewStereo {

IMultiViewStereo_grpcServer::IMultiViewStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMultiViewStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::sfm::IMultiViewStereo>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMultiViewStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMultiViewStereo_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMultiViewStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMultiViewStereo_grpcServer::grpcIMultiViewStereoServiceImpl::createDenseMap(::grpc::ServerContext* context, const ::grpcIMultiViewStereo::createDenseMapRequest* request, ::grpcIMultiViewStereo::createDenseMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "createDenseMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiViewStereo_grpcServer::createDenseMap request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<datastructure::Map> map = xpcf::deserialize<SRef<datastructure::Map>>(request->map());
  SRef<datastructure::Map> densemap = xpcf::deserialize<SRef<datastructure::Map>>(request->densemap());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->createDenseMap(map, densemap);
  response->set_densemap(xpcf::serialize<SRef<datastructure::Map>>(densemap));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiViewStereo_grpcServer::createDenseMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

