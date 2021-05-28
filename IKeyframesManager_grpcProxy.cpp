// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeyframesManager_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeyframesManager {

IKeyframesManager_grpcProxy::IKeyframesManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeyframesManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::IKeyframesManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IKeyframesManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframesManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeyframesManager::grpcIKeyframesManagerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::addKeyframe_grpc0Request reqIn;
  ::grpcIKeyframesManager::addKeyframe_grpc0Response respOut;
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","addKeyframe_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::addKeyframe(SolAR::datastructure::Keyframe const& keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::addKeyframe_grpc1Request reqIn;
  ::grpcIKeyframesManager::addKeyframe_grpc1Response respOut;
  reqIn.set_keyframe(xpcf::serialize<SolAR::datastructure::Keyframe>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","addKeyframe_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::getKeyframe(uint32_t const id, SRef<SolAR::datastructure::Keyframe>& keyframe) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getKeyframeRequest reqIn;
  ::grpcIKeyframesManager::getKeyframeResponse respOut;
  reqIn.set_id(id);
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(respOut.keyframe());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::getKeyframes(std::vector<uint32_t> const& ids, std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getKeyframesRequest reqIn;
  ::grpcIKeyframesManager::getKeyframesResponse respOut;
  reqIn.set_ids(xpcf::serialize<std::vector<uint32_t>>(ids));
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframes(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframesrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getKeyframes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(respOut.keyframes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::getAllKeyframes(std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getAllKeyframesRequest reqIn;
  ::grpcIKeyframesManager::getAllKeyframesResponse respOut;
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllKeyframes(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllKeyframesrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getAllKeyframes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(respOut.keyframes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::suppressKeyframe(uint32_t const id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::suppressKeyframeRequest reqIn;
  ::grpcIKeyframesManager::suppressKeyframeResponse respOut;
  reqIn.set_id(id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressKeyframerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","suppressKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::DescriptorType  IKeyframesManager_grpcProxy::getDescriptorType() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIKeyframesManager::getDescriptorTypeResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDescriptorType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDescriptorTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getDescriptorType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::datastructure::DescriptorType>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::setDescriptorType(SolAR::datastructure::DescriptorType const& type)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::setDescriptorTypeRequest reqIn;
  ::grpcIKeyframesManager::setDescriptorTypeResponse respOut;
  reqIn.set_type(static_cast<int32_t>(type));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDescriptorType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDescriptorTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","setDescriptorType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


bool  IKeyframesManager_grpcProxy::isExistKeyframe(uint32_t const id) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::isExistKeyframeRequest reqIn;
  ::grpcIKeyframesManager::isExistKeyframeResponse respOut;
  reqIn.set_id(id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isExistKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isExistKeyframerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","isExistKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


int  IKeyframesManager_grpcProxy::getNbKeyframes() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIKeyframesManager::getNbKeyframesResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNbKeyframes(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNbKeyframesrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getNbKeyframes",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::saveToFileRequest reqIn;
  ::grpcIKeyframesManager::saveToFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframesManager_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::loadFromFileRequest reqIn;
  ::grpcIKeyframesManager::loadFromFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SRef<SolAR::datastructure::KeyframeCollection> const&  IKeyframesManager_grpcProxy::getConstKeyframeCollection() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIKeyframesManager::getConstKeyframeCollectionResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getConstKeyframeCollection(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getConstKeyframeCollectionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getConstKeyframeCollection",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


std::unique_lock<std::mutex>  IKeyframesManager_grpcProxy::getKeyframeCollection(SRef<SolAR::datastructure::KeyframeCollection>& keyframeCollection)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::getKeyframeCollectionRequest reqIn;
  ::grpcIKeyframesManager::getKeyframeCollectionResponse respOut;
  reqIn.set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframeCollection(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframeCollectionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","getKeyframeCollection",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(respOut.keyframecollection());
}


void  IKeyframesManager_grpcProxy::setKeyframeCollection(SRef<SolAR::datastructure::KeyframeCollection> const keyframeCollection)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframesManager::setKeyframeCollectionRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_keyframecollection(xpcf::serialize<SRef<SolAR::datastructure::KeyframeCollection>>(keyframeCollection));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setKeyframeCollection(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setKeyframeCollectionrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframesManagerService","setKeyframeCollection",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

