// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IKeypointDetector_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIKeypointDetector {

IKeypointDetector_grpcProxy::IKeypointDetector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IKeypointDetector_grpcProxy>())
{
  declareInterface<SolAR::api::features::IKeypointDetector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IKeypointDetector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IKeypointDetector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIKeypointDetector::grpcIKeypointDetectorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IKeypointDetector_grpcProxy::setType(SolAR::api::features::IKeypointDetector::KeypointDetectorType type)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetector::setTypeRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_type(static_cast<int32_t>(type));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorService","setType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::api::features::IKeypointDetector::KeypointDetectorType  IKeypointDetector_grpcProxy::getType()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIKeypointDetector::getTypeResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getType(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTyperpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorService","getType",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::api::features::IKeypointDetector::KeypointDetectorType>(respOut.xpcfgrpcreturnvalue());
}


void  IKeypointDetector_grpcProxy::detect(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint>& keypoints)
{
  ::grpc::ClientContext context;
  ::grpcIKeypointDetector::detectRequest reqIn;
  ::grpcIKeypointDetector::detectResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detectrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIKeypointDetectorService","detect",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.keypoints());
}


}

