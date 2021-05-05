// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRelocalizer_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRelocalizer::IRelocalizer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRelocalizer::IRelocalizer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRelocalizer {

IRelocalizer_grpcServer::IRelocalizer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRelocalizer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::reloc::IRelocalizer>(m_grpcService.m_xpcfComponent);
}


void IRelocalizer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRelocalizer_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRelocalizer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRelocalizer_grpcServer::grpcIRelocalizerServiceImpl::addKeyframe(::grpc::ServerContext* context, const ::grpcIRelocalizer::addKeyframeRequest* request, ::grpcIRelocalizer::addKeyframeResponse* response)
{
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IRelocalizer_grpcServer::grpcIRelocalizerServiceImpl::relocalize(::grpc::ServerContext* context, const ::grpcIRelocalizer::relocalizeRequest* request, ::grpcIRelocalizer::relocalizeResponse* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->relocalize(frame, pose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

