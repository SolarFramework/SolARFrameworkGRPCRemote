// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IReprojectionStereo_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIReprojectionStereo {

IReprojectionStereo_grpcServer::IReprojectionStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IReprojectionStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::IReprojectionStereo>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IReprojectionStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IReprojectionStereo_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IReprojectionStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IReprojectionStereo_grpcServer::grpcIReprojectionStereoServiceImpl::reprojectToUnrectification(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToUnrectificationRequest* request, ::grpcIReprojectionStereo::reprojectToUnrectificationResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "reprojectToUnrectification", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IReprojectionStereo_grpcServer::reprojectToUnrectification request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> rectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->rectifiedkeypoints());
  SolAR::datastructure::RectificationParameters rectParams = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams());
  std::vector<SolAR::datastructure::Keypoint> unrectifiedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->unrectifiedkeypoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reprojectToUnrectification(rectifiedKeypoints, rectParams, unrectifiedKeypoints);
  response->set_unrectifiedkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(unrectifiedKeypoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IReprojectionStereo_grpcServer::reprojectToUnrectification response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IReprojectionStereo_grpcServer::grpcIReprojectionStereoServiceImpl::reprojectToCloudPoints_grpc0(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Request* request, ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "reprojectToCloudPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IReprojectionStereo_grpcServer::reprojectToCloudPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Keypoint> undistortedKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->undistortedkeypoints());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->cloudpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reprojectToCloudPoints(undistortedKeypoints, descriptors, pose, intrinsicParams, cloudPoints);
  response->set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IReprojectionStereo_grpcServer::reprojectToCloudPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IReprojectionStereo_grpcServer::grpcIReprojectionStereoServiceImpl::reprojectToCloudPoints_grpc1(::grpc::ServerContext* context, const ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Request* request, ::grpcIReprojectionStereo::reprojectToCloudPoints_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "reprojectToCloudPoints", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IReprojectionStereo_grpcServer::reprojectToCloudPoints request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> cloudPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->cloudpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reprojectToCloudPoints(frame, intrinsicParams, cloudPoints);
  response->set_cloudpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(cloudPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IReprojectionStereo_grpcServer::reprojectToCloudPoints response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

