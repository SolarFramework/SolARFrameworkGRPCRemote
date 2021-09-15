// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapManager_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapManager {

IMapManager_grpcProxy::IMapManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::IMapManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IMapManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMapManager::grpcIMapManagerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::setMap(SRef<SolAR::datastructure::Map> const map)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::setMapRequest reqIn;
  ::grpcIMapManager::setMapResponse respOut;
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMap(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","setMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getMap(SRef<SolAR::datastructure::Map>& map)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getMapRequest reqIn;
  ::grpcIMapManager::getMapResponse respOut;
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMap(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.map());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getLocalPointCloud(SRef<SolAR::datastructure::Keyframe> const keyframe, float const minWeightNeighbor, std::vector<SRef<SolAR::datastructure::CloudPoint>>& localPointCloud) const
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getLocalPointCloudRequest reqIn;
  ::grpcIMapManager::getLocalPointCloudResponse respOut;
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  reqIn.set_minweightneighbor(minWeightNeighbor);
  reqIn.set_localpointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(localPointCloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getLocalPointCloud(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getLocalPointCloud rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getLocalPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  localPointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.localpointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::addCloudPoint(SRef<SolAR::datastructure::CloudPoint> const cloudPoint)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::addCloudPointRequest reqIn;
  ::grpcIMapManager::addCloudPointResponse respOut;
  reqIn.set_cloudpoint(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(cloudPoint));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addCloudPoint(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addCloudPoint rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","addCloudPoint",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::removeCloudPoint(SRef<SolAR::datastructure::CloudPoint> const cloudPoint)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::removeCloudPointRequest reqIn;
  ::grpcIMapManager::removeCloudPointResponse respOut;
  reqIn.set_cloudpoint(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(cloudPoint));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeCloudPoint(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeCloudPoint rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","removeCloudPoint",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::addKeyframeRequest reqIn;
  ::grpcIMapManager::addKeyframeResponse respOut;
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","addKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::removeKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::removeKeyframeRequest reqIn;
  ::grpcIMapManager::removeKeyframeResponse respOut;
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","removeKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


int  IMapManager_grpcProxy::pointCloudPruning(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& cloudPoints)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::pointCloudPruningRequest reqIn;
  ::grpcIMapManager::pointCloudPruningResponse respOut;
  reqIn.set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->pointCloudPruning(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "pointCloudPruning rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","pointCloudPruning",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


int  IMapManager_grpcProxy::keyframePruning(std::vector<SRef<SolAR::datastructure::Keyframe>> const& keyframes)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::keyframePruningRequest reqIn;
  ::grpcIMapManager::keyframePruningResponse respOut;
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->keyframePruning(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "keyframePruning rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","keyframePruning",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::saveToFile() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMapManager::saveToFileResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::loadFromFile()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMapManager::loadFromFileResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

