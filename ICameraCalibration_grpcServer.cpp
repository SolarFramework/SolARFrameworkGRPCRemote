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

::grpc::Status ICameraCalibration_grpcServer::grpcICameraCalibrationServiceImpl::calibrate(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrateRequest* request, ::grpcICameraCalibration::calibrateResponse* response)
{
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->calibrate(images, camParams);
  response->set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

