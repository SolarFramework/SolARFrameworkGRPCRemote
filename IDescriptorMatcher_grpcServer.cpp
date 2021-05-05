// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorMatcher_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorMatcher::IDescriptorMatcher_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorMatcher::IDescriptorMatcher_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorMatcher {

IDescriptorMatcher_grpcServer::IDescriptorMatcher_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorMatcher_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorMatcher>(m_grpcService.m_xpcfComponent);
}


void IDescriptorMatcher_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorMatcher_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorMatcher_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorMatcher_grpcServer::grpcIDescriptorMatcherServiceImpl::match_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorMatcher::match_grpc0Request* request, ::grpcIDescriptorMatcher::match_grpc0Response* response)
{
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::api::features::IDescriptorMatcher::RetCode returnValue = m_xpcfComponent->match(descriptors1, descriptors2, matches);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorMatcher_grpcServer::grpcIDescriptorMatcherServiceImpl::match_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorMatcher::match_grpc1Request* request, ::grpcIDescriptorMatcher::match_grpc1Response* response)
{
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> descriptors2 = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(request->descriptors2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::api::features::IDescriptorMatcher::RetCode returnValue = m_xpcfComponent->match(descriptors1, descriptors2, matches);
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

