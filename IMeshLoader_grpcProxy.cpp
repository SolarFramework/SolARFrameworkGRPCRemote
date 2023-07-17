// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMeshLoader_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMeshLoader::IMeshLoader_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMeshLoader::IMeshLoader_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMeshLoader {

IMeshLoader_grpcProxy::IMeshLoader_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMeshLoader_grpcProxy>())
{
  declareInterface<SolAR::api::input::files::IMeshLoader>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMeshLoader_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMeshLoader_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMeshLoader::grpcIMeshLoaderService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMeshLoader_grpcProxy::load(SRef<SolAR::datastructure::Mesh>& Mesh)
{
  ::grpc::ClientContext context;
  ::grpcIMeshLoader::loadRequest reqIn;
  ::grpcIMeshLoader::loadResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "load", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_mesh(xpcf::serialize<SRef<SolAR::datastructure::Mesh>>(Mesh));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshLoader_grpcProxy::load request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->load(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshLoader_grpcProxy::load response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "load rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMeshLoaderService","load",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  Mesh = xpcf::deserialize<SRef<SolAR::datastructure::Mesh>>(respOut.mesh());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

