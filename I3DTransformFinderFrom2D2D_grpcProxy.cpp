// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DTransformFinderFrom2D2D_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D {

I3DTransformFinderFrom2D2D_grpcProxy::I3DTransformFinderFrom2D2D_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DTransformFinderFrom2D2D_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I3DTransformFinderFrom2D2D>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I3DTransformFinderFrom2D2D_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransformFinderFrom2D2D_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DTransformFinderFrom2D2D::grpcI3DTransformFinderFrom2D2DService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I3DTransformFinderFrom2D2D_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformFinderFrom2D2D::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformFinderFrom2D2DService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  I3DTransformFinderFrom2D2D_grpcProxy::estimate(std::vector<SolAR::datastructure::Point2Df> const& pointsView1, std::vector<SolAR::datastructure::Point2Df> const& pointsView2, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df& poseView2, std::vector<SolAR::datastructure::DescriptorMatch>& inlierMatches)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Request reqIn;
  ::grpcI3DTransformFinderFrom2D2D::estimate_grpc0Response respOut;
  reqIn.set_pointsview1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(pointsView1));
  reqIn.set_pointsview2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(pointsView2));
  reqIn.set_poseview1(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView1));
  reqIn.set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  reqIn.set_inliermatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inlierMatches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformFinderFrom2D2DService","estimate_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.poseview2());
  inlierMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.inliermatches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3DTransformFinderFrom2D2D_grpcProxy::estimate(std::vector<SolAR::datastructure::Keypoint> const& pointsView1, std::vector<SolAR::datastructure::Keypoint> const& pointsView2, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df& poseView2, std::vector<SolAR::datastructure::DescriptorMatch>& inlierMatches)
{
  ::grpc::ClientContext context;
  ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Request reqIn;
  ::grpcI3DTransformFinderFrom2D2D::estimate_grpc1Response respOut;
  reqIn.set_pointsview1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(pointsView1));
  reqIn.set_pointsview2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(pointsView2));
  reqIn.set_poseview1(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView1));
  reqIn.set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  reqIn.set_inliermatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(inlierMatches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DTransformFinderFrom2D2DService","estimate_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  poseView2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.poseview2());
  inlierMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.inliermatches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

