// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IRelocalizer_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIRelocalizer::IRelocalizer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIRelocalizer::IRelocalizer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIRelocalizer {

IRelocalizer_grpcProxy::IRelocalizer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IRelocalizer_grpcProxy>())
{
  declareInterface<SolAR::api::reloc::IRelocalizer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IRelocalizer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRelocalizer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIRelocalizer::grpcIRelocalizerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IRelocalizer_grpcProxy::addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizer::addKeyframeRequest reqIn;
  ::grpcIRelocalizer::addKeyframeResponse respOut;
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizerService","addKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRelocalizer_grpcProxy::relocalize(SRef<SolAR::datastructure::Frame> const frame, SolAR::datastructure::Transform3Df& pose)
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizer::relocalizeRequest reqIn;
  ::grpcIRelocalizer::relocalizeResponse respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->relocalize(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "relocalize rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizerService","relocalize",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

