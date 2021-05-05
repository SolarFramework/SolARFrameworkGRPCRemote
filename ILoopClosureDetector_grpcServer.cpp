// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ILoopClosureDetector_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverILoopClosureDetector {

ILoopClosureDetector_grpcServer::ILoopClosureDetector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ILoopClosureDetector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::loop::ILoopClosureDetector>(m_grpcService.m_xpcfComponent);
}


void ILoopClosureDetector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopClosureDetector_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ILoopClosureDetector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ILoopClosureDetector_grpcServer::grpcILoopClosureDetectorServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distortionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distortionParams);
  return ::grpc::Status::OK;
}


::grpc::Status ILoopClosureDetector_grpcServer::grpcILoopClosureDetectorServiceImpl::detect(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response)
{
  SRef<SolAR::datastructure::Keyframe> queryKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->querykeyframe());
  SRef<SolAR::datastructure::Keyframe> detectedLoopKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->detectedloopkeyframe());
  SolAR::datastructure::Transform3Df sim3Transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->sim3transform());
  std::vector<std::pair<uint32_t,uint32_t>> duplicatedPointsIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->duplicatedpointsindices());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->detect(queryKeyframe, detectedLoopKeyframe, sim3Transform, duplicatedPointsIndices);
  response->set_detectedloopkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(detectedLoopKeyframe));
  response->set_sim3transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(sim3Transform));
  response->set_duplicatedpointsindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(duplicatedPointsIndices));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

