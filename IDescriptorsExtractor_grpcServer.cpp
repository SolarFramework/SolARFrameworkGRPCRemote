// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractor_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorsExtractor::IDescriptorsExtractor_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorsExtractor::IDescriptorsExtractor_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractor {

IDescriptorsExtractor_grpcServer::IDescriptorsExtractor_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractor_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorsExtractor>(m_grpcService.m_xpcfComponent);
}


void IDescriptorsExtractor_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractor_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorsExtractor_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorsExtractor_grpcServer::grpcIDescriptorsExtractorServiceImpl::getTypeString(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractor::getTypeStringResponse* response)
{
  std::string returnValue = m_xpcfComponent->getTypeString();
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorsExtractor_grpcServer::grpcIDescriptorsExtractorServiceImpl::extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractor::extractRequest* request, ::grpcIDescriptorsExtractor::extractResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  m_xpcfComponent->extract(image, keypoints, descriptors);
  response->set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  return ::grpc::Status::OK;
}


}

