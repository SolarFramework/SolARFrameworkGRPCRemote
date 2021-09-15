// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IUndistortPoints_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIUndistortPoints::IUndistortPoints_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIUndistortPoints::IUndistortPoints_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIUndistortPoints {

IUndistortPoints_grpcProxy::IUndistortPoints_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IUndistortPoints_grpcProxy>())
{
  declareInterface<SolAR::api::geom::IUndistortPoints>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IUndistortPoints_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IUndistortPoints_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIUndistortPoints::grpcIUndistortPointsService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IUndistortPoints_grpcProxy::undistort(std::vector<SolAR::datastructure::Point2Df> const& inputPoints, std::vector<SolAR::datastructure::Point2Df>& outputPoints)
{
  ::grpc::ClientContext context;
  ::grpcIUndistortPoints::undistort_grpc0Request reqIn;
  ::grpcIUndistortPoints::undistort_grpc0Response respOut;
  reqIn.set_inputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(inputPoints));
  reqIn.set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->undistort_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "undistort_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIUndistortPointsService","undistort_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.outputpoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IUndistortPoints_grpcProxy::undistort(std::vector<SolAR::datastructure::Keypoint> const& inputKeypoints, std::vector<SolAR::datastructure::Keypoint>& outputKeypoints)
{
  ::grpc::ClientContext context;
  ::grpcIUndistortPoints::undistort_grpc1Request reqIn;
  ::grpcIUndistortPoints::undistort_grpc1Response respOut;
  reqIn.set_inputkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(inputKeypoints));
  reqIn.set_outputkeypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(outputKeypoints));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->undistort_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "undistort_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIUndistortPointsService","undistort_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  outputKeypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(respOut.outputkeypoints());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


void  IUndistortPoints_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcIUndistortPoints::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIUndistortPointsService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


}

