// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IUndistortPoints_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIUndistortPoints {

IUndistortPoints_grpcServer::IUndistortPoints_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IUndistortPoints_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IUndistortPoints>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IUndistortPoints_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IUndistortPoints_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IUndistortPoints_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IUndistortPoints_grpcServer::grpcIUndistortPointsServiceImpl::undistort_grpc0(::grpc::ServerContext* context, const ::grpcIUndistortPoints::undistort_grpc0Request* request, ::grpcIUndistortPoints::undistort_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "undistort", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IUndistortPoints_grpcServer::undistort request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> inputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->inputpoints());
  std::vector<SolAR::datastructure::Point2Df> outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->outputpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->undistort(inputPoints, outputPoints);
  response->set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IUndistortPoints_grpcServer::undistort response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IUndistortPoints_grpcServer::grpcIUndistortPointsServiceImpl::undistort_grpc1(::grpc::ServerContext* context, const ::grpcIUndistortPoints::undistort_grpc1Request* request, ::grpcIUndistortPoints::undistort_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "undistort", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IUndistortPoints_grpcServer::undistort request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> inputKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->inputkeypoints());
  std::vector<SolAR::datastructure::Keypoint> outputKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->outputkeypoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->undistort(inputKeypoints, outputKeypoints);
  response->set_outputkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(outputKeypoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IUndistortPoints_grpcServer::undistort response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IUndistortPoints_grpcServer::grpcIUndistortPointsServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIUndistortPoints::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IUndistortPoints_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IUndistortPoints_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

