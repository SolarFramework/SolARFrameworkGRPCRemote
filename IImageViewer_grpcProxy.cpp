// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImageViewer_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImageViewer::IImageViewer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImageViewer::IImageViewer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImageViewer {

IImageViewer_grpcProxy::IImageViewer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImageViewer_grpcProxy>())
{
  declareInterface<SolAR::api::display::IImageViewer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImageViewer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageViewer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImageViewer::grpcIImageViewerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImageViewer_grpcProxy::display(SRef<SolAR::datastructure::Image> const img)
{
  ::grpc::ClientContext context;
  ::grpcIImageViewer::displayRequest reqIn;
  ::grpcIImageViewer::displayResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->display(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "display rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageViewerService","display",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IImageViewer_grpcProxy::displayKey(SRef<SolAR::datastructure::Image> const img, char& key)
{
  ::grpc::ClientContext context;
  ::grpcIImageViewer::displayKeyRequest reqIn;
  ::grpcIImageViewer::displayKeyResponse respOut;
  reqIn.set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  reqIn.set_key(static_cast<int32_t>(key));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->displayKey(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "displayKey rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageViewerService","displayKey",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  key = static_cast<char>(respOut.key());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

