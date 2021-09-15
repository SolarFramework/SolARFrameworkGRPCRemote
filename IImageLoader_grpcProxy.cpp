// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImageLoader_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImageLoader::IImageLoader_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImageLoader::IImageLoader_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImageLoader {

IImageLoader_grpcProxy::IImageLoader_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImageLoader_grpcProxy>())
{
  declareInterface<SolAR::api::image::IImageLoader>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImageLoader_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageLoader_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImageLoader::grpcIImageLoaderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImageLoader_grpcProxy::getImage(SRef<SolAR::datastructure::Image>& img)
{
  ::grpc::ClientContext context;
  ::grpcIImageLoader::getImageRequest reqIn;
  ::grpcIImageLoader::getImageResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getImage(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getImage rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageLoaderService","getImage",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.img());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IImageLoader_grpcProxy::reloadImage()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIImageLoader::reloadImageResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reloadImage(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reloadImage rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageLoaderService","reloadImage",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

