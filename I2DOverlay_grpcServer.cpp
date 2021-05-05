// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DOverlay_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DOverlay {

I2DOverlay_grpcServer::I2DOverlay_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DOverlay_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::I2DOverlay>(m_grpcService.m_xpcfComponent);
}


void I2DOverlay_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DOverlay_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DOverlay_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawCircle(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircleRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::Point2Df point = xpcf::deserialize<SolAR::datastructure::Point2Df>(request->point());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawCircle(point, displayImage);
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawCircles_grpc0(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircles_grpc0Request* request, ::google::protobuf::Empty* response)
{
  std::vector<SolAR::datastructure::Point2Df> points = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawCircles(points, displayImage);
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawCircles_grpc1(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircles_grpc1Request* request, ::google::protobuf::Empty* response)
{
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawCircles(keypoints, displayImage);
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawContour(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawContourRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::Contour2Df contours = xpcf::deserialize<SolAR::datastructure::Contour2Df>(request->contours());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawContour(contours, displayImage);
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawContours(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawContoursRequest* request, ::google::protobuf::Empty* response)
{
  std::vector<SolAR::datastructure::Contour2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->contours());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawContours(contours, displayImage);
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawSBPattern(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawSBPatternRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::SquaredBinaryPattern pattern = xpcf::deserialize<SolAR::datastructure::SquaredBinaryPattern>(request->pattern());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawSBPattern(pattern, displayImage);
  return ::grpc::Status::OK;
}


}

