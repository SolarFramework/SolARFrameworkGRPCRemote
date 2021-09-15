// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageRectification_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageRectification {

IImageRectification_grpcServer::IImageRectification_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageRectification_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageRectification>(m_grpcService.m_xpcfComponent);
}


void IImageRectification_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageRectification_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageRectification_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageRectification_grpcServer::grpcIImageRectificationServiceImpl::rectify(::grpc::ServerContext* context, const ::grpcIImageRectification::rectifyRequest* request, ::grpcIImageRectification::rectifyResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::RectificationParameters rectParams = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams());
  SRef<SolAR::datastructure::Image> rectifiedImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->rectifiedimage());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->rectify(image, camParams, rectParams, rectifiedImage);
  response->set_rectifiedimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(rectifiedImage));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

