// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractorFromImage_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage {

IDescriptorsExtractorFromImage_grpcProxy::IDescriptorsExtractorFromImage_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractorFromImage_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorsExtractorFromImage>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDescriptorsExtractorFromImage_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractorFromImage_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorsExtractorFromImage::grpcIDescriptorsExtractorFromImageService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


std::string  IDescriptorsExtractorFromImage_grpcProxy::getTypeString()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getTypeString(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTypeString rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorFromImageService","getTypeString",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IDescriptorsExtractorFromImage_grpcProxy::extract(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint>& keypoints, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorsExtractorFromImage::extractRequest reqIn;
  ::grpcIDescriptorsExtractorFromImage::extractResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorFromImageService","extract",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.keypoints());
  descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(respOut.descriptors());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

