// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ICameraCalibration_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer>();

namespace org::bcom::xpcf::grpc::serverICameraCalibration {

ICameraCalibration_grpcServer::ICameraCalibration_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ICameraCalibration_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::input::devices::ICameraCalibration>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ICameraCalibration_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICameraCalibration_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ICameraCalibration_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ICameraCalibration_grpcServer::grpcICameraCalibrationServiceImpl::calibrate(::grpc::ServerContext* context, const ::grpcICameraCalibration::calibrateRequest* request, ::grpcICameraCalibration::calibrateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "calibrate", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICameraCalibration_grpcServer::calibrate request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->calibrate(images, camParams);
  response->set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICameraCalibration_grpcServer::calibrate response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

