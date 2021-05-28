// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeyframeRetriever_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeyframeRetriever {

IKeyframeRetriever_grpcProxy::IKeyframeRetriever_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeyframeRetriever_grpcProxy>())
{
  declareInterface<SolAR::api::reloc::IKeyframeRetriever>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IKeyframeRetriever_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeyframeRetriever_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeyframeRetriever::grpcIKeyframeRetrieverService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::addKeyframeRequest reqIn;
  ::grpcIKeyframeRetriever::addKeyframeResponse respOut;
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addKeyframerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","addKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::suppressKeyframe(uint32_t keyframe_id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::suppressKeyframeRequest reqIn;
  ::grpcIKeyframeRetriever::suppressKeyframeResponse respOut;
  reqIn.set_keyframe_id(keyframe_id);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->suppressKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "suppressKeyframerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","suppressKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::retrieve(SRef<SolAR::datastructure::Frame> const frame, std::vector<uint32_t>& retKeyframes_id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::retrieve_grpc0Request reqIn;
  ::grpcIKeyframeRetriever::retrieve_grpc0Response respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_retkeyframes_id(xpcf::serialize<std::vector<uint32_t>>(retKeyframes_id));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->retrieve_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "retrieve_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","retrieve_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  retKeyframes_id = xpcf::deserialize<std::vector<uint32_t>>(respOut.retkeyframes_id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::retrieve(SRef<SolAR::datastructure::Frame> const frame, std::set<unsigned int> const& canKeyframes_id, std::vector<uint32_t>& retKeyframes_id)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::retrieve_grpc1Request reqIn;
  ::grpcIKeyframeRetriever::retrieve_grpc1Response respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_cankeyframes_id(xpcf::serialize<std::set<unsigned int>>(canKeyframes_id));
  reqIn.set_retkeyframes_id(xpcf::serialize<std::vector<uint32_t>>(retKeyframes_id));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->retrieve_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "retrieve_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","retrieve_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  retKeyframes_id = xpcf::deserialize<std::vector<uint32_t>>(respOut.retkeyframes_id());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::saveToFile(std::string const& file) const
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::saveToFileRequest reqIn;
  ::grpcIKeyframeRetriever::saveToFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->saveToFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "saveToFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","saveToFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::loadFromFile(std::string const& file)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::loadFromFileRequest reqIn;
  ::grpcIKeyframeRetriever::loadFromFileResponse respOut;
  reqIn.set_file(file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadFromFile(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadFromFilerpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","loadFromFile",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::match(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Keyframe> const keyframe, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::match_grpc0Request reqIn;
  ::grpcIKeyframeRetriever::match_grpc0Response respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","match_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IKeyframeRetriever_grpcProxy::match(std::vector<int> const& indexDescriptors, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors, SRef<SolAR::datastructure::Keyframe> const keyframe, std::vector<SolAR::datastructure::DescriptorMatch>& matches)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::match_grpc1Request reqIn;
  ::grpcIKeyframeRetriever::match_grpc1Response respOut;
  reqIn.set_indexdescriptors(xpcf::serialize<std::vector<int>>(indexDescriptors));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  reqIn.set_keyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->match_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "match_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","match_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(respOut.matches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SRef<SolAR::datastructure::KeyframeRetrieval> const&  IKeyframeRetriever_grpcProxy::getConstKeyframeRetrieval() const
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIKeyframeRetriever::getConstKeyframeRetrievalResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getConstKeyframeRetrieval(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getConstKeyframeRetrievalrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","getConstKeyframeRetrieval",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


std::unique_lock<std::mutex>  IKeyframeRetriever_grpcProxy::getKeyframeRetrieval(SRef<SolAR::datastructure::KeyframeRetrieval>& keyframeRetrieval)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::getKeyframeRetrievalRequest reqIn;
  ::grpcIKeyframeRetriever::getKeyframeRetrievalResponse respOut;
  reqIn.set_keyframeretrieval(xpcf::serialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(keyframeRetrieval));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getKeyframeRetrieval(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getKeyframeRetrievalrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","getKeyframeRetrieval",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keyframeRetrieval = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(respOut.keyframeretrieval());
}


void  IKeyframeRetriever_grpcProxy::setKeyframeRetrieval(SRef<SolAR::datastructure::KeyframeRetrieval> const keyframeRetrieval)
{
  ::grpc::ClientContext context;
  ::grpcIKeyframeRetriever::setKeyframeRetrievalRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_keyframeretrieval(xpcf::serialize<SRef<SolAR::datastructure::KeyframeRetrieval>>(keyframeRetrieval));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setKeyframeRetrieval(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setKeyframeRetrievalrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeyframeRetrieverService","setKeyframeRetrieval",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

