// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImage2WorldMapper_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImage2WorldMapper {

IImage2WorldMapper_grpcServer::IImage2WorldMapper_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImage2WorldMapper_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IImage2WorldMapper>(m_grpcService.m_xpcfComponent);
}


void IImage2WorldMapper_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImage2WorldMapper_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImage2WorldMapper_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImage2WorldMapper_grpcServer::grpcIImage2WorldMapperServiceImpl::map(::grpc::ServerContext* context, const ::grpcIImage2WorldMapper::mapRequest* request, ::grpcIImage2WorldMapper::mapResponse* response)
{
  std::vector<SolAR::datastructure::Point2Df> digitalPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->digitalpoints());
  std::vector<SolAR::datastructure::Point3Df> worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->worldpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->map(digitalPoints, worldPoints);
  response->set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

