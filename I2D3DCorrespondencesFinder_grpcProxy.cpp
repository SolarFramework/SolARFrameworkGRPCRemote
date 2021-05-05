// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2D3DCorrespondencesFinder_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder {

I2D3DCorrespondencesFinder_grpcProxy::I2D3DCorrespondencesFinder_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2D3DCorrespondencesFinder_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I2D3DCorrespondencesFinder>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I2D3DCorrespondencesFinder_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2D3DCorrespondencesFinder_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2D3DCorrespondencesFinder::grpcI2D3DCorrespondencesFinderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  I2D3DCorrespondencesFinder_grpcProxy::find(SRef<SolAR::datastructure::Frame> const lastFrame, SRef<SolAR::datastructure::Frame> const currentFrame, std::vector<SolAR::datastructure::DescriptorMatch> const& current_matches, std::vector<SolAR::datastructure::Point3Df>& shared_3dpoint, std::vector<SolAR::datastructure::Point2Df>& shared_2dpoint, std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>>& corres2D3D, std::vector<SolAR::datastructure::DescriptorMatch>& found_matches, std::vector<SolAR::datastructure::DescriptorMatch>& remaining_matches)
{
  ::grpc::ClientContext context;
  ::grpcI2D3DCorrespondencesFinder::findRequest reqIn;
  ::grpcI2D3DCorrespondencesFinder::findResponse respOut;
  reqIn.set_lastframe(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(lastFrame));
  reqIn.set_currentframe(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(currentFrame));
  reqIn.set_current_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(current_matches));
  reqIn.set_shared_3dpoint(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(shared_3dpoint));
  reqIn.set_shared_2dpoint(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(shared_2dpoint));
  reqIn.set_corres2d3d(xpcf::serialize<std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>>>(corres2D3D));
  reqIn.set_found_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(found_matches));
  reqIn.set_remaining_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(remaining_matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->find(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "findrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2D3DCorrespondencesFinderService","find",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  shared_3dpoint = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(respOut.shared_3dpoint());
  shared_2dpoint = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.shared_2dpoint());
  corres2D3D = xpcf::deserialize<std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>>>(respOut.corres2d3d());
  found_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.found_matches());
  remaining_matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.remaining_matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

