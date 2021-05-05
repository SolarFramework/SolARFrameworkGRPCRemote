// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapping_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapping::IMapping_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapping::IMapping_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapping {

IMapping_grpcServer::IMapping_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapping_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::slam::IMapping>(m_grpcService.m_xpcfComponent);
}


void IMapping_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapping_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapping_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapping_grpcServer::grpcIMappingServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapping::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IMapping_grpcServer::grpcIMappingServiceImpl::process(::grpc::ServerContext* context, const ::grpcIMapping::processRequest* request, ::grpcIMapping::processResponse* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(frame, keyframe);
  response->set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

