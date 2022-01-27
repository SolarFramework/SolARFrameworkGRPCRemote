// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRGBDCamera_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRGBDCamera {

IRGBDCamera_grpcServer::IRGBDCamera_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRGBDCamera_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IRGBDCamera>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(27);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IRGBDCamera_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRGBDCamera_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRGBDCamera_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::start(::grpc::ServerContext* context, const ::grpcIRGBDCamera::startRequest* request, ::grpcIRGBDCamera::startResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::start request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->start();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::start response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::stop(::grpc::ServerContext* context, const ::grpcIRGBDCamera::stopRequest* request, ::grpcIRGBDCamera::stopResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::stop request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->stop();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::stop response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getNextImage(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextImageRequest* request, ::grpcIRGBDCamera::getNextImageResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNextImage", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getNextImage request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextImage(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getNextImage response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setResolutionRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setResolution request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  m_xpcfComponent->setResolution(resolution);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setResolution response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setIntrinsicParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setIntrinsicParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setIntrinsicParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  m_xpcfComponent->setIntrinsicParameters(intrinsic_parameters);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setIntrinsicParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setDistortionParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDistortionParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setDistortionParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  m_xpcfComponent->setDistortionParameters(distortion_parameters);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setDistortionParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters parameters = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->parameters());
  m_xpcfComponent->setParameters(parameters);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getResolutionRequest* request, ::grpcIRGBDCamera::getResolutionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getResolution", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getResolution request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getResolution response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getIntrinsicsParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getIntrinsicsParametersRequest* request, ::grpcIRGBDCamera::getIntrinsicsParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getIntrinsicsParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getIntrinsicsParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getIntrinsicsParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getParametersRequest* request, ::grpcIRGBDCamera::getParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters returnValue = m_xpcfComponent->getParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CameraParameters>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDistortionParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDistortionParametersRequest* request, ::grpcIRGBDCamera::getDistortionParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDistortionParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDistortionParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDistortionParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getNextDepthFrame(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextDepthFrameRequest* request, ::grpcIRGBDCamera::getNextDepthFrameResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNextDepthFrame", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getNextDepthFrame request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> img = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->img());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextDepthFrame(img);
  response->set_img(xpcf::serialize<SRef<SolAR::datastructure::Image>>(img));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getNextDepthFrame response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getPointCloud(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getPointCloudRequest* request, ::grpcIRGBDCamera::getPointCloudResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPointCloud", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getPointCloud request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::PointCloud> pc = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pc());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getPointCloud(pc);
  response->set_pc(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pc));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getPointCloud response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setDepthResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDepthResolutionRequest* request, ::grpcIRGBDCamera::setDepthResolutionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setDepthResolution", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setDepthResolution request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Sizei resolution = xpcf::deserialize<SolAR::datastructure::Sizei>(request->resolution());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDepthResolution(resolution);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setDepthResolution response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setIntrinsicDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setIntrinsicDepthParametersRequest* request, ::grpcIRGBDCamera::setIntrinsicDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setIntrinsicDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setIntrinsicDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsic_parameters = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsic_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setIntrinsicDepthParameters(intrinsic_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setIntrinsicDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::setDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::setDistortionDepthParametersRequest* request, ::grpcIRGBDCamera::setDistortionDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "setDistortionDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setDistortionDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamDistortion distortion_parameters = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distortion_parameters());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setDistortionDepthParameters(distortion_parameters);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::setDistortionDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDepthResolution(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDepthResolutionRequest* request, ::grpcIRGBDCamera::getDepthResolutionResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDepthResolution", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDepthResolution request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Sizei returnValue = m_xpcfComponent->getDepthResolution();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Sizei>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDepthResolution response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDepthMinDistance(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDepthMinDistanceRequest* request, ::grpcIRGBDCamera::getDepthMinDistanceResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDepthMinDistance", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDepthMinDistance request received at " << to_simple_string(start) << std::endl;
  #endif
  float returnValue = m_xpcfComponent->getDepthMinDistance();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDepthMinDistance response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getIntrinsicsDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getIntrinsicsDepthParametersRequest* request, ::grpcIRGBDCamera::getIntrinsicsDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getIntrinsicsDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getIntrinsicsDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration returnValue = m_xpcfComponent->getIntrinsicsDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamCalibration>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getIntrinsicsDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getDistortionDepthParameters(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getDistortionDepthParametersRequest* request, ::grpcIRGBDCamera::getDistortionDepthParametersResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getDistortionDepthParameters", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDistortionDepthParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamDistortion returnValue = m_xpcfComponent->getDistortionDepthParameters();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::CamDistortion>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getDistortionDepthParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getNextRGBDFrame(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getNextRGBDFrameRequest* request, ::grpcIRGBDCamera::getNextRGBDFrameResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNextRGBDFrame", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getNextRGBDFrame request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> colorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->colorimg());
  SRef<SolAR::datastructure::Image> depthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->depthimg());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->getNextRGBDFrame(colorImg, depthImg);
  response->set_colorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(colorImg));
  response->set_depthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(depthImg));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getNextRGBDFrame response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::alignDepthToColor(::grpc::ServerContext* context, const ::grpcIRGBDCamera::alignDepthToColorRequest* request, ::grpcIRGBDCamera::alignDepthToColorResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "alignDepthToColor", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::alignDepthToColor request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> alignedDepthImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->aligneddepthimg());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->alignDepthToColor(alignedDepthImg);
  response->set_aligneddepthimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedDepthImg));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::alignDepthToColor response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::alignColorToDepth(::grpc::ServerContext* context, const ::grpcIRGBDCamera::alignColorToDepthRequest* request, ::grpcIRGBDCamera::alignColorToDepthResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "alignColorToDepth", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::alignColorToDepth request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> alignedColorImg = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->alignedcolorimg());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->alignColorToDepth(alignedColorImg);
  response->set_alignedcolorimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(alignedColorImg));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::alignColorToDepth response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getPixelToWorld(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getPixelToWorldRequest* request, ::grpcIRGBDCamera::getPixelToWorldResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getPixelToWorld", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getPixelToWorld request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Point2Di inPixel = xpcf::deserialize<SolAR::datastructure::Point2Di>(request->inpixel());
  SolAR::datastructure::Point3Df returnValue = m_xpcfComponent->getPixelToWorld(inPixel);
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Point3Df>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getPixelToWorld response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getWorldToPixel(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getWorldToPixelRequest* request, ::grpcIRGBDCamera::getWorldToPixelResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldToPixel", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getWorldToPixel request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CloudPoint in3DPoint = xpcf::deserialize<SolAR::datastructure::CloudPoint>(request->in3dpoint());
  SolAR::datastructure::Point2Di returnValue = m_xpcfComponent->getWorldToPixel(in3DPoint);
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<SolAR::datastructure::Point2Di>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getWorldToPixel response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRGBDCamera_grpcServer::grpcIRGBDCameraServiceImpl::getWorldToPixels(::grpc::ServerContext* context, const ::grpcIRGBDCamera::getWorldToPixelsRequest* request, ::grpcIRGBDCamera::getWorldToPixelsResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getWorldToPixels", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getWorldToPixels request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::CloudPoint>> in3DPoints = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->in3dpoints());
  std::vector<SolAR::datastructure::Point2Df> returnValue = m_xpcfComponent->getWorldToPixels(in3DPoints);
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRGBDCamera_grpcServer::getWorldToPixels response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

