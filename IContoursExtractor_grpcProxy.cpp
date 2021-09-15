// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IContoursExtractor_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIContoursExtractor {

IContoursExtractor_grpcProxy::IContoursExtractor_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IContoursExtractor_grpcProxy>())
{
  declareInterface<SolAR::api::features::IContoursExtractor>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IContoursExtractor_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursExtractor_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIContoursExtractor::grpcIContoursExtractorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IContoursExtractor_grpcProxy::extract(SRef<SolAR::datastructure::Image> const inputImg, std::vector<SolAR::datastructure::Contour2Df>& contours)
{
  ::grpc::ClientContext context;
  ::grpcIContoursExtractor::extractRequest reqIn;
  ::grpcIContoursExtractor::extractResponse respOut;
  reqIn.set_inputimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(inputImg));
  reqIn.set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(contours));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIContoursExtractorService","extract",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(respOut.contours());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

