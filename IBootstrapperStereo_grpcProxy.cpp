// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IBootstrapperStereo_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIBootstrapperStereo::IBootstrapperStereo_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIBootstrapperStereo::IBootstrapperStereo_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIBootstrapperStereo {

IBootstrapperStereo_grpcProxy::IBootstrapperStereo_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IBootstrapperStereo_grpcProxy>())
{
  declareInterface<SolAR::api::slam::IBootstrapperStereo>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IBootstrapperStereo_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBootstrapperStereo_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIBootstrapperStereo::grpcIBootstrapperStereoService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IBootstrapperStereo_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams)
{
  ::grpc::ClientContext context;
  ::grpcIBootstrapperStereo::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBootstrapperStereoService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IBootstrapperStereo_grpcProxy::process(SRef<SolAR::datastructure::Frame> const& frame, SRef<SolAR::datastructure::Image>& view)
{
  ::grpc::ClientContext context;
  ::grpcIBootstrapperStereo::processRequest reqIn;
  ::grpcIBootstrapperStereo::processResponse respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_view(xpcf::serialize<SRef<SolAR::datastructure::Image>>(view));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->process(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "process rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBootstrapperStereoService","process",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  view = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.view());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

