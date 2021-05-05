// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposer_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer {

I2Dto3DTransformDecomposer_grpcProxy::I2Dto3DTransformDecomposer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposer_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I2Dto3DTransformDecomposer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I2Dto3DTransformDecomposer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2Dto3DTransformDecomposer::grpcI2Dto3DTransformDecomposerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I2Dto3DTransformDecomposer_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2Dto3DTransformDecomposerService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


bool  I2Dto3DTransformDecomposer_grpcProxy::decompose(SolAR::datastructure::Transform2Df const& F, std::vector<SolAR::datastructure::Transform3Df>& decomposedPoses)
{
  ::grpc::ClientContext context;
  ::grpcI2Dto3DTransformDecomposer::decomposeRequest reqIn;
  ::grpcI2Dto3DTransformDecomposer::decomposeResponse respOut;
  reqIn.set_f(xpcf::serialize<SolAR::datastructure::Transform2Df>(F));
  reqIn.set_decomposedposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(decomposedPoses));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->decompose(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "decomposerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2Dto3DTransformDecomposerService","decompose",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  decomposedPoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.decomposedposes());
  return respOut.xpcfgrpcreturnvalue();
}


}

