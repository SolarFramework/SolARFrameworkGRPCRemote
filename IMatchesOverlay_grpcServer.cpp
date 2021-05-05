// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMatchesOverlay_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMatchesOverlay::IMatchesOverlay_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMatchesOverlay::IMatchesOverlay_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMatchesOverlay {

IMatchesOverlay_grpcServer::IMatchesOverlay_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMatchesOverlay_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::IMatchesOverlay>(m_grpcService.m_xpcfComponent);
}


void IMatchesOverlay_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMatchesOverlay_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMatchesOverlay_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMatchesOverlay_grpcServer::grpcIMatchesOverlayServiceImpl::draw_grpc0(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc0Request* request, ::grpcIMatchesOverlay::draw_grpc0Response* response)
{
  SRef<SolAR::datastructure::Image> image1 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image1());
  SRef<SolAR::datastructure::Image> image2 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image2());
  SRef<SolAR::datastructure::Image> outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->outimage());
  std::vector<SolAR::datastructure::Point2Df> points_image1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points_image1());
  std::vector<SolAR::datastructure::Point2Df> points_image2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points_image2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  m_xpcfComponent->draw(image1, image2, outImage, points_image1, points_image2, matches);
  response->set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  return ::grpc::Status::OK;
}


::grpc::Status IMatchesOverlay_grpcServer::grpcIMatchesOverlayServiceImpl::draw_grpc1(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc1Request* request, ::grpcIMatchesOverlay::draw_grpc1Response* response)
{
  SRef<SolAR::datastructure::Image> image1 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image1());
  SRef<SolAR::datastructure::Image> image2 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image2());
  SRef<SolAR::datastructure::Image> outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->outimage());
  std::vector<SolAR::datastructure::Keypoint> keypoints_image1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_image1());
  std::vector<SolAR::datastructure::Keypoint> keypoints_image2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_image2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  m_xpcfComponent->draw(image1, image2, outImage, keypoints_image1, keypoints_image2, matches);
  response->set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  return ::grpc::Status::OK;
}


::grpc::Status IMatchesOverlay_grpcServer::grpcIMatchesOverlayServiceImpl::draw_grpc2(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc2Request* request, ::grpcIMatchesOverlay::draw_grpc2Response* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SRef<SolAR::datastructure::Image> outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->outimage());
  std::vector<SolAR::datastructure::Point2Df> points_image1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points_image1());
  std::vector<SolAR::datastructure::Point2Df> points_image2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points_image2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  m_xpcfComponent->draw(image, outImage, points_image1, points_image2, matches);
  response->set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  return ::grpc::Status::OK;
}


::grpc::Status IMatchesOverlay_grpcServer::grpcIMatchesOverlayServiceImpl::draw_grpc3(::grpc::ServerContext* context, const ::grpcIMatchesOverlay::draw_grpc3Request* request, ::grpcIMatchesOverlay::draw_grpc3Response* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SRef<SolAR::datastructure::Image> outImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->outimage());
  std::vector<SolAR::datastructure::Keypoint> keypoints_image1 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_image1());
  std::vector<SolAR::datastructure::Keypoint> keypoints_image2 = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints_image2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  m_xpcfComponent->draw(image, outImage, keypoints_image1, keypoints_image2, matches);
  response->set_outimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(outImage));
  return ::grpc::Status::OK;
}


}

