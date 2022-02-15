// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPerspectiveController_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPerspectiveController {

IPerspectiveController_grpcServer::IPerspectiveController_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPerspectiveController_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IPerspectiveController>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IPerspectiveController_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPerspectiveController_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPerspectiveController_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPerspectiveController_grpcServer::grpcIPerspectiveControllerServiceImpl::correct_grpc0(::grpc::ServerContext* context, const ::grpcIPerspectiveController::correct_grpc0Request* request, ::grpcIPerspectiveController::correct_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "correct", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcServer::correct request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> inputImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->inputimg());
  std::vector<SolAR::datastructure::Contour2Df> contours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->contours());
  std::vector<SRef<SolAR::datastructure::Image>> patches = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->patches());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->correct(inputImg, contours, patches);
  response->set_patches(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(patches));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcServer::correct response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IPerspectiveController_grpcServer::grpcIPerspectiveControllerServiceImpl::correct_grpc1(::grpc::ServerContext* context, const ::grpcIPerspectiveController::correct_grpc1Request* request, ::grpcIPerspectiveController::correct_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "correct", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcServer::correct request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> inputImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->inputimg());
  SolAR::datastructure::Contour2Df contour = xpcf::deserialize<SolAR::datastructure::Contour2Df>(request->contour());
  SRef<SolAR::datastructure::Image> patch = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->patch());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->correct(inputImg, contour, patch);
  response->set_patch(xpcf::serialize<SRef<SolAR::datastructure::Image>>(patch));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcServer::correct response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

