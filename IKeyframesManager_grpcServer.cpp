// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeyframesManager_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeyframesManager {

IKeyframesManager_grpcServer::IKeyframesManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeyframesManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::IKeyframesManager>(m_grpcService.m_xpcfComponent);
}


void IKeyframesManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframesManager_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeyframesManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::addKeyframe_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframesManager::addKeyframe_grpc0Request* request, ::grpcIKeyframesManager::addKeyframe_grpc0Response* response)
{
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::addKeyframe_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframesManager::addKeyframe_grpc1Request* request, ::grpcIKeyframesManager::addKeyframe_grpc1Response* response)
{
  SolAR::datastructure::Keyframe keyframe = xpcf::deserialize<SolAR::datastructure::Keyframe>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addKeyframe(keyframe);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframeRequest* request, ::grpcIKeyframesManager::getKeyframeResponse* response)
{
  uint32_t id = request->id();
  SRef<SolAR::datastructure::Keyframe> keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getKeyframe(id, keyframe);
  response->set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframesRequest* request, ::grpcIKeyframesManager::getKeyframesResponse* response)
{
  std::vector<uint32_t> ids = xpcf::deserialize<std::vector<uint32_t>>(request->ids());
  std::vector<SRef<SolAR::datastructure::Keyframe>> keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(request->keyframes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getKeyframes(ids, keyframes);
  response->set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getAllKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getAllKeyframesRequest* request, ::grpcIKeyframesManager::getAllKeyframesResponse* response)
{
  std::vector<SRef<SolAR::datastructure::Keyframe>> keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(request->keyframes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllKeyframes(keyframes);
  response->set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::suppressKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::suppressKeyframeRequest* request, ::grpcIKeyframesManager::suppressKeyframeResponse* response)
{
  uint32_t id = request->id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressKeyframe(id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getDescriptorType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeyframesManager::getDescriptorTypeResponse* response)
{
  SolAR::datastructure::DescriptorType returnValue = m_xpcfComponent->getDescriptorType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::setDescriptorType(::grpc::ServerContext* context, const ::grpcIKeyframesManager::setDescriptorTypeRequest* request, ::grpcIKeyframesManager::setDescriptorTypeResponse* response)
{
  SolAR::datastructure::DescriptorType type = static_cast<SolAR::datastructure::DescriptorType>(request->type());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDescriptorType(type);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::isExistKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::isExistKeyframeRequest* request, ::grpcIKeyframesManager::isExistKeyframeResponse* response)
{
  uint32_t id = request->id();
  bool returnValue = m_xpcfComponent->isExistKeyframe(id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getNbKeyframes(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeyframesManager::getNbKeyframesResponse* response)
{
  int returnValue = m_xpcfComponent->getNbKeyframes();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcIKeyframesManager::saveToFileRequest* request, ::grpcIKeyframesManager::saveToFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcIKeyframesManager::loadFromFileRequest* request, ::grpcIKeyframesManager::loadFromFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getConstKeyframeCollection(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeyframesManager::getConstKeyframeCollectionResponse* response)
{
  SRef<SolAR::datastructure::KeyframeCollection> returnValue = m_xpcfComponent->getConstKeyframeCollection();
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::getKeyframeCollection(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframeCollectionRequest* request, ::grpcIKeyframesManager::getKeyframeCollectionResponse* response)
{
  SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(request->keyframecollection());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getKeyframeCollection(keyframeCollection);
  response->set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  return ::grpc::Status::OK;
}


::grpc::Status IKeyframesManager_grpcServer::grpcIKeyframesManagerServiceImpl::setKeyframeCollection(::grpc::ServerContext* context, const ::grpcIKeyframesManager::setKeyframeCollectionRequest* request, ::google::protobuf::Empty* response)
{
  SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(request->keyframecollection());
  m_xpcfComponent->setKeyframeCollection(keyframeCollection);
  return ::grpc::Status::OK;
}


}

