// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDepthEstimation_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDepthEstimation {

IDepthEstimation_grpcProxy::IDepthEstimation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDepthEstimation_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IDepthEstimation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDepthEstimation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthEstimation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDepthEstimation::grpcIDepthEstimationService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDepthEstimation_grpcProxy::estimate(std::vector<SolAR::datastructure::Keypoint>& rectKeypoints1, std::vector<SolAR::datastructure::Keypoint>& rectKeypoints2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, float focal, float baseline, SolAR::datastructure::StereoType type)
{
  ::grpc::ClientContext context;
  ::grpcIDepthEstimation::estimateRequest reqIn;
  ::grpcIDepthEstimation::estimateResponse respOut;
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_focal(focal);
  reqIn.set_baseline(baseline);
  reqIn.set_type(xpcf::serialize<SolAR::datastructure::StereoType>(type));
  reqIn.set_rectkeypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints1));
  reqIn.set_rectkeypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(rectKeypoints2));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDepthEstimationService","estimate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  rectKeypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.rectkeypoints1());
  rectKeypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.rectkeypoints2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

