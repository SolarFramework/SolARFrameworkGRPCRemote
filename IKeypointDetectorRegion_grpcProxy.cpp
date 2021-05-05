// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeypointDetectorRegion_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion::IKeypointDetectorRegion_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion::IKeypointDetectorRegion_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion {

IKeypointDetectorRegion_grpcProxy::IKeypointDetectorRegion_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeypointDetectorRegion_grpcProxy>())
{
  declareInterface<SolAR::api::features::IKeypointDetectorRegion>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IKeypointDetectorRegion_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointDetectorRegion_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeypointDetectorRegion::grpcIKeypointDetectorRegionService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IKeypointDetectorRegion_grpcProxy::setType(SolAR::api::features::IKeypointDetector::KeypointDetectorType type)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetectorRegion::setTypeRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_type(static_cast<int32_t>(type));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorRegionService","setType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::api::features::IKeypointDetector::KeypointDetectorType  IKeypointDetectorRegion_grpcProxy::getType()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIKeypointDetectorRegion::getTypeResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorRegionService","getType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::api::features::IKeypointDetector::KeypointDetectorType>(respOut.xpcfgrpcreturnvalue());
}


void  IKeypointDetectorRegion_grpcProxy::detect(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Point2Df> const& contours, std::vector<SolAR::datastructure::Keypoint>& keypoints)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetectorRegion::detectRequest reqIn;
  ::grpcIKeypointDetectorRegion::detectResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(contours));
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detectrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorRegionService","detect",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.keypoints());
}


}

