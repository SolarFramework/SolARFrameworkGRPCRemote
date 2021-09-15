// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImageRectification_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImageRectification::IImageRectification_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImageRectification::IImageRectification_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImageRectification {

IImageRectification_grpcProxy::IImageRectification_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImageRectification_grpcProxy>())
{
  declareInterface<SolAR::api::image::IImageRectification>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImageRectification_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageRectification_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImageRectification::grpcIImageRectificationService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImageRectification_grpcProxy::rectify(SRef<SolAR::datastructure::Image> image, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::RectificationParameters const& rectParams, SRef<SolAR::datastructure::Image>& rectifiedImage)
{
  ::grpc::ClientContext context;
  ::grpcIImageRectification::rectifyRequest reqIn;
  ::grpcIImageRectification::rectifyResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  reqIn.set_rectparams(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams));
  reqIn.set_rectifiedimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(rectifiedImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->rectify(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "rectify rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageRectificationService","rectify",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  rectifiedImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.rectifiedimage());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

