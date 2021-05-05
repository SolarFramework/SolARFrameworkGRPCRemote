// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IVisualInertialFusion_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIVisualInertialFusion {

IVisualInertialFusion_grpcProxy::IVisualInertialFusion_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IVisualInertialFusion_grpcProxy>())
{
  declareInterface<SolAR::api::fusion::IVisualInertialFusion>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IVisualInertialFusion_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IVisualInertialFusion_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIVisualInertialFusion::grpcIVisualInertialFusionService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IVisualInertialFusion_grpcProxy::init(SolAR::api::fusion::VisionData const& initialVisionData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::initRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_initialvisiondata(xpcf::serialize<SolAR::api::fusion::VisionData>(initialVisionData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->init(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "initrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","init",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IVisualInertialFusion_grpcProxy::addInertialData(SolAR::api::fusion::InertialData const& inertialData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::addInertialDataRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_inertialdata(xpcf::serialize<SolAR::api::fusion::InertialData>(inertialData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addInertialData(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addInertialDatarpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","addInertialData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  IVisualInertialFusion_grpcProxy::addVisionData(SolAR::api::fusion::VisionData const& visionData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::addVisionDataRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_visiondata(xpcf::serialize<SolAR::api::fusion::VisionData>(visionData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->addVisionData(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addVisionDatarpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","addVisionData",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IVisualInertialFusion_grpcProxy::process(SolAR::datastructure::Transform3Df& outputData)
{
  ::grpc::ClientContext context;
  ::grpcIVisualInertialFusion::processRequest reqIn;
  ::grpcIVisualInertialFusion::processResponse respOut;
  reqIn.set_outputdata(xpcf::serialize<SolAR::datastructure::Transform3Df>(outputData));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->process(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "processrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIVisualInertialFusionService","process",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputData = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.outputdata());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

