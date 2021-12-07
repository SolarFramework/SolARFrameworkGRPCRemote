// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IAsyncRelocalizationPipeline_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline {

IAsyncRelocalizationPipeline_grpcProxy::IAsyncRelocalizationPipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IAsyncRelocalizationPipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IAsyncRelocalizationPipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IAsyncRelocalizationPipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IAsyncRelocalizationPipeline_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIAsyncRelocalizationPipeline::grpcIAsyncRelocalizationPipelineService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIAsyncRelocalizationPipeline::initResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "init rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIAsyncRelocalizationPipeline::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "start rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIAsyncRelocalizationPipeline::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stop rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIAsyncRelocalizationPipeline::setCameraParametersRequest reqIn;
  ::grpcIAsyncRelocalizationPipeline::setCameraParametersResponse respOut;
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::getCameraParameters(SolAR::datastructure::CameraParameters& cameraParams) const
{
  ::grpc::ClientContext context;
  ::grpcIAsyncRelocalizationPipeline::getCameraParametersRequest reqIn;
  ::grpcIAsyncRelocalizationPipeline::getCameraParametersResponse respOut;
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","getCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  cameraParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.cameraparams());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::relocalizeProcessRequest(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df const& pose, std::chrono::system_clock::time_point const& timestamp, SolAR::api::pipeline::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence)
{
  ::grpc::ClientContext context;
  ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestRequest reqIn;
  ::grpcIAsyncRelocalizationPipeline::relocalizeProcessRequestResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_timestamp(xpcf::serialize<std::chrono::system_clock::time_point>(timestamp));
  reqIn.set_transform3dstatus(xpcf::serialize<SolAR::api::pipeline::TransformStatus>(transform3DStatus));
  reqIn.set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  reqIn.set_confidence(xpcf::serialize<float_t>(confidence));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->relocalizeProcessRequest(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "relocalizeProcessRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","relocalizeProcessRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  transform3DStatus = xpcf::deserialize<SolAR::api::pipeline::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IAsyncRelocalizationPipeline_grpcProxy::get3DTransformRequest(SolAR::api::pipeline::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence) const
{
  ::grpc::ClientContext context;
  ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestRequest reqIn;
  ::grpcIAsyncRelocalizationPipeline::get3DTransformRequestResponse respOut;
  reqIn.set_transform3dstatus(xpcf::serialize<SolAR::api::pipeline::TransformStatus>(transform3DStatus));
  reqIn.set_transform3d(xpcf::serialize<SolAR::datastructure::Transform3Df>(transform3D));
  reqIn.set_confidence(xpcf::serialize<float_t>(confidence));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->get3DTransformRequest(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "get3DTransformRequest rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIAsyncRelocalizationPipelineService","get3DTransformRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  transform3DStatus = xpcf::deserialize<SolAR::api::pipeline::TransformStatus>(respOut.transform3dstatus());
  transform3D = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transform3d());
  confidence = xpcf::deserialize<float_t>(respOut.confidence());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

