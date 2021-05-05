// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IContoursFilter_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIContoursFilter {

IContoursFilter_grpcProxy::IContoursFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IContoursFilter_grpcProxy>())
{
  declareInterface<SolAR::api::features::IContoursFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IContoursFilter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursFilter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIContoursFilter::grpcIContoursFilterService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IContoursFilter_grpcProxy::filter(std::vector<SolAR::datastructure::Contour2Df> const& inContours, std::vector<SolAR::datastructure::Contour2Df>& outContours)
{
  ::grpc::ClientContext context;
  ::grpcIContoursFilter::filterRequest reqIn;
  ::grpcIContoursFilter::filterResponse respOut;
  reqIn.set_incontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(inContours));
  reqIn.set_outcontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(outContours));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filterrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIContoursFilterService","filter",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(respOut.outcontours());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

