// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapUpdatePipeline_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapUpdatePipeline::IMapUpdatePipeline_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapUpdatePipeline::IMapUpdatePipeline_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapUpdatePipeline {

IMapUpdatePipeline_grpcProxy::IMapUpdatePipeline_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapUpdatePipeline_grpcProxy>())
{
  declareInterface<SolAR::api::pipeline::IMapUpdatePipeline>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IMapUpdatePipeline_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapUpdatePipeline_grpcProxy::onConfigured()
{
    std::cout << "[IMapUpdatePipeline_grpcProxy::onConfigured()]Check if remote map update pipeline URL is defined in XPCF_GRPC_MAP_UPDATE_URL" << std::endl;

    char * envValue = getenv("XPCF_GRPC_MAP_UPDATE_URL");

    if (envValue != nullptr) {
        std::cout << "[IMapUpdatePipeline_grpcProxy::onConfigured()]XPCF_GRPC_MAP_UPDATE_URL environment variable found: " << envValue  << std::endl;
        m_channelUrl = envValue;
    }

//  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
    ::grpc::ChannelArguments ch_args;
    ch_args.SetMaxReceiveMessageSize(-1);
    m_channel = ::grpc::CreateCustomChannel(m_channelUrl,
                                            xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)),
                                            ch_args);
    m_grpcStub = ::grpcIMapUpdatePipeline::grpcIMapUpdatePipelineService::NewStub(m_channel);
    return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IMapUpdatePipeline_grpcProxy::init()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMapUpdatePipeline::initResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "initrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdatePipelineService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapUpdatePipeline_grpcProxy::start()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMapUpdatePipeline::startResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->start(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "startrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdatePipelineService","start",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapUpdatePipeline_grpcProxy::stop()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIMapUpdatePipeline::stopResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->stop(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "stoprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdatePipelineService","stop",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapUpdatePipeline_grpcProxy::setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)
{
  ::grpc::ClientContext context;
  ::grpcIMapUpdatePipeline::setCameraParametersRequest reqIn;
  ::grpcIMapUpdatePipeline::setCameraParametersResponse respOut;
  reqIn.set_cameraparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(cameraParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdatePipelineService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapUpdatePipeline_grpcProxy::mapUpdateRequest(SRef<SolAR::datastructure::Map> const map)
{
  ::grpc::ClientContext context;
  ::grpcIMapUpdatePipeline::mapUpdateRequestRequest reqIn;
  ::grpcIMapUpdatePipeline::mapUpdateRequestResponse respOut;
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->mapUpdateRequest(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "mapUpdateRequestrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdatePipelineService","mapUpdateRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IMapUpdatePipeline_grpcProxy::getMapRequest(SRef<SolAR::datastructure::Map>& map) const
{
  ::grpc::ClientContext context;
  ::grpcIMapUpdatePipeline::getMapRequestRequest reqIn;
  ::grpcIMapUpdatePipeline::getMapRequestResponse respOut;
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getMapRequest(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getMapRequestrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdatePipelineService","getMapRequest",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(respOut.map());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

