// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPCFilter_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPCFilter::IPCFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPCFilter::IPCFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPCFilter {

IPCFilter_grpcServer::IPCFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPCFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::pointCloud::IPCFilter>(m_grpcService.m_xpcfComponent);
}


void IPCFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPCFilter_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPCFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPCFilter_grpcServer::grpcIPCFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> inPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->inpointcloud());
  SRef<SolAR::datastructure::PointCloud> outPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->outpointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(inPointCloud, outPointCloud);
  response->set_outpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(outPointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

