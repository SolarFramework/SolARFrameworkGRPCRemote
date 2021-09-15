// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DTransformSACFinderFrom2D3D_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D {

I3DTransformSACFinderFrom2D3D_grpcProxy::I3DTransformSACFinderFrom2D3D_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformSACFinderFrom2D3D_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I3DTransformSACFinderFrom2D3D>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I3DTransformSACFinderFrom2D3D_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformSACFinderFrom2D3D_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DTransformSACFinderFrom2D3D::grpcI3DTransformSACFinderFrom2D3DService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I3DTransformSACFinderFrom2D3D_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformSACFinderFrom2D3D::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformSACFinderFrom2D3DService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  I3DTransformSACFinderFrom2D3D_grpcProxy::estimate(std::vector<SolAR::datastructure::Point2Df> const& imagePoints, std::vector<SolAR::datastructure::Point3Df> const& worldPoints, std::vector<uint32_t>& inliers, SolAR::datastructure::Transform3Df& pose, SolAR::datastructure::Transform3Df const initialPose)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformSACFinderFrom2D3D::estimateRequest reqIn;
  ::grpcI3DTransformSACFinderFrom2D3D::estimateResponse respOut;
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  reqIn.set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  reqIn.set_initialpose(xpcf::serialize<SolAR::datastructure::Transform3Df>(initialPose));
  reqIn.set_inliers(xpcf::serialize<std::vector<uint32_t>>(inliers));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformSACFinderFrom2D3DService","estimate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  inliers = xpcf::deserialize<std::vector<uint32_t>>(respOut.inliers());
  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

