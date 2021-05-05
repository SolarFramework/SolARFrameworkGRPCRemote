// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IContoursFilter_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIContoursFilter {

IContoursFilter_grpcServer::IContoursFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IContoursFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IContoursFilter>(m_grpcService.m_xpcfComponent);
}


void IContoursFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursFilter_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IContoursFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IContoursFilter_grpcServer::grpcIContoursFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIContoursFilter::filterRequest* request, ::grpcIContoursFilter::filterResponse* response)
{
  std::vector<SolAR::datastructure::Contour2Df> inContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->incontours());
  std::vector<SolAR::datastructure::Contour2Df> outContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->outcontours());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(inContours, outContours);
  response->set_outcontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(outContours));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

