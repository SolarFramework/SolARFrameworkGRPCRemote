// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPointCloudLoader_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPointCloudLoader::IPointCloudLoader_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPointCloudLoader::IPointCloudLoader_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPointCloudLoader {

IPointCloudLoader_grpcServer::IPointCloudLoader_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudLoader_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::files::IPointCloudLoader>(m_grpcService.m_xpcfComponent);
}


void IPointCloudLoader_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudLoader_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPointCloudLoader_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPointCloudLoader_grpcServer::grpcIPointCloudLoaderServiceImpl::load(::grpc::ServerContext* context, const ::grpcIPointCloudLoader::loadRequest* request, ::grpcIPointCloudLoader::loadResponse* response)
{
  std::string filepath = request->filepath();
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->load(filepath, pointCloud);
  response->set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

