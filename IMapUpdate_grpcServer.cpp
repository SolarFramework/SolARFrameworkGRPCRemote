// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapUpdate_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapUpdate {

IMapUpdate_grpcServer::IMapUpdate_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapUpdate_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::IMapUpdate>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMapUpdate_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapUpdate_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapUpdate_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapUpdate_grpcServer::grpcIMapUpdateServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapUpdate::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapUpdate_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  m_xpcfComponent->setCameraParameters(camParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapUpdate_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapUpdate_grpcServer::grpcIMapUpdateServiceImpl::update(::grpc::ServerContext* context, const ::grpcIMapUpdate::updateRequest* request, ::grpcIMapUpdate::updateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "update", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapUpdate_grpcServer::update request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Map> globalMap = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->globalmap());
  std::vector<uint32_t> newKeyframeIds = xpcf::deserialize<std::vector<uint32_t>>(request->newkeyframeids());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->update(globalMap, newKeyframeIds);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapUpdate_grpcServer::update response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

