// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMultiViewStereo_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMultiViewStereo::IMultiViewStereo_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMultiViewStereo::IMultiViewStereo_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMultiViewStereo {

IMultiViewStereo_grpcProxy::IMultiViewStereo_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMultiViewStereo_grpcProxy>())
{
  declareInterface<SolAR::api::sfm::IMultiViewStereo>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMultiViewStereo_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMultiViewStereo_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMultiViewStereo::grpcIMultiViewStereoService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMultiViewStereo_grpcProxy::createDenseMap(SRef<datastructure::Map> const& map, SRef<datastructure::Map>& densemap)
{
  ::grpc::ClientContext context;
  ::grpcIMultiViewStereo::createDenseMapRequest reqIn;
  ::grpcIMultiViewStereo::createDenseMapResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "createDenseMap", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_map(xpcf::serialize<SRef<datastructure::Map>>(map));
  reqIn.set_densemap(xpcf::serialize<SRef<datastructure::Map>>(densemap));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiViewStereo_grpcProxy::createDenseMap request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->createDenseMap(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMultiViewStereo_grpcProxy::createDenseMap response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "createDenseMap rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMultiViewStereoService","createDenseMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  densemap = xpcf::deserialize<SRef<datastructure::Map>>(respOut.densemap());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}
