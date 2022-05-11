// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMaskOverlay_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMaskOverlay::IMaskOverlay_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMaskOverlay::IMaskOverlay_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMaskOverlay {

IMaskOverlay_grpcServer::IMaskOverlay_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMaskOverlay_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::display::IMaskOverlay>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMaskOverlay_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMaskOverlay_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMaskOverlay_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMaskOverlay_grpcServer::grpcIMaskOverlayServiceImpl::draw_grpc0(::grpc::ServerContext* context, const ::grpcIMaskOverlay::draw_grpc0Request* request, ::grpcIMaskOverlay::draw_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcServer::draw request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Rectanglei> boxes = xpcf::deserialize<std::vector<SolAR::datastructure::Rectanglei>>(request->boxes());
  std::vector<SRef<SolAR::datastructure::Image>> masks = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->masks());
  std::vector<uint32_t> classIds = xpcf::deserialize<std::vector<uint32_t>>(request->classids());
  std::vector<float> scores = xpcf::deserialize<std::vector<float>>(request->scores());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->draw(image, boxes, masks, classIds, scores);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcServer::draw response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMaskOverlay_grpcServer::grpcIMaskOverlayServiceImpl::draw_grpc1(::grpc::ServerContext* context, const ::grpcIMaskOverlay::draw_grpc1Request* request, ::grpcIMaskOverlay::draw_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "draw", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcServer::draw request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SRef<SolAR::datastructure::Image> mask = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->mask());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->draw(image, mask);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMaskOverlay_grpcServer::draw response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

