// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICornerRefinement_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICornerRefinement {

ICornerRefinement_grpcServer::ICornerRefinement_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICornerRefinement_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::ICornerRefinement>(m_grpcService.m_xpcfComponent);
}


void ICornerRefinement_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICornerRefinement_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICornerRefinement_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICornerRefinement_grpcServer::grpcICornerRefinementServiceImpl::refine(::grpc::ServerContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Point2Df> corners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->corners());
  m_xpcfComponent->refine(image, corners);
  response->set_corners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(corners));
  return ::grpc::Status::OK;
}


}

