// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ILoopClosureDetector_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyILoopClosureDetector::ILoopClosureDetector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyILoopClosureDetector::ILoopClosureDetector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyILoopClosureDetector {

ILoopClosureDetector_grpcProxy::ILoopClosureDetector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ILoopClosureDetector_grpcProxy>())
{
  declareInterface<SolAR::api::loop::ILoopClosureDetector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ILoopClosureDetector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopClosureDetector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcILoopClosureDetector::grpcILoopClosureDetectorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ILoopClosureDetector_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)
{
  ::grpc::ClientContext context;
  ::grpcILoopClosureDetector::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distortionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcILoopClosureDetectorService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  ILoopClosureDetector_grpcProxy::detect(SRef<SolAR::datastructure::Keyframe> const queryKeyframe, SRef<SolAR::datastructure::Keyframe>& detectedLoopKeyframe, SolAR::datastructure::Transform3Df& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& duplicatedPointsIndices) const
{
  ::grpc::ClientContext context;
  ::grpcILoopClosureDetector::detectRequest reqIn;
  ::grpcILoopClosureDetector::detectResponse respOut;
  reqIn.set_querykeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(queryKeyframe));
  reqIn.set_detectedloopkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(detectedLoopKeyframe));
  reqIn.set_sim3transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(sim3Transform));
  reqIn.set_duplicatedpointsindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(duplicatedPointsIndices));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detectrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcILoopClosureDetectorService","detect",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  detectedLoopKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(respOut.detectedloopkeyframe());
  sim3Transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.sim3transform());
  duplicatedPointsIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(respOut.duplicatedpointsindices());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

