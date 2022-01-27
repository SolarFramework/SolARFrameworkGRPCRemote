// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IVisualInertialFusion_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIVisualInertialFusion {

IVisualInertialFusion_grpcProxy::IVisualInertialFusion_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IVisualInertialFusion_grpcProxy>())
{
  declareInterface<SolAR::api::fusion::IVisualInertialFusion>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(5);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IVisualInertialFusion_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IVisualInertialFusion_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIVisualInertialFusion::grpcIVisualInertialFusionService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IVisualInertialFusion_grpcProxy::init(SolAR::api::fusion::VisionData const& initialVisionData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::initRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_initialvisiondata(xpcf::serialize<SolAR::api::fusion::VisionData>(initialVisionData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::init request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::init response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IVisualInertialFusion_grpcProxy::addInertialData(SolAR::api::fusion::InertialData const& inertialData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::addInertialDataRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_inertialdata(xpcf::serialize<SolAR::api::fusion::InertialData>(inertialData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::addInertialData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addInertialData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::addInertialData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addInertialData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","addInertialData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IVisualInertialFusion_grpcProxy::addVisionData(SolAR::api::fusion::VisionData const& visionData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::addVisionDataRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_visiondata(xpcf::serialize<SolAR::api::fusion::VisionData>(visionData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::addVisionData request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addVisionData(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::addVisionData response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addVisionData rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","addVisionData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IVisualInertialFusion_grpcProxy::process(SolAR::datastructure::Transform3Df& outputData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::processRequest reqIn;
  ::grpcIVisualInertialFusion::processResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "process", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_outputdata(xpcf::serialize<SolAR::datastructure::Transform3Df>(outputData));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::process request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->process(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcProxy::process response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "process rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","process",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputData = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.outputdata());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

