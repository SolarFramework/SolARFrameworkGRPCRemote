// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IStereoCameraCalibration_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIStereoCameraCalibration {

IStereoCameraCalibration_grpcServer::IStereoCameraCalibration_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IStereoCameraCalibration_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IStereoCameraCalibration>(m_grpcService.m_xpcfComponent);
}


void IStereoCameraCalibration_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IStereoCameraCalibration_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IStereoCameraCalibration_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IStereoCameraCalibration_grpcServer::grpcIStereoCameraCalibrationServiceImpl::calibrate(::grpc::ServerContext* context, const ::grpcIStereoCameraCalibration::calibrateRequest* request, ::grpcIStereoCameraCalibration::calibrateResponse* response)
{
  std::vector<SRef<SolAR::datastructure::Image>> images1 = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images1());
  std::vector<SRef<SolAR::datastructure::Image>> images2 = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images2());
  SolAR::datastructure::CameraParameters camParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams1());
  SolAR::datastructure::CameraParameters camParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams2());
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  SolAR::datastructure::RectificationParameters rectParams1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams1());
  SolAR::datastructure::RectificationParameters rectParams2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->calibrate(images1, images2, camParams1, camParams2, transformation, rectParams1, rectParams2);
  response->set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  response->set_rectparams1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams1));
  response->set_rectparams2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

