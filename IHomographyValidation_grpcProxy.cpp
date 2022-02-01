// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IHomographyValidation_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIHomographyValidation {

IHomographyValidation_grpcProxy::IHomographyValidation_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IHomographyValidation_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::IHomographyValidation>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IHomographyValidation_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IHomographyValidation_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIHomographyValidation::grpcIHomographyValidationService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


bool  IHomographyValidation_grpcProxy::isValid(std::vector<SolAR::datastructure::Point2Df> const& ref2DSquaredMarkerCorners, std::vector<SolAR::datastructure::Point2Df> const& projected2DSquaredMarkerCorners)
{
  ::grpc::ClientContext context;
  ::grpcIHomographyValidation::isValidRequest reqIn;
  ::grpcIHomographyValidation::isValidResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "isValid", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_ref2dsquaredmarkercorners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(ref2DSquaredMarkerCorners));
  reqIn.set_projected2dsquaredmarkercorners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(projected2DSquaredMarkerCorners));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IHomographyValidation_grpcProxy::isValid request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->isValid(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IHomographyValidation_grpcProxy::isValid response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "isValid rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIHomographyValidationService","isValid",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


}

