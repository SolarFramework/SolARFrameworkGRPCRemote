// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPointCloudManager_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPointCloudManager {

IPointCloudManager_grpcServer::IPointCloudManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::IPointCloudManager>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(19);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IPointCloudManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudManager_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPointCloudManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoint_grpc0(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoint_grpc0Request* request, ::grpcIPointCloudManager::addPoint_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addPoint", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoint request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::CloudPoint> point = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(request->point());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoint(point);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoint response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoints_grpc0(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoints_grpc0Request* request, ::grpcIPointCloudManager::addPoints_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoints(points);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoint_grpc1(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoint_grpc1Request* request, ::grpcIPointCloudManager::addPoint_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addPoint", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoint request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CloudPoint point = xpcf::deserialize<SolAR::datastructure::CloudPoint>(request->point());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoint(point);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoint response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoints_grpc1(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoints_grpc1Request* request, ::grpcIPointCloudManager::addPoints_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "addPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::CloudPoint> points = xpcf::deserialize<std::vector<SolAR::datastructure::CloudPoint>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoints(points);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::addPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointRequest* request, ::grpcIPointCloudManager::getPointResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPoint", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getPoint request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t id = request->id();
  SRef<SolAR::datastructure::CloudPoint> point = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(request->point());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPoint(id, point);
  response->set_point(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(point));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getPoint response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointsRequest* request, ::grpcIPointCloudManager::getPointsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<uint32_t> ids = xpcf::deserialize<std::vector<uint32_t>>(request->ids());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPoints(ids, points);
  response->set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getAllPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getAllPointsRequest* request, ::grpcIPointCloudManager::getAllPointsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getAllPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getAllPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllPoints(points);
  response->set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getAllPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::suppressPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::suppressPointRequest* request, ::grpcIPointCloudManager::suppressPointResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "suppressPoint", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::suppressPoint request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t id = request->id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressPoint(id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::suppressPoint response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::suppressPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::suppressPointsRequest* request, ::grpcIPointCloudManager::suppressPointsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "suppressPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::suppressPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<uint32_t> ids = xpcf::deserialize<std::vector<uint32_t>>(request->ids());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressPoints(ids);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::suppressPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getDescriptorType(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getDescriptorTypeRequest* request, ::grpcIPointCloudManager::getDescriptorTypeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDescriptorType", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getDescriptorType request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::DescriptorType returnValue = m_xpcfComponent->getDescriptorType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getDescriptorType response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::setDescriptorType(::grpc::ServerContext* context, const ::grpcIPointCloudManager::setDescriptorTypeRequest* request, ::grpcIPointCloudManager::setDescriptorTypeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setDescriptorType", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::setDescriptorType request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::DescriptorType type = static_cast<SolAR::datastructure::DescriptorType>(request->type());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDescriptorType(type);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::setDescriptorType response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::isExistPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::isExistPointRequest* request, ::grpcIPointCloudManager::isExistPointResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isExistPoint", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::isExistPoint request received at " << to_simple_string(start) << std::endl;
  #endif
  uint32_t id = request->id();
  bool returnValue = m_xpcfComponent->isExistPoint(id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::isExistPoint response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getNbPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getNbPointsRequest* request, ::grpcIPointCloudManager::getNbPointsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNbPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getNbPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  int returnValue = m_xpcfComponent->getNbPoints();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getNbPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcIPointCloudManager::saveToFileRequest* request, ::grpcIPointCloudManager::saveToFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "saveToFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::saveToFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::saveToFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcIPointCloudManager::loadFromFileRequest* request, ::grpcIPointCloudManager::loadFromFileResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "loadFromFile", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::loadFromFile request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::loadFromFile response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getConstPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getConstPointCloudRequest* request, ::grpcIPointCloudManager::getConstPointCloudResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getConstPointCloud", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getConstPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> returnValue = m_xpcfComponent->getConstPointCloud();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getConstPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointCloudRequest* request, ::grpcIPointCloudManager::getPointCloudResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPointCloud", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getPointCloud(pointCloud);
  response->set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<std::unique_lock<std::mutex>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::getPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::setPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::setPointCloudRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::setPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  m_xpcfComponent->setPointCloud(pointCloud);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudManager_grpcServer::setPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

