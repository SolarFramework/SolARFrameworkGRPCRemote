// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractor_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractor {

IDescriptorsExtractor_grpcProxy::IDescriptorsExtractor_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractor_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorsExtractor>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDescriptorsExtractor_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractor_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorsExtractor::grpcIDescriptorsExtractorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


std::string  IDescriptorsExtractor_grpcProxy::getTypeString()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDescriptorsExtractor::getTypeStringResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getTypeString(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTypeString rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorService","getTypeString",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IDescriptorsExtractor_grpcProxy::extract(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint> const& keypoints, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorsExtractor::extractRequest reqIn;
  ::grpcIDescriptorsExtractor::extractResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorService","extract",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(respOut.descriptors());
}


}

