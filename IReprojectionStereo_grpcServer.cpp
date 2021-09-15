// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IReprojectionStereo_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIReprojectionStereo {

IReprojectionStereo_grpcServer::IReprojectionStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IReprojectionStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IReprojectionStereo>(m_grpcService.m_xpcfComponent);
}


void IReprojectionStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IReprojectionStereo_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IReprojectionStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IReprojectionStereo_grpcServer::grpcIReprojectionStereoServiceImpl::reprojectToUnrectification(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToUnrectificationRequest* request, ::grpcIReprojectionStereo::reprojectToUnrectificationResponse* response)
{
  std::vector<SolAR::datastructure::Keypoint> rectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectifiedkeypoints());
  SolAR::datastructure::RectificationParameters rectParams = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams());
  std::vector<SolAR::datastructure::Keypoint> unrectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->unrectifiedkeypoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reprojectToUnrectification(rectifiedKeypoints, rectParams, unrectifiedKeypoints);
  response->set_unrectifiedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(unrectifiedKeypoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IReprojectionStereo_grpcServer::grpcIReprojectionStereoServiceImpl::reprojectToCloudPoints_grpc0(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Request* request, ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> undistortedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->undistortedkeypoints());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->cloudpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reprojectToCloudPoints(undistortedKeypoints, descriptors, pose, intrinsicParams, cloudPoints);
  response->set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IReprojectionStereo_grpcServer::grpcIReprojectionStereoServiceImpl::reprojectToCloudPoints_grpc1(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Request* request, ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Response* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->cloudpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reprojectToCloudPoints(frame, intrinsicParams, cloudPoints);
  response->set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

