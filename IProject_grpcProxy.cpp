// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IProject_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIProject {

IProject_grpcProxy::IProject_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IProject_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IProject>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IProject_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IProject_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIProject::grpcIProjectService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IProject_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcIProject::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIProjectService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IProject_grpcProxy::project(std::vector<SolAR::datastructure::Point3Df> const& inputPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints, SolAR::datastructure::Transform3Df const& pose)
{
  ::grpc::ClientContext context;
  ::grpcIProject::project_grpc0Request reqIn;
  ::grpcIProject::project_grpc0Response respOut;
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(inputPoints));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->project_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "project_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIProjectService","project_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.imagepoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IProject_grpcProxy::project(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& inputPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints, SolAR::datastructure::Transform3Df const& pose)
{
  ::grpc::ClientContext context;
  ::grpcIProject::project_grpc1Request reqIn;
  ::grpcIProject::project_grpc1Response respOut;
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(inputPoints));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  reqIn.set_imagepoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(imagePoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->project_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "project_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIProjectService","project_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imagePoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.imagepoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

