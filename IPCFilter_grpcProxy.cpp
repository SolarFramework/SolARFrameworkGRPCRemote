// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IPCFilter_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIPCFilter::IPCFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIPCFilter::IPCFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIPCFilter {

IPCFilter_grpcProxy::IPCFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IPCFilter_grpcProxy>())
{
  declareInterface<SolAR::api::pointCloud::IPCFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IPCFilter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPCFilter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIPCFilter::grpcIPCFilterService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IPCFilter_grpcProxy::filter(SRef<SolAR::datastructure::PointCloud> const inPointCloud, SRef<SolAR::datastructure::PointCloud>& outPointCloud) const
{
  ::grpc::ClientContext context;
  ::grpcIPCFilter::filterRequest reqIn;
  ::grpcIPCFilter::filterResponse respOut;
  reqIn.set_inpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(inPointCloud));
  reqIn.set_outpointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(outPointCloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPCFilterService","filter",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outPointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.outpointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

