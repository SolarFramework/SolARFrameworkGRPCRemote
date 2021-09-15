// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapping_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapping::IMapping_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapping::IMapping_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapping {

IMapping_grpcProxy::IMapping_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapping_grpcProxy>())
{
  declareInterface<SolAR::api::slam::IMapping>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IMapping_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapping_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMapping::grpcIMappingService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IMapping_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& camParams)
{
  ::grpc::ClientContext context;
  ::grpcIMapping::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IMapping_grpcProxy::process(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Keyframe>& keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIMapping::processRequest reqIn;
  ::grpcIMapping::processResponse respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->process(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "process rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingService","process",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(respOut.keyframe());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

