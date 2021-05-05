// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ITriangulator_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyITriangulator::ITriangulator_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyITriangulator::ITriangulator_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyITriangulator {

ITriangulator_grpcProxy::ITriangulator_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ITriangulator_grpcProxy>())
{
  declareInterface<SolAR::api::solver::map::ITriangulator>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ITriangulator_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ITriangulator_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcITriangulator::grpcITriangulatorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  ITriangulator_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcITriangulator::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITriangulatorService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


double  ITriangulator_grpcProxy::triangulate(std::vector<SolAR::datastructure::Point2Df> const& pointsView1, std::vector<SolAR::datastructure::Point2Df> const& pointView2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<unsigned int,unsigned int> const& working_views, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df const& poseView2, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)
{
  ::grpc::ClientContext context;
  ::grpcITriangulator::triangulate_grpc0Request reqIn;
  ::grpcITriangulator::triangulate_grpc0Response respOut;
  reqIn.set_pointsview1(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(pointsView1));
  reqIn.set_pointview2(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(pointView2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_working_views(xpcf::serialize<std::pair<unsigned int,unsigned int>>(working_views));
  reqIn.set_poseview1(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView1));
  reqIn.set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  reqIn.set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->triangulate_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "triangulate_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITriangulatorService","triangulate_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pcloud());
  return respOut.xpcfgrpcreturnvalue();
}


double  ITriangulator_grpcProxy::triangulate(std::vector<SolAR::datastructure::Keypoint> const& keypointsView1, std::vector<SolAR::datastructure::Keypoint> const& keypointsView2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<unsigned int,unsigned int> const& working_views, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df const& poseView2, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)
{
  ::grpc::ClientContext context;
  ::grpcITriangulator::triangulate_grpc1Request reqIn;
  ::grpcITriangulator::triangulate_grpc1Response respOut;
  reqIn.set_keypointsview1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypointsView1));
  reqIn.set_keypointsview2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypointsView2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_working_views(xpcf::serialize<std::pair<unsigned int,unsigned int>>(working_views));
  reqIn.set_poseview1(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView1));
  reqIn.set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  reqIn.set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->triangulate_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "triangulate_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITriangulatorService","triangulate_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pcloud());
  return respOut.xpcfgrpcreturnvalue();
}


double  ITriangulator_grpcProxy::triangulate(std::vector<SolAR::datastructure::Keypoint> const& keypointsView1, std::vector<SolAR::datastructure::Keypoint> const& keypointsView2, SRef<SolAR::datastructure::DescriptorBuffer> const& descriptor1, SRef<SolAR::datastructure::DescriptorBuffer> const& descriptor2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<unsigned int,unsigned int> const& working_views, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df const& poseView2, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)
{
  ::grpc::ClientContext context;
  ::grpcITriangulator::triangulate_grpc2Request reqIn;
  ::grpcITriangulator::triangulate_grpc2Response respOut;
  reqIn.set_keypointsview1(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypointsView1));
  reqIn.set_keypointsview2(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypointsView2));
  reqIn.set_descriptor1(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptor1));
  reqIn.set_descriptor2(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptor2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_working_views(xpcf::serialize<std::pair<unsigned int,unsigned int>>(working_views));
  reqIn.set_poseview1(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView1));
  reqIn.set_poseview2(xpcf::serialize<SolAR::datastructure::Transform3Df>(poseView2));
  reqIn.set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->triangulate_grpc2(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "triangulate_grpc2rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITriangulatorService","triangulate_grpc2",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pcloud());
  return respOut.xpcfgrpcreturnvalue();
}


double  ITriangulator_grpcProxy::triangulate(SRef<SolAR::datastructure::Keyframe> const& curKeyframe, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)
{
  ::grpc::ClientContext context;
  ::grpcITriangulator::triangulate_grpc3Request reqIn;
  ::grpcITriangulator::triangulate_grpc3Response respOut;
  reqIn.set_curkeyframe(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(curKeyframe));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_pcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pcloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->triangulate_grpc3(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "triangulate_grpc3rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcITriangulatorService","triangulate_grpc3",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pcloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(respOut.pcloud());
  return respOut.xpcfgrpcreturnvalue();
}


}

