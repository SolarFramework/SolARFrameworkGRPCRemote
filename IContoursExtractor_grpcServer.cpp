// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IContoursExtractor_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIContoursExtractor {

IContoursExtractor_grpcServer::IContoursExtractor_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IContoursExtractor_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IContoursExtractor>(m_grpcService.m_xpcfComponent);
}


void IContoursExtractor_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursExtractor_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IContoursExtractor_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IContoursExtractor_grpcServer::grpcIContoursExtractorServiceImpl::extract(::grpc::ServerContext* context, const ::grpcIContoursExtractor::extractRequest* request, ::grpcIContoursExtractor::extractResponse* response)
{
  SRef<SolAR::datastructure::Image> inputImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->inputimg());
  std::vector<SolAR::datastructure::Contour2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->contours());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->extract(inputImg, contours);
  response->set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(contours));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

