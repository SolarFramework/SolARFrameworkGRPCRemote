// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImage2WorldMapper_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImage2WorldMapper::IImage2WorldMapper_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImage2WorldMapper::IImage2WorldMapper_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImage2WorldMapper {

IImage2WorldMapper_grpcProxy::IImage2WorldMapper_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImage2WorldMapper_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IImage2WorldMapper>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImage2WorldMapper_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImage2WorldMapper_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImage2WorldMapper::grpcIImage2WorldMapperService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImage2WorldMapper_grpcProxy::map(std::vector<SolAR::datastructure::Point2Df> const& digitalPoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints)
{
  ::grpc::ClientContext context;
  ::grpcIImage2WorldMapper::mapRequest reqIn;
  ::grpcIImage2WorldMapper::mapResponse respOut;
  reqIn.set_digitalpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(digitalPoints));
  reqIn.set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->map(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "map rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImage2WorldMapperService","map",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(respOut.worldpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

