// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IUnproject_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIUnproject::IUnproject_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIUnproject::IUnproject_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIUnproject {

IUnproject_grpcProxy::IUnproject_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IUnproject_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IUnproject>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IUnproject_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IUnproject_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIUnproject::grpcIUnprojectService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IUnproject_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcIUnproject::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIUnprojectService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IUnproject_grpcProxy::unproject(std::vector<SolAR::datastructure::Point2Df> const& imagePoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints, SolAR::datastructure::Transform3Df const& pose)
{
  ::grpc::ClientContext context;
  ::grpcIUnproject::unproject_grpc0Request reqIn;
  ::grpcIUnproject::unproject_grpc0Response respOut;
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->unproject_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "unproject_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIUnprojectService","unproject_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(respOut.worldpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IUnproject_grpcProxy::unproject(std::vector<SolAR::datastructure::Keypoint> const& imageKeypoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints, SolAR::datastructure::Transform3Df const& pose)
{
  ::grpc::ClientContext context;
  ::grpcIUnproject::unproject_grpc1Request reqIn;
  ::grpcIUnproject::unproject_grpc1Response respOut;
  reqIn.set_imagekeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(imageKeypoints));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_worldpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(worldPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->unproject_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "unproject_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIUnprojectService","unproject_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  worldPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(respOut.worldpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

