// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IPointCloudManager_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIPointCloudManager::IPointCloudManager_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIPointCloudManager::IPointCloudManager_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIPointCloudManager {

IPointCloudManager_grpcProxy::IPointCloudManager_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudManager_grpcProxy>())
{
  declareInterface<SolAR::api::storage::IPointCloudManager>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IPointCloudManager_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudManager_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIPointCloudManager::grpcIPointCloudManagerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::addPoint(SRef<SolAR::datastructure::CloudPoint> const point)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::addPoint_grpc0Request reqIn;
  ::grpcIPointCloudManager::addPoint_grpc0Response respOut;
  reqIn.set_point(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(point));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addPoint_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addPoint_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","addPoint_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::addPoints(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& points)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::addPoints_grpc0Request reqIn;
  ::grpcIPointCloudManager::addPoints_grpc0Response respOut;
  reqIn.set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addPoints_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addPoints_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","addPoints_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::addPoint(SolAR::datastructure::CloudPoint const& point)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::addPoint_grpc1Request reqIn;
  ::grpcIPointCloudManager::addPoint_grpc1Response respOut;
  reqIn.set_point(xpcf::serialize<SolAR::datastructure::CloudPoint>(point));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addPoint_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addPoint_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","addPoint_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::addPoints(std::vector<SolAR::datastructure::CloudPoint> const& points)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::addPoints_grpc1Request reqIn;
  ::grpcIPointCloudManager::addPoints_grpc1Response respOut;
  reqIn.set_points(xpcf::serialize<std::vector<SolAR::datastructure::CloudPoint>>(points));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addPoints_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addPoints_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","addPoints_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::getPoint(uint32_t const id, SRef<SolAR::datastructure::CloudPoint>& point) const
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::getPointRequest reqIn;
  ::grpcIPointCloudManager::getPointResponse respOut;
  reqIn.set_id(id);
  reqIn.set_point(xpcf::serialize<SRef<SolAR::datastructure::CloudPoint>>(point));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPoint(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getPoint",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  point = xpcf::deserialize<SRef<SolAR::datastructure::CloudPoint>>(respOut.point());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::getPoints(std::vector<uint32_t> const& ids, std::vector<SRef<SolAR::datastructure::CloudPoint>>& points) const
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::getPointsRequest reqIn;
  ::grpcIPointCloudManager::getPointsResponse respOut;
  reqIn.set_ids(xpcf::serialize<std::vector<uint32_t>>(ids));
  reqIn.set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPoints(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointsrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getPoints",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.points());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::getAllPoints(std::vector<SRef<SolAR::datastructure::CloudPoint>>& points) const
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::getAllPointsRequest reqIn;
  ::grpcIPointCloudManager::getAllPointsResponse respOut;
  reqIn.set_points(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(points));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getAllPoints(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getAllPointsrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getAllPoints",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  points = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.points());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::suppressPoint(uint32_t const id)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::suppressPointRequest reqIn;
  ::grpcIPointCloudManager::suppressPointResponse respOut;
  reqIn.set_id(id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressPoint(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressPointrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","suppressPoint",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::suppressPoints(std::vector<uint32_t> const& ids)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::suppressPointsRequest reqIn;
  ::grpcIPointCloudManager::suppressPointsResponse respOut;
  reqIn.set_ids(xpcf::serialize<std::vector<uint32_t>>(ids));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressPoints(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressPointsrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","suppressPoints",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::datastructure::DescriptorType  IPointCloudManager_grpcProxy::getDescriptorType() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIPointCloudManager::getDescriptorTypeResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDescriptorType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDescriptorTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getDescriptorType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::datastructure::DescriptorType>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::setDescriptorType(SolAR::datastructure::DescriptorType const& type)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::setDescriptorTypeRequest reqIn;
  ::grpcIPointCloudManager::setDescriptorTypeResponse respOut;
  reqIn.set_type(static_cast<int32_t>(type));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setDescriptorType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setDescriptorTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","setDescriptorType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


bool  IPointCloudManager_grpcProxy::isExistPoint(uint32_t const id) const
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::isExistPointRequest reqIn;
  ::grpcIPointCloudManager::isExistPointResponse respOut;
  reqIn.set_id(id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isExistPoint(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isExistPointrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","isExistPoint",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


int  IPointCloudManager_grpcProxy::getNbPoints() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIPointCloudManager::getNbPointsResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNbPoints(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNbPointsrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getNbPoints",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::saveToFileRequest reqIn;
  ::grpcIPointCloudManager::saveToFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPointCloudManager_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::loadFromFileRequest reqIn;
  ::grpcIPointCloudManager::loadFromFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SRef<SolAR::datastructure::PointCloud> const&  IPointCloudManager_grpcProxy::getConstPointCloud() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIPointCloudManager::getConstPointCloudResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getConstPointCloud(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getConstPointCloudrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getConstPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


std::unique_lock<std::mutex>  IPointCloudManager_grpcProxy::getPointCloud(SRef<SolAR::datastructure::PointCloud>& pointCloud)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::getPointCloudRequest reqIn;
  ::grpcIPointCloudManager::getPointCloudResponse respOut;
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getPointCloud(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getPointCloudrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","getPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pointcloud());
}


void  IPointCloudManager_grpcProxy::setPointCloud(SRef<SolAR::datastructure::PointCloud> const pointCloud)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudManager::setPointCloudRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setPointCloud(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setPointCloudrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudManagerService","setPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

