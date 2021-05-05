// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IUnproject_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIUnproject::IUnproject_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIUnproject::IUnproject_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIUnproject {

IUnproject_grpcServer::IUnproject_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IUnproject_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IUnproject>(m_grpcService.m_xpcfComponent);
}


void IUnproject_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IUnproject_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IUnproject_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IUnproject_grpcServer::grpcIUnprojectServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIUnproject::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IUnproject_grpcServer::grpcIUnprojectServiceImpl::unproject_grpc0(::grpc::ServerContext* context, const ::grpcIUnproject::unproject_grpc0Request* request, ::grpcIUnproject::unproject_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  std::vector<SolAR::datastructure::Point3Df> worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->worldpoints());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unproject(imagePoints, worldPoints, pose);
  response->set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IUnproject_grpcServer::grpcIUnprojectServiceImpl::unproject_grpc1(::grpc::ServerContext* context, const ::grpcIUnproject::unproject_grpc1Request* request, ::grpcIUnproject::unproject_grpc1Response* response)
{
  std::vector<SolAR::datastructure::Keypoint> imageKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->imagekeypoints());
  std::vector<SolAR::datastructure::Point3Df> worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->worldpoints());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->unproject(imageKeypoints, worldPoints, pose);
  response->set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

