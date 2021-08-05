// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRegression_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRegression {

IRegression_grpcServer::IRegression_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRegression_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::reloc::IRegression>(m_grpcService.m_xpcfComponent);
}


void IRegression_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRegression_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRegression_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIRegression::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::add(::grpc::ServerContext* context, const ::grpcIRegression::addRequest* request, ::grpcIRegression::addResponse* response)
{
  std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> descriptors = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(request->descriptors());
  std::vector<SolAR::datastructure::Point3Df> points3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->points3d());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->add(descriptors, points3D);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::regress(::grpc::ServerContext* context, const ::grpcIRegression::regressRequest* request, ::grpcIRegression::regressResponse* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  std::vector<SolAR::datastructure::Point2Df> points2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d());
  std::vector<SolAR::datastructure::Point3Df> points3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->points3d());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->regress(frame, points2D, points3D);
  response->set_points2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D));
  response->set_points3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(points3D));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::update(::grpc::ServerContext* context, const ::grpcIRegression::updateRequest* request, ::grpcIRegression::updateResponse* response)
{
  std::vector<bool> inliers = xpcf::deserialize<std::vector<bool>>(request->inliers());
  SolAR::datastructure::Transform3Df cameraPose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->camerapose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->update(inliers, cameraPose);
  response->set_inliers(xpcf::serialize<std::vector<bool>>(inliers));
  response->set_camerapose(xpcf::serialize<SolAR::datastructure::Transform3Df>(cameraPose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::loadModel(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::loadModelResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadModel();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::getTrainingStatus(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::getTrainingStatusResponse* response)
{
  std::vector<int> returnValue = m_xpcfComponent->getTrainingStatus();
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::getNumActiveLeaves(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::getNumActiveLeavesResponse* response)
{
  int returnValue = m_xpcfComponent->getNumActiveLeaves();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::getNumPassiveLeaves(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIRegression::getNumPassiveLeavesResponse* response)
{
  int returnValue = m_xpcfComponent->getNumPassiveLeaves();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

