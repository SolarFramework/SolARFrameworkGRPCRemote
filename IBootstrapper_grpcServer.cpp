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
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IBootstrapper_grpcServer::grpcIBootstrapperServiceImpl::process(::grpc::ServerContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Image> view = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->view());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(frame, view);
  response->set_view(xpcf::serialize<SRef<SolAR::datastructure::Image>>(view));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

