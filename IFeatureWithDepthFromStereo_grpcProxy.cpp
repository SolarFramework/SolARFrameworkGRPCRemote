// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IFeatureWithDepthFromStereo_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo {

IFeatureWithDepthFromStereo_grpcProxy::IFeatureWithDepthFromStereo_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IFeatureWithDepthFromStereo_grpcProxy>())
{
  declareInterface<SolAR::api::features::IFeatureWithDepthFromStereo>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IFeatureWithDepthFromStereo_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IFeatureWithDepthFromStereo_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIFeatureWithDepthFromStereo::grpcIFeatureWithDepthFromStereoService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IFeatureWithDepthFromStereo_grpcProxy::setRectificationParameters(SolAR::datastructure::CameraParameters const& camParams1, SolAR::datastructure::CameraParameters const& camParams2, SolAR::datastructure::RectificationParameters const& rectParams1, SolAR::datastructure::RectificationParameters const& rectParams2)
{
  ::grpc::ClientContext context;
  ::grpcIFeatureWithDepthFromStereo::setRectificationParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_camparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams1));
  reqIn.set_camparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams2));
  reqIn.set_rectparams1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams1));
  reqIn.set_rectparams2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams2));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setRectificationParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setRectificationParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFeatureWithDepthFromStereoService","setRectificationParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IFeatureWithDepthFromStereo_grpcProxy::compute(SRef<SolAR::datastructure::Image> image1, SRef<SolAR::datastructure::Image> image2, SRef<SolAR::datastructure::Frame>& frame1, SRef<SolAR::datastructure::Frame>& frame2)
{
  ::grpc::ClientContext context;
  ::grpcIFeatureWithDepthFromStereo::computeRequest reqIn;
  ::grpcIFeatureWithDepthFromStereo::computeResponse respOut;
  reqIn.set_image1(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image1));
  reqIn.set_image2(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image2));
  reqIn.set_frame1(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame1));
  reqIn.set_frame2(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame2));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->compute(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "compute rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIFeatureWithDepthFromStereoService","compute",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  frame1 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(respOut.frame1());
  frame2 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(respOut.frame2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

