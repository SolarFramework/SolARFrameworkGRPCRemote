// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2DTransformFinder_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2DTransformFinder::I2DTransformFinder_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2DTransformFinder::I2DTransformFinder_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2DTransformFinder {

I2DTransformFinder_grpcProxy::I2DTransformFinder_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2DTransformFinder_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I2DTransformFinder>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I2DTransformFinder_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTransformFinder_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2DTransformFinder::grpcI2DTransformFinderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::api::solver::pose::Transform2DFinder::RetCode  I2DTransformFinder_grpcProxy::find(std::vector<SolAR::datastructure::Point2Df> const& srcPoints, std::vector<SolAR::datastructure::Point2Df> const& dstPoints, SolAR::datastructure::Transform2Df& fundamental)
{
  ::grpc::ClientContext context;
  ::grpcI2DTransformFinder::findTransform2DRequest reqIn;
  ::grpcI2DTransformFinder::findTransform2DResponse respOut;
  reqIn.set_srcpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(srcPoints));
  reqIn.set_dstpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(dstPoints));
  reqIn.set_fundamental(xpcf::serialize<SolAR::datastructure::Transform2Df>(fundamental));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->find(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "findrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DTransformFinderService","find",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  fundamental = xpcf::deserialize<SolAR::datastructure::Transform2Df>(respOut.fundamental());
  return static_cast<SolAR::api::solver::pose::Transform2DFinder::RetCode>(respOut.xpcfgrpcreturnvalue());
}


}

