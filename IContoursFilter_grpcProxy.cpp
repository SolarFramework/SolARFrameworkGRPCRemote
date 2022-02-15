// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IContoursFilter_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIContoursFilter {

IContoursFilter_grpcProxy::IContoursFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IContoursFilter_grpcProxy>())
{
  declareInterface<SolAR::api::features::IContoursFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IContoursFilter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursFilter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIContoursFilter::grpcIContoursFilterService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IContoursFilter_grpcProxy::filter(std::vector<SolAR::datastructure::Contour2Df> const& inContours, std::vector<SolAR::datastructure::Contour2Df>& outContours)
{
  ::grpc::ClientContext context;
  ::grpcIContoursFilter::filterRequest reqIn;
  ::grpcIContoursFilter::filterResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_incontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(inContours));
  reqIn.set_outcontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(outContours));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursFilter_grpcProxy::filter request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursFilter_grpcProxy::filter response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIContoursFilterService","filter",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(respOut.outcontours());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

