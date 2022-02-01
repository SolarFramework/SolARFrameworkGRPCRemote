// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IOverlapDetector_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIOverlapDetector::IOverlapDetector_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIOverlapDetector::IOverlapDetector_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIOverlapDetector {

IOverlapDetector_grpcServer::IOverlapDetector_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IOverlapDetector_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::loop::IOverlapDetector>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IOverlapDetector_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IOverlapDetector_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IOverlapDetector_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IOverlapDetector_grpcServer::grpcIOverlapDetectorServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIOverlapDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distortionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distortionParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IOverlapDetector_grpcServer::grpcIOverlapDetectorServiceImpl::detect_grpc0(::grpc::ServerContext* context, const ::grpcIOverlapDetector::detect_grpc0Request* request, ::grpcIOverlapDetector::detect_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcServer::detect request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Map> globalMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->globalmap());
  SRef<SolAR::datastructure::Map> floatingMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->floatingmap());
  SolAR::datastructure::Transform3Df sim3Transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->sim3transform());
  std::vector<std::pair<uint32_t,uint32_t>> cpOverlapIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->cpoverlapindices());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->detect(globalMap, floatingMap, sim3Transform, cpOverlapIndices);
  response->set_sim3transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(sim3Transform));
  response->set_cpoverlapindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(cpOverlapIndices));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcServer::detect response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IOverlapDetector_grpcServer::grpcIOverlapDetectorServiceImpl::detect_grpc1(::grpc::ServerContext* context, const ::grpcIOverlapDetector::detect_grpc1Request* request, ::grpcIOverlapDetector::detect_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "detect", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcServer::detect request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Map> globalMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->globalmap());
  SRef<SolAR::datastructure::Map> floatingMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->floatingmap());
  std::vector<SolAR::datastructure::Transform3Df> sim3Transform = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->sim3transform());
  std::vector<std::pair<uint32_t,uint32_t>> overlapIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->overlapindices());
  std::vector<double> scores = xpcf::deserialize<std::vector<double>>(request->scores());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->detect(globalMap, floatingMap, sim3Transform, overlapIndices, scores);
  response->set_sim3transform(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(sim3Transform));
  response->set_overlapindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(overlapIndices));
  response->set_scores(xpcf::serialize<std::vector<double>>(scores));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IOverlapDetector_grpcServer::detect response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

