// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DPointsRectification_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DPointsRectification::I2DPointsRectification_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DPointsRectification::I2DPointsRectification_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DPointsRectification {

I2DPointsRectification_grpcServer::I2DPointsRectification_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DPointsRectification_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::I2DPointsRectification>(m_grpcService.m_xpcfComponent);
}


void I2DPointsRectification_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DPointsRectification_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DPointsRectification_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DPointsRectification_grpcServer::grpcI2DPointsRectificationServiceImpl::rectify_grpc0(::grpc::ServerContext* context, const ::grpcI2DPointsRectification::rectify_grpc0Request* request, ::grpcI2DPointsRectification::rectify_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point2Df> points2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::RectificationParameters rectParams = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams());
  std::vector<SolAR::datastructure::Point2Df> rectifiedPoints2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->rectifiedpoints2d());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->rectify(points2D, camParams, rectParams, rectifiedPoints2D);
  response->set_rectifiedpoints2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(rectifiedPoints2D));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I2DPointsRectification_grpcServer::grpcI2DPointsRectificationServiceImpl::rectify_grpc1(::grpc::ServerContext* context, const ::grpcI2DPointsRectification::rectify_grpc1Request* request, ::grpcI2DPointsRectification::rectify_grpc1Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::RectificationParameters rectParams = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams());
  std::vector<SolAR::datastructure::Keypoint> rectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectifiedkeypoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->rectify(keypoints, camParams, rectParams, rectifiedKeypoints);
  response->set_rectifiedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectifiedKeypoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

