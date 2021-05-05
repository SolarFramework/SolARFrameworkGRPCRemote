// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DOverlay_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DOverlay::I3DOverlay_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DOverlay::I3DOverlay_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DOverlay {

I3DOverlay_grpcServer::I3DOverlay_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DOverlay_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::I3DOverlay>(m_grpcService.m_xpcfComponent);
}


void I3DOverlay_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DOverlay_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DOverlay_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DOverlay_grpcServer::grpcI3DOverlayServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcI3DOverlay::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  SolAR::datastructure::CamDistortion distorsion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsion_parameters());
  m_xpcfComponent->setCameraParameters(intrinsic_parameters, distorsion_parameters);
  return ::grpc::Status::OK;
}


::grpc::Status I3DOverlay_grpcServer::grpcI3DOverlayServiceImpl::draw(::grpc::ServerContext* context, const ::grpcI3DOverlay::drawRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->draw(pose, displayImage);
  return ::grpc::Status::OK;
}


}

