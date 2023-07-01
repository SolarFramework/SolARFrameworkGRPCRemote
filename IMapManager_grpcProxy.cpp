// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapManager_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapManager {

IMapManager_grpcProxy::IMapManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::IMapManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(20);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
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
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::setMap(SRef<SolAR::datastructure::Map> const map)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::setMapRequest reqIn;
  ::grpcIMapManager::setMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::setMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::setMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
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
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.map());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getSubmap(uint32_t idCenteredKeyframe, uint32_t nbKeyframes, SRef<SolAR::datastructure::Map>& submap)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getSubmapRequest reqIn;
  ::grpcIMapManager::getSubmapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getSubmap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_idcenteredkeyframe(idCenteredKeyframe);
  reqIn.set_nbkeyframes(nbKeyframes);
  reqIn.set_submap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(submap));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getSubmap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getSubmap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getSubmap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getSubmap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getSubmap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  submap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.submap());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getLocalPointCloud(std::vector<SRef<SolAR::datastructure::Keyframe>> const& keyframes, std::vector<SRef<SolAR::datastructure::CloudPoint>>& localPointCloud) const
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getLocalPointCloud_grpc0Request reqIn;
  ::grpcIMapManager::getLocalPointCloud_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getLocalPointCloud", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  reqIn.set_localpointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(localPointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getLocalPointCloud request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getLocalPointCloud_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getLocalPointCloud response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getLocalPointCloud_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getLocalPointCloud_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  localPointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.localpointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getLocalPointCloud(SRef<SolAR::datastructure::Keyframe> const keyframe, float const minWeightNeighbor, std::vector<SRef<SolAR::datastructure::CloudPoint>>& localPointCloud) const
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getLocalPointCloud_grpc1Request reqIn;
  ::grpcIMapManager::getLocalPointCloud_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getLocalPointCloud", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  reqIn.set_minweightneighbor(minWeightNeighbor);
  reqIn.set_localpointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(localPointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getLocalPointCloud request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getLocalPointCloud_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getLocalPointCloud response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getLocalPointCloud_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getLocalPointCloud_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  localPointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.localpointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::addCloudPoint(SRef<SolAR::datastructure::CloudPoint> const cloudPoint)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::addCloudPointRequest reqIn;
  ::grpcIMapManager::addCloudPointResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addCloudPoint", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cloudpoint(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(cloudPoint));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::addCloudPoint request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addCloudPoint(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::addCloudPoint response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
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
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeCloudPoint", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cloudpoint(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(cloudPoint));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::removeCloudPoint request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeCloudPoint(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::removeCloudPoint response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
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
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::addKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::addKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
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
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeKeyframe", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::removeKeyframe request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeKeyframe(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::removeKeyframe response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","removeKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::addCameraParameters(SRef<SolAR::datastructure::CameraParameters> const cameraParameters)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::addCameraParametersRequest reqIn;
  ::grpcIMapManager::addCameraParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "addCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cameraparameters(xpcf::serialize<SRef<SolAR::datastructure::CameraParameters>>(cameraParameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::addCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addCameraParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::addCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","addCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::removeCameraParameters(SRef<SolAR::datastructure::CameraParameters> const cameraParameters)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::removeCameraParametersRequest reqIn;
  ::grpcIMapManager::removeCameraParametersResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "removeCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cameraparameters(xpcf::serialize<SRef<SolAR::datastructure::CameraParameters>>(cameraParameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::removeCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->removeCameraParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::removeCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "removeCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","removeCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getCameraParameters(uint32_t const id, SRef<SolAR::datastructure::CameraParameters>& cameraParameters)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getCameraParameters_grpc0Request reqIn;
  ::grpcIMapManager::getCameraParameters_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_id(id);
  reqIn.set_cameraparameters(xpcf::serialize<SRef<SolAR::datastructure::CameraParameters>>(cameraParameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCameraParameters_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCameraParameters_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getCameraParameters_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cameraParameters = xpcf::deserialize<SRef<SolAR::datastructure::CameraParameters>>(respOut.cameraparameters());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::getCameraParameters(uint32_t const id, SolAR::datastructure::CameraParameters& cameraParameters)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::getCameraParameters_grpc1Request reqIn;
  ::grpcIMapManager::getCameraParameters_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_id(id);
  reqIn.set_cameraparameters(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParameters));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCameraParameters_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::getCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCameraParameters_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","getCameraParameters_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cameraParameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.cameraparameters());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


int  IMapManager_grpcProxy::pointCloudPruning(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& cloudPoints)
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::pointCloudPruningRequest reqIn;
  ::grpcIMapManager::pointCloudPruningResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "pointCloudPruning", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::pointCloudPruning request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->pointCloudPruning(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::pointCloudPruning response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
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
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "keyframePruning", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::keyframePruning request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->keyframePruning(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::keyframePruning response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "keyframePruning rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","keyframePruning",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::visibilityPruning()
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::visibilityPruningRequest reqIn;
  ::grpcIMapManager::visibilityPruningResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "visibilityPruning", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::visibilityPruning request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->visibilityPruning(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::visibilityPruning response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "visibilityPruning rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","visibilityPruning",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::saveToFile() const
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::saveToFileRequest reqIn;
  ::grpcIMapManager::saveToFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::saveToFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::saveToFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::loadFromFile()
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::loadFromFileRequest reqIn;
  ::grpcIMapManager::loadFromFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::loadFromFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::loadFromFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapManager_grpcProxy::deleteFile()
{
  ::grpc::ClientContext context;
  ::grpcIMapManager::deleteFileRequest reqIn;
  ::grpcIMapManager::deleteFileResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "deleteFile", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::deleteFile request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->deleteFile(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapManager_grpcProxy::deleteFile response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "deleteFile rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapManagerService","deleteFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

