// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IProject_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIProject::IProject_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIProject::IProject_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIProject {

IProject_grpcServer::IProject_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IProject_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IProject>(m_grpcService.m_xpcfComponent);
}


void IProject_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IProject_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IProject_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IProject_grpcServer::grpcIProjectServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIProject::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IProject_grpcServer::grpcIProjectServiceImpl::project_grpc0(::grpc::ServerContext* context, const ::grpcIProject::project_grpc0Request* request, ::grpcIProject::project_grpc0Response* response)
{
  std::vector<SolAR::datastructure::Point3Df> inputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->inputpoints());
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->project(inputPoints, imagePoints, pose);
  response->set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IProject_grpcServer::grpcIProjectServiceImpl::project_grpc1(::grpc::ServerContext* context, const ::grpcIProject::project_grpc1Request* request, ::grpcIProject::project_grpc1Response* response)
{
  std::vector<SRef<SolAR::datastructure::CloudPoint>> inputPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->inputpoints());
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->project(inputPoints, imagePoints, pose);
  response->set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

