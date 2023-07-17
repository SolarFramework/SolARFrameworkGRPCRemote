// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IBootstrapper_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIBootstrapper {

IBootstrapper_grpcServer::IBootstrapper_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IBootstrapper_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::slam::IBootstrapper>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IBootstrapper_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBootstrapper_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IBootstrapper_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IBootstrapper_grpcServer::grpcIBootstrapperServiceImpl::process(::grpc::ServerContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "process", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBootstrapper_grpcServer::process request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Image> view = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->view());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(frame, view);
  response->set_view(xpcf::serialize<SRef<SolAR::datastructure::Image>>(view));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IBootstrapper_grpcServer::process response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

