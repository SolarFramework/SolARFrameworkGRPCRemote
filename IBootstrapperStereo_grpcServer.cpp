// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IBootstrapperStereo_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIBootstrapperStereo::IBootstrapperStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIBootstrapperStereo::IBootstrapperStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIBootstrapperStereo {

IBootstrapperStereo_grpcServer::IBootstrapperStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IBootstrapperStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::slam::IBootstrapperStereo>(m_grpcService.m_xpcfComponent);
}


void IBootstrapperStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBootstrapperStereo_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IBootstrapperStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IBootstrapperStereo_grpcServer::grpcIBootstrapperStereoServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams);
  return ::grpc::Status::OK;
}


::grpc::Status IBootstrapperStereo_grpcServer::grpcIBootstrapperStereoServiceImpl::process(::grpc::ServerContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response)
{
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Image> view = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->view());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(frame, view);
  response->set_view(xpcf::serialize<SRef<SolAR::datastructure::Image>>(view));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

