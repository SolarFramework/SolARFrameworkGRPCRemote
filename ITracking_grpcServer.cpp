// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ITracking_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer>();

namespace org::bcom::xpcf::grpc::serverITracking {

ITracking_grpcServer::ITracking_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ITracking_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::slam::ITracking>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ITracking_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITracking_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ITracking_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ITracking_grpcServer::grpcITrackingServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcITracking::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ITracking_grpcServer::grpcITrackingServiceImpl::updateReferenceKeyframe(::grpc::ServerContext* context, const ::grpcITracking::updateReferenceKeyframeRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcServer::updateReferenceKeyframe request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Keyframe> refKeyframe = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->refkeyframe());
  m_xpcfComponent->updateReferenceKeyframe(refKeyframe);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcServer::updateReferenceKeyframe response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ITracking_grpcServer::grpcITrackingServiceImpl::process(::grpc::ServerContext* context, const ::grpcITracking::processRequest* request, ::grpcITracking::processResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "process", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcServer::process request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  SRef<SolAR::datastructure::Image> displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->displayimage());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(frame, displayImage);
  response->set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITracking_grpcServer::process response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

