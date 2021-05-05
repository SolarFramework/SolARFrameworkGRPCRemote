// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2D3DCorrespondencesFinder_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder {

I2D3DCorrespondencesFinder_grpcServer::I2D3DCorrespondencesFinder_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2D3DCorrespondencesFinder_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I2D3DCorrespondencesFinder>(m_grpcService.m_xpcfComponent);
}


void I2D3DCorrespondencesFinder_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2D3DCorrespondencesFinder_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2D3DCorrespondencesFinder_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2D3DCorrespondencesFinder_grpcServer::grpcI2D3DCorrespondencesFinderServiceImpl::find(::grpc::ServerContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest* request, ::grpcI2D3DCorrespondencesFinder::findResponse* response)
{
  SRef<SolAR::datastructure::Frame> lastFrame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->lastframe());
  SRef<SolAR::datastructure::Frame> currentFrame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->currentframe());
  std::vector<SolAR::datastructure::DescriptorMatch> current_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->current_matches());
  std::vector<SolAR::datastructure::Point3Df> shared_3dpoint = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->shared_3dpoint());
  std::vector<SolAR::datastructure::Point2Df> shared_2dpoint = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->shared_2dpoint());
  std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>> corres2D3D = xpcf::deserialize<std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>>>(request->corres2d3d());
  std::vector<SolAR::datastructure::DescriptorMatch> found_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->found_matches());
  std::vector<SolAR::datastructure::DescriptorMatch> remaining_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->remaining_matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->find(lastFrame, currentFrame, current_matches, shared_3dpoint, shared_2dpoint, corres2D3D, found_matches, remaining_matches);
  response->set_shared_3dpoint(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(shared_3dpoint));
  response->set_shared_2dpoint(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(shared_2dpoint));
  response->set_corres2d3d(xpcf::serialize<std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>>>(corres2D3D));
  response->set_found_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(found_matches));
  response->set_remaining_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(remaining_matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

