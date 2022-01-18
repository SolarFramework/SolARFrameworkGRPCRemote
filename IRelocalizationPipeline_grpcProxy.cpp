// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IRelocalizationPipeline_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIRelocalizationPipeline::IRelocalizationPipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIRelocalizationPipeline::IRelocalizationPipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIRelocalizationPipeline {

IRelocalizationPipeline_grpcProxy::IRelocalizationPipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IRelocalizationPipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IRelocalizationPipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(7);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IRelocalizationPipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRelocalizationPipeline_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIRelocalizationPipeline::grpcIRelocalizationPipelineService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IRelocalizationPipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizationPipeline::initRequest reqIn;
  ::grpcIRelocalizationPipeline::initResponse respOut;
  xpcf::grpcCompressionInfos serverCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "init", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, serverCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizationPipelineService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRelocalizationPipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizationPipeline::startRequest reqIn;
  ::grpcIRelocalizationPipeline::startResponse respOut;
  xpcf::grpcCompressionInfos serverCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "start", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, serverCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizationPipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRelocalizationPipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizationPipeline::stopRequest reqIn;
  ::grpcIRelocalizationPipeline::stopResponse respOut;
  xpcf::grpcCompressionInfos serverCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "stop", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, serverCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizationPipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRelocalizationPipeline_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizationPipeline::setCameraParametersRequest reqIn;
  ::grpcIRelocalizationPipeline::setCameraParametersResponse respOut;
  xpcf::grpcCompressionInfos serverCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "setCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, serverCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizationPipelineService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRelocalizationPipeline_grpcProxy::getCameraParameters(SolAR::datastructure::CameraParameters& cameraParams) const
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizationPipeline::getCameraParametersRequest reqIn;
  ::grpcIRelocalizationPipeline::getCameraParametersResponse respOut;
  xpcf::grpcCompressionInfos serverCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "getCameraParameters", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, serverCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizationPipelineService","getCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.cameraparams());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRelocalizationPipeline_grpcProxy::relocalizeProcessRequest(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df& pose, float_t& confidence)
{
  ::grpc::ClientContext context;
  ::grpcIRelocalizationPipeline::relocalizeProcessRequestRequest reqIn;
  ::grpcIRelocalizationPipeline::relocalizeProcessRequestResponse respOut;
  xpcf::grpcCompressionInfos serverCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "relocalizeProcessRequest", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, serverCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_confidence(xpcf::serialize<float_t>(confidence));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->relocalizeProcessRequest(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "relocalizeProcessRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRelocalizationPipelineService","relocalizeProcessRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

