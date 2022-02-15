// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DTransform_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DTransform {

I2DTransform_grpcServer::I2DTransform_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DTransform_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::I2DTransform>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I2DTransform_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTransform_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DTransform_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DTransform_grpcServer::grpcI2DTransformServiceImpl::transform(::grpc::ServerContext* context, const ::grpcI2DTransform::transformRequest* request, ::grpcI2DTransform::transformResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "transform", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTransform_grpcServer::transform request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> inputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->inputpoints());
  SolAR::datastructure::Transform2Df transformation = xpcf::deserialize<SolAR::datastructure::Transform2Df>(request->transformation());
  std::vector<SolAR::datastructure::Point2Df> outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->outputpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transform(inputPoints, transformation, outputPoints);
  response->set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTransform_grpcServer::transform response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

