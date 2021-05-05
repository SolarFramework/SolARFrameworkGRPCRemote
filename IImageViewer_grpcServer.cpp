// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageViewer_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageViewer::IImageViewer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageViewer::IImageViewer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageViewer {

IImageViewer_grpcServer::IImageViewer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageViewer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::IImageViewer>(m_grpcService.m_xpcfComponent);
}


void IImageViewer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageViewer_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageViewer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageViewer_grpcServer::grpcIImageViewerServiceImpl::display(::grpc::ServerContext* context, const ::grpcIImageViewer::displayRequest* request, ::grpcIImageViewer::displayResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->display(img);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IImageViewer_grpcServer::grpcIImageViewerServiceImpl::displayKey(::grpc::ServerContext* context, const ::grpcIImageViewer::displayKeyRequest* request, ::grpcIImageViewer::displayKeyResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  char key = static_cast<char>(request->key());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->displayKey(img, key);
  response->set_key(static_cast<int32_t>(key));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

