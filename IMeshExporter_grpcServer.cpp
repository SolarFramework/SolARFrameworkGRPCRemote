// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMeshExporter_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMeshExporter::IMeshExporter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMeshExporter::IMeshExporter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMeshExporter {

IMeshExporter_grpcServer::IMeshExporter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMeshExporter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::output::files::IMeshExporter>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMeshExporter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMeshExporter_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMeshExporter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMeshExporter_grpcServer::grpcIMeshExporterServiceImpl::exportMesh(::grpc::ServerContext* context, const ::grpcIMeshExporter::exportMeshRequest* request, ::grpcIMeshExporter::exportMeshResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "exportMesh", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshExporter_grpcServer::exportMesh request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Mesh> mesh = xpcf::deserialize<SRef<SolAR::datastructure::Mesh>>(request->mesh());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->exportMesh(mesh);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshExporter_grpcServer::exportMesh response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}
