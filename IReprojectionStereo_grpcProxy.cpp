// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IReprojectionStereo_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIReprojectionStereo::IReprojectionStereo_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIReprojectionStereo::IReprojectionStereo_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIReprojectionStereo {

IReprojectionStereo_grpcProxy::IReprojectionStereo_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IReprojectionStereo_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IReprojectionStereo>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IReprojectionStereo_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IReprojectionStereo_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIReprojectionStereo::grpcIReprojectionStereoService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IReprojectionStereo_grpcProxy::reprojectToUnrectification(std::vector<SolAR::datastructure::Keypoint> const& rectifiedKeypoints, SolAR::datastructure::RectificationParameters const& rectParams, std::vector<SolAR::datastructure::Keypoint>& unrectifiedKeypoints)
{
  ::grpc::ClientContext context;
  ::grpcIReprojectionStereo::reprojectToUnrectificationRequest reqIn;
  ::grpcIReprojectionStereo::reprojectToUnrectificationResponse respOut;
  reqIn.set_rectifiedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectifiedKeypoints));
  reqIn.set_rectparams(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams));
  reqIn.set_unrectifiedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(unrectifiedKeypoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reprojectToUnrectification(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reprojectToUnrectification rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIReprojectionStereoService","reprojectToUnrectification",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  unrectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.unrectifiedkeypoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IReprojectionStereo_grpcProxy::reprojectToCloudPoints(std::vector<SolAR::datastructure::Keypoint> const& undistortedKeypoints, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors, SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CamCalibration const& intrinsicParams, std::vector<SRef<SolAR::datastructure::CloudPoint>>& cloudPoints)
{
  ::grpc::ClientContext context;
  ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Request reqIn;
  ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Response respOut;
  reqIn.set_undistortedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(undistortedKeypoints));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reprojectToCloudPoints_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reprojectToCloudPoints_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIReprojectionStereoService","reprojectToCloudPoints_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.cloudpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IReprojectionStereo_grpcProxy::reprojectToCloudPoints(SRef<SolAR::datastructure::Frame> frame, SolAR::datastructure::CamCalibration const& intrinsicParams, std::vector<SRef<SolAR::datastructure::CloudPoint>>& cloudPoints)
{
  ::grpc::ClientContext context;
  ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Request reqIn;
  ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Response respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reprojectToCloudPoints_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reprojectToCloudPoints_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIReprojectionStereoService","reprojectToCloudPoints_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.cloudpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

