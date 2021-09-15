// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ITrackableLoader_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyITrackableLoader::ITrackableLoader_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyITrackableLoader::ITrackableLoader_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyITrackableLoader {

ITrackableLoader_grpcProxy::ITrackableLoader_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ITrackableLoader_grpcProxy>())
{
  declareInterface<SolAR::api::input::files::ITrackableLoader>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ITrackableLoader_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITrackableLoader_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcITrackableLoader::grpcITrackableLoaderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ITrackableLoader_grpcProxy::loadTrackable(SRef<SolAR::datastructure::Trackable>& trackable)
{
  ::grpc::ClientContext context;
  ::grpcITrackableLoader::loadTrackableRequest reqIn;
  ::grpcITrackableLoader::loadTrackableResponse respOut;
  reqIn.set_trackable(xpcf::serialize<SRef<SolAR::datastructure::Trackable>>(trackable));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadTrackable(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadTrackable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackableLoaderService","loadTrackable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  trackable = xpcf::deserialize<SRef<SolAR::datastructure::Trackable>>(respOut.trackable());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

