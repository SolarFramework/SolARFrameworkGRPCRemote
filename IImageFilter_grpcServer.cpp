// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageFilter_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageFilter {

IImageFilter_grpcServer::IImageFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageFilter>(m_grpcService.m_xpcfComponent);
}


void IImageFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageFilter_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageFilter_grpcServer::grpcIImageFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIImageFilter::filterRequest* request, ::grpcIImageFilter::filterResponse* response)
{
  SRef<SolAR::datastructure::Image> input = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->input());
  SRef<SolAR::datastructure::Image> output = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->output());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(input, output);
  response->set_output(xpcf::serialize<SRef<SolAR::datastructure::Image>>(output));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

