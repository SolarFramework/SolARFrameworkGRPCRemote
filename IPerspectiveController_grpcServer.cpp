// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPerspectiveController_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPerspectiveController {

IPerspectiveController_grpcServer::IPerspectiveController_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPerspectiveController_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IPerspectiveController>(m_grpcService.m_xpcfComponent);
}


void IPerspectiveController_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPerspectiveController_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPerspectiveController_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPerspectiveController_grpcServer::grpcIPerspectiveControllerServiceImpl::correct_grpc0(::grpc::ServerContext* context, const ::grpcIPerspectiveController::correct_grpc0Request* request, ::grpcIPerspectiveController::correct_grpc0Response* response)
{
  SRef<SolAR::datastructure::Image> inputImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->inputimg());
  std::vector<SolAR::datastructure::Contour2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->contours());
  std::vector<SRef<SolAR::datastructure::Image>> patches = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->patches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->correct(inputImg, contours, patches);
  response->set_patches(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(patches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IPerspectiveController_grpcServer::grpcIPerspectiveControllerServiceImpl::correct_grpc1(::grpc::ServerContext* context, const ::grpcIPerspectiveController::correct_grpc1Request* request, ::grpcIPerspectiveController::correct_grpc1Response* response)
{
  SRef<SolAR::datastructure::Image> inputImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->inputimg());
  SolAR::datastructure::Contour2Df contour = xpcf::deserialize<SolAR::datastructure::Contour2Df>(request->contour());
  SRef<SolAR::datastructure::Image> patch = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->patch());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->correct(inputImg, contour, patch);
  response->set_patch(xpcf::serialize<SRef<SolAR::datastructure::Image>>(patch));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

