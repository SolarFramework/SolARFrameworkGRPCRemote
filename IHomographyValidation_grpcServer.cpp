// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IHomographyValidation_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIHomographyValidation {

IHomographyValidation_grpcServer::IHomographyValidation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IHomographyValidation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::IHomographyValidation>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IHomographyValidation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IHomographyValidation_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IHomographyValidation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IHomographyValidation_grpcServer::grpcIHomographyValidationServiceImpl::isValid(::grpc::ServerContext* context, const ::grpcIHomographyValidation::isValidRequest* request, ::grpcIHomographyValidation::isValidResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "isValid", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IHomographyValidation_grpcServer::isValid request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Point2Df> ref2DSquaredMarkerCorners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->ref2dsquaredmarkercorners());
  std::vector<SolAR::datastructure::Point2Df> projected2DSquaredMarkerCorners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->projected2dsquaredmarkercorners());
  bool returnValue = m_xpcfComponent->isValid(ref2DSquaredMarkerCorners, projected2DSquaredMarkerCorners);
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IHomographyValidation_grpcServer::isValid response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

