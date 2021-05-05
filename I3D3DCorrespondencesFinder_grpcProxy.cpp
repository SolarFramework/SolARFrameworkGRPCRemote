// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3D3DCorrespondencesFinder_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder {

I3D3DCorrespondencesFinder_grpcProxy::I3D3DCorrespondencesFinder_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3D3DCorrespondencesFinder_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I3D3DCorrespondencesFinder>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I3D3DCorrespondencesFinder_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3D3DCorrespondencesFinder_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3D3DCorrespondencesFinder::grpcI3D3DCorrespondencesFinderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I3D3DCorrespondencesFinder_grpcProxy::find(SRef<SolAR::datastructure::Keyframe> const firstKeyframe, SRef<SolAR::datastructure::Keyframe> const secondKeyframe, std::vector<SolAR::datastructure::DescriptorMatch> const& current_matches, std::vector<SRef<SolAR::datastructure::CloudPoint>>& firstCloudPoints, std::vector<SRef<SolAR::datastructure::CloudPoint>>& secondCloudPoints, std::vector<SolAR::datastructure::DescriptorMatch>& found_matches, std::vector<SolAR::datastructure::DescriptorMatch>& remaining_matches)
{
  ::grpc::ClientContext context;
  ::grpcI3D3DCorrespondencesFinder::find_grpc0Request reqIn;
  ::grpcI3D3DCorrespondencesFinder::find_grpc0Response respOut;
  reqIn.set_firstkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(firstKeyframe));
  reqIn.set_secondkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(secondKeyframe));
  reqIn.set_current_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(current_matches));
  reqIn.set_firstcloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(firstCloudPoints));
  reqIn.set_secondcloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(secondCloudPoints));
  reqIn.set_found_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(found_matches));
  reqIn.set_remaining_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(remaining_matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->find_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "find_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3D3DCorrespondencesFinderService","find_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  firstCloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.firstcloudpoints());
  secondCloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.secondcloudpoints());
  found_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.found_matches());
  remaining_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.remaining_matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  I3D3DCorrespondencesFinder_grpcProxy::find(SRef<SolAR::datastructure::Keyframe> const firstKeyframe, SRef<SolAR::datastructure::Keyframe> const secondKeyframe, std::vector<SolAR::datastructure::DescriptorMatch> const& current_matches, std::vector<uint32_t>& firstCloudPointsIndices, std::vector<uint32_t>& secondCloudPointsIndices, std::vector<SolAR::datastructure::DescriptorMatch>& found_matches)
{
  ::grpc::ClientContext context;
  ::grpcI3D3DCorrespondencesFinder::find_grpc1Request reqIn;
  ::grpcI3D3DCorrespondencesFinder::find_grpc1Response respOut;
  reqIn.set_firstkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(firstKeyframe));
  reqIn.set_secondkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(secondKeyframe));
  reqIn.set_current_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(current_matches));
  reqIn.set_firstcloudpointsindices(xpcf::serialize<std::vector<uint32_t>>(firstCloudPointsIndices));
  reqIn.set_secondcloudpointsindices(xpcf::serialize<std::vector<uint32_t>>(secondCloudPointsIndices));
  reqIn.set_found_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(found_matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->find_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "find_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3D3DCorrespondencesFinderService","find_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  firstCloudPointsIndices = xpcf::deserialize<std::vector<uint32_t>>(respOut.firstcloudpointsindices());
  secondCloudPointsIndices = xpcf::deserialize<std::vector<uint32_t>>(respOut.secondcloudpointsindices());
  found_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.found_matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

