// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IARDevice_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIARDevice::IARDevice_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIARDevice::IARDevice_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIARDevice {

IARDevice_grpcServer::IARDevice_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IARDevice_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IARDevice>(m_grpcService.m_xpcfComponent);
}


void IARDevice_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IARDevice_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IARDevice_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IARDevice_grpcServer::grpcIARDeviceServiceImpl::start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIARDevice::startResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IARDevice_grpcServer::grpcIARDeviceServiceImpl::stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIARDevice::stopResponse* response)
{
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IARDevice_grpcServer::grpcIARDeviceServiceImpl::getData(::grpc::ServerContext* context, const ::grpcIARDevice::getDataRequest* request, ::grpcIARDevice::getDataResponse* response)
{
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Transform3Df> poses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->poses());
  std::chrono::system_clock::time_point timestamp = xpcf::deserialize<std::chrono::system_clock::time_point>(request->timestamp());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getData(images, poses, timestamp);
  response->set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  response->set_poses(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(poses));
  response->set_timestamp(xpcf::serialize<std::chrono::system_clock::time_point>(timestamp));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IARDevice_grpcServer::grpcIARDeviceServiceImpl::getCameraParameters(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIARDevice::getCameraParametersResponse* response)
{
  SolAR::datastructure::CameraRigParameters returnValue = m_xpcfComponent->getCameraParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CameraRigParameters>(returnValue));
  return ::grpc::Status::OK;
}


}

