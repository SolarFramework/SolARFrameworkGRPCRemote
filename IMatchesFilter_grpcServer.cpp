// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMatchesFilter_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMatchesFilter {

IMatchesFilter_grpcServer::IMatchesFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMatchesFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IMatchesFilter>(m_grpcService.m_xpcfComponent);
}


void IMatchesFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMatchesFilter_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMatchesFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMatchesFilter_grpcServer::grpcIMatchesFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIMatchesFilter::filterRequest* request, ::grpcIMatchesFilter::filterResponse* response)
{
  std::vector<SolAR::datastructure::DescriptorMatch> inputMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->inputmatches());
  std::vector<SolAR::datastructure::DescriptorMatch> outputMatches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->outputmatches());
  std::vector<SolAR::datastructure::Keypoint> keyPoints_1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_1());
  std::vector<SolAR::datastructure::Keypoint> keyPoints_2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_2());
  m_xpcfComponent->filter(inputMatches, outputMatches, keyPoints_1, keyPoints_2);
  response->set_outputmatches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(outputMatches));
  return ::grpc::Status::OK;
}


}

