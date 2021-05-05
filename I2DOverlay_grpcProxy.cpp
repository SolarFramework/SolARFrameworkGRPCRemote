// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2DOverlay_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2DOverlay::I2DOverlay_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2DOverlay::I2DOverlay_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2DOverlay {

I2DOverlay_grpcProxy::I2DOverlay_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2DOverlay_grpcProxy>())
{
  declareInterface<SolAR::api::display::I2DOverlay>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I2DOverlay_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DOverlay_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2DOverlay::grpcI2DOverlayService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I2DOverlay_grpcProxy::drawCircle(SolAR::datastructure::Point2Df const& point, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI2DOverlay::drawCircleRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_point(xpcf::serialize<SolAR::datastructure::Point2Df>(point));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->drawCircle(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "drawCirclerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DOverlayService","drawCircle",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  I2DOverlay_grpcProxy::drawCircles(std::vector<SolAR::datastructure::Point2Df> const& points, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI2DOverlay::drawCircles_grpc0Request reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_points(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->drawCircles_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "drawCircles_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DOverlayService","drawCircles_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  I2DOverlay_grpcProxy::drawCircles(std::vector<SolAR::datastructure::Keypoint> const& keypoints, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI2DOverlay::drawCircles_grpc1Request reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->drawCircles_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "drawCircles_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DOverlayService","drawCircles_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  I2DOverlay_grpcProxy::drawContour(SolAR::datastructure::Contour2Df const& contours, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI2DOverlay::drawContourRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_contours(xpcf::serialize<SolAR::datastructure::Contour2Df>(contours));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->drawContour(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "drawContourrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DOverlayService","drawContour",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  I2DOverlay_grpcProxy::drawContours(std::vector<SolAR::datastructure::Contour2Df> const& contours, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI2DOverlay::drawContoursRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(contours));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->drawContours(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "drawContoursrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DOverlayService","drawContours",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  I2DOverlay_grpcProxy::drawSBPattern(SolAR::datastructure::SquaredBinaryPattern const& pattern, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI2DOverlay::drawSBPatternRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_pattern(xpcf::serialize<SolAR::datastructure::SquaredBinaryPattern>(pattern));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->drawSBPattern(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "drawSBPatternrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2DOverlayService","drawSBPattern",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

