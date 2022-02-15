// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IKeypointDetector_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIKeypointDetector {

IKeypointDetector_grpcServer::IKeypointDetector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IKeypointDetector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IKeypointDetector>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IKeypointDetector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointDetector_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IKeypointDetector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IKeypointDetector_grpcServer::grpcIKeypointDetectorServiceImpl::setType(::grpc::ServerContext* context, const ::grpcIKeypointDetector::setTypeRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcServer::setType request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::features::IKeypointDetector::KeypointDetectorType type = static_cast<SolAR::api::features::IKeypointDetector::KeypointDetectorType>(request->type());
  m_xpcfComponent->setType(type);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcServer::setType response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeypointDetector_grpcServer::grpcIKeypointDetectorServiceImpl::getType(::grpc::ServerContext* context, const ::grpcIKeypointDetector::getTypeRequest* request, ::grpcIKeypointDetector::getTypeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getType", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcServer::getType request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::features::IKeypointDetector::KeypointDetectorType returnValue = m_xpcfComponent->getType();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcServer::getType response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IKeypointDetector_grpcServer::grpcIKeypointDetectorServiceImpl::detect(::grpc::ServerContext* context, const ::grpcIKeypointDetector::detectRequest* request, ::grpcIKeypointDetector::detectResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcServer::detect request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  m_xpcfComponent->detect(image, keypoints);
  response->set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IKeypointDetector_grpcServer::detect response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

