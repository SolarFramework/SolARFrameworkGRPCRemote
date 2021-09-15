// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2DTransform_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2DTransform {

I2DTransform_grpcProxy::I2DTransform_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2DTransform_grpcProxy>())
{
  declareInterface<SolAR::api::geom::I2DTransform>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I2DTransform_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTransform_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2DTransform::grpcI2DTransformService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I2DTransform_grpcProxy::transform(std::vector<SolAR::datastructure::Point2Df> const& inputPoints, SolAR::datastructure::Transform2Df const& transformation, std::vector<SolAR::datastructure::Point2Df>& outputPoints)
{
  ::grpc::ClientContext context;
  ::grpcI2DTransform::transformRequest reqIn;
  ::grpcI2DTransform::transformResponse respOut;
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(inputPoints));
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform2Df>(transformation));
  reqIn.set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->transform(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "transform rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DTransformService","transform",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.outputpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

