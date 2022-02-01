// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposerValidation_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation {

I2Dto3DTransformDecomposerValidation_grpcServer::I2Dto3DTransformDecomposerValidation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposerValidation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I2Dto3DTransformDecomposerValidation>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I2Dto3DTransformDecomposerValidation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposerValidation_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2Dto3DTransformDecomposerValidation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2Dto3DTransformDecomposerValidation_grpcServer::grpcI2Dto3DTransformDecomposerValidationServiceImpl::testMethod(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposerValidation_grpcServer::testMethod request received at " << to_simple_string(start) << std::endl;
  #endif
  m_xpcfComponent->testMethod();
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposerValidation_grpcServer::testMethod response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

