// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeypointsReIndexer_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeypointsReIndexer {

IKeypointsReIndexer_grpcServer::IKeypointsReIndexer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeypointsReIndexer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IKeypointsReIndexer>(m_grpcService.m_xpcfComponent);
}


void IKeypointsReIndexer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointsReIndexer_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeypointsReIndexer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeypointsReIndexer_grpcServer::grpcIKeypointsReIndexerServiceImpl::reindex(::grpc::ServerContext* context, const ::grpcIKeypointsReIndexer::reindexRequest* request, ::grpcIKeypointsReIndexer::reindexResponse* response)
{
  std::vector<SolAR::datastructure::Keypoint> keypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints1());
  std::vector<SolAR::datastructure::Keypoint> keypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point2Df> matchedKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->matchedkeypoints1());
  std::vector<SolAR::datastructure::Point2Df> matchedKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->matchedkeypoints2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reindex(keypoints1, keypoints2, matches, matchedKeypoints1, matchedKeypoints2);
  response->set_matchedkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(matchedKeypoints1));
  response->set_matchedkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(matchedKeypoints2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

