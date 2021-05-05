// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPCFilterCentroid_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPCFilterCentroid {

IPCFilterCentroid_grpcServer::IPCFilterCentroid_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPCFilterCentroid_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pointCloud::IPCFilterCentroid>(m_grpcService.m_xpcfComponent);
}


void IPCFilterCentroid_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPCFilterCentroid_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPCFilterCentroid_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPCFilterCentroid_grpcServer::grpcIPCFilterCentroidServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIPCFilterCentroid::filterRequest* request, ::grpcIPCFilterCentroid::filterResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> inPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->inpointcloud());
  SRef<SolAR::datastructure::Point3Df> centroid = xpcf::deserialize<SRef<SolAR::datastructure::Point3Df>>(request->centroid());
  SRef<SolAR::datastructure::PointCloud> outPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->outpointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(inPointCloud, centroid, outPointCloud);
  response->set_outpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(outPointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

