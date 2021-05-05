// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeypointsReIndexer_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeypointsReIndexer::IKeypointsReIndexer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeypointsReIndexer::IKeypointsReIndexer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeypointsReIndexer {

IKeypointsReIndexer_grpcProxy::IKeypointsReIndexer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeypointsReIndexer_grpcProxy>())
{
  declareInterface<SolAR::api::features::IKeypointsReIndexer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IKeypointsReIndexer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointsReIndexer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeypointsReIndexer::grpcIKeypointsReIndexerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IKeypointsReIndexer_grpcProxy::reindex(std::vector<SolAR::datastructure::Keypoint> const& keypoints1, std::vector<SolAR::datastructure::Keypoint> const& keypoints2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point2Df>& matchedKeypoints1, std::vector<SolAR::datastructure::Point2Df>& matchedKeypoints2)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointsReIndexer::reindexRequest reqIn;
  ::grpcIKeypointsReIndexer::reindexResponse respOut;
  reqIn.set_keypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints1));
  reqIn.set_keypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_matchedkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(matchedKeypoints1));
  reqIn.set_matchedkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(matchedKeypoints2));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reindex(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reindexrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointsReIndexerService","reindex",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matchedKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.matchedkeypoints1());
  matchedKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.matchedkeypoints2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

