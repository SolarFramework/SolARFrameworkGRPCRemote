// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPCFilterCentroid_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPCFilterCentroid {

IPCFilterCentroid_grpcServer::IPCFilterCentroid_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPCFilterCentroid_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pointCloud::IPCFilterCentroid>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IPCFilterCentroid_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPCFilterCentroid_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPCFilterCentroid_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPCFilterCentroid_grpcServer::grpcIPCFilterCentroidServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIPCFilterCentroid::filterRequest* request, ::grpcIPCFilterCentroid::filterResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPCFilterCentroid_grpcServer::filter request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> inPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->inpointcloud());
  SRef<SolAR::datastructure::Point3Df> centroid = xpcf::deserialize<SRef<SolAR::datastructure::Point3Df>>(request->centroid());
  SRef<SolAR::datastructure::PointCloud> outPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->outpointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(inPointCloud, centroid, outPointCloud);
  response->set_outpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(outPointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPCFilterCentroid_grpcServer::filter response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

