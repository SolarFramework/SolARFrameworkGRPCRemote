// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMultiTrackablesPose_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMultiTrackablesPose::IMultiTrackablesPose_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMultiTrackablesPose::IMultiTrackablesPose_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMultiTrackablesPose {

IMultiTrackablesPose_grpcServer::IMultiTrackablesPose_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMultiTrackablesPose_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::IMultiTrackablesPose>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMultiTrackablesPose_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMultiTrackablesPose_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMultiTrackablesPose_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMultiTrackablesPose_grpcServer::grpcIMultiTrackablesPoseServiceImpl::setTrackables(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::setTrackablesRequest* request, ::grpcIMultiTrackablesPose::setTrackablesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setTrackables", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiTrackablesPose_grpcServer::setTrackables request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Trackable>> trackables = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Trackable>>>(request->trackables());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setTrackables(trackables);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiTrackablesPose_grpcServer::setTrackables response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMultiTrackablesPose_grpcServer::grpcIMultiTrackablesPoseServiceImpl::estimate(::grpc::ServerContext* context, const ::grpcIMultiTrackablesPose::estimateRequest* request, ::grpcIMultiTrackablesPose::estimateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "estimate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiTrackablesPose_grpcServer::estimate request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->estimate(image, camParams, pose);
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiTrackablesPose_grpcServer::estimate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

