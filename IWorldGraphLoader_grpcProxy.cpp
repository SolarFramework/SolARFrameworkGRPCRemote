// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IWorldGraphLoader_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIWorldGraphLoader::IWorldGraphLoader_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIWorldGraphLoader::IWorldGraphLoader_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIWorldGraphLoader {

IWorldGraphLoader_grpcProxy::IWorldGraphLoader_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IWorldGraphLoader_grpcProxy>())
{
  declareInterface<SolAR::api::input::files::IWorldGraphLoader>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IWorldGraphLoader_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IWorldGraphLoader_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIWorldGraphLoader::grpcIWorldGraphLoaderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IWorldGraphLoader_grpcProxy::load(std::vector<SRef<SolAR::datastructure::Trackable>>& trackables)
{
  ::grpc::ClientContext context;
  ::grpcIWorldGraphLoader::loadRequest reqIn;
  ::grpcIWorldGraphLoader::loadResponse respOut;
  reqIn.set_trackables(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(trackables));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->load(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "load rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIWorldGraphLoaderService","load",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  trackables = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(respOut.trackables());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

