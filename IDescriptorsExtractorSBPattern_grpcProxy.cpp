// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractorSBPattern_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern {

IDescriptorsExtractorSBPattern_grpcProxy::IDescriptorsExtractorSBPattern_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractorSBPattern_grpcProxy>())
{
  declareInterface<SolAR::api::features::IDescriptorsExtractorSBPattern>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IDescriptorsExtractorSBPattern_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractorSBPattern_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIDescriptorsExtractorSBPattern::grpcIDescriptorsExtractorSBPatternService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IDescriptorsExtractorSBPattern_grpcProxy::extract(std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Contour2Df> const& inContours, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors, std::vector<SolAR::datastructure::Contour2Df>& outContours)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request reqIn;
  ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response respOut;
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_incontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(inContours));
  reqIn.set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  reqIn.set_outcontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(outContours));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorSBPatternService","extract_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(respOut.descriptors());
  outContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(respOut.outcontours());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IDescriptorsExtractorSBPattern_grpcProxy::extract(SolAR::datastructure::SquaredBinaryPattern const& pattern, SRef<SolAR::datastructure::DescriptorBuffer>& descriptorParam)
{
  ::grpc::ClientContext context;
  ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request reqIn;
  ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response respOut;
  reqIn.set_pattern(xpcf::serialize<SolAR::datastructure::SquaredBinaryPattern>(pattern));
  reqIn.set_descriptorparam(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptorParam));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->extract_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "extract_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIDescriptorsExtractorSBPatternService","extract_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  descriptorParam = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(respOut.descriptorparam());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

