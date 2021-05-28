// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapManager_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapManager {

IMapManager_grpcServer::IMapManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::IMapManager>(m_grpcService.m_xpcfComponent);
}


void IMapManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapManager_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::setMap(::grpc::ServerContext* context, const ::grpcIMapManager::setMapRequest* request, ::grpcIMapManager::setMapResponse* response)
{
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMap(map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::getMap(::grpc::ServerContext* context, const ::grpcIMapManager::getMapRequest* request, ::grpcIMapManager::getMapResponse* response)
{
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMap(map);
  response->set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::getLocalPointCloud(::grpc::ServerContext* context, const ::grpcIMapManager::getLocalPointCloudRequest* request, ::grpcIMapManager::getLocalPointCloudResponse* response)
{
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  float minWeightNeighbor = request->minweightneighbor();
  std::vector<SRef<SolAR::datastructure::CloudPoint>> localPointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->localpointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getLocalPointCloud(keyframe, minWeightNeighbor, localPointCloud);
  response->set_localpointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(localPointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::addCloudPoint(::grpc::ServerContext* context, const ::grpcIMapManager::addCloudPointRequest* request, ::grpcIMapManager::addCloudPointResponse* response)
{
  SRef<SolAR::datastructure::CloudPoint> cloudPoint = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(request->cloudpoint());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addCloudPoint(cloudPoint);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::removeCloudPoint(::grpc::ServerContext* context, const ::grpcIMapManager::removeCloudPointRequest* request, ::grpcIMapManager::removeCloudPointResponse* response)
{
  SRef<SolAR::datastructure::CloudPoint> cloudPoint = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(request->cloudpoint());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeCloudPoint(cloudPoint);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::addKeyframe(::grpc::ServerContext* context, const ::grpcIMapManager::addKeyframeRequest* request, ::grpcIMapManager::addKeyframeResponse* response)
{
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::removeKeyframe(::grpc::ServerContext* context, const ::grpcIMapManager::removeKeyframeRequest* request, ::grpcIMapManager::removeKeyframeResponse* response)
{
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->removeKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::pointCloudPruning(::grpc::ServerContext* context, const ::grpcIMapManager::pointCloudPruningRequest* request, ::grpcIMapManager::pointCloudPruningResponse* response)
{
  std::vector<SRef<SolAR::datastructure::CloudPoint>> cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->cloudpoints());
  int returnValue = m_xpcfComponent->pointCloudPruning(cloudPoints);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::keyframePruning(::grpc::ServerContext* context, const ::grpcIMapManager::keyframePruningRequest* request, ::grpcIMapManager::keyframePruningResponse* response)
{
  std::vector<SRef<SolAR::datastructure::Keyframe>> keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(request->keyframes());
  int returnValue = m_xpcfComponent->keyframePruning(keyframes);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapManager::saveToFileResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IMapManager_grpcServer::grpcIMapManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapManager::loadFromFileResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

