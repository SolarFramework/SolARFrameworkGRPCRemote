// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I3DOverlay_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI3DOverlay {

I3DOverlay_grpcProxy::I3DOverlay_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I3DOverlay_grpcProxy>())
{
  declareInterface<SolAR::api::display::I3DOverlay>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void I3DOverlay_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DOverlay_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI3DOverlay::grpcI3DOverlayService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I3DOverlay_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsic_parameters, SolAR::datastructure::CamDistortion const& distorsion_parameters)
{
  ::grpc::ClientContext context;
  ::grpcI3DOverlay::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsic_parameters(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsic_parameters));
  reqIn.set_distorsion_parameters(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsion_parameters));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DOverlayService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


void  I3DOverlay_grpcProxy::draw(SolAR::datastructure::Transform3Df const& pose, SRef<SolAR::datastructure::Image> displayImage)
{
  ::grpc::ClientContext context;
  ::grpcI3DOverlay::drawRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_displayimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(displayImage));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->draw(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "draw rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI3DOverlayService","draw",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

