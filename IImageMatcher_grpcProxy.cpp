// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImageMatcher_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImageMatcher::IImageMatcher_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImageMatcher::IImageMatcher_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImageMatcher {

IImageMatcher_grpcProxy::IImageMatcher_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImageMatcher_grpcProxy>())
{
  declareInterface<SolAR::api::features::IImageMatcher>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImageMatcher_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageMatcher_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImageMatcher::grpcIImageMatcherService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImageMatcher_grpcProxy::match(SRef<SolAR::datastructure::Image> const image1, SRef<SolAR::datastructure::Image> const image2, std::vector<SolAR::datastructure::Keypoint>& keypoints1, std::vector<SolAR::datastructure::Keypoint>& keypoints2, SRef<SolAR::datastructure::DescriptorBuffer> descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> descriptors2, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIImageMatcher::matchRequest reqIn;
  ::grpcIImageMatcher::matchResponse respOut;
  reqIn.set_image1(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image1));
  reqIn.set_image2(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image2));
  reqIn.set_descriptors1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors1));
  reqIn.set_descriptors2(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors2));
  reqIn.set_keypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints1));
  reqIn.set_keypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageMatcherService","match",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.keypoints1());
  keypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.keypoints2());
  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

