// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IStereoCameraCalibration_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIStereoCameraCalibration {

IStereoCameraCalibration_grpcServer::IStereoCameraCalibration_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IStereoCameraCalibration_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::IStereoCameraCalibration>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IStereoCameraCalibration_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IStereoCameraCalibration_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IStereoCameraCalibration_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IStereoCameraCalibration_grpcServer::grpcIStereoCameraCalibrationServiceImpl::calibrate(::grpc::ServerContext* context, const ::grpcIStereoCameraCalibration::calibrateRequest* request, ::grpcIStereoCameraCalibration::calibrateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "calibrate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcServer::calibrate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images1 = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images1());
  std::vector<SRef<SolAR::datastructure::Image>> images2 = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images2());
  SolAR::datastructure::CameraParameters camParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams1());
  SolAR::datastructure::CameraParameters camParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams2());
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  SolAR::datastructure::RectificationParameters rectParams1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams1());
  SolAR::datastructure::RectificationParameters rectParams2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->calibrate(images1, images2, camParams1, camParams2, transformation, rectParams1, rectParams2);
  response->set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  response->set_rectparams1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams1));
  response->set_rectparams2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcServer::calibrate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IStereoCameraCalibration_grpcServer::grpcIStereoCameraCalibrationServiceImpl::rectify(::grpc::ServerContext* context, const ::grpcIStereoCameraCalibration::rectifyRequest* request, ::grpcIStereoCameraCalibration::rectifyResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "rectify", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcServer::rectify request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters camParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams1());
  SolAR::datastructure::CameraParameters camParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams2());
  SolAR::datastructure::RectificationParameters rectParams1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams1());
  SolAR::datastructure::RectificationParameters rectParams2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->rectify(camParams1, camParams2, rectParams1, rectParams2);
  response->set_rectparams1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams1));
  response->set_rectparams2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcServer::rectify response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

