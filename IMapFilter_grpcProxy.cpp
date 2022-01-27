// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapFilter_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapFilter::IMapFilter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapFilter::IMapFilter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapFilter {

IMapFilter_grpcProxy::IMapFilter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapFilter_grpcProxy>())
{
  declareInterface<SolAR::api::solver::map::IMapFilter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IMapFilter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapFilter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMapFilter::grpcIMapFilterService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IMapFilter_grpcProxy::filter(SolAR::datastructure::Transform3Df const& pose1, SolAR::datastructure::Transform3Df const& pose2, std::vector<SRef<SolAR::datastructure::CloudPoint>> const& input, std::vector<SRef<SolAR::datastructure::CloudPoint>>& output)
{
  ::grpc::ClientContext context;
  ::grpcIMapFilter::filter_grpc0Request reqIn;
  ::grpcIMapFilter::filter_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_pose1(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose1));
  reqIn.set_pose2(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose2));
  reqIn.set_input(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(input));
  reqIn.set_output(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(output));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcProxy::filter request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcProxy::filter response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapFilterService","filter_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  output = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.output());
}


void  IMapFilter_grpcProxy::filter(SolAR::datastructure::Transform3Df const& pose1, SolAR::datastructure::Transform3Df const& pose2, std::vector<SRef<SolAR::datastructure::CloudPoint>> const& input, std::vector<SRef<SolAR::datastructure::CloudPoint>>& output, std::vector<int>& index)
{
  ::grpc::ClientContext context;
  ::grpcIMapFilter::filter_grpc1Request reqIn;
  ::grpcIMapFilter::filter_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_pose1(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose1));
  reqIn.set_pose2(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose2));
  reqIn.set_input(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(input));
  reqIn.set_output(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(output));
  reqIn.set_index(xpcf::serialize<std::vector<int>>(index));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcProxy::filter request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->filter_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcProxy::filter response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "filter_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapFilterService","filter_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  output = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.output());
  index = xpcf::deserialize<std::vector<int>>(respOut.index());
}


}

