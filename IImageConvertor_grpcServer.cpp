// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageConvertor_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageConvertor {

IImageConvertor_grpcServer::IImageConvertor_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageConvertor_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageConvertor>(m_grpcService.m_xpcfComponent);
}


void IImageConvertor_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageConvertor_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageConvertor_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageConvertor_grpcServer::grpcIImageConvertorServiceImpl::convert_grpc0(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response)
{
  SRef<SolAR::datastructure::Image> imgSrc = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgsrc());
  SRef<SolAR::datastructure::Image> imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgdst());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->convert(imgSrc, imgDst);
  response->set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IImageConvertor_grpcServer::grpcIImageConvertorServiceImpl::convert_grpc1(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response)
{
  SRef<SolAR::datastructure::Image> imgSrc = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgsrc());
  SRef<SolAR::datastructure::Image> imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgdst());
  SolAR::datastructure::Image::ImageLayout destLayout = static_cast<SolAR::datastructure::Image::ImageLayout>(request->destlayout());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->convert(imgSrc, imgDst, destLayout);
  response->set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IImageConvertor_grpcServer::grpcIImageConvertorServiceImpl::convertLookUpTable(::grpc::ServerContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response)
{
  SRef<SolAR::datastructure::Image> imgSrc = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgsrc());
  SRef<SolAR::datastructure::Image> imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgdst());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->convertLookUpTable(imgSrc, imgDst);
  response->set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

