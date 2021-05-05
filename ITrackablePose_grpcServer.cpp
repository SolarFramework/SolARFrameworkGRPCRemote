// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ITrackablePose_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer>();

namespace org::bcom::xpcf::grpc::serverITrackablePose {

ITrackablePose_grpcServer::ITrackablePose_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ITrackablePose_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::ITrackablePose>(m_grpcService.m_xpcfComponent);
}


void ITrackablePose_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITrackablePose_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ITrackablePose_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ITrackablePose_grpcServer::grpcITrackablePoseServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcITrackablePose::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status ITrackablePose_grpcServer::grpcITrackablePoseServiceImpl::setTrackable(::grpc::ServerContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response)
{
  SRef<SolAR::datastructure::Trackable> trackable = xpcf::deserialize<SRef<SolAR::datastructure::Trackable>>(request->trackable());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setTrackable(trackable);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status ITrackablePose_grpcServer::grpcITrackablePoseServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(image, pose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

