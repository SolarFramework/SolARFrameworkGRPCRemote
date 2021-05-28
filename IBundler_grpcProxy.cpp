// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IBundler_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIBundler {

IBundler_grpcProxy::IBundler_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IBundler_grpcProxy>())
{
  declareInterface<SolAR::api::solver::map::IBundler>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IBundler_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBundler_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIBundler::grpcIBundlerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IBundler_grpcProxy::setMap(SRef<SolAR::datastructure::Map> const map)
{
  ::grpc::ClientContext context;
  ::grpcIBundler::setMapRequest reqIn;
  ::grpcIBundler::setMapResponse respOut;
  reqIn.set_map(xpcf::serialize<SRef<SolAR::datastructure::Map>>(map));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMap(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setMaprpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBundlerService","setMap",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


double  IBundler_grpcProxy::bundleAdjustment(SolAR::datastructure::CamCalibration& K, SolAR::datastructure::CamDistortion& D, std::vector<uint32_t> const& selectKeyframes)
{
  ::grpc::ClientContext context;
  ::grpcIBundler::bundleAdjustmentRequest reqIn;
  ::grpcIBundler::bundleAdjustmentResponse respOut;
  reqIn.set_selectkeyframes(xpcf::serialize<std::vector<uint32_t>>(selectKeyframes));
  reqIn.set_k(xpcf::serialize<SolAR::datastructure::CamCalibration>(K));
  reqIn.set_d(xpcf::serialize<SolAR::datastructure::CamDistortion>(D));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->bundleAdjustment(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "bundleAdjustmentrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBundlerService","bundleAdjustment",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  K = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.k());
  D = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.d());
  return respOut.xpcfgrpcreturnvalue();
}


double  IBundler_grpcProxy::optimizeSim3(SolAR::datastructure::CamCalibration& K1, SolAR::datastructure::CamCalibration& K2, SRef<SolAR::datastructure::Keyframe> const& keyframe1, SRef<SolAR::datastructure::Keyframe> const& keyframe2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point3Df> const& pts3D1, std::vector<SolAR::datastructure::Point3Df> const& pts3D2, SolAR::datastructure::Transform3Df& pose)
{
  ::grpc::ClientContext context;
  ::grpcIBundler::optimizeSim3Request reqIn;
  ::grpcIBundler::optimizeSim3Response respOut;
  reqIn.set_keyframe1(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe1));
  reqIn.set_keyframe2(xpcf::serialize<SRef<SolAR::datastructure::Keyframe>>(keyframe2));
  reqIn.set_matches(xpcf::serialize<std::vector<SolAR::datastructure::DescriptorMatch>>(matches));
  reqIn.set_pts3d1(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(pts3D1));
  reqIn.set_pts3d2(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(pts3D2));
  reqIn.set_k1(xpcf::serialize<SolAR::datastructure::CamCalibration>(K1));
  reqIn.set_k2(xpcf::serialize<SolAR::datastructure::CamCalibration>(K2));
  reqIn.set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->optimizeSim3(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "optimizeSim3rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBundlerService","optimizeSim3",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  K1 = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.k1());
  K2 = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.k2());
  pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.pose());
  return respOut.xpcfgrpcreturnvalue();
}


}

