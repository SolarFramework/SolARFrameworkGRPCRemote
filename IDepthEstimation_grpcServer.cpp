// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDepthEstimation_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDepthEstimation {

IDepthEstimation_grpcServer::IDepthEstimation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDepthEstimation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IDepthEstimation>(m_grpcService.m_xpcfComponent);
}


void IDepthEstimation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthEstimation_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDepthEstimation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDepthEstimation_grpcServer::grpcIDepthEstimationServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcIDepthEstimation::estimateRequest* request, ::grpcIDepthEstimation::estimateResponse* response)
{
  std::vector<SolAR::datastructure::Keypoint> rectKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectkeypoints1());
  std::vector<SolAR::datastructure::Keypoint> rectKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectkeypoints2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  float focal = request->focal();
  float baseline = request->baseline();
  SolAR::datastructure::StereoType type = xpcf::deserialize<SolAR::datastructure::StereoType>(request->type());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(rectKeypoints1, rectKeypoints2, matches, focal, baseline, type);
  response->set_rectkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints1));
  response->set_rectkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

