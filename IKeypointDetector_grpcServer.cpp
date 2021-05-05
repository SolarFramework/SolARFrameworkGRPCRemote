// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeypointDetector_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeypointDetector {

IKeypointDetector_grpcServer::IKeypointDetector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeypointDetector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IKeypointDetector>(m_grpcService.m_xpcfComponent);
}


void IKeypointDetector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointDetector_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeypointDetector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeypointDetector_grpcServer::grpcIKeypointDetectorServiceImpl::setType(::grpc::ServerContext* context, const ::grpcIKeypointDetector::setTypeRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::api::features::IKeypointDetector::KeypointDetectorType type = static_cast<SolAR::api::features::IKeypointDetector::KeypointDetectorType>(request->type());
  m_xpcfComponent->setType(type);
  return ::grpc::Status::OK;
}


::grpc::Status IKeypointDetector_grpcServer::grpcIKeypointDetectorServiceImpl::getType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeypointDetector::getTypeResponse* response)
{
  SolAR::api::features::IKeypointDetector::KeypointDetectorType returnValue = m_xpcfComponent->getType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeypointDetector_grpcServer::grpcIKeypointDetectorServiceImpl::detect(::grpc::ServerContext* context, const ::grpcIKeypointDetector::detectRequest* request, ::grpcIKeypointDetector::detectResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  m_xpcfComponent->detect(image, keypoints);
  response->set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  return ::grpc::Status::OK;
}


}

