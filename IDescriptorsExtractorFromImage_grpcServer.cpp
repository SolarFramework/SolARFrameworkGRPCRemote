// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractorFromImage_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage {

IDescriptorsExtractorFromImage_grpcServer::IDescriptorsExtractorFromImage_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractorFromImage_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorsExtractorFromImage>(m_grpcService.m_xpcfComponent);
}


void IDescriptorsExtractorFromImage_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractorFromImage_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorsExtractorFromImage_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorsExtractorFromImage_grpcServer::grpcIDescriptorsExtractorFromImageServiceImpl::getTypeString(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response)
{
  std::string returnValue = m_xpcfComponent->getTypeString();
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorsExtractorFromImage_grpcServer::grpcIDescriptorsExtractorFromImageServiceImpl::extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response)
{
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->extract(image, keypoints, descriptors);
  response->set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  response->set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

