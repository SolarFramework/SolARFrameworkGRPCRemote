// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IOpticalFlowEstimator_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIOpticalFlowEstimator {

IOpticalFlowEstimator_grpcServer::IOpticalFlowEstimator_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IOpticalFlowEstimator_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::tracking::IOpticalFlowEstimator>(m_grpcService.m_xpcfComponent);
}


void IOpticalFlowEstimator_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IOpticalFlowEstimator_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IOpticalFlowEstimator_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IOpticalFlowEstimator_grpcServer::grpcIOpticalFlowEstimatorServiceImpl::estimate_grpc0(::grpc::ServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc0Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc0Response* response)
{
  SRef<SolAR::datastructure::Image> previousImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->previousimage());
  SRef<SolAR::datastructure::Image> currentImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->currentimage());
  std::vector<SolAR::datastructure::Keypoint> pointsToTrack = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->pointstotrack());
  std::vector<SolAR::datastructure::Point2Df> trackedPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->trackedpoints());
  std::vector<unsigned char> status = xpcf::deserialize<std::vector<unsigned char>>(request->status());
  std::vector<float> error = xpcf::deserialize<std::vector<float>>(request->error());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(previousImage, currentImage, pointsToTrack, trackedPoints, status, error);
  response->set_trackedpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(trackedPoints));
  response->set_status(xpcf::serialize<std::vector<unsigned char>>(status));
  response->set_error(xpcf::serialize<std::vector<float>>(error));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IOpticalFlowEstimator_grpcServer::grpcIOpticalFlowEstimatorServiceImpl::estimate_grpc1(::grpc::ServerContext* context, const ::grpcIOpticalFlowEstimator::estimate_grpc1Request* request, ::grpcIOpticalFlowEstimator::estimate_grpc1Response* response)
{
  SRef<SolAR::datastructure::Image> previousImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->previousimage());
  SRef<SolAR::datastructure::Image> currentImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->currentimage());
  std::vector<SolAR::datastructure::Point2Df> pointsToTrack = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->pointstotrack());
  std::vector<SolAR::datastructure::Point2Df> trackedPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->trackedpoints());
  std::vector<unsigned char> status = xpcf::deserialize<std::vector<unsigned char>>(request->status());
  std::vector<float> error = xpcf::deserialize<std::vector<float>>(request->error());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(previousImage, currentImage, pointsToTrack, trackedPoints, status, error);
  response->set_trackedpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(trackedPoints));
  response->set_status(xpcf::serialize<std::vector<unsigned char>>(status));
  response->set_error(xpcf::serialize<std::vector<float>>(error));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

