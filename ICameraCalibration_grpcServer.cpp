// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICameraCalibration_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICameraCalibration {

ICameraCalibration_grpcServer::ICameraCalibration_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICameraCalibration_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::ICameraCalibration>(m_grpcService.m_xpcfComponent);
}


void ICameraCalibration_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICameraCalibration_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICameraCalibration_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICameraCalibration_grpcServer::grpcICameraCalibrationServiceImpl::calibrate_grpc0(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrate_grpc0Request* request, ::grpcICameraCalibration::calibrate_grpc0Response* response)
{
  std::string inputVideo = request->inputvideo();
  std::string cailbrationFilePath = request->cailbrationfilepath();
  bool returnValue = m_xpcfComponent->calibrate(inputVideo, cailbrationFilePath);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ICameraCalibration_grpcServer::grpcICameraCalibrationServiceImpl::calibrate_grpc1(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrate_grpc1Request* request, ::grpcICameraCalibration::calibrate_grpc1Response* response)
{
  int camera_id = request->camera_id();
  std::string cailbrationFilePath = request->cailbrationfilepath();
  bool returnValue = m_xpcfComponent->calibrate(camera_id, cailbrationFilePath);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status ICameraCalibration_grpcServer::grpcICameraCalibrationServiceImpl::setParameters(::grpc::ServerContext* context, const ::grpcICameraCalibration::setParametersRequest* request, ::grpcICameraCalibration::setParametersResponse* response)
{
  std::string config_file = request->config_file();
  bool returnValue = m_xpcfComponent->setParameters(config_file);
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

