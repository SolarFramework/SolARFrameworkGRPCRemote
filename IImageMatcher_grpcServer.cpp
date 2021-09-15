// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageMatcher_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageMatcher::IImageMatcher_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageMatcher::IImageMatcher_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageMatcher {

IImageMatcher_grpcServer::IImageMatcher_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageMatcher_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IImageMatcher>(m_grpcService.m_xpcfComponent);
}


void IImageMatcher_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageMatcher_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageMatcher_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageMatcher_grpcServer::grpcIImageMatcherServiceImpl::match(::grpc::ServerContext* context, const ::grpcIImageMatcher::matchRequest* request, ::grpcIImageMatcher::matchResponse* response)
{
  SRef<SolAR::datastructure::Image> image1 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image1());
  SRef<SolAR::datastructure::Image> image2 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image2());
  std::vector<SolAR::datastructure::Keypoint> keypoints1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints1());
  std::vector<SolAR::datastructure::Keypoint> keypoints2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints2());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors1 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors1());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors2 = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->match(image1, image2, keypoints1, keypoints2, descriptors1, descriptors2, matches);
  response->set_keypoints1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints1));
  response->set_keypoints2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints2));
  response->set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

