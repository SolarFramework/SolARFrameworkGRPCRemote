// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ITracking_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer>();

namespace org::bcom::xpcf::grpc::serverITracking {

ITracking_grpcServer::ITracking_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ITracking_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::slam::ITracking>(m_grpcService.m_xpcfComponent);
}


void ITracking_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITracking_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ITracking_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ITracking_grpcServer::grpcITrackingServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcITracking::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status ITracking_grpcServer::grpcITrackingServiceImpl::updateReferenceKeyframe(::grpc::ServerContext* context, const ::grpcITracking::updateReferenceKeyframeRequest* request, ::google::protobuf::Empty* response)
{
  SRef<SolAR::datastructure::Keyframe> refKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->refkeyframe());
  m_xpcfComponent->updateReferenceKeyframe(refKeyframe);
  return ::grpc::Status::OK;
}


::grpc::Status ITracking_grpcServer::grpcITrackingServiceImpl::process(::grpc::ServerContext* context, const ::grpcITracking::processRequest* request, ::grpcITracking::processResponse* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(frame, displayImage);
  response->set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

