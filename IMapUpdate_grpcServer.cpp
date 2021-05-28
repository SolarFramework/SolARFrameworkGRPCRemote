// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapUpdate_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapUpdate {

IMapUpdate_grpcServer::IMapUpdate_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapUpdate_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::IMapUpdate>(m_grpcService.m_xpcfComponent);
}


void IMapUpdate_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapUpdate_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapUpdate_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapUpdate_grpcServer::grpcIMapUpdateServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapUpdate::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distortionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distortionParams);
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdate_grpcServer::grpcIMapUpdateServiceImpl::update(::grpc::ServerContext* context, const ::grpcIMapUpdate::updateRequest* request, ::grpcIMapUpdate::updateResponse* response)
{
  SRef<SolAR::datastructure::Map> globalMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->globalmap());
  std::vector<uint32_t> newKeyframeIds = xpcf::deserialize<std::vector<uint32_t>>(request->newkeyframeids());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->update(globalMap, newKeyframeIds);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

