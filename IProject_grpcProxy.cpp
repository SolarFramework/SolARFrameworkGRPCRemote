// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IProject_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIProject {

IProject_grpcProxy::IProject_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IProject_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IProject>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IProject_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IProject_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIProject::grpcIProjectService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IProject_grpcProxy::project(std::vector<SolAR::datastructure::Point3Df> const& inputPoints, SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CameraParameters const& camParams, std::vector<SolAR::datastructure::Point2Df>& imagePoints)
{
  ::grpc::ClientContext context;
  ::grpcIProject::project_grpc0Request reqIn;
  ::grpcIProject::project_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "project", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(inputPoints));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IProject_grpcProxy::project request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->project_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IProject_grpcProxy::project response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "project_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIProjectService","project_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.imagepoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IProject_grpcProxy::project(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& inputPoints, SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CameraParameters const& camParams, std::vector<SolAR::datastructure::Point2Df>& imagePoints)
{
  ::grpc::ClientContext context;
  ::grpcIProject::project_grpc1Request reqIn;
  ::grpcIProject::project_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "project", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(inputPoints));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IProject_grpcProxy::project request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->project_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IProject_grpcProxy::project response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "project_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIProjectService","project_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.imagepoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

