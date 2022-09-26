// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IPointCloudExporter_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIPointCloudExporter::IPointCloudExporter_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIPointCloudExporter::IPointCloudExporter_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIPointCloudExporter {

IPointCloudExporter_grpcProxy::IPointCloudExporter_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudExporter_grpcProxy>())
{
  declareInterface<SolAR::api::output::files::IPointCloudExporter>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IPointCloudExporter_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudExporter_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIPointCloudExporter::grpcIPointCloudExporterService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IPointCloudExporter_grpcProxy::exportPointCloud(std::string const& filepath, SRef<SolAR::datastructure::PointCloud> const& pointCloud)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudExporter::exportPointCloudRequest reqIn;
  ::grpcIPointCloudExporter::exportPointCloudResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "exportPointCloud", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_filepath(filepath);
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudExporter_grpcProxy::exportPointCloud request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->exportPointCloud(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPointCloudExporter_grpcProxy::exportPointCloud response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "exportPointCloud rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudExporterService","exportPointCloud",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

