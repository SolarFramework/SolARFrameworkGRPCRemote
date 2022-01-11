// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IWorldGraphLoader_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIWorldGraphLoader {

IWorldGraphLoader_grpcServer::IWorldGraphLoader_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IWorldGraphLoader_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::files::IWorldGraphLoader>(m_grpcService.m_xpcfComponent);
}


void IWorldGraphLoader_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IWorldGraphLoader_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IWorldGraphLoader_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IWorldGraphLoader_grpcServer::grpcIWorldGraphLoaderServiceImpl::load(::grpc::ServerContext* context, const ::grpcIWorldGraphLoader::loadRequest* request, ::grpcIWorldGraphLoader::loadResponse* response)
{
  std::vector<SRef<SolAR::datastructure::Trackable>> trackables = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(request->trackables());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->load(trackables);
  response->set_trackables(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(trackables));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

