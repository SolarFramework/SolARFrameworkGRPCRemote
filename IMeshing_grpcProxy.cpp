// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMeshing_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMeshing::IMeshing_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMeshing::IMeshing_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMeshing {

IMeshing_grpcProxy::IMeshing_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMeshing_grpcProxy>())
{
  declareInterface<SolAR::api::sfm::IMeshing>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMeshing_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMeshing_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMeshing::grpcIMeshingService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMeshing_grpcProxy::createMesh(SRef<datastructure::Map> const& map, SRef<datastructure::Mesh>& mesh)
{
  ::grpc::ClientContext context;
  ::grpcIMeshing::createMeshRequest reqIn;
  ::grpcIMeshing::createMeshResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "createMesh", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_map(xpcf::serialize<SRef<datastructure::Map>>(map));
  reqIn.set_mesh(xpcf::serialize<SRef<datastructure::Mesh>>(mesh));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshing_grpcProxy::createMesh request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->createMesh(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMeshing_grpcProxy::createMesh response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "createMesh rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMeshingService","createMesh",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  mesh = xpcf::deserialize<SRef<datastructure::Mesh>>(respOut.mesh());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

