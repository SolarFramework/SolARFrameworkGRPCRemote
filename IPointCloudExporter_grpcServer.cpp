// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPointCloudExporter_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPointCloudExporter::IPointCloudExporter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPointCloudExporter::IPointCloudExporter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPointCloudExporter {

IPointCloudExporter_grpcServer::IPointCloudExporter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudExporter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::output::files::IPointCloudExporter>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IPointCloudExporter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudExporter_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPointCloudExporter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPointCloudExporter_grpcServer::grpcIPointCloudExporterServiceImpl::exportPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudExporter::exportPointCloudRequest* request, ::grpcIPointCloudExporter::exportPointCloudResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "exportPointCloud", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudExporter_grpcServer::exportPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->exportPointCloud(pointCloud);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudExporter_grpcServer::exportPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

