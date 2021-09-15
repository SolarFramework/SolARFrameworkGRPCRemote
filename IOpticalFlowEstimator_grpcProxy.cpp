// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IOpticalFlowEstimator_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator::IOpticalFlowEstimator_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator::IOpticalFlowEstimator_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator {

IOpticalFlowEstimator_grpcProxy::IOpticalFlowEstimator_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IOpticalFlowEstimator_grpcProxy>())
{
  declareInterface<SolAR::api::tracking::IOpticalFlowEstimator>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IOpticalFlowEstimator_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IOpticalFlowEstimator_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIOpticalFlowEstimator::grpcIOpticalFlowEstimatorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IOpticalFlowEstimator_grpcProxy::estimate(SRef<SolAR::datastructure::Image> const previousImage, SRef<SolAR::datastructure::Image> const currentImage, std::vector<SolAR::datastructure::Keypoint> const& pointsToTrack, std::vector<SolAR::datastructure::Point2Df>& trackedPoints, std::vector<unsigned char>& status, std::vector<float>& error)
{
  ::grpc::ClientContext context;
  ::grpcIOpticalFlowEstimator::estimate_grpc0Request reqIn;
  ::grpcIOpticalFlowEstimator::estimate_grpc0Response respOut;
  reqIn.set_previousimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(previousImage));
  reqIn.set_currentimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(currentImage));
  reqIn.set_pointstotrack(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(pointsToTrack));
  reqIn.set_trackedpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(trackedPoints));
  reqIn.set_status(xpcf::serialize<std::vector<unsigned char>>(status));
  reqIn.set_error(xpcf::serialize<std::vector<float>>(error));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOpticalFlowEstimatorService","estimate_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  trackedPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.trackedpoints());
  status = xpcf::deserialize<std::vector<unsigned char>>(respOut.status());
  error = xpcf::deserialize<std::vector<float>>(respOut.error());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IOpticalFlowEstimator_grpcProxy::estimate(SRef<SolAR::datastructure::Image> const previousImage, SRef<SolAR::datastructure::Image> const currentImage, std::vector<SolAR::datastructure::Point2Df> const& pointsToTrack, std::vector<SolAR::datastructure::Point2Df>& trackedPoints, std::vector<unsigned char>& status, std::vector<float>& error)
{
  ::grpc::ClientContext context;
  ::grpcIOpticalFlowEstimator::estimate_grpc1Request reqIn;
  ::grpcIOpticalFlowEstimator::estimate_grpc1Response respOut;
  reqIn.set_previousimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(previousImage));
  reqIn.set_currentimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(currentImage));
  reqIn.set_pointstotrack(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(pointsToTrack));
  reqIn.set_trackedpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(trackedPoints));
  reqIn.set_status(xpcf::serialize<std::vector<unsigned char>>(status));
  reqIn.set_error(xpcf::serialize<std::vector<float>>(error));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOpticalFlowEstimatorService","estimate_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  trackedPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.trackedpoints());
  status = xpcf::deserialize<std::vector<unsigned char>>(respOut.status());
  error = xpcf::deserialize<std::vector<float>>(respOut.error());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

