// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposerValidation_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation {

I2Dto3DTransformDecomposerValidation_grpcProxy::I2Dto3DTransformDecomposerValidation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposerValidation_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I2Dto3DTransformDecomposerValidation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I2Dto3DTransformDecomposerValidation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposerValidation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2Dto3DTransformDecomposerValidation::grpcI2Dto3DTransformDecomposerValidationService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I2Dto3DTransformDecomposerValidation_grpcProxy::testMethod()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::google::protobuf::Empty respOut;
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposerValidation_grpcProxy::testMethod request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->testMethod(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposerValidation_grpcProxy::testMethod response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "testMethod rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2Dto3DTransformDecomposerValidationService","testMethod",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

