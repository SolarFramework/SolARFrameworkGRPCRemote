// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeypointDetectorRegion_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeypointDetectorRegion::IKeypointDetectorRegion_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeypointDetectorRegion::IKeypointDetectorRegion_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeypointDetectorRegion {

IKeypointDetectorRegion_grpcServer::IKeypointDetectorRegion_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeypointDetectorRegion_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IKeypointDetectorRegion>(m_grpcService.m_xpcfComponent);
}


void IKeypointDetectorRegion_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointDetectorRegion_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeypointDetectorRegion_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeypointDetectorRegion_grpcServer::grpcIKeypointDetectorRegionServiceImpl::setType(::grpc::ServerContext* context, const ::grpcIKeypointDetectorRegion::setTypeRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::api::features::IKeypointDetector::KeypointDetectorType type = static_cast<SolAR::api::features::IKeypointDetector::KeypointDetectorType>(request->type());
  m_xpcfComponent->setType(type);
  return ::grpc::Status::OK;
}


::grpc::Status IKeypointDetectorRegion_grpcServer::grpcIKeypointDetectorRegionServiceImpl::getType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetectorRegion::getTypeResponse* response)
{
  SolAR::api::features::IKeypointDetector::KeypointDetectorType returnValue = m_xpcfComponent->getType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeypointDetectorRegion_grpcServer::grpcIKeypointDetectorRegionServiceImpl::detect(::grpc::ServerContext* context, const ::grpcIKeypointDetectorRegion::detectRequest* request, ::grpcIKeypointDetectorRegion::detectResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Point2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->contours());
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  m_xpcfComponent->detect(image, contours, keypoints);
  response->set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  return ::grpc::Status::OK;
}


}

