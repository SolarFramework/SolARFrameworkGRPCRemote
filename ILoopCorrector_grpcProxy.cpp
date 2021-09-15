// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ILoopCorrector_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyILoopCorrector {

ILoopCorrector_grpcProxy::ILoopCorrector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ILoopCorrector_grpcProxy>())
{
  declareInterface<SolAR::api::loop::ILoopCorrector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ILoopCorrector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ILoopCorrector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcILoopCorrector::grpcILoopCorrectorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ILoopCorrector_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)
{
  ::grpc::ClientContext context;
  ::grpcILoopCorrector::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distortionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcILoopCorrectorService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  ILoopCorrector_grpcProxy::correct(SRef<SolAR::datastructure::Keyframe> const queryKeyframe, SRef<SolAR::datastructure::Keyframe> const detectedLoopKeyframe, SolAR::datastructure::Transform3Df const& S_wl_wc, std::vector<std::pair<uint32_t,uint32_t>> const& duplicatedPointsIndices)
{
  ::grpc::ClientContext context;
  ::grpcILoopCorrector::correctRequest reqIn;
  ::grpcILoopCorrector::correctResponse respOut;
  reqIn.set_querykeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(queryKeyframe));
  reqIn.set_detectedloopkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(detectedLoopKeyframe));
  reqIn.set_s_wl_wc(xpcf::serialize<SolAR::datastructure::Transform3Df>(S_wl_wc));
  reqIn.set_duplicatedpointsindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(duplicatedPointsIndices));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->correct(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "correct rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcILoopCorrectorService","correct",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

