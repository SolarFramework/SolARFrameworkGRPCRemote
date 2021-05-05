// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom3D3D_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D {

I3DTransformFinderFrom3D3D_grpcProxy::I3DTransformFinderFrom3D3D_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom3D3D_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I3DTransformFinderFrom3D3D>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I3DTransformFinderFrom3D3D_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom3D3D_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DTransformFinderFrom3D3D::grpcI3DTransformFinderFrom3D3DService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I3DTransformFinderFrom3D3D_grpcProxy::estimate(SRef<SolAR::datastructure::PointCloud> const sourcePointCloud, SRef<SolAR::datastructure::PointCloud> const targetPointCloud, SolAR::datastructure::Transform3Df& pose, SolAR::datastructure::Transform3Df const& initialPose)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformFinderFrom3D3D::estimateRequest reqIn;
  ::grpcI3DTransformFinderFrom3D3D::estimateResponse respOut;
  reqIn.set_sourcepointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(sourcePointCloud));
  reqIn.set_targetpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(targetPointCloud));
  reqIn.set_initialpose(xpcf::serialize<SolAR::datastructure::Transform3Df>(initialPose));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimaterpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformFinderFrom3D3DService","estimate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

