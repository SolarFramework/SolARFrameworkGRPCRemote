// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ITracking_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyITracking {

ITracking_grpcProxy::ITracking_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ITracking_grpcProxy>())
{
  declareInterface<SolAR::api::slam::ITracking>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ITracking_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITracking_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcITracking::grpcITrackingService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ITracking_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcITracking::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  ITracking_grpcProxy::updateReferenceKeyframe(SRef<SolAR::datastructure::Keyframe> const refKeyframe)
{
  ::grpc::ClientContext context;
  ::grpcITracking::updateReferenceKeyframeRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_refkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(refKeyframe));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->updateReferenceKeyframe(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "updateReferenceKeyframe rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","updateReferenceKeyframe",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  ITracking_grpcProxy::process(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Image>& displayImage)
{
  ::grpc::ClientContext context;
  ::grpcITracking::processRequest reqIn;
  ::grpcITracking::processResponse respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->process(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "process rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackingService","process",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  displayImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.displayimage());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

