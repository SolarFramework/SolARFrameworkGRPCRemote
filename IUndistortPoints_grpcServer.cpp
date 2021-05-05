// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IUndistortPoints_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIUndistortPoints {

IUndistortPoints_grpcServer::IUndistortPoints_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IUndistortPoints_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IUndistortPoints>(m_grpcService.m_xpcfComponent);
}


void IUndistortPoints_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IUndistortPoints_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IUndistortPoints_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IUndistortPoints_grpcServer::grpcIUndistortPointsServiceImpl::undistort_grpc0(::grpc::ServerContext* context, const ::grpcIUndistortPoints::undistort_grpc0Request* request, ::grpcIUndistortPoints::undistort_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point2Df> inputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->inputpoints());
  std::vector<SolAR::datastructure::Point2Df> outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->outputpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->undistort(inputPoints, outputPoints);
  response->set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IUndistortPoints_grpcServer::grpcIUndistortPointsServiceImpl::undistort_grpc1(::grpc::ServerContext* context, const ::grpcIUndistortPoints::undistort_grpc1Request* request, ::grpcIUndistortPoints::undistort_grpc1Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> inputKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->inputkeypoints());
  std::vector<SolAR::datastructure::Keypoint> outputKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->outputkeypoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->undistort(inputKeypoints, outputKeypoints);
  response->set_outputkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(outputKeypoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IUndistortPoints_grpcServer::grpcIUndistortPointsServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIUndistortPoints::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


}

