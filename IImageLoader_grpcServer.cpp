// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageLoader_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageLoader::IImageLoader_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageLoader::IImageLoader_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageLoader {

IImageLoader_grpcServer::IImageLoader_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageLoader_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageLoader>(m_grpcService.m_xpcfComponent);
}


void IImageLoader_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageLoader_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageLoader_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageLoader_grpcServer::grpcIImageLoaderServiceImpl::getImage(::grpc::ServerContext* context, const ::grpcIImageLoader::getImageRequest* request, ::grpcIImageLoader::getImageResponse* response)
{
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getImage(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IImageLoader_grpcServer::grpcIImageLoaderServiceImpl::reloadImage(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIImageLoader::reloadImageResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reloadImage();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

