// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3D3DCorrespondencesFinder_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder {

I3D3DCorrespondencesFinder_grpcServer::I3D3DCorrespondencesFinder_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3D3DCorrespondencesFinder_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I3D3DCorrespondencesFinder>(m_grpcService.m_xpcfComponent);
}


void I3D3DCorrespondencesFinder_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3D3DCorrespondencesFinder_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3D3DCorrespondencesFinder_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3D3DCorrespondencesFinder_grpcServer::grpcI3D3DCorrespondencesFinderServiceImpl::find_grpc0(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc0Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc0Response* response)
{
  SRef<SolAR::datastructure::Keyframe> firstKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->firstkeyframe());
  SRef<SolAR::datastructure::Keyframe> secondKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->secondkeyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> current_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->current_matches());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> firstCloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->firstcloudpoints());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> secondCloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->secondcloudpoints());
  std::vector<SolAR::datastructure::DescriptorMatch> found_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->found_matches());
  std::vector<SolAR::datastructure::DescriptorMatch> remaining_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->remaining_matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->find(firstKeyframe, secondKeyframe, current_matches, firstCloudPoints, secondCloudPoints, found_matches, remaining_matches);
  response->set_firstcloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(firstCloudPoints));
  response->set_secondcloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(secondCloudPoints));
  response->set_found_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(found_matches));
  response->set_remaining_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(remaining_matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3D3DCorrespondencesFinder_grpcServer::grpcI3D3DCorrespondencesFinderServiceImpl::find_grpc1(::grpc::ServerContext* context, const ::grpcI3D3DCorrespondencesFinder::find_grpc1Request* request, ::grpcI3D3DCorrespondencesFinder::find_grpc1Response* response)
{
  SRef<SolAR::datastructure::Keyframe> firstKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->firstkeyframe());
  SRef<SolAR::datastructure::Keyframe> secondKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->secondkeyframe());
  std::vector<SolAR::datastructure::DescriptorMatch> current_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->current_matches());
  std::vector<uint32_t> firstCloudPointsIndices = xpcf::deserialize<std::vector<uint32_t>>(request->firstcloudpointsindices());
  std::vector<uint32_t> secondCloudPointsIndices = xpcf::deserialize<std::vector<uint32_t>>(request->secondcloudpointsindices());
  std::vector<SolAR::datastructure::DescriptorMatch> found_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->found_matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->find(firstKeyframe, secondKeyframe, current_matches, firstCloudPointsIndices, secondCloudPointsIndices, found_matches);
  response->set_firstcloudpointsindices(xpcf::serialize<std::vector<uint32_t>>(firstCloudPointsIndices));
  response->set_secondcloudpointsindices(xpcf::serialize<std::vector<uint32_t>>(secondCloudPointsIndices));
  response->set_found_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(found_matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

