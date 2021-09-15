// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ITrackablePose_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyITrackablePose::ITrackablePose_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyITrackablePose::ITrackablePose_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyITrackablePose {

ITrackablePose_grpcProxy::ITrackablePose_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ITrackablePose_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::ITrackablePose>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ITrackablePose_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITrackablePose_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcITrackablePose::grpcITrackablePoseService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ITrackablePose_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcITrackablePose::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackablePoseService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  ITrackablePose_grpcProxy::setTrackable(SRef<SolAR::datastructure::Trackable> const trackable)
{
  ::grpc::ClientContext context;
  ::grpcITrackablePose::setTrackableRequest reqIn;
  ::grpcITrackablePose::setTrackableResponse respOut;
  reqIn.set_trackable(xpcf::serialize<SRef<SolAR::datastructure::Trackable>>(trackable));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setTrackable(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setTrackable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackablePoseService","setTrackable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  ITrackablePose_grpcProxy::estimate(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df& pose)
{
  ::grpc::ClientContext context;
  ::grpcITrackablePose::estimateRequest reqIn;
  ::grpcITrackablePose::estimateResponse respOut;
  reqIn.set_image(xpcf::serialize<SRef<SolAR::datastructure::Image>>(image));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->estimate(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "estimate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITrackablePoseService","estimate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

