// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImageFilter_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImageFilter::IImageFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImageFilter::IImageFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImageFilter {

IImageFilter_grpcProxy::IImageFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImageFilter_grpcProxy>())
{
  declareInterface<SolAR::api::image::IImageFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImageFilter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageFilter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImageFilter::grpcIImageFilterService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImageFilter_grpcProxy::filter(SRef<SolAR::datastructure::Image> const input, SRef<SolAR::datastructure::Image>& output)
{
  ::grpc::ClientContext context;
  ::grpcIImageFilter::filterRequest reqIn;
  ::grpcIImageFilter::filterResponse respOut;
  reqIn.set_input(xpcf::serialize<SRef<SolAR::datastructure::Image>>(input));
  reqIn.set_output(xpcf::serialize<SRef<SolAR::datastructure::Image>>(output));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageFilterService","filter",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  output = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.output());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

