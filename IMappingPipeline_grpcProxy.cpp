// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMappingPipeline_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMappingPipeline {

IMappingPipeline_grpcProxy::IMappingPipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMappingPipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IMappingPipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IMappingPipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMappingPipeline_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMappingPipeline::grpcIMappingPipelineService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMappingPipeline::initResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "initrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingPipelineService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMappingPipeline::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "startrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingPipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMappingPipeline::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stoprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingPipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::setCameraParametersRequest reqIn;
  ::grpcIMappingPipeline::setCameraParametersResponse respOut;
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingPipelineService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::mappingProcessRequest(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df const& pose)
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::mappingProcessRequestRequest reqIn;
  ::grpcIMappingPipeline::mappingProcessRequestResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->mappingProcessRequest(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "mappingProcessRequestrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingPipelineService","mappingProcessRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMappingPipeline_grpcProxy::getDataForVisualization(std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses) const
{
  ::grpc::ClientContext context;
  ::grpcIMappingPipeline::getDataForVisualizationRequest reqIn;
  ::grpcIMappingPipeline::getDataForVisualizationResponse respOut;
  reqIn.set_outputpointclouds(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(outputPointClouds));
  reqIn.set_keyframeposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(keyframePoses));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getDataForVisualization(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getDataForVisualizationrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMappingPipelineService","getDataForVisualization",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputPointClouds = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.outputpointclouds());
  keyframePoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.keyframeposes());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

