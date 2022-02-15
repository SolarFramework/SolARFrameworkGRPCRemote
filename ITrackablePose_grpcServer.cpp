// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ITrackablePose_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer>();

namespace org::bcom::xpcf::grpc::serverITrackablePose {

ITrackablePose_grpcServer::ITrackablePose_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ITrackablePose_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::ITrackablePose>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ITrackablePose_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITrackablePose_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ITrackablePose_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ITrackablePose_grpcServer::grpcITrackablePoseServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcITrackablePose::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITrackablePose_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITrackablePose_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ITrackablePose_grpcServer::grpcITrackablePoseServiceImpl::setTrackable(::grpc::ServerContext* context, const ::grpcITrackablePose::setTrackableRequest* request, ::grpcITrackablePose::setTrackableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setTrackable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITrackablePose_grpcServer::setTrackable request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Trackable> trackable = xpcf::deserialize<SRef<SolAR::datastructure::Trackable>>(request->trackable());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setTrackable(trackable);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITrackablePose_grpcServer::setTrackable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status ITrackablePose_grpcServer::grpcITrackablePoseServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcITrackablePose::estimateRequest* request, ::grpcITrackablePose::estimateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITrackablePose_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(image, pose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ITrackablePose_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

