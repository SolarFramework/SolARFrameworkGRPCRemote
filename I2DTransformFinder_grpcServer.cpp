// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DTransformFinder_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DTransformFinder::I2DTransformFinder_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DTransformFinder::I2DTransformFinder_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DTransformFinder {

I2DTransformFinder_grpcServer::I2DTransformFinder_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DTransformFinder_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I2DTransformFinder>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I2DTransformFinder_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTransformFinder_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DTransformFinder_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DTransformFinder_grpcServer::grpcI2DTransformFinderServiceImpl::find(::grpc::ServerContext* context, const ::grpcI2DTransformFinder::findTransform2DRequest* request, ::grpcI2DTransformFinder::findTransform2DResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "find", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTransformFinder_grpcServer::find request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> srcPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->srcpoints());
  std::vector<SolAR::datastructure::Point2Df> dstPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->dstpoints());
  SolAR::datastructure::Transform2Df fundamental = xpcf::deserialize<SolAR::datastructure::Transform2Df>(request->fundamental());
  SolAR::api::solver::pose::Transform2DFinder::RetCode returnValue = m_xpcfComponent->find(srcPoints, dstPoints, fundamental);
  response->set_fundamental(xpcf::serialize<SolAR::datastructure::Transform2Df>(fundamental));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2DTransformFinder_grpcServer::find response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

