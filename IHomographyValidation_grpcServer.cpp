// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IHomographyValidation_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIHomographyValidation {

IHomographyValidation_grpcServer::IHomographyValidation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IHomographyValidation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::IHomographyValidation>(m_grpcService.m_xpcfComponent);
}


void IHomographyValidation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IHomographyValidation_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IHomographyValidation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IHomographyValidation_grpcServer::grpcIHomographyValidationServiceImpl::isValid(::grpc::ServerContext* context, const ::grpcIHomographyValidation::isValidRequest* request, ::grpcIHomographyValidation::isValidResponse* response)
{
  std::vector<SolAR::datastructure::Point2Df> ref2DSquaredMarkerCorners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->ref2dsquaredmarkercorners());
  std::vector<SolAR::datastructure::Point2Df> projected2DSquaredMarkerCorners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->projected2dsquaredmarkercorners());
  bool returnValue = m_xpcfComponent->isValid(ref2DSquaredMarkerCorners, projected2DSquaredMarkerCorners);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

