// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DOverlay_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DOverlay {

I2DOverlay_grpcServer::I2DOverlay_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DOverlay_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::I2DOverlay>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(7);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I2DOverlay_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DOverlay_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DOverlay_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawCircle(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircleRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawCircle request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Point2Df point = xpcf::deserialize<SolAR::datastructure::Point2Df>(request->point());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawCircle(point, displayImage);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawCircle response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawCircles_grpc0(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircles_grpc0Request* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawCircles request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> points = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawCircles(points, displayImage);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawCircles response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawCircles_grpc1(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawCircles_grpc1Request* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawCircles request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawCircles(keypoints, displayImage);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawCircles response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawContour(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawContourRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawContour request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Contour2Df contours = xpcf::deserialize<SolAR::datastructure::Contour2Df>(request->contours());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawContour(contours, displayImage);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawContour response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawContours(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawContoursRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawContours request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Contour2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->contours());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawContours(contours, displayImage);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawContours response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2DOverlay_grpcServer::grpcI2DOverlayServiceImpl::drawSBPattern(::grpc::ServerContext* context, const ::grpcI2DOverlay::drawSBPatternRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawSBPattern request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::SquaredBinaryPattern pattern = xpcf::deserialize<SolAR::datastructure::SquaredBinaryPattern>(request->pattern());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  m_xpcfComponent->drawSBPattern(pattern, displayImage);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DOverlay_grpcServer::drawSBPattern response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

