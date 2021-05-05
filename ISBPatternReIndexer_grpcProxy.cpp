// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ISBPatternReIndexer_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyISBPatternReIndexer {

ISBPatternReIndexer_grpcProxy::ISBPatternReIndexer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ISBPatternReIndexer_grpcProxy>())
{
  declareInterface<SolAR::api::features::ISBPatternReIndexer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ISBPatternReIndexer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ISBPatternReIndexer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcISBPatternReIndexer::grpcISBPatternReIndexerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ISBPatternReIndexer_grpcProxy::reindex(std::vector<SolAR::datastructure::Contour2Df> const& candidateContours, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point2Df>& patternPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints)
{
  ::grpc::ClientContext context;
  ::grpcISBPatternReIndexer::reindexRequest reqIn;
  ::grpcISBPatternReIndexer::reindexResponse respOut;
  reqIn.set_candidatecontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(candidateContours));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_patternpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(patternPoints));
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->reindex(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "reindexrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcISBPatternReIndexerService","reindex",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  patternPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.patternpoints());
  imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.imagepoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

