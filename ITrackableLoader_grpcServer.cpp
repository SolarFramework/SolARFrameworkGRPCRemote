// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ITrackableLoader_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverITrackableLoader::ITrackableLoader_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverITrackableLoader::ITrackableLoader_grpcServer>();

namespace org::bcom::xpcf::grpc::serverITrackableLoader {

ITrackableLoader_grpcServer::ITrackableLoader_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ITrackableLoader_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::files::ITrackableLoader>(m_grpcService.m_xpcfComponent);
}


void ITrackableLoader_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITrackableLoader_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ITrackableLoader_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ITrackableLoader_grpcServer::grpcITrackableLoaderServiceImpl::loadTrackable(::grpc::ServerContext* context, const ::grpcITrackableLoader::loadTrackableRequest* request, ::grpcITrackableLoader::loadTrackableResponse* response)
{
  SRef<SolAR::datastructure::Trackable> trackable = xpcf::deserialize<SRef<SolAR::datastructure::Trackable>>(request->trackable());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadTrackable(trackable);
  response->set_trackable(xpcf::serialize<SRef<SolAR::datastructure::Trackable>>(trackable));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

