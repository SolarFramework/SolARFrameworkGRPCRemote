// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IBootstrapper_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIBootstrapper {

IBootstrapper_grpcServer::IBootstrapper_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IBootstrapper_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::slam::IBootstrapper>(m_grpcService.m_xpcfComponent);
}


void IBootstrapper_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBootstrapper_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IBootstrapper_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IBootstrapper_grpcServer::grpcIBootstrapperServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIBootstrapper::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distortionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distortionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IBootstrapper_grpcServer::grpcIBootstrapperServiceImpl::process(::grpc::ServerContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SRef<SolAR::datastructure::Image> view = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->view());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(image, view, pose);
  response->set_view(xpcf::serialize<SRef<SolAR::datastructure::Image>>(view));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

