// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDepthCamera_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDepthCamera {

IDepthCamera_grpcServer::IDepthCamera_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDepthCamera_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IDepthCamera>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(12);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IDepthCamera_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDepthCamera_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDepthCamera_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::start(::grpc::ServerContext* context, const ::grpcIDepthCamera::startRequest* request, ::grpcIDepthCamera::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIDepthCamera::stopRequest* request, ::grpcIDepthCamera::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getNextDepthFrame(::grpc::ServerContext* context, const ::grpcIDepthCamera::getNextDepthFrameRequest* request, ::grpcIDepthCamera::getNextDepthFrameResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNextDepthFrame", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getNextDepthFrame request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextDepthFrame(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getNextDepthFrame response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIDepthCamera::getPointCloudRequest* request, ::grpcIDepthCamera::getPointCloudResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPointCloud", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pc());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloud(pc);
  response->set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::setDepthResolution(::grpc::ServerContext* context, const ::grpcIDepthCamera::setDepthResolutionRequest* request, ::grpcIDepthCamera::setDepthResolutionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setDepthResolution", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::setDepthResolution request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDepthResolution(resolution);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::setDepthResolution response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::setIntrinsicDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::setIntrinsicDepthParametersRequest* request, ::grpcIDepthCamera::setIntrinsicDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setIntrinsicDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::setIntrinsicDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setIntrinsicDepthParameters(intrinsic_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::setIntrinsicDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::setDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::setDistortionDepthParametersRequest* request, ::grpcIDepthCamera::setDistortionDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setDistortionDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::setDistortionDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDistortionDepthParameters(distortion_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::setDistortionDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getDepthResolution(::grpc::ServerContext* context, const ::grpcIDepthCamera::getDepthResolutionRequest* request, ::grpcIDepthCamera::getDepthResolutionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDepthResolution", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getDepthResolution request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getDepthResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getDepthResolution response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getDepthMinDistance(::grpc::ServerContext* context, const ::grpcIDepthCamera::getDepthMinDistanceRequest* request, ::grpcIDepthCamera::getDepthMinDistanceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDepthMinDistance", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getDepthMinDistance request received at " << to_simple_string(start) << std::endl;
  #endif
  float returnValue = m_xpcfComponent->getDepthMinDistance();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getDepthMinDistance response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getIntrinsicsDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::getIntrinsicsDepthParametersRequest* request, ::grpcIDepthCamera::getIntrinsicsDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getIntrinsicsDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getIntrinsicsDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getIntrinsicsDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDepthCamera_grpcServer::grpcIDepthCameraServiceImpl::getDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIDepthCamera::getDistortionDepthParametersRequest* request, ::grpcIDepthCamera::getDistortionDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDistortionDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getDistortionDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDepthCamera_grpcServer::getDistortionDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

