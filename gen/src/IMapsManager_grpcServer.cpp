// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapsManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapsManager::IMapsManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapsManager::IMapsManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapsManager {

IMapsManager_grpcServer::IMapsManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapsManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::service::IMapsManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(13);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMapsManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapsManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapsManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::createMap(::grpc::ServerContext* context, const ::grpcIMapsManager::createMapRequest* request, ::grpcIMapsManager::createMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "createMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::createMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->createMap(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::createMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::deleteMap(::grpc::ServerContext* context, const ::grpcIMapsManager::deleteMapRequest* request, ::grpcIMapsManager::deleteMapResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "deleteMap", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::deleteMap request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->deleteMap(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::deleteMap response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::getAllMaps(::grpc::ServerContext* context, const ::grpcIMapsManager::getAllMapsRequest* request, ::grpcIMapsManager::getAllMapsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllMaps", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getAllMaps request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<std::string> mapUUIDList = xpcf::deserialize<std::vector<std::string>>(request->mapuuidlist());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllMaps(mapUUIDList);
  response->set_mapuuidlist(xpcf::serialize<std::vector<std::string>>(mapUUIDList));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getAllMaps response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::increaseMapClients(::grpc::ServerContext* context, const ::grpcIMapsManager::increaseMapClientsRequest* request, ::grpcIMapsManager::increaseMapClientsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "increaseMapClients", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::increaseMapClients request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  std::string serviceURL = request->serviceurl();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->increaseMapClients(mapUUID, serviceURL);
  response->set_serviceurl(serviceURL);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::increaseMapClients response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::decreaseMapClients(::grpc::ServerContext* context, const ::grpcIMapsManager::decreaseMapClientsRequest* request, ::grpcIMapsManager::decreaseMapClientsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "decreaseMapClients", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::decreaseMapClients request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->decreaseMapClients(mapUUID);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::decreaseMapClients response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::getMapRequest(::grpc::ServerContext* context, const ::grpcIMapsManager::getMapRequestRequest* request, ::grpcIMapsManager::getMapRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::api::service::GetMapRequestOption keyframeImagesOption = static_cast<SolAR::api::service::GetMapRequestOption>(request->keyframeimagesoption());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapRequest(mapUUID, map, keyframeImagesOption);
  response->set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::setMapRequest(::grpc::ServerContext* context, const ::grpcIMapsManager::setMapRequestRequest* request, ::grpcIMapsManager::setMapRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setMapRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::setMapRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SRef<SolAR::datastructure::Map> mapDatastructure = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->mapdatastructure());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMapRequest(mapUUID, mapDatastructure);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::setMapRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::getPointCloudRequest(::grpc::ServerContext* context, const ::grpcIMapsManager::getPointCloudRequestRequest* request, ::grpcIMapsManager::getPointCloudRequestResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPointCloudRequest", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getPointCloudRequest request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloudRequest(mapUUID, pointCloud);
  response->set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getPointCloudRequest response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::getMapInfo(::grpc::ServerContext* context, const ::grpcIMapsManager::getMapInfoRequest* request, ::grpcIMapsManager::getMapInfoResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapInfo", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapInfo request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  SolAR::datastructure::DescriptorType descriptorType = static_cast<SolAR::datastructure::DescriptorType>(request->descriptortype());
  uint32_t mapSupportedTypes = request->mapsupportedtypes();
  uint32_t dataSize = request->datasize();
  bool areImageSaved = request->areimagesaved();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapInfo(mapUUID, descriptorType, mapSupportedTypes, dataSize, areImageSaved);
  response->set_descriptortype(static_cast<int32_t>(descriptorType));
  response->set_mapsupportedtypes(mapSupportedTypes);
  response->set_datasize(dataSize);
  response->set_areimagesaved(areImageSaved);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapInfo response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::requestMapProcessing(::grpc::ServerContext* context, const ::grpcIMapsManager::requestMapProcessingRequest* request, ::grpcIMapsManager::requestMapProcessingResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "requestMapProcessing", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::requestMapProcessing request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string mapUUID = request->mapuuid();
  std::string resultMapUUID = request->resultmapuuid();
  SolAR::api::service::MapProcessingType processingType = static_cast<SolAR::api::service::MapProcessingType>(request->processingtype());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->requestMapProcessing(mapUUID, resultMapUUID, processingType);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::requestMapProcessing response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::getMapProcessingStatus(::grpc::ServerContext* context, const ::grpcIMapsManager::getMapProcessingStatusRequest* request, ::grpcIMapsManager::getMapProcessingStatusResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapProcessingStatus", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapProcessingStatus request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string resultMapUUID = request->resultmapuuid();
  SolAR::api::service::MapProcessingStatus status = static_cast<SolAR::api::service::MapProcessingStatus>(request->status());
  float progress = request->progress();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapProcessingStatus(resultMapUUID, status, progress);
  response->set_status(static_cast<int32_t>(status));
  response->set_progress(progress);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapProcessingStatus response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapsManager_grpcServer::grpcIMapsManagerServiceImpl::getMapProcessingData(::grpc::ServerContext* context, const ::grpcIMapsManager::getMapProcessingDataRequest* request, ::grpcIMapsManager::getMapProcessingDataResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getMapProcessingData", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapProcessingData request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string resultMapUUID = request->resultmapuuid();
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pointcloud());
  std::vector<SolAR::datastructure::Transform3Df> keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->keyframeposes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getMapProcessingData(resultMapUUID, pointCloud, keyframePoses);
  response->set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  response->set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapsManager_grpcServer::getMapProcessingData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

