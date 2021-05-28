// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPointCloudManager_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPointCloudManager {

IPointCloudManager_grpcServer::IPointCloudManager_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudManager_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::storage::IPointCloudManager>(m_grpcService.m_xpcfComponent);
}


void IPointCloudManager_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudManager_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPointCloudManager_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoint_grpc0(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoint_grpc0Request* request, ::grpcIPointCloudManager::addPoint_grpc0Response* response)
{
  SRef<SolAR::datastructure::CloudPoint> point = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(request->point());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoint(point);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoints_grpc0(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoints_grpc0Request* request, ::grpcIPointCloudManager::addPoints_grpc0Response* response)
{
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoints(points);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoint_grpc1(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoint_grpc1Request* request, ::grpcIPointCloudManager::addPoint_grpc1Response* response)
{
  SolAR::datastructure::CloudPoint point = xpcf::deserialize<SolAR::datastructure::CloudPoint>(request->point());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoint(point);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::addPoints_grpc1(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoints_grpc1Request* request, ::grpcIPointCloudManager::addPoints_grpc1Response* response)
{
  std::vector<SolAR::datastructure::CloudPoint> points = xpcf::deserialize<std::vector<SolAR::datastructure::CloudPoint>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->addPoints(points);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointRequest* request, ::grpcIPointCloudManager::getPointResponse* response)
{
  uint32_t id = request->id();
  SRef<SolAR::datastructure::CloudPoint> point = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(request->point());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPoint(id, point);
  response->set_point(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(point));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointsRequest* request, ::grpcIPointCloudManager::getPointsResponse* response)
{
  std::vector<uint32_t> ids = xpcf::deserialize<std::vector<uint32_t>>(request->ids());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPoints(ids, points);
  response->set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getAllPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getAllPointsRequest* request, ::grpcIPointCloudManager::getAllPointsResponse* response)
{
  std::vector<SRef<SolAR::datastructure::CloudPoint>> points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->points());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getAllPoints(points);
  response->set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::suppressPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::suppressPointRequest* request, ::grpcIPointCloudManager::suppressPointResponse* response)
{
  uint32_t id = request->id();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressPoint(id);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::suppressPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::suppressPointsRequest* request, ::grpcIPointCloudManager::suppressPointsResponse* response)
{
  std::vector<uint32_t> ids = xpcf::deserialize<std::vector<uint32_t>>(request->ids());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->suppressPoints(ids);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getDescriptorType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIPointCloudManager::getDescriptorTypeResponse* response)
{
  SolAR::datastructure::DescriptorType returnValue = m_xpcfComponent->getDescriptorType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::setDescriptorType(::grpc::ServerContext* context, const ::grpcIPointCloudManager::setDescriptorTypeRequest* request, ::grpcIPointCloudManager::setDescriptorTypeResponse* response)
{
  SolAR::datastructure::DescriptorType type = static_cast<SolAR::datastructure::DescriptorType>(request->type());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDescriptorType(type);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::isExistPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::isExistPointRequest* request, ::grpcIPointCloudManager::isExistPointResponse* response)
{
  uint32_t id = request->id();
  bool returnValue = m_xpcfComponent->isExistPoint(id);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getNbPoints(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIPointCloudManager::getNbPointsResponse* response)
{
  int returnValue = m_xpcfComponent->getNbPoints();
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::saveToFile(::grpc::ServerContext* context, const ::grpcIPointCloudManager::saveToFileRequest* request, ::grpcIPointCloudManager::saveToFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->saveToFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::loadFromFile(::grpc::ServerContext* context, const ::grpcIPointCloudManager::loadFromFileRequest* request, ::grpcIPointCloudManager::loadFromFileResponse* response)
{
  std::string file = request->file();
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadFromFile(file);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getConstPointCloud(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIPointCloudManager::getConstPointCloudResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> returnValue = m_xpcfComponent->getConstPointCloud();
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointCloudRequest* request, ::grpcIPointCloudManager::getPointCloudResponse* response)
{
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  std::unique_lock<std::mutex> returnValue = m_xpcfComponent->getPointCloud(pointCloud);
  response->set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  return ::grpc::Status::OK;
}


::grpc::Status IPointCloudManager_grpcServer::grpcIPointCloudManagerServiceImpl::setPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::setPointCloudRequest* request, ::google::protobuf::Empty* response)
{
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  m_xpcfComponent->setPointCloud(pointCloud);
  return ::grpc::Status::OK;
}


}

