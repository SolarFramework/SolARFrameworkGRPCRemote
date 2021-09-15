// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICornerRefinement_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICornerRefinement {

ICornerRefinement_grpcProxy::ICornerRefinement_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICornerRefinement_grpcProxy>())
{
  declareInterface<SolAR::api::features::ICornerRefinement>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ICornerRefinement_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICornerRefinement_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICornerRefinement::grpcICornerRefinementService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ICornerRefinement_grpcProxy::refine(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Point2Df>& corners)
{
  ::grpc::ClientContext context;
  ::grpcICornerRefinement::refineRequest reqIn;
  ::grpcICornerRefinement::refineResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_corners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(corners));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->refine(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "refine rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICornerRefinementService","refine",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  corners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.corners());
}


}

