// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ISBPatternReIndexer_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverISBPatternReIndexer {

ISBPatternReIndexer_grpcServer::ISBPatternReIndexer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ISBPatternReIndexer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::ISBPatternReIndexer>(m_grpcService.m_xpcfComponent);
}


void ISBPatternReIndexer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ISBPatternReIndexer_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ISBPatternReIndexer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ISBPatternReIndexer_grpcServer::grpcISBPatternReIndexerServiceImpl::reindex(::grpc::ServerContext* context, const ::grpcISBPatternReIndexer::reindexRequest* request, ::grpcISBPatternReIndexer::reindexResponse* response)
{
  std::vector<SolAR::datastructure::Contour2Df> candidateContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->candidatecontours());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point2Df> patternPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->patternpoints());
  std::vector<SolAR::datastructure::Point2Df> imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->imagepoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->reindex(candidateContours, matches, patternPoints, imagePoints);
  response->set_patternpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(patternPoints));
  response->set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

