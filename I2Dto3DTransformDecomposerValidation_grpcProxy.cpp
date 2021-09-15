// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposerValidation_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation {

I2Dto3DTransformDecomposerValidation_grpcProxy::I2Dto3DTransformDecomposerValidation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposerValidation_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I2Dto3DTransformDecomposerValidation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I2Dto3DTransformDecomposerValidation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposerValidation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2Dto3DTransformDecomposerValidation::grpcI2Dto3DTransformDecomposerValidationService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I2Dto3DTransformDecomposerValidation_grpcProxy::testMethod()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::google::protobuf::Empty respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->testMethod(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "testMethod rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2Dto3DTransformDecomposerValidationService","testMethod",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

