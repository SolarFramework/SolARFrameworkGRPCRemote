// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICornerRefinement_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICornerRefinement {

ICornerRefinement_grpcProxy::ICornerRefinement_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICornerRefinement_grpcProxy>())
{
  declareInterface<SolAR::api::features::ICornerRefinement>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void ICornerRefinement_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICornerRefinement_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICornerRefinement::grpcICornerRefinementService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ICornerRefinement_grpcProxy::refine(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Point2Df>& corners)
{
  ::grpc::ClientContext context;
  ::grpcICornerRefinement::refineRequest reqIn;
  ::grpcICornerRefinement::refineResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "refine", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_corners(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(corners));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICornerRefinement_grpcProxy::refine request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->refine(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ICornerRefinement_grpcProxy::refine response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "refine rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICornerRefinementService","refine",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  corners = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.corners());
}


}

