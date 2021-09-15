// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IHomographyValidation_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIHomographyValidation {

IHomographyValidation_grpcProxy::IHomographyValidation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IHomographyValidation_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::IHomographyValidation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IHomographyValidation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IHomographyValidation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIHomographyValidation::grpcIHomographyValidationService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


bool  IHomographyValidation_grpcProxy::isValid(std::vector<SolAR::datastructure::Point2Df> const& ref2DSquaredMarkerCorners, std::vector<SolAR::datastructure::Point2Df> const& projected2DSquaredMarkerCorners)
{
  ::grpc::ClientContext context;
  ::grpcIHomographyValidation::isValidRequest reqIn;
  ::grpcIHomographyValidation::isValidResponse respOut;
  reqIn.set_ref2dsquaredmarkercorners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(ref2DSquaredMarkerCorners));
  reqIn.set_projected2dsquaredmarkercorners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(projected2DSquaredMarkerCorners));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isValid(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isValid rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIHomographyValidationService","isValid",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


}

