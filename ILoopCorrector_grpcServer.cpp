// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ILoopCorrector_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverILoopCorrector {

ILoopCorrector_grpcServer::ILoopCorrector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ILoopCorrector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::loop::ILoopCorrector>(m_grpcService.m_xpcfComponent);
}


void ILoopCorrector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopCorrector_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ILoopCorrector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ILoopCorrector_grpcServer::grpcILoopCorrectorServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcILoopCorrector::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distortionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distortionParams);
  return ::grpc::Status::OK;
}


::grpc::Status ILoopCorrector_grpcServer::grpcILoopCorrectorServiceImpl::correct(::grpc::ServerContext* context, const ::grpcILoopCorrector::correctRequest* request, ::grpcILoopCorrector::correctResponse* response)
{
  SRef<SolAR::datastructure::Keyframe> queryKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->querykeyframe());
  SRef<SolAR::datastructure::Keyframe> detectedLoopKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->detectedloopkeyframe());
  SolAR::datastructure::Transform3Df S_wl_wc = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->s_wl_wc());
  std::vector<std::pair<uint32_t,uint32_t>> duplicatedPointsIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->duplicatedpointsindices());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->correct(queryKeyframe, detectedLoopKeyframe, S_wl_wc, duplicatedPointsIndices);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

